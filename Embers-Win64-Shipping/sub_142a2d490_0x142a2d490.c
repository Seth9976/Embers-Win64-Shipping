// 函数: sub_142a2d490
// 地址: 0x142a2d490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rcx = arg1 + 0x1dd5
void* const result = &data_143609360
int64_t i_1 = 8
int64_t i

do
    rcx = &rcx[8]
    int128_t zmm0 = *result
    result += 0x80
    rcx[-8] = zmm0
    rcx[-7] = *(result - 0x70)
    rcx[-6] = *(result - 0x60)
    rcx[-5] = *(result - 0x50)
    rcx[-4] = *(result - 0x40)
    rcx[-3] = *(result - 0x30)
    rcx[-2] = *(result - 0x20)
    rcx[-1] = *(result - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
*rcx = *result
rcx[1] = *(result + 0x10)
return result
