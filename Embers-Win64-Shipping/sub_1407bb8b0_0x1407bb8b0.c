// 函数: sub_1407bb8b0
// 地址: 0x1407bb8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x18)

if (arg3 == 0)
    return 

int64_t* rax = *(arg3 + 8)

if (rax == 0)
    return 

*arg2 = rax[0xe5]
int64_t var_18
rax = sub_140800130(*(*(arg3 + 8) + 0x788), &var_18)

if (&arg2[1] != rax)
    int64_t rcx_1 = arg2[1]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg2[1] = *rax
    *rax = 0
    arg2[2].d = rax[1].d
    *(arg2 + 0x14) = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)
