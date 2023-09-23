
/* WARNING: Control flow encountered bad instruction data */

void UndefinedFunction_000001d4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr14;
  
  if (in_NG != (bool)in_OV) {
    coprocessor_load(0xf,in_cr14,0x2b0);
    coprocessor_load(0xf,in_cr14,0x220);
  }
  software_interrupt(0x9bdf0c);
  if (in_NG != (bool)in_OV) {
    software_interrupt(0xefbdbf);
    coprocessor_load(0xf,in_cr14,0x4e0);
  }
  if (in_CY && !in_ZR) {
    puRam00000204 = (undefined *)0xbdbfefbd;
    return;
  }
  software_interrupt(0xbdbfef);
  if (in_ZR) {
    *param_2 = unaff_r11;
  }
  if (in_NG != (bool)in_OV) {
    coprocessor_load(0xf,in_cr14,0x34c);
  }
  if (!in_NG) {
    software_interrupt(0xbdbfef);
  }
                    /* WARNING: Read-only address (ram,0x00000204) is written */
  if (in_ZR) {
    puRam00000204 = (undefined *)register0x00000054;
  }
  if (in_NG != (bool)in_OV) {
    software_interrupt(0xef6a7b);
    coprocessor_load(0xf,in_cr14,0x500);
    software_interrupt(0xef0001);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

