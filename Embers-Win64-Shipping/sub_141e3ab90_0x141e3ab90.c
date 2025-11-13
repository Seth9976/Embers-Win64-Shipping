// 函数: sub_141e3ab90
// 地址: 0x141e3ab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)
int32_t rax = (rbx + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_14083a7e0(arg1)

int64_t* rdx_1 = *arg1 + rbx * 0xc
*rdx_1 = *arg2
rdx_1[1].d = arg2[1].d
int64_t rdi = sx.q(arg1[3].d)
int32_t rax_4 = (rdi + 1).d
arg1[3].d = rax_4

if (rax_4 s> *(arg1 + 0x1c))
    sub_140638970(&arg1[2])

int64_t rdx_3 = arg1[2]
int64_t rcx_3 = rdi * 6
*(rdx_3 + (rcx_3 << 3)) = *arg3
*(rdx_3 + (rcx_3 << 3) + 0x10) = arg3[1]
*(rdx_3 + (rcx_3 << 3) + 0x20) = arg3[2]
int32_t var_48
sub_140b33170(&arg1[8], &var_48)
int64_t rax_5 = *arg2
int64_t* var_40
var_40[1].d = rbx.d
*var_40 = rax_5
*(var_40 + 0xc) = 0xffffffff
void arg_8
sub_140a6fff0(&arg1[8], &arg_8, (rax_5 u>> 0x20).d + sub_140b5ead0(rax_5.d), var_40, var_48, 
    nullptr)
float zmm5[0x4] = data_143f397e0
int128_t* rax_10 = rbx * 0x30 + arg1[2]
float zmm6[0x4] = *rax_10
float temp0[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_2[0x4] = _mm_add_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0x4e))
float temp0_4[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0x39), temp0_2)
float temp0_5[0x4] = _mm_rsqrt_ps(temp0_4)
float temp0_6[0x4] = _mm_mul_ps(temp0_4, zmm5)
float temp0_11[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_5, temp0_5), temp0_6)), temp0_5), 
    temp0_5)
float temp0_14[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_6))
float result[0x4] = _mm_cmpeq_ps(data_143f39800, temp0_4, 2)
*rax_10 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_14, temp0_11), temp0_11), zmm6) ^ data_143f397d0, result)
    ^ data_143f397d0
return result
