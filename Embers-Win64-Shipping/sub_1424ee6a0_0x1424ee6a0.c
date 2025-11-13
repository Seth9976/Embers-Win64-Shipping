// 函数: sub_1424ee6a0
// 地址: 0x1424ee6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t result = *(arg2 + 0x20)
int32_t var_14
int32_t temp0 = __minss_xmmss_memss(var_14, var_18)
int64_t rcx_1
rcx_1.b = result != 0
*(arg2 + 0x20) = rcx_1 + result
int32_t var_10
*arg3 = __minss_xmmss_memss(temp0, var_10)
return result
