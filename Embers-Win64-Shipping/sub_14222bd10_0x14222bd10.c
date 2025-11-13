// 函数: sub_14222bd10
// 地址: 0x14222bd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
uint64_t result
int32_t r9

if (arg4 s>= 0 && rdi.d s< *(arg1 + 0x108))
    r9 = (arg3 * 3).d
    result = zx.q(r9 + 2)

if (arg4 s< 0 || rdi.d s>= *(arg1 + 0x108) || result.d s< 0 || result.d s>= *(arg1 + 0xe8))
    result.b = 0
else
    int64_t rcx = *(arg1 + 0xe0)
    int64_t rax = sx.q(r9)
    int64_t r8 = sx.q(*(rcx + (rax << 2) + 8))
    int64_t rdx = sx.q(*(rcx + (rax << 2) + 4))
    int64_t r11_1 = sx.q(*(rcx + (rax << 2)))
    int64_t rcx_1 = *(arg1 + 0xf0)
    int64_t rax_1 = r11_1 * 3
    int64_t var_78 = *(rcx_1 + (rax_1 << 2))
    int32_t var_70_1 = *(rcx_1 + (rax_1 << 2) + 8)
    int64_t rax_3 = rdx * 3
    int64_t var_88 = *(rcx_1 + (rax_3 << 2))
    int32_t var_80_1 = *(rcx_1 + (rax_3 << 2) + 8)
    int64_t rax_5 = r8 * 3
    int64_t var_98 = *(rcx_1 + (rax_5 << 2))
    int32_t var_90_1 = *(rcx_1 + (rax_5 << 2) + 8)
    int64_t rdx_1 = *(*(arg1 + 0x100) + rdi * 0x10)
    *(rdx_1 + (r8 << 3))
    *(rdx_1 + (r8 << 3) + 4)
    *(rdx_1 + (r11_1 << 3))
    *(rdx_1 + (r11_1 << 3) + 4)
    *(rdx_1 + (rdx << 3))
    *(rdx_1 + (rdx << 3) + 4)
    float var_a8
    float zmm6_1
    float zmm7_1
    float zmm8_1
    float zmm9_1
    float zmm10_1[0x4]
    int64_t zmm11_1
    zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1 =
        sub_140acfad0(&var_a8, arg2, &var_78, &var_88, &var_98)
    int32_t var_a4
    zmm10_1[0] = zmm10_1[0] f* var_a4
    zmm11_1.d = zmm11_1.d f* var_a4
    zmm9_1 = zmm9_1 * var_a8
    zmm10_1[0] = zmm10_1[0] + zmm7_1 * var_a8
    zmm11_1.d = zmm11_1.d f+ zmm9_1
    float var_a0
    zmm10_1[0] = zmm10_1[0] + zmm6_1 * var_a0
    zmm11_1.d = zmm11_1.d f+ zmm8_1 * var_a0
    *arg5 = (_mm_unpacklo_ps(zmm10_1, zmm11_1)).q
    result.b = 1

return result
