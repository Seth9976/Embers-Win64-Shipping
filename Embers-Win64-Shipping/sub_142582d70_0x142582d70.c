// 函数: sub_142582d70
// 地址: 0x142582d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result

if (arg4 != 0)
    void* r10 = arg2 - arg3
    int32_t i
    
    do
        int128_t* rcx = r10 + arg3
        result = arg3
        int64_t j_1 = 2
        int64_t j
        
        do
            rcx = &rcx[8]
            rcx[-8] = *result
            rcx[-7] = result[1]
            rcx[-6] = result[2]
            rcx[-5] = result[3]
            rcx[-4] = result[4]
            rcx[-3] = result[5]
            rcx[-2] = result[6]
            int128_t zmm1 = result[7]
            result -= -0x80
            rcx[-1] = zmm1
            j = j_1
            j_1 -= 1
        while (j != 1)
        arg3 = &arg3[0x15]
        *rcx = *result
        rcx[1] = result[1]
        rcx[2] = result[2]
        rcx[3] = result[3]
        rcx[4] = result[4]
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result
