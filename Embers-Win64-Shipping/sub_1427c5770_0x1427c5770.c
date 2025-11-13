// 函数: sub_1427c5770
// 地址: 0x1427c5770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_140d15db0(rbx, arg1)
*rbx = &data_1434ca488
rbx[5] = 0
rbx[6] = 0
rbx[7] = 2
rbx[8] = 0
rbx[9] = 0
rbx[0xa] = 2
rbx[0xb] = 0
rbx[0xc] = 0
rbx[0xd] = 2
rbx[0xe].w = 0
rbx[0xf] = 0
rbx[0x10] = 0
float zmm1_1[0x4] = data_143f893d0
*(rbx + 0xa0) = zx.o(0)
zmm1_1[0].q = zx.o(0) u>> 0x40
*(rbx + 0x90) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(rbx + 0xb0) = __andps_xmmxud_memxud(data_143f893d0, data_143f893e0)
float zmm2[0x4] = data_143f893d0
zmm2[0].q = zx.o(0) u>> 0x40
*(rbx + 0xc0) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(rbx + 0xd0) = zx.o(0)
*(rbx + 0xe0) = __andps_xmmxud_memxud(data_143f893d0, data_143f893e0)
