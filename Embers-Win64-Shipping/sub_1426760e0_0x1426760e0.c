// 函数: sub_1426760e0
// 地址: 0x1426760e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = *arg1
int32_t rsi = 0
float zmm10[0x4] = arg3
void* rdi_1 = sx.q(arg1[1].d) * 0x1c + rbx
uint128_t zmm0

if (rbx != rdi_1)
    int128_t zmm7
    zmm7.d = 1f / arg2[0]
    
    do
        arg3 = *rbx
        uint128_t zmm3 = zx.o(rbx[1].q)
        float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0xaa)
        int32_t var_b8 = (arg3 ^ 0x80000000).d
        int32_t var_b0_1 = (_mm_shuffle_ps(arg3, arg3, 0x55) ^ 0x80000000).d
        arg3 = _mm_shuffle_ps(arg3, arg3, 0xff) ^ 0x80000000
        float var_b4_1 = temp0_1[0]
        int32_t var_a8_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55).d
        float var_ac_1 = arg3[0]
        int32_t var_a4_1 = (zmm3 ^ 0x80000000).d
        int32_t var_a0
        sub_140acc6d0(&var_a0, &var_b8, 2)
        int32_t var_8c
        arg2 = var_8c
        int32_t var_98
        arg2[0] = arg2[0] f- var_98
        int32_t var_94
        arg3 = var_94
        arg3[0] = arg3[0] f- var_a0
        rbx += 0x1c
        arg2[0] = arg2[0] f* zmm7.d
        arg3[0] = arg3[0] f* zmm7.d
        arg2[0] = arg2[0] * 2f
        arg3[0] = arg3[0] * 2f
        zmm0.d = -0.5f - arg2[0]
        int32_t rax_2 = int.d(zmm0.d) s>> 1
        zmm0.d = -0.5f - arg3[0]
        rsi += (1 - rax_2) * (1 - (int.d(zmm0.d) s>> 1))
    while (rbx != rdi_1)

zmm0.d = _mm_cvtepi32_ps(zx.o(rsi)).d f* zmm10[0]
zmm0.d = zmm0.d f+ zmm0.d
int128_t zmm6
zmm6.d = -0.5f f- zmm0.d
return zx.q(neg.d(int.d(zmm6.d) s>> 1))
