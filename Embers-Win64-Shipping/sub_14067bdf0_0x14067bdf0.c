// 函数: sub_14067bdf0
// 地址: 0x14067bdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
int16_t** result = sub_140a31300(&var_18, *(arg1 + 0x10), 0)

if (arg2 != result)
    int64_t rcx_1 = *arg2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg2 = *result
    *result = nullptr
    arg2[1].d = result[1].d
    *(arg2 + 0xc) = *(result + 0xc)
    result[1] = 0

int16_t* rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

result.b = 1
return result
