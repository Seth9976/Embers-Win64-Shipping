// 函数: sub_14105abc0
// 地址: 0x14105abc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x31) = 1
*(arg1 + 0x7c8) = arg4
int64_t rbx = arg3
__builtin_memset(arg1 + 0x780, 0, 0x40)
memcpy(arg1 + 0x780, rbx, arg2 << 3)
int32_t result_2 = 0
int32_t result = 0

if (arg2 == 0)
    *(arg1 + 0x7c0) = 0
    return 0

int32_t result_1

do
    result += 1
    bool cond:0_1 = *rbx == 0
    rbx += 8
    result_1 = result
    
    if (cond:0_1)
        result_1 = result_2
    
    result_2 = result_1
while (result u< arg2)

*(arg1 + 0x7c0) = result_1
return result
