// 函数: sub_14283bac4
// 地址: 0x14283bac4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1 + 0x18
void* i = &data_143b8076c

do
    *(rcx - 0x18) = 0
    *(rcx - 8) = 0
    *rcx = 0
    rcx += 0x20
    float zmm0[0x2] = *i
    i += 0x10
    *(rcx - 0x30) = _mm_cvtps_pd(zmm0)
while (i s< &data_143b80b20:0xc)

return 0
