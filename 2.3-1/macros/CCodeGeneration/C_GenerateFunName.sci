function CFunName = C_GenerateFunName(FunctionName,InArg,NInArg,OutArg,NOutArg)
// function CFunName = C_GenerateFunName(FunctionName,InArg,NInArg,OutArg,NOutArg)
// -----------------------------------------------------------------
// //NUT: add description here
//
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
// 11-Nov-2007 -- Raffaele Nutricato: changed naming rule.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),5,5);
CFunName = '';
if((IsAVRSupportFunction(FunctionName)) | (IsRPISupportFunction(FunctionName)) | ... 
	(mtlb_strcmp(part(FunctionName,1:5),'odefn') == %T) |...
	(mtlb_strcmp(part(FunctionName,1:9),'PI_thread') == %T)| ...
	(mtlb_strcmp(part(FunctionName,1:4),'ISR_') == %T))
//If current function is an AVR or RPi function, then function name can be just 
//plain function name without any input/output arguments types
//Slimilarly for functions conataining ode functions and functions to be called in
//separate thread in RPi
	CFunName = CFunName+FunctionName;

else
	for tmpcnt = 1:NInArg
	   if (InArg(tmpcnt).Dimension == 1)
		  CFunName = CFunName+InArg(tmpcnt).Type+'2';
	   else
		  CFunName = CFunName+InArg(tmpcnt).Type+SCI2Cstring(InArg(tmpcnt).Dimension);
	   end
	end

	CFunName = CFunName+FunctionName;

	for tmpcnt = 1:NOutArg
	   if (OutArg(tmpcnt).Dimension == 1)
		  CFunName = CFunName+OutArg(tmpcnt).Type+'2';
	   else
		  CFunName = CFunName+OutArg(tmpcnt).Type+SCI2Cstring(OutArg(tmpcnt).Dimension);
	   end
	end

end
endfunction
