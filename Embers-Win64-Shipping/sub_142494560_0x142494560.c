// 函数: sub_142494560
// 地址: 0x142494560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result

if (arg4 != 0)
    void* r10 = arg2 - arg3
    int32_t i
    
    do
        int32_t* rdx = r10 + arg3
        result = arg3
        int64_t j_1 = 2
        int64_t j
        
        do
            rdx = &rdx[0x20]
            *(rdx - 0x80) = *result
            *(rdx - 0x70) = result[1]
            *(rdx - 0x60) = result[2]
            *(rdx - 0x50) = result[3]
            *(rdx - 0x40) = result[4]
            *(rdx - 0x30) = result[5]
            *(rdx - 0x20) = result[6]
            int128_t zmm1 = result[7]
            result -= -0x80
            *(rdx - 0x10) = zmm1
            j = j_1
            j_1 -= 1
        while (j != 1)
        arg3 += 0x104
        *rdx = *result
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result
