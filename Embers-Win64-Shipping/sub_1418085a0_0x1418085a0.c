// 函数: sub_1418085a0
// 地址: 0x1418085a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* result = sub_140a35930(arg2, &var_18)
int64_t* result_1 = result

if (arg1 + 0x78 != result)
    int64_t rcx_1 = *(arg1 + 0x78)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x78) = *result_1
    *result_1 = 0
    *(arg1 + 0x80) = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg1 + 0x84) = result.d
    result_1[1] = 0

int64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
