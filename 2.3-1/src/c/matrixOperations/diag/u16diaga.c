/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Mushir
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "diag.h"

void u16diaga(uint16 in, int size,int insert_post,uint16 *out)
{
    
     int i;
    
      for(i=0;i < ((size+abs(insert_post))*(size+abs(insert_post)));i++)
      {
         out[i] = 0; 
  
      }
    
       if(insert_post < 0)
	{
      	   
           out[abs(insert_post)] = in;
          
	}
    else
	{
     
          out[(size + insert_post)*insert_post] = in;
      	
    	}

}

