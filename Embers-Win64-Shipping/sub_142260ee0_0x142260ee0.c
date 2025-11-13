// 函数: sub_142260ee0
// 地址: 0x142260ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* r8 = arg2
int64_t* rcx = *arg3

if (arg2 == rcx)
    return 

*arg3 = arg2
*(arg3 + 0x3c) = arg1[0x49].d
arg3[8].d ^= (arg1[0x4e2].d u>> 1 ^ arg3[8].d) & 1
arg3[5].d = arg1[0x47].d

if (rcx != 0)
    (*(*rcx + 0x5a8))(rcx, arg1[0x44])
    r8 = *arg3

(*(*r8 + 0x5a0))(r8, arg1[0x44])
int64_t* rcx_2 = arg1[0x44]
int32_t rax

if ((*(rcx_2 + 0x294) & 2) != 0)
    rax = (*(*rcx_2 + 0x6a8))(rcx_2)

if (((*(rcx_2 + 0x294) & 2) != 0 && rax.b != 0) || sub_141dcdc50(arg1) == 3)
    return 

int64_t rdx_2 = *arg3
int64_t* rcx_4 = arg1[0x44]
int128_t var_18 = *arg4
sub_142569970(rcx_4, rdx_2, &var_18)
