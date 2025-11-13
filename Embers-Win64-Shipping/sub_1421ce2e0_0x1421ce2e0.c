// 函数: sub_1421ce2e0
// 地址: 0x1421ce2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = *(arg2 + 0x12c)
void* r13 = arg2[5]
uint64_t result
uint128_t zmm0
float zmm6[0x4]
zmm0, result, zmm6 = sub_141fe5610(arg1 + 0x30, zmm1, arg2[3], nullptr)
char rcx_1 = (*(arg1 + 0x60)).b
float zmm7 = zmm0.d

if ((rcx_1 & 4) != 0)
    result = arg2[3]
    zmm7 = zmm7 f* *(result + 0x1e8)

if ((rcx_1 & 1) == 0)
    result = arg2[3]
    zmm7 = zmm7 f+ *(result + 0x1d8)

int32_t rdi = arg2[0x23].d
int32_t rdi_1 = rdi - 1
int64_t r14 = arg2[0x1e]
int32_t r15 = *(arg2 + 0x114)

if (rdi - 1 s>= 0)
    float var_28_1[0x4] = zmm6
    int16_t* rsi_1 = arg2[0x1f] + (sx.q(rdi_1) << 1)
    int32_t temp1_1
    
    do
        result = zx.q(zx.d(*rsi_1) * r15)
        
        if ((*(result + r14 + 0x5c) & 0x4000000) == 0)
            int32_t rax_2 = *(result + r14 + 0x18)
            uint64_t var_48_1 = *(result + r14 + 0x10)
            
            if ((*(*(r13 + 0x30) + 0x59) & 1) == 0)
                zmm6 = rax_2
            else
                void* rax_4 = arg2[3]
                float zmm5_1[0x4] = _mm_unpacklo_ps(var_48_1.d, rax_2.q)
                float zmm4_1[0x4] = *(rax_4 + 0x1c0)
                float zmm2_1[0x4] = _mm_unpacklo_ps(var_48_1:4.d, zx.o(0)[0].q)
                float zmm1_1[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                zmm5_1 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm5_1, zmm2_1[0].q), *(rax_4 + 0x1e0))
                zmm2_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm2_1)
                float zmm3_1[0x4] =
                    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm1_1), zmm0)
                zmm3_1 = _mm_add_ps(zmm3_1, zmm3_1)
                zmm4_1 = _mm_mul_ps(zmm4_1, zmm3_1)
                zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2), zmm1_1)
                zmm0 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
                zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm0, zmm2_1)), zmm4_1)
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            
            result = zx.q(*(arg1 + 0x60)) & 2
            
            if (result.d != 0 && zmm6[0] < zmm7)
                result = (*(*arg2 + 0xe8))(arg2, zx.q(rdi_1))
            else if (result.d == 0 && not(zmm6[0] <= zmm7))
                result = (*(*arg2 + 0xe8))(arg2, zx.q(rdi_1))
        
        rsi_1 -= 2
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)

return result
