// 函数: sub_142350400
// 地址: 0x142350400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[1]
*arg1 = 0x77
*(arg1 + 4) = 0x40
*(arg1 + 0xc) = 1
arg1[1] = (rax & 0xf2) | 2
__builtin_memcpy(&arg1[0x10], 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0x3f800000
*(arg1 + 0x34) = 0x3f800000
*(arg1 + 0x3c) = 0x41000000
*(arg1 + 0x44) = 0x42a00000
*(arg1 + 0x4c) = 0x303
arg1[0x4e] = 3
arg1[0x4f] &= 0xe0
*(arg1 + 0x50) = 0x100
arg1[0x52] = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x54) = 0
void var_18

if (&arg1[0x60] != &var_18)
    *(arg1 + 0x60) = 0
    *(arg1 + 0x68) = 0

return arg1
