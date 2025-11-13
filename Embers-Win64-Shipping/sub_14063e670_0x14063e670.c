// 函数: sub_14063e670
// 地址: 0x14063e670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143ddb400
int64_t rcx_1

if (rcx != 0)
    int16_t* const rdx = &data_142d40450
    int16_t* r8
    
    if (arg3[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *arg3
    
    if (arg2[1].d != 0)
        rdx = *arg2
    
    int32_t var_18
    char rax_1 = sub_140af68a0(rcx, rdx, r8, &var_18, &data_143de5830)
    int32_t zmm0_1 = var_18
    *arg4 = rax_1
    rcx_1 = *arg2
    *arg1 = zmm0_1
    int32_t var_14
    *(arg1 + 4) = var_14
else
    rcx_1 = *arg2
    *arg1 = data_143dbb1f0

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *arg3

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg1
