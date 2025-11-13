// 函数: sub_140a99e20
// 地址: 0x140a99e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 2
*arg1 = *arg2
void* rdx = &arg2[1]
void* rax = &arg1[1]
int64_t i

do
    rax += 0x80
    int128_t zmm0 = *rdx
    rdx += 0x80
    *(rax - 0x80) = zmm0
    *(rax - 0x70) = *(rdx - 0x70)
    *(rax - 0x60) = *(rdx - 0x60)
    *(rax - 0x50) = *(rdx - 0x50)
    *(rax - 0x40) = *(rdx - 0x40)
    *(rax - 0x30) = *(rdx - 0x30)
    *(rax - 0x20) = *(rdx - 0x20)
    *(rax - 0x10) = *(rdx - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
