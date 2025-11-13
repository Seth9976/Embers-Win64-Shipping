// 函数: sub_1427c12e0
// 地址: 0x1427c12e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_140d15db0(rbx, arg1)
rbx[6] = 0
rbx[7] = 0
rbx[8] = 2
*rbx = &data_1434c8568
rbx[5] = &data_1434c8a88
__builtin_memset(&rbx[9], 0, 0x20)
rbx[0xd] = 0x3d4ccccd
rbx[0xe] = 0
float zmm1_1[0x4] = data_143f89020
zmm1_1[0].q = zx.o(0) u>> 0x40
*(rbx + 0x90) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(rbx + 0xa0) = zx.o(0)
*(rbx + 0xb0) = __andps_xmmxud_memxud(data_143f89020, data_143f89030)
