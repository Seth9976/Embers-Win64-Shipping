// 函数: sub_1416e69d0
// 地址: 0x1416e69d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*arg3)
int64_t r11 = rdi * 3
int128_t zmm8 = *(arg2 + (r11 << 2) + 4)
int64_t rbx = sx.q(arg3[1]) * 3
uint128_t zmm0 = *(arg2 + (rbx << 2) + 4)
uint128_t zmm7 = *(arg2 + (r11 << 2))
uint128_t zmm1 = *(arg2 + (rbx << 2))
uint128_t zmm2 = *(arg2 + (rbx << 2) + 8)
uint128_t zmm5
zmm5.d = zmm0.d f- zmm8.d
uint128_t zmm9 = *(arg2 + (r11 << 2) + 8)
uint128_t zmm4
zmm4.d = zmm1.d f- zmm7.d
float zmm3 = (zmm8.d f- zmm0.d) f* zmm8.d
zmm0.d = zmm7.d f- zmm1.d
uint128_t zmm6
zmm6.d = zmm2.d f- zmm9.d
zmm1.d = zmm9.d f- zmm2.d
zmm0.d = zmm0.d f* zmm7.d
zmm1.d = zmm1.d f* zmm9.d
zmm3 = zmm3 f+ zmm0.d f+ zmm1.d
int32_t rax_2

if (zmm3 > 0f)
    zmm2.d = zmm5.d f* zmm5.d
    zmm0.d = zmm4.d f* zmm4.d
    zmm1.d = zmm6.d f* zmm6.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm1.d
    
    if (zmm2.d f< zmm3 || zmm2.d f<= 1.17549435e-38f)
        *arg4 = 1
        int64_t rax_4 = sx.q(arg3[1])
        *arg3 = rax_4.d
        *(arg5 + (rax_4 << 2)) = 0x3f800000
        zmm0 = zx.o(*(arg2 + (rbx << 2)))
        rax_2 = *(arg2 + (rbx << 2) + 8)
    else
        zmm3 = zmm3 f/ zmm2.d
        zmm0.d = 1f - zmm3
        zmm4.d = zmm4.d f* zmm3
        zmm6.d = zmm6.d f* zmm3
        zmm5.d = zmm5.d f* zmm3
        zmm4.d = zmm4.d f+ zmm7.d
        *(arg5 + (rdi << 2)) = zmm0.d
        zmm6.d = zmm6.d f+ zmm9.d
        zmm5.d = zmm5.d f+ zmm8.d
        *(arg5 + (sx.q(arg3[1]) << 2)) = zmm3
        rax_2 = zmm6.d
        zmm0 = _mm_unpacklo_ps(zmm4, zmm5.q)
else
    *arg4 = 1
    *(arg5 + (sx.q(*arg3) << 2)) = 0x3f800000
    zmm0 = zx.o(*(arg2 + (r11 << 2)))
    rax_2 = *(arg2 + (r11 << 2) + 8)

*arg1 = zmm0.q
arg1[1].d = rax_2
return arg1
