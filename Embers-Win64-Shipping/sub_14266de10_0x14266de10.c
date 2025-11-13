// 函数: sub_14266de10
// 地址: 0x14266de10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x228)

if (result == 0)
    return result

*result = &data_143450d50
void* rdx = &result[2]
result[1] = &data_14344d6a0
int128_t* rcx = arg1 + 0x10
int64_t i_1 = 4
int64_t i

do
    rdx += 0x80
    int128_t zmm0_1 = *rcx
    rcx = &rcx[8]
    *(rdx - 0x80) = zmm0_1
    *(rdx - 0x70) = rcx[-7]
    *(rdx - 0x60) = rcx[-6]
    *(rdx - 0x50) = rcx[-5]
    *(rdx - 0x40) = rcx[-4]
    *(rdx - 0x30) = rcx[-3]
    *(rdx - 0x20) = rcx[-2]
    *(rdx - 0x10) = rcx[-1]
    i = i_1
    i_1 -= 1
while (i != 1)
*rdx = *rcx
result[0x44].b = *(arg1 + 0x220)
*result = &data_143458460
result[1] = &data_1434584e8
return result
