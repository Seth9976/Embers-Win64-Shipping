// 函数: sub_1422f6d30
// 地址: 0x1422f6d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* rbx)[0x4] = arg1 + 0x280
sub_1422f6df0(rbx, arg2, arg3)
sub_141f8c8a0(arg1 + 0xbf0, arg1 + 0x3c0, 0)
void* rdi_1 = arg1 + 0x6b0
int64_t result = 7
float zmm0_1[0x4]
int128_t zmm1_1
int64_t i

do
    rdi_1 += 0x80
    zmm0_1 = *rbx
    zmm1_1 = rbx[1]
    rbx = &rbx[8]
    *(rdi_1 - 0x80) = zmm0_1
    zmm0_1 = rbx[-6]
    *(rdi_1 - 0x70) = zmm1_1
    zmm1_1 = rbx[-5]
    *(rdi_1 - 0x60) = zmm0_1
    zmm0_1 = rbx[-4]
    *(rdi_1 - 0x50) = zmm1_1
    zmm1_1 = rbx[-3]
    *(rdi_1 - 0x40) = zmm0_1
    zmm0_1 = rbx[-2]
    *(rdi_1 - 0x30) = zmm1_1
    zmm1_1 = rbx[-1]
    *(rdi_1 - 0x20) = zmm0_1
    *(rdi_1 - 0x10) = zmm1_1
    i = result
    result -= 1
while (i != 1)
zmm1_1 = rbx[1]
*rdi_1 = *rbx
zmm0_1 = rbx[2]
*(rdi_1 + 0x10) = zmm1_1
*(rdi_1 + 0x20) = zmm0_1
return result
