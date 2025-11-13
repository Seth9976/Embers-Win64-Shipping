// 函数: sub_142ab1d70
// 地址: 0x142ab1d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x170) == 0
int32_t arg_8
int32_t* rdx = &arg_8
arg_8 = 0
int64_t* rax

if (cond:0)
    rax = sub_142a586f0(arg1 + 0x178, rdx)
else
    rax = sub_142a58660(arg1 + 0x178, rdx)

(*(*rax + 0xa0))(rax, arg2, arg3, arg4)
return (**rax)(rax, 1)
