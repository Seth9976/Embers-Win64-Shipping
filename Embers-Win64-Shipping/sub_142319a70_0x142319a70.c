// 函数: sub_142319a70
// 地址: 0x142319a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = sub_141e3e480(arg2)
*(arg1 + 0xc) = sub_141e40d60(arg2)
arg1[2].d = sub_141e424a0(arg2)
char rax_1 = sub_141e44dd0(arg2)
arg1[1].d &= 0xfffffffd
arg1[1].d |= zx.d(rax_1) * 2
char result_1 = sub_141e44ce0(arg2)
arg1[1].d &= 0xfffffffe
uint32_t result = zx.d(result_1)
arg1[1].d |= result
return result
