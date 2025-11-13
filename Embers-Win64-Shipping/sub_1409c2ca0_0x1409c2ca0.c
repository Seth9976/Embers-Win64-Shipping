// 函数: sub_1409c2ca0
// 地址: 0x1409c2ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* result = sub_1409c2bd0(*(arg1 + 0x28), &var_18, arg2)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_1 = *arg3
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
