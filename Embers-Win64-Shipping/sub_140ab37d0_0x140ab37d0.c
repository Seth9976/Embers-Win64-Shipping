// 函数: sub_140ab37d0
// 地址: 0x140ab37d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = rax
else
    *rbx = &data_142e65230
    void*** rax_1 = j_sub_140a82f30(0x2a8)
    
    if (rax_1 == 0)
        rbx[1] = rax_1
    else
        rbx[1] = sub_140a95770(rax_1)

int64_t* rcx_1 = data_143db9b80
data_143db9b80 = rbx

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int32_t* rdx = arg1
int32_t* rax_4 = &data_143db9bc0
int64_t i_1 = 2
int64_t i

do
    rdx = &rdx[0x20]
    int128_t zmm0_1 = *rax_4
    int128_t zmm1 = *(rax_4 + 0x10)
    rax_4 = &rax_4[0x20]
    *(rdx - 0x80) = zmm0_1
    zmm0_1 = *(rax_4 - 0x60)
    *(rdx - 0x70) = zmm1
    zmm1 = *(rax_4 - 0x50)
    *(rdx - 0x60) = zmm0_1
    zmm0_1 = *(rax_4 - 0x40)
    *(rdx - 0x50) = zmm1
    zmm1 = *(rax_4 - 0x30)
    *(rdx - 0x40) = zmm0_1
    zmm0_1 = *(rax_4 - 0x20)
    *(rdx - 0x30) = zmm1
    zmm1 = *(rax_4 - 0x10)
    *(rdx - 0x20) = zmm0_1
    *(rdx - 0x10) = zmm1
    i = i_1
    i_1 -= 1
while (i != 1)
*rdx = *rax_4
return arg1
