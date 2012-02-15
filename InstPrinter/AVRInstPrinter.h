//===-- AVRInstPrinter.h - Convert AVR MCInst to assembly syntax ----===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This class prints a AVR MCInst to a .s file.
//
//===----------------------------------------------------------------------===//

#ifndef AVRINSTPRINTER_H
#define AVRINSTPRINTER_H

#include "llvm/MC/MCInstPrinter.h"

namespace llvm {
  class MCOperand;

  class AVRInstPrinter : public MCInstPrinter {
  public:
    AVRInstPrinter(const MCAsmInfo &MAI)
        : MCInstPrinter(MAI) {}

    virtual void printInst(const MCInst *MI, raw_ostream &O, StringRef Annot);

    // Autogenerated by tblgen.
    void printInstruction(const MCInst *MI, raw_ostream &O);
    static const char *getRegisterName(unsigned RegNo);

    void printOperand(const MCInst *MI, unsigned OpNo, raw_ostream &O,
                      const char *Modifier = 0);
    void printPCRelImmOperand(const MCInst *MI, unsigned OpNo, raw_ostream &O);
    void printSrcMemOperand(const MCInst *MI, unsigned OpNo, raw_ostream &O,
                            const char *Modifier = 0);
    void printCCOperand(const MCInst *MI, unsigned OpNo, raw_ostream &O);

  };
}

#endif
