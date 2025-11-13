// 函数: sub_14065b050
// 地址: 0x14065b050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t rcx
rcx.b = rax != 0
*(arg2 + 0x20) = rcx + rax
int64_t var_18
sub_140b6b840(&var_18)

if (arg3 == &var_18)
    int64_t rcx_4 = var_18
    
    if (rcx_4 == 0)
        return &var_18
    
    return sub_140a74f90(rcx_4)

int64_t rcx_3 = *arg3

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*arg3 = var_18
int32_t var_10
arg3[1].d = var_10
int32_t result
*(arg3 + 0xc) = result
return result
