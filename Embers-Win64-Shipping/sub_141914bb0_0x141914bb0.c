// 函数: sub_141914bb0
// 地址: 0x141914bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = arg1 + 0x198
int128_t* rdx = arg2 + 0x18
int64_t i_1 = 2
int64_t i

do
    result = &result[8]
    int128_t zmm0 = *rdx
    rdx = &rdx[8]
    result[-8] = zmm0
    result[-7] = rdx[-7]
    result[-6] = rdx[-6]
    result[-5] = rdx[-5]
    result[-4] = rdx[-4]
    result[-3] = rdx[-3]
    result[-2] = rdx[-2]
    result[-1] = rdx[-1]
    i = i_1
    i_1 -= 1
while (i != 1)
*result = *rdx
result[1] = rdx[1]
return result
