// 函数: sub_1417aba00
// 地址: 0x1417aba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1417abc90(*arg1, arg2)

if (data_143ef7eb4 != 0)
    int32_t var_10_1 = 0
    int64_t r9_1 = sx.q(arg2[1].d) * 3
    int64_t r8_1 = *(*arg2 + 0x3c8)
    int64_t zmm0_1
    zmm0_1.d = (*(r8_1 + (r9_1 << 2) + 8)).d f- -10000f
    *(r8_1 + (r9_1 << 2) + 8) = zmm0_1.d
    int64_t rdx = sx.q(arg2[1].d) * 3
    int64_t rcx_1 = *(*arg2 + 0x28)
    zmm0_1.d = (*(rcx_1 + (rdx << 2) + 8)).d f- -10000f
    *(rcx_1 + (rdx << 2) + 8) = zmm0_1.d
    int64_t rax_5 = sx.q(arg2[1].d)
    int64_t temp0_1 = _mm_unpacklo_ps(zx.o(0), 0)
    int64_t rdx_1 = rax_5 * 3
    int64_t rcx_2 = *(*arg2 + 0x1b8)
    *(rcx_2 + (rdx_1 << 2)) = temp0_1
    *(rcx_2 + (rdx_1 << 2) + 8) = 0

sub_1409740e0(&arg1[2], arg2)
sub_1408fa6d0(&arg1[0x2e], arg2)
int32_t var_10_2 = 0
*(*(*arg2 + 0x428) + sx.q(arg2[1].d) * 0x10) = 0.o
*(*(*arg2 + 0x458) + (sx.q(arg2[1].d) << 2)) = 0
return sub_1409740e0(&arg1[0xc], arg2) __tailcall
