// 函数: sub_141e23f00
// 地址: 0x141e23f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x30)
int64_t arg_8

if (rax != 0)
    arg_8 = *(rax + 0x18)
    sub_140b63b70(&arg_8, arg2)
    return arg2

void* rax_4 = *(*(arg1 + 0x10) + 0xe0)
*arg2 = 0
arg2[1] = 0

if (rax_4 == 0)
    arg_8 = *(*(arg1 + 0x10) + 0x18)
else
    arg_8 = *(rax_4 + 0x18)

int64_t var_18
sub_140b63b70(&arg_8, &var_18)

if (arg2 == &var_18)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
else
    int64_t rcx_3 = *arg2
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *arg2 = var_18
    int32_t var_10
    arg2[1].d = var_10
    int32_t var_c
    *(arg2 + 0xc) = var_c

int64_t* rax_10 = sub_140a300d0(arg2, &var_18, u"AnimNotifyState_", &data_142d40450, 0)

if (arg2 != rax_10)
    int64_t rcx_6 = *arg2
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *arg2 = *rax_10
    *rax_10 = 0
    arg2[1].d = rax_10[1].d
    *(arg2 + 0xc) = *(rax_10 + 0xc)
    rax_10[1] = 0

int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg2
