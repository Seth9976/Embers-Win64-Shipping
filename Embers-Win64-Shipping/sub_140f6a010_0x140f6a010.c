// 函数: sub_140f6a010
// 地址: 0x140f6a010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = int.q(arg2[0])
double zmm0[0x2] = arg2

if (rcx != -0x8000000000000000 && not(float.d(rcx) == arg2[0]))
    uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rcx - (zx.q(temp0_2) & 1))

arg2[0] = arg2[0] - zmm0[0]
zmm0 = zx.o(0)
zmm0[0].d = fconvert.s(arg2[0])
arg1[0x6a].d = zmm0[0].d

if (sub_140f466a0(&arg1[0x56])[1].b == 0)
    arg2 = zx.o(0)
else
    arg2 = *(arg1 + 0x36c)

sub_140f8a040(arg1, arg2[0].d)
sub_140e19ef0(arg1, 2)
int64_t result
result.b = 1
return result
