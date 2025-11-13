// 函数: sub_1420b3ed0
// 地址: 0x1420b3ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* result = sub_140d30800(arg1, &var_18)
int64_t* result_1 = result

if (arg2 != result)
    int64_t rcx = *arg2
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg2 = *result_1
    *result_1 = 0
    arg2[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg2 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_2 = var_18

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[1]

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
