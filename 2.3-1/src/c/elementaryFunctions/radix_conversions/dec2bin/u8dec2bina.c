/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Shamik Guha
 Email: toolbox@scilab.in
*/
#include "dec2bin.h"

void u8dec2bina(uint8* in,int size,int n,uint8* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		u8dec2bins(in[i],n,&(out[i*15]));
	}
}
