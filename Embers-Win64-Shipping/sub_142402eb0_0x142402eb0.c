// 函数: sub_142402eb0
// 地址: 0x142402eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_40 = 0
float temp0[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
int32_t var_30_1
__builtin_memset(&var_30_1, 0, 0x14)
void* rax = *(arg1 + 0x408)
int64_t var_38 = temp0.q

if (rax != 0)
    int64_t zmm5
    zmm5.d = (*(rax + 0x38)).d f- *(rax + 0x2c)
    float zmm4 = *(rax + 0x3c) f- *(rax + 0x30)
    float zmm6[0x4] = *(rax + 0x34)
    zmm6[0] = zmm6[0] f- *(rax + 0x28)
    int64_t zmm2
    zmm2.d = zmm5.d f* 0.5f
    int32_t zmm1 = zmm4 f* 0.5f
    int128_t var_2c
    var_2c:4.d = zmm2.d
    zmm6[0] = zmm6[0] * 0.5f
    zmm6[0] = zmm6[0] * zmm6[0]
    var_2c.d = zmm6[0]
    var_2c:8.d = zmm1
    zmm6[0] = zmm6[0] f+ *(rax + 0x28)
    zmm2.d = zmm2.d f+ *(rax + 0x2c)
    zmm1 = zmm1 f+ *(rax + 0x30)
    zmm5.d = zmm5.d f* zmm5.d
    zmm6[0] = zmm6[0] f+ zmm5.d
    var_38 = (_mm_unpacklo_ps(zmm6, zmm2)).q
    int32_t var_30_2 = zmm1
    zmm6[0] = zmm6[0] + zmm4 * zmm4
    zmm6[0] = zmm6[0] * 0.25f
    var_2c:0xc.d = _mm_sqrt_ss(0, zmm6[0])[0]

sub_140ae2e90(&var_38, arg2, arg3)
return arg2
