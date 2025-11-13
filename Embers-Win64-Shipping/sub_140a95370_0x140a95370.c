// 函数: sub_140a95370
// 地址: 0x140a95370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
void* r8 = &arg1[1]
int64_t i_1 = 2
*arg1 = data_143db9bc0
void* rax_1 = &data_143db9bc4
int64_t i

do
    r8 += 0x80
    int128_t zmm0 = *rax_1
    rax_1 += 0x80
    *(r8 - 0x80) = zmm0
    *(r8 - 0x70) = *(rax_1 - 0x70)
    *(r8 - 0x60) = *(rax_1 - 0x60)
    *(r8 - 0x50) = *(rax_1 - 0x50)
    *(r8 - 0x40) = *(rax_1 - 0x40)
    *(r8 - 0x30) = *(rax_1 - 0x30)
    *(r8 - 0x20) = *(rax_1 - 0x20)
    *(r8 - 0x10) = *(rax_1 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
void* rax_2 = *arg2
*(arg1 + 0x108) = rax_2

if (rax_2 != 0)
    *(rax_2 + 0xc) += 1

return arg1
