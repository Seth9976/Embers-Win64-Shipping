// 函数: sub_140ab1810
// 地址: 0x140ab1810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int128_t* rax = rdx + 0x18

if (*(rdx + 0x18) == 0)
    sub_140a95370(arg2, rdx + 0x148)
    return arg2

int64_t i_2 = 2
int32_t var_118
int32_t* rcx_1 = &var_118
int64_t i_3 = 2
int128_t zmm0
int128_t zmm1
int64_t i

do
    rcx_1 = &rcx_1[0x20]
    zmm0 = *rax
    zmm1 = rax[1]
    rax = &rax[8]
    *(rcx_1 - 0x80) = zmm0
    zmm0 = rax[-6]
    *(rcx_1 - 0x70) = zmm1
    zmm1 = rax[-5]
    *(rcx_1 - 0x60) = zmm0
    zmm0 = rax[-4]
    *(rcx_1 - 0x50) = zmm1
    zmm1 = rax[-3]
    *(rcx_1 - 0x40) = zmm0
    zmm0 = rax[-2]
    *(rcx_1 - 0x30) = zmm1
    zmm1 = rax[-1]
    *(rcx_1 - 0x20) = zmm0
    *(rcx_1 - 0x10) = zmm1
    i = i_3
    i_3 -= 1
while (i != 1)
*rcx_1 = *rax
void* rcx_2 = &arg2[1]
*arg2 = var_118
void var_114
void* rax_4 = &var_114
int64_t i_1

do
    rcx_2 += 0x80
    zmm0 = *rax_4
    zmm1 = *(rax_4 + 0x10)
    rax_4 += 0x80
    *(rcx_2 - 0x80) = zmm0
    zmm0 = *(rax_4 - 0x60)
    *(rcx_2 - 0x70) = zmm1
    zmm1 = *(rax_4 - 0x50)
    *(rcx_2 - 0x60) = zmm0
    zmm0 = *(rax_4 - 0x40)
    *(rcx_2 - 0x50) = zmm1
    zmm1 = *(rax_4 - 0x30)
    *(rcx_2 - 0x40) = zmm0
    zmm0 = *(rax_4 - 0x20)
    *(rcx_2 - 0x30) = zmm1
    zmm1 = *(rax_4 - 0x10)
    *(rcx_2 - 0x20) = zmm0
    *(rcx_2 - 0x10) = zmm1
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return arg2
