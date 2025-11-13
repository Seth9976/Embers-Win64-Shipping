// 函数: sub_14063e4d0
// 地址: 0x14063e4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143ddb400
int32_t rax
int64_t rcx_1
int64_t zmm0

if (rcx != 0)
    int16_t* const rdx = &data_142d40450
    int16_t* r8
    
    if (arg3[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *arg3
    
    if (arg2[1].d != 0)
        rdx = *arg2
    
    int64_t var_18
    char rax_1 = sub_140af4e30(rcx, rdx, r8, &var_18, &data_143de5830)
    zmm0 = var_18
    *arg4 = rax_1
    int32_t var_10
    rax = var_10
    rcx_1 = *arg2
else
    zmm0 = data_143dbb208
    rax = data_143dbb210
    rcx_1 = *arg2

*arg1 = zmm0
arg1[1].d = rax

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *arg3

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg1
