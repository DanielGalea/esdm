/* This file is part of ESDM.                                              
 *                                                                              
 * This program is is free software: you can redistribute it and/or modify         
 * it under the terms of the GNU Lesser General Public License as published by  
 * the Free Software Foundation, either version 3 of the License, or            
 * (at your option) any later version.                                          
 *                                                                              
 * This program is is distributed in the hope that it will be useful,           
 * but WITHOUT ANY WARRANTY; without even the implied warranty of               
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                
 * GNU General Public License for more details.                                 
 *                                                                                 
 * You should have received a copy of the GNU Lesser General Public License        
 * along with ESDM.  If not, see <http://www.gnu.org/licenses/>.           
 */   
#ifndef METADUMMY_H
#define METADUMMY_H

#include <esdm.h>

// Internal functions used by this backend.
typedef struct {
	const char* type;
	const char* name;
	const char* target;
} metadummy_backend_options_t;



// Internal functions used by this backend.
typedef struct {
	metadummy_backend_options_t* options;
	int other;
} metadummy_backend_data_t;





int metadummy_backend_performance_estimate(esdm_backend* backend);
esdm_backend* metadummy_backend_init(void* data);


#endif
