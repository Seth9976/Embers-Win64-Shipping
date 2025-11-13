// 函数: sub_14038cf70
// 地址: 0x14038cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_20 = zmm6
int128_t zmm7
int128_t var_10 = zmm7
int128_t result
int128_t zmm1

do
    int128_t* r10_1 = arg1 + (arg2 << 1)
    result = *arg1
    zmm1 = arg1[1]
    int128_t zmm2 = *(arg1 + arg2)
    int128_t zmm3 = *(arg1 + arg2 + 0x10)
    int128_t zmm4 = *r10_1
    int128_t zmm5 = r10_1[1]
    zmm6 = *(r10_1 + arg2)
    zmm7 = *(r10_1 + arg2 + 0x10)
    arg1 += arg2 << 2
    int128_t* r10_2 = arg3 + (arg4 << 1)
    *arg3 = result
    arg3[1] = zmm1
    *(arg3 + arg4) = zmm2
    *(arg3 + arg4 + 0x10) = zmm3
    *r10_2 = zmm4
    r10_2[1] = zmm5
    *(r10_2 + arg4) = zmm6
    *(r10_2 + arg4 + 0x10) = zmm7
    arg3 += arg4 << 2
    arg5 -= 4
while (arg5 s>= 4)

if (arg5 != 0)
    int32_t i
    
    do
        result = *arg1
        zmm1 = arg1[1]
        arg1 += arg2
        *arg3 = result
        arg3[1] = zmm1
        arg3 += arg4
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
