// 函数: sub_142251cf0
// 地址: 0x142251cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140ce8e10(arg1, arg2)

if ((*(arg2 + 0x28) & 1) != 0)
    int32_t* rdx = arg1 + 0x1f0
    int64_t i_1 = 2
    result = arg1 + 0xb4
    int64_t i
    
    do
        rdx = &rdx[0x20]
        int128_t zmm0_1 = *result
        int128_t zmm1_1 = *(result + 0x10)
        result += 0x80
        *(rdx - 0x80) = zmm0_1
        zmm0_1 = *(result - 0x60)
        *(rdx - 0x70) = zmm1_1
        zmm1_1 = *(result - 0x50)
        *(rdx - 0x60) = zmm0_1
        zmm0_1 = *(result - 0x40)
        *(rdx - 0x50) = zmm1_1
        zmm1_1 = *(result - 0x30)
        *(rdx - 0x40) = zmm0_1
        zmm0_1 = *(result - 0x20)
        *(rdx - 0x30) = zmm1_1
        zmm1_1 = *(result - 0x10)
        *(rdx - 0x20) = zmm0_1
        *(rdx - 0x10) = zmm1_1
        i = i_1
        i_1 -= 1
    while (i != 1)
    *rdx = *result

return result
