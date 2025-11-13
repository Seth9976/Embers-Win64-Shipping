// 函数: sub_1417e1680
// 地址: 0x1417e1680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_140d15db0(rbx, arg1)
*rbx = &data_142fd4070
float zmm1_1[0x4] = data_143ef8b20
*(rbx + 0x50) = zx.o(0)
zmm1_1[0].q = zx.o(0) u>> 0x40
*(rbx + 0x40) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(rbx + 0x60) = __andps_xmmxud_memxud(data_143ef8b20, data_143ef8b30)
float zmm2[0x4] = data_143ef8b20
*(rbx + 0x80) = zx.o(0)
zmm2[0].q = zx.o(0) u>> 0x40
*(rbx + 0x70) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(rbx + 0x90) = __andps_xmmxud_memxud(data_143ef8b20, data_143ef8b30)
__builtin_memset(&rbx[0x15], 0, 0x38)
