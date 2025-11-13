// 函数: sub_142911d90
// 地址: 0x142911d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* result = sub_1428a6730(0x20)

if (result == 0)
    return result

*result = 0x400
result[1] = 0xa0
*(result + 8) = 0
*(result + 0x18) = 0
*(arg1 + 0x28) = result
*(arg1 + 0x40) = &result[4]
*(arg1 + 0x48) = 2
int32_t* rcx_1 = *(arg2 + 0x28)
*result = *rcx_1
result[1] = rcx_1[1]
*(result + 8) = *(rcx_1 + 8)
*(result + 0x18) = *(rcx_1 + 0x18)
return 1
