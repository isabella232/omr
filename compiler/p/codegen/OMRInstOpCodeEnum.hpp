/*******************************************************************************
 *
 * (c) Copyright IBM Corp. 2000, 2016
 *
 *  This program and the accompanying materials are made available
 *  under the terms of the Eclipse Public License v1.0 and
 *  Apache License v2.0 which accompanies this distribution.
 *
 *      The Eclipse Public License is available at
 *      http://www.eclipse.org/legal/epl-v10.html
 *
 *      The Apache License v2.0 is available at
 *      http://www.opensource.org/licenses/apache2.0.php
 *
 * Contributors:
 *    Multiple authors (IBM Corp.) - initial implementation and documentation
 *******************************************************************************/

/*
 * This file will be included within an enum.  Only comments and enumerator
 * definitions are permitted.
 */

   bad,              // Illegal Opcode
   add,              // Add
   add_r,            // Add with record
   addc,             // Add carrying
   addc_r,           // Add carrying with record
   addco,            // Add carrying setting overflow
   addco_r,          // Add carrying setting overflow with record
   adde,             // Add extended
   adde_r,           // Add extended with record
   addeo,            // Add extended setting overflow
   addeo_r,          // Add extended setting overflow with record
   addi,             // Add immediate
   addic,            // Add immediate carrying
   addic_r,          // Add immediate carrying with record
   addi2,            // Add imm (carry bit set only if record form)
   addi2_r,          // Add imm (carry bit set only if record form) with record
   addis,            // Add immediate shifted
   addme,            // Add to minus one extended
   addme_r,          // Add to minus one extended with record
   addmeo,           // Add to minus one extended setting overflow
   addmeo_r,         // Add to minus one extended setting overflow with record
   addo,             // Add setting overflow
   addo_r,           // Add setting overflow with record
   addpcis,          //Add PC Immediate Shifted
   addze,            // Add to zero extended
   addze_r,          // Add to zero extended with record
   addzeo,           // Add to zero extended setting overflow
   addzeo_r,         // Add to zero extended setting overflow with record
   AND,              // AND
   and_r,            // AND with record
   andc,             // AND with complement
   andc_r,           // AND with complement with record
   addex,            // Add Extended using alternate carry bits
   addex_r,          // Add Extended using alternate carry bits with record
   andi_r,           // AND immediate
   andis_r,          // AND immediate shifted
   b,                // Unconditional branch
   ba,               // Branch to absolute address
   bctr,             // Branch to count register
   bctrl,            // Branch to count register and link
   bdnz,             // Branch if CTR!=0 after decrementing it
   bdz,              // Branch if CTR==0 after decrementing it
   beq,              // Branch if equal
   beql,             // Branch and link if equal
   bfctr,            // Branch false to count register
   bge,              // Branch if greater than or equal
   bgel,             // Branch and link if greater than or equal
   bgt,              // Branch if greater than
   bgtl,             // Branch and link if greater than
   bl,               // Branch and link
   ble,              // Branch if less than or equal
   blel,             // Branch and link if less than or equal
   blt,              // Branch if less than
   bltl,             // Branch and link if less than
   bla,              // Branch and link to absolute address
   blr,              // Branch to link register
   blrl,             // Branch to link register and link
   bne,              // Branch if not equal
   bnel,             // Branch and link if not equal
   bnun,             // Branch if not unordered
   btctr,            // Branch true to count register
   bun,              // Branch if unordered
   beqlr,            // Branch to link register if equal
   bgelr,            // Branch to link register if greater than or equal
   bgtlr,            // Branch to link register if greater than
   blelr,            // Branch to link register if less than or equal
   bltlr,            // Branch to link register if less than
   bnelr,            // Branch to link register if not equal
   cmp4,             // Compare word algebraic
   cmp8,             // Compare dword algebraic
   cmpi4,            // Compare word immediate algebraic
   cmpi8,            // Compare dword immediate algebraic
   cmpl4,            // Compare word logical
   cmpl8,            // Compare dword logical
   cmpli4,           // Compare word immediate logical
   cmpli8,           // Compare dword immediate logical
   cmprb,            // Compare Ranged Byte
   cmpeqb,           // Compare Equal Byte
   cntlzd,           // Count leading zeros dword
   cntlzd_r,         // Count leading zeros dword with record
   cntlzw,           // Count leading zeros word
   cntlzw_r,         // Count leading zeros word with record
   crand,            // Condition register AND
   crandc,           // Condition register AND with complement
   creqv,            // Condition register equivalent
   crnand,           // Condition register NAND
   crnor,            // Condition register NOR
   cror,             // Condition register OR
   crorc,            // Condition register OR with complement
   crxor,            // Condition register XOR
   dadd,             // Add (DFP64)
   dadd_r,           // Add (DFP64) with record
   darn,             // Deliver a random number
   dcbt,             // Data cache block touch
   dcbtst,           // Data cache block touch for store
   dcbtstt,          // Data cache block touch for store - transient
   dcbtt,            // Data cache block touch - transient
   dcbz,             // Data cache block zero
   dcffix,           // Convert From Fixed (DFP64)
   dcffix_r,         // Convert From Fixed (DFP64) with record
   dcffixq,          // Convert From Fixed (DFP128)
   dcffixq_r,        // Convert From Fixed (DFP128) with record
   dcmpu,            // Unordered Compare (DFP64)
   dctfix,           // Convert to Fixed (DFP64)
   dctfix_r,         // Convert to Fixed (DFP64) with record
   ddedpd,           // Decode DPD to BCD (DFP64)
   ddedpd_r,         // Decode DPD to BCD (DFP64) with record
   ddiv,             // Divide (DFP64)
   ddiv_r,           // Divide (DFP64) with record
   denbcdu,          // Encode Unsigned BCD to DFP (DFP64)
   denbcdu_r,        // Encode Unsigned BCD to DFP (DFP64) with record
   divd,             // Divide dword
   divd_r,           // Divide dword with record
   diex,             // Insert Biased Exponent (DFP64)
   diex_r,           // Insert Biased Exponent (DFP64) with record
   divdo,            // Divide dword setting overflow
   divdo_r,          // Divide dword setting overflow with record
   divdu,            // Divide dword unsigned
   divdu_r,          // Divide dword unsigned with record
   divduo,           // Divide dword unsigned setting overflow
   divduo_r,         // Divide dword unsigned setting overflow with record
   divw,             // Divide word
   divw_r,           // Divide word with record
   divwo,            // Divide word setting overflow
   divwo_r,          // Divide word setting overflow with record
   divwu,            // Divide word unsigned
   divwu_r,          // Divide word unsigned with record
   divwuo,           // Divide word unsigned setting overflow
   divwuo_r,         // Divide word unsigned setting overflow with record
   dmul,             // Multiply (DFP64)
   dmul_r,           // Multiply (DFP64) with record
   dqua,             // Quantize (DFP64)
   dqua_r,           // Quantize (DFP64) with record
   drrnd,            // Reround (DFP64)
   drrnd_r,          // Reround (DFP64) with record
   drdpq,            // Round To DFP64 (DFP128)
   drdpq_r,          // Round To DFP64 (DFP128) with record
   dsub,             // Subtract (DFP64)
   dsub_r,           // Subtract (DFP64) with record
   dtstdc,           // Test Data Class (DFP64)
   dtstdg,           // Test Data Group (DFP64)
   dxex,             // Extract Biased Exponent (DFP64)
   dxex_r,           // Extract Biased Exponent (DFP64) with record
   eieio,            // Enforce in order execution of I/O
   eqv,              // Equivalent
   eqv_r,            // Equivalent with record
   extsb,            // Extend sign byte
   extsb_r,          // Extend sign byte with record
   extsh,            // Extend sign half word
   extsh_r,          // Extend sign half word with record
   extsw,            // Extend sign word
   extsw_r,          // Extend sign word with record
   extswsli,         // Extend Sign Word & Shift Left Immediate
   extswsli_r,       // Extend Sign Word & Shift Left Immediate with record
   fabs,             // Floating absolute value
   fadd,             // Floating add
   fadds,            // Floating add single
   fcfid,            // Floating convert from integer dword
   fcfidu,           // Floating convert from integer dword unsigned
   fcfids,           // Floating convert from integer dword single
   fcfidus,          // Floating convert from integer dword unsigned single
   fcmpo,            // Floating compare ordered
   fcmpu,            // Floating compare unordered
   fcpsgn,           // Floating copy sign
   fctid,            // Floating convert to integer dword
   fctidz,           // Floating convert to integer dword round toward zero
   fctiw,            // Floating convert to integer word
   fctiwz,           // Floating convert to integer word round toward zero
   fdiv,             // Floating divide double
   fdivs,            // Floating divide single
   fmadd,            // Floating multiply add double
   fmadds,           // Floating multiply add single
   fmr,              // Floating move register
   fmsub,            // Floating multiply subtract double
   fmsubs,           // Floating multiply subtract single
   fmul,             // Floating multiply double
   fmuls,            // Floating multiply single
   fnabs,            // Floating negative absolute value
   fneg,             // Floating negate
   fnmadd,           // Floating negative multiply add double
   fnmadds,          // Floating negative multiply add single
   fnmsub,           // Floating negative multiply subtract double
   fnmsubs,          // Floating negative multiply subtract single
   fres,             // Floating reciprocal estimate single
   frim,             // Floating round to minus (floor) double
   frin,             // Floating round to nearest double
   frip,             // Floating round to plus (ceil) double
   frsp,             // Floating round to single
   frsqrte,          // Floating reciprocal square root estimate
   fsel,             // Floating select
   fsqrt,            // Floating square root double
   fsqrts,           // Floating square root single
   fsub,             // Floating subtract double
   fsubs,            // Floating subtract single
   isync,            // Instruction synchronize
   lbz,              // Load byte and zero extend
   lbzu,             // Load byte and zero extend with update
   lbzux,            // Load byte and zero extend with update indexed
   lbzx,             // Load byte and zero extend indexed
   ld,               // Load dword
   ldarx,            // Load dword and reserve indexed
   ldmx,             // Load dword monitored indexed
   lwzmx,            // Load word and zero monitored indexed
   ldu,              // Load dword with update
   ldux,             // Load dword with update indexed
   ldx,              // Load dword indexed
   lfd,              // Load floating point double
   lfdp,             // Load floating point double pair
   lfdu,             // Load floating point double with update
   lfdux,            // Load floating point double with update indexed
   lfdx,             // Load floating point double indexed
   lfdpx,            // Load floating point double pair indexed
   lfiwax,           // Load floating point as integer word algebraic
   lfiwzx,           // Load floating point as integer word and zero indexed
   lfs,              // Load floating short
   lfsu,             // Load floating short with update
   lfsux,            // Load floating short with update indexed
   lfsx,             // Load floating short indexed
   lha,              // Load half word algebraic
   lhau,             // Load half word algebraic
   lhaux,            // Load half word algebraic
   lhax,             // Load half word algebraic
   lhbrx,            // Load half word byte reversed indexed
   lhz,              // Load half word and zero extend
   lhzu,             // Load half word and zero extend with update
   lhzux,            // Load half word and zero extend with update indexed
   lhzx,             // Load half word and zero extend indexed
   li,               // Load immediate
   lis,              // Load immediate shifted
   lmw,              // Load multiple word
   lswi,             // Load string word immediate
   lswx,             // Load string word indexed
   lwa,              // Load word algebraic
   lwarx,            // Load word and reserve indexed
   lwaux,            // Load word algebraic with update indexed
   lwax,             // Load word algebraic indexed
   lwbrx,            // Load word byte reverse indexed
   ldbrx,            // Load doubleword byte reverse indexed
   lwsync,           // Lightweight Synchronize
   lwz,              // Load word and zero extend
   lwzu,             // Load word and zero extend with update
   lwzux,            // Load word and zero with update indexed
   lwzx,             // Load word and zero extend indexed
   maddld,           // Multiply-Add Low Dword
   mcrf,             // Move condition register field
   mcrfs,            // Move to condition register field from FPSCR
   mcrxr,            // Move to condition register field from XER
   mfcr,             // Move from condition register to gpr
   mfocrf,           // Move from one condition register field to gpr (XFX-form)
   mfctr,            // Move from count register to gpr
   mffgpr,           // Move Floating-Point From GPR
   mffs,             // Move from FPSCR to gpr
   mflr,             // Move from link register to gpr
   mfmsr,            // Move from machine state register
   mfspr,            // Move from special purpose register to gpr
   mftexasr,         // Move from transaction exception and summary register to gpr
   mftexasru,        // Move from upper 32 bits of transaction exception and summary register to gpr
   mftgpr,           // Move Floating-Point To GPR
   modud,            // Modulo unsigned DWord
   modsd,            // Modulo signed DWord
   moduw,            // Modulo unsigned word
   modsw,            // Modulo signed word
   mr,               // Register copy
   mtcrf,            // Move to condition register fields from gpr
   mtctr,            // Move to count register from gpr
   mtfsb0,           // Move to FPSCR bit 0
   mtfsb1,           // Move to FPSCR bit 1
   mtfsfl,           // Move to FPSCR fields L=1
   mtfsfl_r,         // Move to FPSCR fields L=1 with record
   mtfsf,            // Move to FPSCR fields L=0/W=0
   mtfsf_r,          // Move to FPSCR fields L=0/W=0 with record
   mtfsfw,           // Move to FPSCR fields L=0/W=1
   mtfsfw_r,         // Move to FPSCR fields L=0/W=1 with record
   mtfsfi,           // Move to FPSCR field immediate
   mtfsfi_r,         // Move to FPSCR field immediate with record
   mtlr,             // Move to link register from gpr
   mtmsr,            // Move to machine state register
   mtspr,            // Move to special purpose register
   mfvsrd,           // Move From VSR Doubleword
   mfvsrwz,          // Move From VSR Word and Zero
   mtvsrd,           // Move To VSR Doubleword
   mtvsrwz,          // Move To VSR Word and Zero
   mtvsrwa,          // Move To VSR Word and Zero Sign-Extend
   mulhd,            // Multiply high dword
   mulhd_r,          // Multiply high dword with record
   mulhdu,           // Multiply high dword unsigned
   mulhdu_r,         // Multiply high dword unsigned with record
   mulhw,            // Multiply high word
   mulhw_r,          // Multiply high word with record
   mulhwu,           // Multiply high word unsigned
   mulhwu_r,         // Multiply high word unsigned with record
   mulld,            // Multiply low dword
   mulld_r,          // Multiply low dword with record
   mulldo,           // Multiply low dword setting overflow
   mulldo_r,         // Multiply low dword setting overflow with record
   mulli,            // Multiply low immediate
   mullw,            // Multiply low word
   mullw_r,          // Multiply low word with record
   mullwo,           // Multiply low word setting overflow
   mullwo_r,         // Multiply low word setting overflow with record
   nand,             // NAND
   nand_r,           // NAND with record
   neg,              // Negate
   neg_r,            // Negate with record
   nego,             // Negate setting overflow
   nego_r,           // Negate setting overflow with record
   nor,              // NOR
   nor_r,            // NOR with record
   OR,               // OR
   or_r,             // OR with record
   orc,              // OR with complement
   orc_r,            // OR with complement with record
   ori,              // OR immediate
   oris,             // OR immediate shifted
   popcntd,          // Population count dword
   popcntw,          // Population count word
   rfi,              // Return from interrupt
   rldcl,            // Rotate left dword then clear left
   rldcl_r,          // Rotate left dword then clear left with record
   rldcr,            // Rotate left dword then clear right
   rldcr_r,          // Rotate left dword then clear right with record
   rldic,            // Rotate left dword immediate then clear
   rldic_r,          // Rotate left dword immediate then clear with record
   rldicl,           // Rotate left dword immediate then clear left
   rldicl_r,         // Rotate left dword immediate then clear left with record
   rldicr,           // Rotate left dword immediate then clear right
   rldicr_r,         // Rotate left dword immediate then clear right with record
   rldimi,           // Rotate left dword immediate then mask insert
   rldimi_r,         // Rotate left dword immediate then mask insert with record
   rlwimi,           // Rotate left word immediate then mask insert
   rlwimi_r,         // Rotate left word immediate then mask insert with record
   rlwinm,           // Rotate left word immediate then AND with mask
   rlwinm_r,         // Rotate left word immediate then AND with mask with record
   rlwnm,            // Rotate left word then AND with mask
   rlwnm_r,          // Rotate left word then AND with mask with record
   setb,             // Set Boolean
   sld,              // Shift left dword
   sld_r,            // Shift left dword with record
   slw,              // Shift left word
   slw_r,            // Shift left word with record
   srad,             // Shift right algebraic dword
   srad_r,           // Shift right algebraic dword with record
   sradi,            // Shift right algebraic dword immediate
   sradi_r,          // Shift right algebraic dword immediate with record
   sraw,             // Shift right algebraic word
   sraw_r,           // Shift right algebraic word with record
   srawi,            // Shift right algebraic word immediate
   srawi_r,          // Shift right algebraic word immediate with record
   srd,              // Shift right dword
   srd_r,            // Shift right dword with record
   srw,              // Shift right word
   srw_r,            // Shift right word with record
   stb,              // Store byte
   stbu,             // Store byte with update
   stbux,            // Store byte with update indexed
   stbx,             // Store byte indexed
   std,              // Store dword
   stdcx_r,          // Store word conditional indexed
   stdu,             // Store dword with update
   stdux,            // Store dword with update indexed
   stdx,             // Store dword indexed
   stfd,             // Store float double
   stfdp,            // Store float double pair
   stfdu,            // Store float double with update
   stfdux,           // Store float double with update indexed
   stfdx,            // Store float double indexed
   stfdpx,           // Store float double pair indexed
   stfiwx,           // Store float as integer word indexed
   stfs,             // Store float single
   stfsu,            // Store float single with update
   stfsux,           // Store float single with update indexed
   stfsx,            // Store float single indexed
   sth,              // Store half word
   sthbrx,           // Store half word byte reversed indexed
   sthu,             // Store half word with update
   sthux,            // Store half word with update indexed
   sthx,             // Store half word indexed
   stmw,             // Store multiple word
   stswi,            // Store string word immediate
   stswx,            // Store string word indexed
   stw,              // Store word
   stwbrx,           // Store word byte reverse indexed
   stdbrx,           // Store doubleword byte reverse indexed
   stwcx_r,          // Store word conditional indexed
   stwu,             // Store word with update
   stwux,            // Store word with update indexed
   stwx,             // Store word indexed
   subf,             // Subtract from
   subf_r,           // Subtract from with record
   subfc,            // Subtract from carrying
   subfc_r,          // Subtract from carrying with record
   subfco,           // Subtract from carrying setting overflow
   subfco_r,         // Subtract from carrying setting overflow with record
   subfe,            // Subtract from extended
   subfe_r,          // Subtract from extended with record
   subfeo,           // Subtract from extended setting overflow
   subfeo_r,         // Subtract from extended setting overflow with record
   subfic,           // Subtract from immediate carrying
   subfme,           // Subtract from minus one extended
   subfme_r,         // Subtract from minus one extended with record
   subfmeo,          // Subtract from minus one extended setting overflow
   subfmeo_r,        // Subtract from minus one extended setting overflow with record
   subfze,           // Subtract from zero extended
   subfze_r,         // Subtract from zero extended with record
   subfzeo,          // Subtract from zero extended setting overflow
   subfzeo_r,        // Subtract from zero extended setting overflow with record
   sync,             // Synchronize
   tabort_r,         // Transactional Memory abort
   tabortdeq_r,      // Transactional Memory abort dword if equal
   tabortdeqi_r,     // Transactional Memory abort dword if equal to immediate value
   tabortdge_r,      // Transactional Memory abort dword if greater than or equal to
   tabortdgei_r,     // Transactional Memory abort dword if greater than or equal to immediate
   tabortdgt_r,      // Transactional Memory abort dword if greater than
   tabortdgti_r,     // Transactional Memory abort dword if greater than immediate
   tabortdle_r,      // Transactional Memory abort dword if less than or equal to
   tabortdlei_r,     // Transactional Memory abort dword if less than or equal to immediate
   tabortdlge_r,     // Transactional Memory abort dword if logically greater than or equal to
   tabortdlgei_r,    // Transactional Memory abort dword if logically greater than or equal to immediate
   tabortdlgt_r,     // Transactional Memory abort dword if logically greater than
   tabortdlgti_r,    // Transactional Memory abort dword if logically greater than immediate
   tabortdlle_r,     // Transactional Memory abort dword if logically less than or equal to
   tabortdllei_r,    // Transactional Memory abort dword if logically less than or equal to immediate
   tabortdllt_r,     // Transactional Memory abort dword if logically less than
   tabortdllti_r,    // Transactional Memory abort dword if logically less than immediate
   tabortdlt_r,      // Transactional Memory abort dword if less than
   tabortdlti_r,     // Transactional Memory abort dword if less than immediate
   tabortdneq_r,     // Transactional Memory abort dword if not equal to
   tabortdneqi_r,    // Transactional Memory abort dword if not equal to immediate
   tabortweq_r,      // Transactional Memory abort if equal
   tabortweqi_r,     // Transactional Memory abort if equal to immediate value
   tabortwge_r,      // Transactional Memory abort if greater than or equal to
   tabortwgei_r,     // Transactional Memory abort if greater than or equal to immediate
   tabortwgt_r,      // Transactional Memory abort if greater than
   tabortwgti_r,     // Transactional Memory abort if greater than immediate
   tabortwle_r,      // Transactional Memory abort if less than or equal to
   tabortwlei_r,     // Transactional Memory abort if less than or equal to immediate
   tabortwlge_r,     // Transactional Memory abort if logically greater than or equal to
   tabortwlgei_r,    // Transactional Memory abort if logically greater than or equal to immediate
   tabortwlgt_r,     // Transactional Memory abort if logically greater than
   tabortwlgti_r,    // Transactional Memory abort if logically greater than immediate
   tabortwlle_r,     // Transactional Memory abort if logically less than or equal to
   tabortwllei_r,    // Transactional Memory abort if logically less than or equal to immediate
   tabortwllt_r,     // Transactional Memory abort if logically less than
   tabortwllti_r,    // Transactional Memory abort if logically less than immediate
   tabortwlt_r,      // Transactional Memory abort if less than
   tabortwlti_r,     // Transactional Memory abort if less than immediate
   tabortwneq_r,     // Transactional Memory abort if not equal to
   tabortwneqi_r,    // Transactional Memory abort if not equal to immediate
   tbegin_r,         // Begin transaction
   tbeginro_r,       // Begin roll-back only transaction
   tend_r,           // End transaction (supports nesting)
   tendall_r,        // End transaction
   tdeq,             // Trap dword if equal
   tdeqi,            // Trap dword if equal to immediate value
   tdge,             // Trap dword if greater than or equal to
   tdgei,            // Trap dword if greater than or equal to immediate value
   tdgt,             // Trap dword if greater than
   tdgti,            // Trap dword if greater than immediate value
   tdle,             // Trap dword if less than or equal to
   tdlei,            // Trap dword if less than or equal to immediate value
   tdlge,            // Trap dword if logically greater than or equal to
   tdlgei,           // Trap dword if logically greater than or equal to immediate value
   tdlgt,            // Trap dword if logically greater than
   tdlgti,           // Trap dword if logically greater than immediate value
   tdlle,            // Trap dword if logically less than or equal to
   tdllei,           // Trap dword if logically less than or equal to immediate value
   tdllt,            // Trap dword if logically less than
   tdllti,           // Trap dword if logically less than immediate value
   tdlt,             // Trap dword if less than
   tdlti,            // Trap dword if less than immediate value
   tdneq,            // Trap dword if not equal
   tdneqi,           // Trap dword if not equal to immediate value
   trap,             // Unconditional trap
   tweq,             // Trap word if equal
   tweqi,            // Trap word if equal to immediate value
   twge,             // Trap word if greater than or equal to
   twgei,            // Trap word if greater than or equal to immediate value
   twgt,             // Trap word if greater than
   twgti,            // Trap word if greater than immediate value
   twle,             // Trap word if less than or equal to
   twlei,            // Trap word if less than or equal to immediate value
   twlge,            // Trap word if logically greater than or equal to
   twlgei,           // Trap word if logically greater than or equal to immediate value
   twlgt,            // Trap word if logically greater than
   twlgti,           // Trap word if logically greater than immediate value
   twlle,            // Trap word if logically less than or equal to
   twllei,           // Trap word if logically less than or equal to immediate value
   twllt,            // Trap word if logically less than
   twllti,           // Trap word if logically less than immediate value
   twlt,             // Trap word if less than
   twlti,            // Trap word if less than immediate value
   twneq,            // Trap word if not equal
   twneqi,           // Trap word if not equal to immediate value
   XOR,              // XOR
   xor_r,            // XOR with record
   xori,             // XOR immediate
   xoris,            // XOR immediate shifted
   nop,              // NoOp (ori)
   genop,            // Group Ending NoOp (ori)
   fence,            // Fence
   shdfence,         // Scheduling Fence
   ret,              // Return
   wrtbar,           // Write barrier directive
   proc,             // Entry to the method
   dd,               // define word
   assocreg,         // Associate real registers with Virtual registers.
   vgdnop,           // Virtual Guard NOP instruction
   depend,           // Instruction to hang dependency on
   probenop,         // Probe NOP (for RI)
   iflong,           // compare and branch long
   setblong,         // compare long and set boolean
   setbool,          // compare and set boolean (int or simple float)
   setbflt,          // compare float and set boolean (complex float)
   lcmp,             // compare long and set result -1,0,1
   flcmpl,           // compare float and set result -1(less,unordered),0(equal),1(greater)
   flcmpg,           // compare float and set result -1(less),0(equal),1(greater,unordered)
   idiv,             // integer divide
   ldiv,             // long divide for 64 bit target
   irem,             // integer remainder
   lrem,             // long remainder for 64 bit target
   cdnan,            // canonise double NaN to 0x7ff80..0 (in gprs)
   cfnan,            // canonise float NaN to 0x7fc00..0 (in gprs)
   d2i,              // converts from double to integer
   d2l,              // converts from double to long
   ifx,              // compare and branch complex
   setbx,            // compare complex and set boolean
   iternary,         // ternary evaluator
   lvsl,             // Load vector for shift left
   lvsr,             // Load vector for shift right
   lvx,              // Load vector indexed
   lvebx,            // Load vector element byte indexed
   lvehx,            // Load vector element halfword indexed
   lvewx,            // Load vector element word indexed
   stvx,             // store vector indexed
   stvebx,           // store vector element byte indexed
   stvehx,           // store vector element halfword indexed
   stvewx,           // store vector element word indexed
   vand,             // vector logical and
   vandc,            // vector logical and with complement
   vor,              // vector or
   vxor,             // vector xor
   vnor,             // vector nor
   vperm,            // vector permute
   vsel,             // vector conditional select
   vsumsws,          // vector sum across signed word saturate
   vsum2sws,         // vector sum across partial signed word saturate
   vsum4sbs,         // vector sum across partial signed byte saturate
   vsum4shs,         // vector sum across partial signed halfword saturate
   vsum4ubs,         // vector sum across partial unsigned byte saturate
   vspltb,           // vector splat byte
   vsplth,           // vector splat halfword
   vspltw,           // vector splat word
   vspltisb,         // vector splat immediate signed byte
   vspltish,         // vector splat immediate signed halfword
   vspltisw,         // vector splat immediate signed word
   vsl,              // vector shift left
   vslb,             // vector shift left byte
   vsldoi,           // vector shift left double by octet immediate
   vslh,             // vector shift left halfword
   vslo,             // vector shift left by octet
   vslw,             // vector shift left word
   vsr,              // vector shift right
   vsrab,            // vector shift right algebraic byte
   vsrah,            // vector shift right algebraic halfword
   vsraw,            // vector shift right algebraic word
   vsrb,             // vector shift right byte
   vsrh,             // vector shift right halfword
   vsro,             // vector shift right by octet
   vsrw,             // vector shift right word
   vrlb,             // vector rotate left byte
   vrlh,             // vector rotate left halfword
   vrlw,             // vector rotate left word
   vaddsbs,          // vector add signed byte saturate
   vaddshs,          // vector add signed halfword saturate
   vaddsws,          // vector add signed word saturate
   vaddubm,          // vector add unsigned byte modulo
   vaddubs,          // vector add unsigned byte saturate
   vadduhm,          // vector add unsigned halfword modulo
   vadduhs,          // vector add unsigned halfword saturate
   vadduwm,          // vector add unsigned word modulo
   vadduws,          // vector add unsigned word saturate
   vsubsbs,          // vector subtract signed byte saturate
   vsubshs,          // vector subtract signed halfword saturate
   vsubsws,          // vector subtract signed word saturate
   vsububm,          // vector subtract unsigned byte modulo
   vsububs,          // vector subtract unsigned byte saturate
   vsubuhm,          // vector subtract unsigned halfword modulo
   vsubuhs,          // vector subtract unsigned halfword saturate
   vsubuwm,          // vector subtract unsigned word modulo
   vsubuws,          // vector subtract unsigned word saturate
   vmulesh,          // vector multiply even signed halfword
   vmulosh,          // vector multiply odd signed halfword
   vmulouh,          // vector multiply odd unsigned halfword
   vmuluwm,          // vector multiply unsigned word modulo
   vminsb,           // vector minimum signed byte
   vminsh,           // vector minimum signed halfword
   vminsw,           // vector minimum signed word
   vminub,           // vector minimum unsigned byte
   vminuh,           // vector minimum unsigned halfword
   vminuw,           // vector minimum unsigned word
   vmaxsb,           // vector maximum signed byte
   vmaxsh,           // vector maximum signed halfword
   vmaxsw,           // vector maximum signed word
   vmaxub,           // vector maximum unsigned byte
   vmaxuh,           // vector maximum unsigned halfword
   vmaxuw,           // vector maximum unsigned word
   vmsumuhm,         // vector multiply-sum unsigned halfword word modulo
   vcmpequb,         // vector compare equal unsigned byte
   vcmpeubr,         // vector compare equal unsigned byte with record
   vcmpequh,         // vector compare equal unsigned halfword
   vcmpeuhr,         // vector compare equal unsigned halfword with record
   vcmpequw,         // vector compare equal unsigned word
   vcmpeuwr,         // vector compare equal unsigned word with record
   vcmpgtsb,         // vector compare greater than signed byte
   vcmpgsbr,         // vector compare greater than signed byte with record
   vcmpgtsh,         // vector compare greater than signed halfword
   vcmpgshr,         // vector compare greater than signed halfword with record
   vcmpgtsw,         // vector compare greater than signed word
   vcmpgswr,         // vector compare greater than signed word with record
   vcmpgtub,         // vector compare greater than unsigned byte
   vcmpgubr,         // vector compare greater than unsigned byte with record
   vcmpgtuh,         // vector compare greater than unsigned halfword
   vcmpguhr,         // vector compare greater than unsigned halfword with record
   vcmpgtuw,         // vector compare greater than unsigned word
   vcmpguwr,         // vector compare greater than unsigned word with record
   vupkhsb,          // vector unpack high signed byte
   vupkhsh,          // vector unpack high signed halfword
   vupklsb,          // vector unpack low signed byte
   vupklsh,          // vector unpack low signed halfword
   vpkuhum,          // vector pack unsigned half word unsigned modulo
   vpkuwum,          // vector pack unsigned word unsigned modulo
   vmrghb,           // vector merge high byte
   vmrghh,           // vector merge high half word
   vmrghw,           // vector merge high word
   vmrglb,           // vector merge low byte
   vmrglh,           // vector merge low half word
   vmrglw,           // vector merge low word
   lxsdx,            // Load VSX Scalar Doubleword Indexed
   lxsdux,           // Load VSX Scalar Doubleword with Update Indexed
   stxsdx,           // Store VSX Scalar Doubleword Indexed
   stxsdux,          // Store VSX Scalar Doubleword with Update Indexed
   lxvd2x,           // Load VSX Vector Doubleword*2 Indexed
   lxvd2ux,          // Load VSX Vector Doubleword*2 with Update Indexed
   lxvdsx,           // Load VSX Vector Doubleword & Splat Indexed
   lxvw4x,           // Load VSX Vector Word*4 Indexed
   lxvw4ux,          // Load VSX Vector Word*4 with Update Indexed
   stxvd2x,          // store VSX Vector Doubleword*2 Indexed
   stxvd2ux,         // store VSX Vector Doubleword*2 with Update Indexed
   stxvw4x,          // store VSX Vector Word*4 Indexed
   stxvw4ux,         // store VSX Vector Word*4 with Update Indexed
   xsabsdp,          // VSX Scalar Absolute Value Double-Precision
   xsadddp,          // VSX Scalar Add Double-Precision
   xscmpodp,         // VSX Scalar Compare Ordered Double-Precision
   xscmpudp,         // VSX Scalar Compare Unordered Double-Precision
   xscpsgndp,        // VSX Scalar Copy Sign Double-Precision , For VSR Copy register
   xscvdpsxds,       // VSX Scalar Convert Double-Precision to Signed Integer Doubleword Saturate
   xscvdpsxws,       // VSX Scalar Convert Double-Precision to Signed Integer Word Saturate
   xsdivdp,          // VSX Scalar Divide Double-Precision
   xsmaddadp,        // VSX Scalar Multiply-Add Type A Double-Precision
   xsmaddmdp,        // VSX Scalar Multiply-Add Type M Double-Precision
   xsmsubadp,        // VSX Scalar Multiply-Subtract Type A Double-Precision
   xsmsubmdp,        // VSX Scalar Multiply-Subtract Type M Double-Precision
   xsmuldp,          // VSX Scalar Multiply Double-Precision
   xsnabsdp,         // VSX Scalar Negative Absolute Value Double-Precision
   xsnegdp,          // VSX Scalar Negate Double-Precision
   xsnmaddadp,       // VSX Scalar Negative Multiply-Add Type A Double-Precision
   xsnmaddmdp,       // VSX Scalar Negative Multiply-Add Type M Double-Precision
   xsnmsubadp,       // VSX Scalar Negative Multiply-Subtract Type A Double-Precision
   xsnmsubmdp,       // VSX Scalar Negative Multiply-Subtract Type M Double-Precision
   xsrdpic,          // VSX Scalar Round to Double-Precision exact using Current rounding mode
   xsredp,           // VSX Scalar Reciprocal Estimate Double-Precision
   xsrsqrtedp,       // VSX Scalar Reciprocal Square Root Estimate Double-Precision
   xxlor,            // VSX Logical OR
   xxlnor,           // VSX Logical NOR
   xxsel,            // VSX Select (Operands usage are diffent than fsel)
   xxsldwi,          // VSX Shift Left Double by Word Immediate
   xxspltw,          // VSX Splat Word
   xxpermdi,         // VSX Permute Doubleword Immediate
   xssqrtdp,         // VSX Scalar Square Root Double-Precision
   xssubdp,          // VSX Scalar Subtract Double-Precision
   xscvsxddp,        // VSX Scalar Convert Signed Integer Doubleword to Double-Precision
   xscvdpsp,         // VSX Scalar Convert From Double-Precision to Single-Precision
   xvadddp,          // VSX Vector Add Double-Precision
   xvmindp,          // VSX Vector Min Double-Precision
   xvmaxdp,          // VSX Vector Max Double-Precision
   xvcmpeqdp,        // VSX Vector Compare Equal To Double-Precision
   xvcmpeqdp_r,      // VSX Vector Compare Equal To Double-Precision
   xvcmpgedp,        // VSX Vector Compare Greater Than Or Equal To Double-Precision
   xvcmpgedp_r,      // VSX Vector Compare Greater Than Or Equal To Double-Precision
   xvcmpgtdp,        // VSX Vector Compare Greater Than Double-Precision
   xvcmpgtdp_r,      // VSX Vector Compare Greater Than Double-Precision
   xvdivdp,          // VSX Vector Divide Double-Precision
   xvmuldp,          // VSX Vector Multiply Double-Precision
   xvnegdp,          // VSX Vector Negate Double-Precision
   xvnmsubadp,       // VSX Vector Negative Multiply-Subtract Type-A Double-Precision
   xvnmsubmdp,       // VSX Vector Negative Multiply-Subtract Type-M Double-Precision
   xvsubdp,          // VSX Vector Subtract Double-Precision
   xvmaddadp,        // VSX Vector Multiply-Add Type-A Double-Precision
   xvmaddmdp,        // VSX Vector Multiply-Add Type-M Double-Precision
   xvmsubadp,        // VSX Vector Multiply-Sub Type-A Double-Precision
   xvmsubmdp,        // VSX Vector Multiply-Sub Type-M Double-Precision
   xvsqrtdp,         // VSX Vector Square Root Double-Precision
   fmrgew,           // Merge Even Word
   fmrgow,           // Merge Odd Word
   lxsiwax,          // VSX Scalar as Integer Word Algebraic Indexed
   lxsiwzx,          // VSX Scalar as Integer Word and Zero Indexed
   lxsspx,           // VSX Scalar Single-Precision Indexed
   stxsiwx,          // VSX Scalar as Integer Word Indexed
   stxsspx,          // VSR Scalar Word Indexed
   xsaddsp,          // Scalar Add Single-Precision
   xscvdpspn,        // Scalar Convert Double-Precision to Single-Precision format Non-signalling
   xscvdpuxds,       // Scalar Convert Double-Precision to Unsigned Fixed-Point Doubleword Saturate
   xscvdpuxws,       // Scalar Convert Double-Precision to Unsigned Fixed-Point Word Saturate
   xscvspdp,         // Scalar Convert Single-Precision to Double-Precision (p=1)
   xscvspdpn,        // Convert Single-Precision to Double-Precision format Non-signalling
   xscvsxdsp,        // Scalar Convert Signed Fixed-Point Doubleword to Single-Precision
   xscvuxddp,        // Scalar Convert Unsigned Fixed-Point Doubleword to Double-Precision
   xscvuxdsp,        // Scalar Convert Unsigned Fixed-Point Doubleword to Single-Precision
   xsdivsp,          // Scalar Divide Single-Precision
   xsmaddasp,        // Scalar Multiply-Add Type-A Single-Precision
   xsmaddmsp,        // Scalar Multiply-Add Type-M Single-Precision
   xsmaxdp,          // Scalar Maximum Double-Precision
   xsmindp,          // Scalar Minimum Double-Precision
   xsmsubasp,        // Scalar Multiply-Subtract Type-A Single-Precision
   xsmsubmsp,        // Scalar Multiply-Subtract Type-M Single-Precision
   xsmulsp,          // Scalar Multiply Single-Precision
   xsnmaddasp,       // Scalar Negative Multiply-Add Type-A Single-Precision
   xsnmaddmsp,       // Scalar Negative Multiply-Add Type-M Single-Precision
   xsnmsubasp,       // Scalar Negative Multiply-Subtract Type-A Single-Precision
   xsnmsubmsp,       // Scalar Negative Multiply-Subtract Type-M Single-Precision
   xsrdpi,           // Scalar Round to Double-Precision Integer
   xsrdpim,          // Scalar Round to Double-Precision Integer toward -Infinity
   xsrdpip,          // Scalar Round to Double-Precision Integer toward +Infinity
   xsrdpiz,          // Scalar Round to Double-Precision Integer toward Zero
   xsresp,           // Scalar Reciprocal Estimate Single-Precision
   xsrsp,            // Scalar Round to Single-Precision
   xsrsqrtesp,       // Scalar Reciprocal Square Root Estimate Single-Precision
   xssqrtsp,         // Scalar Square Root Single-Precision
   xssubsp,          // Scalar Subtract Single-Precision
   xxland,           // Logical AND
   xxlandc,          // Logical AND with Complement
   xxleqv,           // Logical Equivalence
   xxlnand,          // Logical NAND
   xxlorc,           // Logical OR with Complement
   xxlxor,           // Logical XOR
   xxmrghw,          // Merge High Word
   xxmrglw,          // Merge Low Word
   vmrgew,           // Merge Even Word
   vmrgow,           // Merge Odd Word
   xvabsdp,          // Vector Absolute Value Double-Precision
   xvabssp,          // Vector Absolute Value Single-Precision
   xvaddsp,          // Vector Add Single-Precision
   xvcmpeqsp,        // Vector Compare Equal To Single-Precision
   xvcmpeqsp_r,      // Vector Compare Equal To Single-Precision & record CR6
   xvcmpgesp,        // Vector Compare Greater Than or Equal To Single-Precision
   xvcmpgesp_r,      // Vector Compare Greater Than or Equal To Single-Precision & record CR6
   xvcmpgtsp,        // Vector Compare Greater Than Single-Precision
   xvcmpgtsp_r,      // Vector Compare Greater Than Single-Precision & record CR6
   xvcpsgndp,        // Vector Copy Sign Double-Precision
   xvcpsgnsp,        // Vector Copy Sign Single-Precision
   xvcvdpsp,         // Vector Convert Double-Precision to Single-Precision
   xvcvdpsxds,       // Vector Convert Double-Precision to Signed Fixed-Point Doubleword Saturate
   xvcvdpsxws,       // Vector Convert Double-Precision to Signed Fixed-Point Word Saturate
   xvcvdpuxds,       // Vector Convert Double-Precision to Unsigned Fixed-Point Doubleword Saturate
   xvcvdpuxws,       // Vector Convert Double-Precision to Unsigned Fixed-Point Word Saturate
   xvcvspdp,         // Vector Convert Single-Precision to Double-Precision
   xvcvspsxds,       // Vector Convert Single-Precision to Signed Fixed-Point Doubleword Saturate
   xvcvspsxws,       // Vector Convert Single-Precision to Signed Fixed-Point Word Saturate
   xvcvspuxds,       // Vector Convert Single-Precision to Unsigned Fixed-Point Doubleword Saturate
   xvcvspuxws,       // Vector Convert Single-Precision to Unsigned Fixed-Point Word Saturate
   xvcvsxddp,        // Vector Convert Signed Fixed-Point Doubleword to Double-Precision
   xvcvsxdsp,        // Vector Convert Signed Fixed-Point Doubleword to Single-Precision
   xvcvsxwdp,        // Vector Convert Signed Fixed-Point Word to Double-Precision
   xvcvsxwsp,        // Vector Convert Signed Fixed-Point Word to Single-Precision
   xvcvuxddp,        // Vector Convert Unsigned Fixed-Point Doubleword to Double-Precision
   xvcvuxdsp,        // Vector Convert Unsigned Fixed-Point Doubleword to Single-Precision
   xvcvuxwdp,        // Vector Convert Unsigned Fixed-Point Word to Double-Precision
   xvcvuxwsp,        // Vector Convert Unsigned Fixed-Point Word to Single-Precision
   xvdivsp,          // Vector Divide Single-Precision
   xvmaddasp,        // Vector Multiply-Add Type-A Single-Precision
   xvmaddmsp,        // Vector Multiply-Add Type-M Single-Precision
   xvmaxsp,          // Vector Maximum Single-Precision
   xvminsp,          // Vector Minimum Single-Precision
   xvmsubasp,        // Vector Multiply-Subtract Type-A Single-Precision
   xvmsubmsp,        // Vector Multiply-Subtract Type-M Single-Precision
   xvmulsp,          // Vector Multiply Single-Precision
   xvnabsdp,         // Vector Negative Absolute Value Double-Precision
   xvnabssp,         // Vector Negative Absolute Value Single-Precision
   xvnegsp,          // Vector Negate Single-Precision
   xvnmaddadp,       // Vector Negative Multiply-Add Type-A Double-Precision
   xvnmaddasp,       // Vector Negative Multiply-Add Type-A Single-Precision
   xvnmaddmdp,       // Vector Negative Multiply-Add Type-M Double-Precision
   xvnmaddmsp,       // Vector Negative Multiply-Add Type-M Single-Precision
   xvnmsubasp,       // Vector Negative Multiply-Subtract Type-A Single-Precision
   xvnmsubmsp,       // Vector Negative Multiply-Subtract Type-M Single-Precision
   xvrdpi,           // Vector Round to Double-Precision Integer
   xvrdpic,          // Vector Round to Double-Precision Integer using Current rounding mode
   xvrdpim,          // Vector Round to Double-Precision Integer toward -Infinity
   xvrdpip,          // Vector Round to Double-Precision Integer toward +Infinity
   xvrdpiz,          // Vector Round to Double-Precision Integer toward Zero
   xvredp,           // Vector Reciprocal Estimate Double-Precision
   xvresp,           // Vector Reciprocal Estimate Single-Precision
   xvrspi,           // Vector Round to Single-Precision Integer
   xvrspic,          // Vector Round to Single-Precision Integer using Current rounding mode
   xvrspim,          // Vector Round to Single-Precision Integer toward -Infinity
   xvrspip,          // Vector Round to Single-Precision Integer toward +Infinity
   xvrspiz,          // Vector Round to Single-Precision Integer toward Zero
   xvrsqrtedp,       // Vector Reciprocal Square Root Estimate Double-Precision
   xvrsqrtesp,       // Vector Reciprocal Square Root Estimate Single-Precision
   xvsqrtsp,         // Vector Square Root Single-Precision
   xvsubsp,          // Vector Subtract Single-Precision
   label,		// Destination of a jump
   PPCLastOp = label,
   PPCNumOpCodes = PPCLastOp + 1,
