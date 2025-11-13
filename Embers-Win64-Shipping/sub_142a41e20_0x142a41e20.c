// 函数: sub_142a41e20
// 地址: 0x142a41e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

int64_t rax_1 = sub_142a421d0(arg1)
int64_t rcx = data_143cc8280
int64_t rax_2 = rcx - 1 + arg2
int64_t rdx_2

if (((rcx - 1) & rcx) != 0)
    rdx_2 = divu.dp.q(0:rax_2, rcx) * rcx
else
    rdx_2 = not.q(rcx - 1) & rax_2

char r9 = 0
char arg_8 = 0

if (arg4 != 0)
    r9 = *arg4
    arg_8 = r9
    *arg4 = 0

char* r8 = &arg_8

if (arg4 != 0)
    r8 = arg4

return sub_142a42880(rax_1, rdx_2, arg3, r9, r8, *(arg5 + 8))
