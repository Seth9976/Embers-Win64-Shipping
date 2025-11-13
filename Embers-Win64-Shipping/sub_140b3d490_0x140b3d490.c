// 函数: sub_140b3d490
// 地址: 0x140b3d490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t* rax = sub_140b3d7f0(&var_18, arg2, 1)
int32_t r8_1 = arg2[1].d
int32_t rcx_2 = r8_1 - rax[1].d

if (r8_1 - rax[1].d s< 0)
    r8_1 = 0
else if (rcx_2 s< r8_1)
    r8_1 = rcx_2

*arg1 = *arg2
arg1[1].d = r8_1
return arg1
