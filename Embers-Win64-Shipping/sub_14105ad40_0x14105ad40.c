// 函数: sub_14105ad40
// 地址: 0x14105ad40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2)

if (result.d u<= 0xa)
    switch (result)
        case 0
            *(0x17 + arg1) = arg3
            *(arg1 + 0x7f) = 1
            return 0x17
        case 1
            *(0x1f + arg1) = arg3
            *(arg1 + 0x7f) = 1
            return 0x1f
        case 2
            *(0x23 + arg1) = arg3
            *(arg1 + 0x7f) = 1
            return 0x23
        case 3
            *(0x13 + arg1) = arg3
            *(arg1 + 0x7f) = 1
            return 0x13
        case 4
            *(0x1b + arg1) = arg3
            *(arg1 + 0x7f) = 1
            return 0x1b
        case 5, 0xa
            result = 0x27
            *(0x27 + arg1) = arg3
            *(arg1 + 0x7f) = 1

return result
