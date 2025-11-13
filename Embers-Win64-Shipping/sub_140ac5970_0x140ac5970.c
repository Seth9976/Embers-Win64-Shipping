// 函数: sub_140ac5970
// 地址: 0x140ac5970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = arg2
int128_t* rax = *arg1 + 0x18
int64_t i_1 = 2
int64_t i

do
    r8 = &r8[0x20]
    int128_t zmm0 = *rax
    int128_t zmm1 = rax[1]
    rax = &rax[8]
    *(r8 - 0x80) = zmm0
    zmm0 = rax[-6]
    *(r8 - 0x70) = zmm1
    zmm1 = rax[-5]
    *(r8 - 0x60) = zmm0
    zmm0 = rax[-4]
    *(r8 - 0x50) = zmm1
    zmm1 = rax[-3]
    *(r8 - 0x40) = zmm0
    zmm0 = rax[-2]
    *(r8 - 0x30) = zmm1
    zmm1 = rax[-1]
    *(r8 - 0x20) = zmm0
    *(r8 - 0x10) = zmm1
    i = i_1
    i_1 -= 1
while (i != 1)
*r8 = *rax
return arg2
