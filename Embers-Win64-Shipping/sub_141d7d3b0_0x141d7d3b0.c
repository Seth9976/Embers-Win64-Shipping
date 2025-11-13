// 函数: sub_141d7d3b0
// 地址: 0x141d7d3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* result = sub_140a300d0(arg2 + 0x18, &var_18, u".{frame}", &data_142d40450, 1)
int64_t* result_1 = result

if (arg2 + 0x18 != result)
    int64_t rcx_1 = *(arg2 + 0x18)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg2 + 0x18) = *result_1
    *result_1 = 0
    *(arg2 + 0x20) = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg2 + 0x24) = result.d
    result_1[1] = 0

int64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
