// 函数: sub_140d10d00
// 地址: 0x140d10d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x78)
*(rsi + 0xe8)
int64_t* result = sub_140d2be40(arg2, *(rsi + 0xe0))

if (arg3[1].d s> 0)
    int64_t var_18 = *arg3
    *arg3 = 0
    int32_t var_10_1 = arg3[1].d
    int32_t var_c_1 = *(arg3 + 0xc)
    arg3[1] = 0
    result = sub_140d2c230(result, *(rsi + 0xe8), &var_18)
    *arg2 = 1
else if (*arg2 != 0)
    result = sub_140d1a460(result, *(rsi + 0xe8))
    *arg2 = 0

int64_t rcx_6 = *arg3

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
