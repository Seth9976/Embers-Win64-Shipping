// 函数: sub_1409f2330
// 地址: 0x1409f2330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result

if (arg4 != 0)
    void* rdx = arg2 - arg3
    int32_t i
    
    do
        int128_t* rcx_1 = rdx + arg3 + 0x80
        result = &arg3[8]
        int128_t zmm0 = *arg3
        arg3 = &arg3[0xd]
        rcx_1[-8] = zmm0
        rcx_1[-7] = arg3[-0xc]
        rcx_1[-6] = arg3[-0xb]
        rcx_1[-5] = arg3[-0xa]
        rcx_1[-4] = arg3[-9]
        rcx_1[-3] = arg3[-8]
        rcx_1[-2] = arg3[-7]
        rcx_1[-1] = arg3[-6]
        *rcx_1 = *result
        rcx_1[1] = result[1]
        rcx_1[2] = result[2]
        rcx_1[3] = result[3]
        rcx_1[4] = result[4]
        i = arg4
        arg4 -= 1
    while (i != 1)

result.b = 1
return result
