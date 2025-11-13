// 函数: sub_1427c1a90
// 地址: 0x1427c1a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_140d15db0(rbx, arg1)
rbx[6] = 0
rbx[7] = 0
rbx[8] = 2
*rbx = &data_1434c87f8
rbx[5] = &data_1434c8a58
__builtin_memset(&rbx[9], 0, 0x20)
rbx[0xd].d = 0x3ccccccd
*(rbx + 0x6c) = data_143dbb1f0.d[0]
rbx[0xe].d = data_143dbb1f0:4.d[0]
*(rbx + 0x74) = data_143dbb1f0.d[0]
rbx[0xf].d = data_143dbb1f0:4.d[0]
*(rbx + 0x7c) = data_143dbb1f0.d[0]
rbx[0x10].d = data_143dbb1f0:4.d[0]
int64_t zmm2 = data_143dbb1f0
*(rbx + 0x7c) = zmm2.d
*(rbx + 0x74) = zmm2.d
float zmm0_1[0x4] = zmm2:4.d
rbx[0x10].d = zmm0_1[0]
rbx[0xf].d = zmm0_1[0]
float zmm1_1[0x4] = data_143f89020
zmm1_1[0].q = zx.o(0) u>> 0x40
*(rbx + 0xc0) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(rbx + 0xd0) = zx.o(0)
*(rbx + 0xe0) = __andps_xmmxud_memxud(data_143f89020, data_143f89030)
