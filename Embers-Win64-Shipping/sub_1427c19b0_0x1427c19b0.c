// 函数: sub_1427c19b0
// 地址: 0x1427c19b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_140d15db0(rbx, arg1)
*rbx = &data_1434c6990
rbx[5] = &data_1434c6bf0
rbx[6].d = 0xffffffff
*(rbx + 0x34) = 0
sub_140a96170(&rbx[7])
rbx[0xa] = 0
rbx[0xb] = 0
float zmm1_1[0x4] = data_143f89020
*(rbx + 0x70) = zx.o(0)
zmm1_1[0].q = zx.o(0) u>> 0x40
*(rbx + 0x60) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(rbx + 0x80) = __andps_xmmxud_memxud(data_143f89020, data_143f89030)
float zmm2[0x4] = data_143f89020
*(rbx + 0xa0) = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
*(rbx + 0x90) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(rbx + 0xb0) = __andps_xmmxud_memxud(data_143f89020, data_143f89030)
__builtin_memset(&rbx[0x18], 0, 0x20)
