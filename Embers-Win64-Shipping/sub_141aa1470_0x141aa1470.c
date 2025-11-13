// 函数: sub_141aa1470
// 地址: 0x141aa1470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* rbp = arg2[3]
int32_t rcx = *(arg1 + 0xd0)
int32_t rbx

if (rcx s>= 0)
    rbx = *(arg1 + 0xd4)
else
    int32_t rcx_1 = rcx * 2
    
    if ((rcx_1 & 0xfffffffe) == 0xfffffffe)
        rbx = -1
    else
        rbx = *(*(rbp + 0x80) + (sx.q(rcx_1) s>> 1 << 2))

int64_t r15 = sx.q(rbx)

if (*(r15 + arg2[4]) == 0)
    sub_141a98300(&arg2[1], rbx)

int64_t rax_6 = arg2[1]
int64_t rcx_6 = r15 * 6
float var_98[0x4] = *(rax_6 + (rcx_6 << 3))
float zmm1[0x4] = *(rax_6 + (rcx_6 << 3) + 0x10)
float var_78[0x4] = *(rax_6 + (rcx_6 << 3) + 0x20)
uint32_t var_c8 = zx.d(*(arg1 + 0xd8))
sub_141de6760(*arg2 + 0x10, &arg2[1], &var_98, rbx)
float zmm2[0x4]
float zmm3[0x4]

if (*(arg1 + 0xd9) == 0)
    zmm2 = zmm1
    zmm3 = var_98
else
    float var_68[0x3][0x4]
    float (* rax_11)[0x4] = sub_140ad7d70(&var_98, &var_68, 
        (sx.q(*(arg1 + 0xd0) * 2) s>> 1) * 0x30 + *(*(rbp + 0x48) + 0x30))
    zmm3 = *rax_11
    var_98 = zmm3
    zmm2 = rax_11[1]
    float var_88_1[0x4] = zmm2
    var_78 = rax_11[2]

float var_a8[0x4] = zmm3
float var_b0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
*(arg1 + 0xdc) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
*(arg1 + 0xe4) = var_b0
void var_b8
int32_t* rax_13 = sub_140adf5d0(&var_a8, &var_b8)
float temp0_3[0x4] = _mm_shuffle_ps(var_78, var_78, 0x55)
*(arg1 + 0xe8) = *rax_13
int32_t rax_14 = rax_13[2]
int32_t result = _mm_shuffle_ps(var_78, var_78, 0xaa).d
uint128_t zmm0_2 = _mm_unpacklo_ps(var_78, temp0_3[0].q)
*(arg1 + 0xf0) = rax_14
*(arg1 + 0xf4) = zmm0_2.q
*(arg1 + 0xfc) = result
__security_check_cookie(rax_1 ^ &var_e8)
return result
