// 函数: sub_14108d160
// 地址: 0x14108d160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *arg1
float zmm5 = arg2[0]
int128_t zmm8 = zx.o(0)
float zmm10[0x4] = arg3
arg3[0] = arg3[0] * zmm10[0]
int128_t* rax = *rdx
float arg_10 = arg3[0]
arg3[0] = arg3[0] f* arg4.d
int128_t zmm15 = 0x80000000
float zmm4 = (arg4.d f* arg4.d - 1f) * arg3[0]
float zmm0[0x4] = *rax
int128_t* rax_1 = rdx[1]
zmm0[0] = zmm0[0] * zmm0[0]
zmm0[0] = zmm0[0] + zmm4
float zmm7[0x4] = _mm_sqrt_ss(0, zmm0[0])
zmm0 = *rax_1
zmm0[0] = zmm0[0] * zmm0[0]
zmm7[0] = zmm7[0] - arg3[0]
zmm0[0] = zmm0[0] + zmm4

if (not(zmm0[0] < 0f))
    float temp0_1[0x4] = _mm_sqrt_ss(zmm0[0], zmm0[0])
    arg2 = arg3 ^ 0x80000000
    arg2[0] = arg2[0] - temp0_1[0]
    
    if (not(arg2[0] < 0f) && not(zmm7[0] <= arg2[0]))
        zmm7 = arg2

int128_t zmm11
zmm11.d = 1f / zmm5
int32_t rdi = *arg1[1]
float zmm6[0x4] = *arg1[2]
float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(rdi))
zmm7[0] = zmm7[0] / temp0_2[0]
zmm6[0] = zmm6[0] - zmm10[0]
zmm6[0] = zmm6[0] f* zmm11.d
int32_t rbx = 1
float result_1[0x4] = expf(zmm6[0])
float result[0x4]

if (rdi s>= 1)
    do
        arg3 = zx.o(0)
        arg3[0] = float.s(rbx)
        arg3[0] = arg3[0] * zmm7[0]
        arg3[0] = arg3[0] + arg3[0]
        arg3[0] = arg3[0] * arg3[0]
        arg3[0] = arg3[0] f+ arg_10.d
        arg3[0] = arg3[0] * zmm10[0]
        arg3[0] = arg3[0] f* arg4.d
        arg3[0] = arg3[0] + arg3[0]
        float temp0_3[0x4] = _mm_sqrt_ss(arg3[0], arg3[0])
        zmm6[0] = zmm6[0] - temp0_3[0]
        zmm6[0] = zmm6[0] f* zmm11.d
        result = expf(zmm6[0])
        result_1[0] = result_1[0] * 0.5f
        rbx += 1
        result[0] = result[0] * 0.5f
        result[0] = result[0] + result_1[0]
        result_1 = result
        result[0] = result[0] * zmm7[0]
        zmm8.d = zmm8.d f+ result[0]
    while (rbx s<= rdi)
    
    zmm15 = 0x80000000

zmm6[0] = zmm6[0] / zmm10[0]
zmm6[0] = zmm6[0] * zmm6[0]
int128_t zmm9
zmm9.d = 1f - zmm6[0]

if (not(arg4.d f>= (_mm_sqrt_ss(zx.o(0)[0], zmm9.d) ^ zmm15)[0]))
    return 0x41cdcd6500000000

result = zx.o(0)
result[0].q = fconvert.d(zmm8.d)
return result
