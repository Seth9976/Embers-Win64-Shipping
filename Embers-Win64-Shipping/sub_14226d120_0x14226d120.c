// 函数: sub_14226d120
// 地址: 0x14226d120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg1[0x69]
uint64_t rdi
rdi.b = 0
int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7

if (r10 == 0 || arg2 s>= 0xb)
label_14226d1c1:
    int128_t var_b8
    memset(&var_b8, 0, 0x88)
    int32_t var_b0_1 = 0x3f800000
    *arg5 = var_b8
    int128_t var_a8
    arg5[1] = var_a8
    int128_t var_98
    arg5[2] = var_98
    int128_t var_88
    arg5[3] = var_88
    int128_t var_78
    arg5[4] = var_78
    int128_t var_68
    arg5[5] = var_68
    int128_t var_58
    arg5[6] = var_58
    int128_t var_48
    arg5[7] = var_48
    int64_t var_38
    arg5[8].q = var_38
else
    int64_t rdx = sx.q(arg2)
    int64_t rax_1 = rdx * 3
    *(r10 + (rax_1 << 2) + 0x28)
    *(r10 + (rax_1 << 2) + 0x2c)
    
    if (0f f== *(r10 + rdx * 0xc + 0x30))
        goto label_14226d1c1
    
    int32_t rax_3
    float zmm6_1[0x4]
    int64_t zmm7_1
    rax_3, zmm6_1, zmm7_1 = sub_141ffde90(arg3)
    char rax_4 = sub_14226ca40(arg1, _mm_unpacklo_ps(zmm6_1, zmm7_1)[0].q, rax_3, arg4, arg5)
    rdi = zx.q(rax_4)
    
    if (rax_4 == 0)
        goto label_14226d1c1

return zx.q(rdi.b)
