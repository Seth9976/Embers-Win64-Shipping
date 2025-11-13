// 函数: sub_142c59600
// 地址: 0x142c59600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = GetTickCount64()
uint64_t r8_4 = rax u/ 0x3e8
*arg1 = r8_4
arg1[1].d = (rax.d - r8_4.d * 0x3e8) * 0x3e8
return arg1
