/* assemble.h  header file for assemble.c
 *
 * The Netwide Assembler is copyright (C) 1996 Simon Tatham and
 * Julian Hall. All rights reserved. The software is
 * redistributable under the license given in the file "LICENSE"
 * distributed in the NASM archive.
 */

#ifndef NASM_ASSEMBLE_H
#define NASM_ASSEMBLE_H

int64_t insn_size(int32_t segment, int64_t offset, int bits, uint32_t cp,
               insn * instruction, efunc error);
int64_t assemble(int32_t segment, int64_t offset, int bits, uint32_t cp,
              insn * instruction, struct ofmt *output, efunc error,
              ListGen * listgen);

#endif
