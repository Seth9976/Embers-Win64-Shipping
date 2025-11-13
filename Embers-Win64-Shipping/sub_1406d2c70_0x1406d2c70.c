// 函数: sub_1406d2c70
// 地址: 0x1406d2c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* result = sub_1406869a0(&var_18, sub_140a1aee0())
int64_t* result_1 = result

if (arg2 != result)
    int64_t rcx_1 = *arg2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg2 = *result_1
    *result_1 = 0
    arg2[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg2 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
