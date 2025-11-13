// 函数: sub_14277da40
// 地址: 0x14277da40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_141ed2eb0(rbx, sub_140d20910())
rbx[0x16].d = 0
*rbx = &data_1434a61b8
*(rbx + 0xb4) = 0x3f800000
rbx[5] = &data_1434a65b8
float zmm1_1[0x4] = data_143f87db0
zmm1_1[0].q = zx.o(0) u>> 0x40
*(rbx + 0xc0) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(rbx + 0xd0) = zx.o(0)
*(rbx + 0xe0) = __andps_xmmxud_memxud(data_143f87db0, data_143f87dc0)
