/*
 * Copyright (c) 2002 Stephen Williams (steve@icarus.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */
#if !defined(WINNT)
#ident "$Id: statistics.cc,v 1.1 2002/07/05 02:50:58 steve Exp $"
#endif

/*
 * This is a count of the instruction opcodes that were created.
 */
unsigned long count_opcodes = 0;

unsigned long count_functors = 0;

unsigned long count_vpi_nets = 0;

/*
 * $Log: statistics.cc,v $
 * Revision 1.1  2002/07/05 02:50:58  steve
 *  Remove the vpi object symbol table after compile.
 *
 */

