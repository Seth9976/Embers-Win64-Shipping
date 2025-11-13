// 函数: sub_1427c1380
// 地址: 0x1427c1380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_140d15db0(rbx, arg1)
rbx[6] = 0
rbx[7] = 0
rbx[8] = 2
*rbx = &data_1434c8048
rbx[5] = &data_1434c82a8
rbx[0xc] = 0
rbx[0xe] = &data_142e52180

if (rbx != -0x78)
    rbx[0xa] = sub_1405949a0

__builtin_memset(&rbx[0x12], 0, 0x2c)
float zmm1_1[0x4] = data_143f89020
zmm1_1[0].q = zx.o(0) u>> 0x40
*(rbx + 0xe0) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(rbx + 0xf0) = zx.o(0)
*(rbx + 0x100) = __andps_xmmxud_memxud(data_143f89020, data_143f89030)
