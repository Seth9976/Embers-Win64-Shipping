// 函数: sub_141a30780
// 地址: 0x141a30780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
arg1[3].d = 0
*(arg1 + 0x14) = 0xffffffff
arg1[2].b = 0
*arg1 = &data_142d4c6c8
int64_t arg_10 = 0
int64_t arg_8 = 0
void var_18
int64_t* rax = sub_140596d10(&var_18, arg3)
arg1[4] = arg2
arg1[5] = 0
arg1[5] = *rax
*rax = 0
arg1[6].d = rax[1].d
*(arg1 + 0x34) = *(rax + 0xc)
rax[1] = 0
arg1[7] = 0
arg1[8] = 0
int64_t rcx_4 = *rax

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg1
