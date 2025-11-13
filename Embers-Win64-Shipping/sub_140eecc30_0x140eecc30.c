// 函数: sub_140eecc30
// 地址: 0x140eecc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x2a8)
void* r8 = *(arg1 + 0x2d8)
float zmm1 = *(r8 + 0xc) f+ *(rax_1 + 0xc)
*arg2 = *(r8 + 8) f+ *(rax_1 + 8)
arg2[1] = zmm1
return arg2
