// 函数: sub_1427c16f0
// 地址: 0x1427c16f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_140d15db0(rbx, arg1)
rbx[6] = 0
rbx[7] = 0
rbx[8] = 2
*rbx = &data_1434c82d8
rbx[5] = &data_1434c8ab8
rbx[0xc] = 0
rbx[0xe] = &data_142e52180

if (rbx != -0x78)
    rbx[0xa] = sub_1405949a0

__builtin_memset(&rbx[0x12], 0, 0x20)
rbx[0x16].d = 0x3d4ccccd
*(rbx + 0xb4) = data_143dbb1f0.d[0]
rbx[0x17].d = data_143dbb1f0:4.d[0]
*(rbx + 0xbc) = data_143dbb1f0.d[0]
rbx[0x18].d = data_143dbb1f0:4.d[0]
*(rbx + 0xc4) = data_143dbb1f0.d[0]
rbx[0x19].d = data_143dbb1f0:4.d[0]
int64_t zmm2 = data_143dbb1f0
*(rbx + 0xc4) = zmm2.d
*(rbx + 0xbc) = zmm2.d
float zmm0_1[0x4] = zmm2:4.d
rbx[0x19].d = zmm0_1[0]
rbx[0x18].d = zmm0_1[0]
float zmm1_1[0x4] = data_143f89020
zmm1_1[0].q = zx.o(0) u>> 0x40
*(rbx + 0x100) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(rbx + 0x110) = zx.o(0)
*(rbx + 0x120) = __andps_xmmxud_memxud(data_143f89020, data_143f89030)
