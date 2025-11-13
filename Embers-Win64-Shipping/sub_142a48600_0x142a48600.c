// 函数: sub_142a48600
// 地址: 0x142a48600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result
int16_t arg_10
int32_t r9_1

if (arg2 u<= 0xffff)
    arg_10 = arg2.w
    r9_1 = 1
label_142a4865c:
    
    if ((*(sub_142a48d70(*(arg1 + 8), &arg_10, 0, r9_1) + 8) & 0x11) == 0)
        result.b = 1
        return result
else if (arg2 u<= 0x10ffff)
    r9_1 = 2
    arg_10 = (arg2 s>> 0xa).w - 0x2840
    arg2.w &= 0x3ff
    arg2.w |= 0xdc00
    int16_t arg_12 = arg2.w
    goto label_142a4865c
result.b = 0
return result
