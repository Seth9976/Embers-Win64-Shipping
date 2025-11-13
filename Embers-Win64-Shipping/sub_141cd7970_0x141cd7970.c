// 函数: sub_141cd7970
// 地址: 0x141cd7970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg2
int32_t r9 = arg2[1].d
void* rbp = *arg1
int64_t r11 = *(rbp + 0x38)
int64_t rbx = sx.q(*(r11 + sx.q(*(r10 + (sx.q(mods.dp.d(sx.q(arg3 - 1 + r9), r9)) << 2))) * 0x18))
int64_t rsi = sx.q(*(r11 + sx.q(*(r10 + (sx.q(arg3) << 2))) * 0x18))
int64_t rdi = sx.q(*(r11 + sx.q(*(r10 + (sx.q(mods.dp.d(sx.q(arg3 + 1), r9)) << 2))) * 0x18))
void* arg_8
sub_14090aa40(rbp + 0x150, &arg_8, data_143f35cc8)
uint128_t zmm3 = 0x3f800000
uint128_t zmm4 = 0x3f000000
int64_t rdx_5 = **(arg_8 + 0x18)
int64_t rcx_5 = rbx * 3
uint128_t zmm1 = zx.o(*(rdx_5 + (rcx_5 << 2)))
uint128_t zmm11 = *(rdx_5 + (rcx_5 << 2) + 8)
int64_t rcx_6 = rsi * 3
uint128_t zmm8 = zx.o(*(rdx_5 + (rcx_6 << 2)))
int32_t rax_13 = *(rdx_5 + (rcx_6 << 2) + 8)
uint128_t zmm6
zmm6.d = zmm1.d f- zmm8.d
uint128_t zmm10 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
int64_t rcx_7 = rdi * 3
zmm11.d = zmm11.d f- rax_13
int32_t rax_14 = *(rdx_5 + (rcx_7 << 2) + 8)
uint64_t var_a8 = *(rdx_5 + (rcx_7 << 2))
uint128_t zmm9 = zmm8.q:4.d
zmm10.d = zmm10.d f- zmm9.d
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
zmm1.d = zmm11.d f* zmm11.d
uint128_t zmm2
zmm2.d = zmm10.d f* zmm10.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
uint128_t zmm5

if (not(zmm2.d f== 1f))
    if (zmm2.d f>= 9.99999994e-09f)
        zmm3.d = zmm2.d
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm3 = 0x3f800000
        zmm0.d = zmm5.d f* zmm4.d
        zmm4 = 0x3f000000
        zmm5.d = zmm5.d f+ zmm0.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm10.d = zmm10.d f* zmm5.d
        zmm11.d = zmm11.d f* zmm5.d
    else
        zmm6 = data_143dbb1f8
        zmm10 = data_143dbb1fc
        zmm11 = data_143dbb200

uint128_t zmm7
zmm7.d = var_a8.d.d f- zmm8.d
zmm8.d = var_a8:4.d.d f- zmm9.d
zmm9.d = rax_14.d f- rax_13
zmm0.d = zmm7.d f* zmm7.d
zmm2.d = zmm8.d f* zmm8.d
zmm1.d = zmm9.d f* zmm9.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f== zmm3.d))
    if (zmm2.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
        zmm3.d = zmm2.d f* zmm4.d
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = zmm4.d f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = zmm4.d f- zmm3.d
        zmm3 = 0x3f800000
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm7.d = zmm7.d f* zmm5.d
        zmm8.d = zmm8.d f* zmm5.d
        zmm9.d = zmm9.d f* zmm5.d
    else
        zmm7 = data_143dbb1f8
        zmm8 = data_143dbb1fc
        zmm9 = data_143dbb200

zmm0 = 0xbf800000
zmm6.d = zmm6.d f* zmm7.d
zmm10.d = zmm10.d f* zmm8.d
zmm11.d = zmm11.d f* zmm9.d
zmm6.d = zmm6.d f+ zmm10.d
zmm6.d = zmm6.d f+ zmm11.d

if (not(zmm6.d f< -1f))
    zmm0 = _mm_min_ss(zmm6.d, zmm3.d)

return acosf(zmm0.d) __tailcall
