// 函数: sub_142a26ba0
// 地址: 0x142a26ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[0x32] = 0
arg1[0x33].d = 0
void* result = &arg1[2]
arg1[1] = arg3
int64_t i_1 = 3
int64_t i

do
    result += 0x80
    int128_t zmm0 = *arg4
    arg4 = &arg4[8]
    *(result - 0x80) = zmm0
    *(result - 0x70) = arg4[-7]
    *(result - 0x60) = arg4[-6]
    *(result - 0x50) = arg4[-5]
    *(result - 0x40) = arg4[-4]
    *(result - 0x30) = arg4[-3]
    *(result - 0x20) = arg4[-2]
    *(result - 0x10) = arg4[-1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
