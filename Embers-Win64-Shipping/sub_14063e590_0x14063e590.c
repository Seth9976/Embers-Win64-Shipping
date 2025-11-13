// 函数: sub_14063e590
// 地址: 0x14063e590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143ddb400
int64_t rcx_1

if (rcx != 0)
    int16_t* const rdx = &data_142d40450
    uint64_t var_18 = 0
    int64_t var_10_1 = 0
    int16_t* r8
    
    if (arg3[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *arg3
    
    if (arg2[1].d != 0)
        rdx = *arg2
    
    *arg4 = sub_140af5b90(rcx, rdx, r8, &var_18, &data_143de5830)
    *arg1 = var_18
    arg1[1].d = var_10_1.d
    *(arg1 + 0xc) = var_10_1:4.d
    rcx_1 = *arg2
    var_18 = 0
    int64_t var_10_2 = 0
else
    *arg1 = 0
    arg1[1] = 0
    rcx_1 = *arg2

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *arg3

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg1
