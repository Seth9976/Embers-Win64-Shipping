// 函数: sub_1405ce440
// 地址: 0x1405ce440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result

if (arg4 != 0)
    void* rdx = arg2 - arg3
    int32_t i
    
    do
        int128_t* rcx = rdx + arg3
        result = &arg3[8]
        int128_t zmm0 = *arg3
        arg3 = &arg3[0xa]
        *rcx = zmm0
        rcx[1] = arg3[-9]
        rcx[2] = arg3[-8]
        rcx[3] = arg3[-7]
        rcx[4] = arg3[-6]
        rcx[5] = arg3[-5]
        rcx[6] = arg3[-4]
        rcx[7] = arg3[-3]
        rcx[8] = *result
        rcx[9] = result[1]
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result
