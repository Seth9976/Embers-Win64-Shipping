// 函数: sub_1414d6d10
// 地址: 0x1414d6d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 4) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

int64_t r8
r8.b = rax_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"MULTISCATTERING_APPROX_ENABLED", r8)
return sub_1410b3fe0(arg2, u"SHADER_EDITOR_HUD", 1) __tailcall
