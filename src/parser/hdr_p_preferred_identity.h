/*
    Copyright (C) 2005-2009  Michel de Boer <michel@twinklephone.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

// RFC 3325 9.2
// P-Preferred-Identity header

#ifndef _H_HDR_P_PREFERRED_IDENTITY
#define _H_HDR_P_PREFERRED_IDENTITY

#include <string>
#include "header.h"
#include "identity.h"

using namespace std;

class t_hdr_p_preferred_identity : public t_header {
public:	
	list<t_identity> identity_list;

	t_hdr_p_preferred_identity();
	void add_identity(const t_identity &identity);

	string encode_value(void) const;
};

#endif
