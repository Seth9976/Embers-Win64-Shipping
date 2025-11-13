// 函数: sub_14086c510
// 地址: 0x14086c510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg2 + 0x48
__builtin_memset(arg2, 0, 0x30)
*(arg2 + 0x30) = (*(arg2 + 0x30) & 0xffffffd8) | 0x18
*(arg2 + 0x38) = 0
*(arg2 + 0x40) = 0
result_1[2] = 0
result_1[3].d = 0
*(result_1 + 0x1c) = 0x80
int64_t* result = result_1[2]

if (result != 0)
    result_1 = result

*result_1 = 0
result_1[1] = 0
*(arg2 + 0x68) = 0xffffffff
*(arg2 + 0x6c) = 0
*(arg2 + 0x78) = 0
*(arg2 + 0x80) = 0
return result
