// 函数: sub_140611000
// 地址: 0x140611000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t count_2 = arg2[2]

if (arg2[3] u>= 0x10)
    arg2 = *arg2

uint64_t count_1 = arg1[2]

if (arg1[3] u>= 0x10)
    arg1 = *arg1

uint64_t count = count_1

if (count_2 u< count_1)
    count = count_2

int32_t result = memcmp(arg1, arg2, count)

if (result == 0)
    if (count_1 u< count_2)
        return 0xffffffff
    
    result.b = count_1 u> count_2

return result
