// 函数: sub_141e23d00
// 地址: 0x141e23d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(*(arg1 + 0x10) + 0xe0)
*arg2 = 0
arg2[1] = 0
int64_t arg_8

if (rax_1 == 0)
    arg_8 = *(*(arg1 + 0x10) + 0x18)
else
    arg_8 = *(rax_1 + 0x18)

int64_t var_18
sub_140b63b70(&arg_8, &var_18)

if (arg2 == &var_18)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
else
    int64_t rcx_2 = *arg2
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *arg2 = var_18
    int32_t var_10
    arg2[1].d = var_10
    int32_t var_c
    *(arg2 + 0xc) = var_c

int64_t* rax_7 = sub_140a300d0(arg2, &var_18, u"AnimNotify_", &data_142d40450, 0)

if (arg2 != rax_7)
    int64_t rcx_5 = *arg2
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *arg2 = *rax_7
    *rax_7 = 0
    arg2[1].d = rax_7[1].d
    *(arg2 + 0xc) = *(rax_7 + 0xc)
    rax_7[1] = 0

int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg2
