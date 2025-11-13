// 函数: sub_142a51920
// 地址: 0x142a51920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18[0x4]
var_18[0] = 0
int32_t rax = sub_142a50240(arg1, arg2, arg3, arg4, sub_142a4d690, "Scripts%stand-alone", &var_18)
int32_t rcx = var_18[0]

if (rcx == 0xffffff81)
    return sub_142a50240(arg1, arg2, arg3, arg4, sub_142a4d690, "Scripts", arg5)

*arg5 = rcx
return zx.q(rax)
