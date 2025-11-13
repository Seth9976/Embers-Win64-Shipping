// 函数: sub_1427cb2a0
// 地址: 0x1427cb2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(arg1)
uint64_t rcx = zx.q(arg2)
uint64_t result = (zx.q(r9.d) << 5) + rcx
*(result + &data_143b7ab10) = arg3
*((rcx << 5) + r9 + &data_143b7ab10) = arg3
return result
