// 函数: sub_1417e6c30
// 地址: 0x1417e6c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_1417d6a50(rbx)
int64_t* rcx_1 = &rbx[0x21]
*rbx = &data_142fd8688
rbx[0x1f] = 0
rbx[0x20] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax = rcx_1[2]

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
rcx_1[1] = 0
rbx[0x25].d = 0xffffffff
*(rbx + 0x12c) = 0
rbx[0x27] = 0
rbx[0x28].d = 0
__builtin_memset(&rbx[0x29], 0, 0x30)
float zmm1_1[0x4] = data_143ef8f30
*(rbx + 0x190) = zx.o(0)
zmm1_1[0].q = zx.o(0) u>> 0x40
*(rbx + 0x180) = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
*(rbx + 0x1a0) = __andps_xmmxud_memxud(data_143ef8f30, data_143ef8f40)
float zmm2_1[0x4] = data_143ef8f30
zmm2_1[0].q = zx.o(0) u>> 0x40
*(rbx + 0x1b0) = _mm_shuffle_ps(zx.o(0), zmm2_1, 0xc4)
*(rbx + 0x1c0) = zx.o(0)
*(rbx + 0x1d0) = __andps_xmmxud_memxud(data_143ef8f30, data_143ef8f40)
