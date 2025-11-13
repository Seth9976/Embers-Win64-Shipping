// 函数: sub_140b28220
// 地址: 0x140b28220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* rax = sub_140b1a780(&var_28, arg1)

if (arg2 != rax)
    int64_t rcx_1 = *arg2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg2 = *rax
    *rax = 0
    arg2[1].d = rax[1].d
    *(arg2 + 0xc) = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140b085b0(&var_28, arg1, 1)

if (arg3 == &var_28)
    int64_t rcx_6 = var_28
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
else
    int64_t rcx_5 = *arg3
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *arg3 = var_28
    int32_t var_20
    arg3[1].d = var_20
    int32_t var_1c
    *(arg3 + 0xc) = var_1c

int64_t* result = sub_140b19c30(&var_28, arg1, 0)
int64_t* result_1 = result

if (arg4 != result)
    int64_t rcx_8 = *arg4
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *arg4 = *result_1
    *result_1 = 0
    arg4[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg4 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_10 = var_28

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
