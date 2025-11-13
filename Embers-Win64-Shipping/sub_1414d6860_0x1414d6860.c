// 函数: sub_1414d6860
// 地址: 0x1414d6860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 4) & 0x80000001

if (rax s< 0)
    rax = ((rax - 1) | 0xfffffffe) + 1

int64_t r8
r8.b = rax == 1
return sub_1405d3490(arg2 + 0x2a8, u"MULTISCATTERING_APPROX_ENABLED", r8) __tailcall
