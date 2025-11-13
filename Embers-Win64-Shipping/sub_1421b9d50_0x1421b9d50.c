// 函数: sub_1421b9d50
// 地址: 0x1421b9d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = 0x3f800000
uint32_t zmm5[0x4] = data_143f4dee0
int32_t rax_1 = *(arg1 + 0x28c) * 0xbb38435 + 0x3619636b
*(arg1 + 0x28c) = rax_1
uint32_t zmm8[0x4] = data_143f4eb40
void* rbx = *(arg1 + 0x1e0)
uint32_t temp0[0x4] = _mm_and_ps(zmm5, zmm8)
void* rax_4 = *(arg1 + 0x1d8)
float zmm4[0x4] = rax_1 u>> 9 | 0x3f800000
zmm4[0] = zmm4[0] - 1f
zmm1[0] = 1f - zmm4[0]
zmm4[0] = zmm4[0] f* *(rax_4 + 0x7c)
zmm4[0] = zmm4[0] f* *(rax_4 + 0x80)
zmm4[0] = zmm4[0] f* *(rax_4 + 0x84)
zmm1[0] = zmm1[0] f* *(rax_4 + 0x70)
zmm1[0] = zmm1[0] + zmm4[0]
zmm1[0] = zmm1[0] f* *(rax_4 + 0x74)
zmm1[0] = zmm1[0] f* *(rax_4 + 0x78)
zmm4[0] = zmm4[0] + zmm1[0]
zmm4[0] = zmm4[0] + zmm1[0]
float temp0_1[0x4] = _mm_unpacklo_ps(zmm4, 0)
float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm1, zmm4[0].q), temp0_1[0].q)
float zmm2[0x4] = data_143f4eb50
float temp0_4[0x4] = _mm_div_ps(temp0_3, zmm8)
float temp0_6[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_4))
zmm2 = _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_4, data_143f4dee0), 2), 
    temp0_6 ^ temp0_4) ^ temp0_6
float temp0_14[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0), 
    _mm_min_ps(_mm_sub_ps(temp0_3, _mm_mul_ps(zmm2, zmm8)), temp0))
float temp0_15[0x4] = _mm_add_ps(temp0_14, zmm8)
zmm2 = _mm_and_ps(temp0_15 ^ temp0_14, _mm_cmpeq_ps(zx.o(0), temp0_14, 2)) ^ temp0_15
float temp0_18[0x4] = _mm_cmpeq_ps(data_143f4eb30, zmm2, 1)
float zmm3[0x4] = _mm_and_ps(_mm_sub_ps(zmm2, zmm8) ^ zmm2, temp0_18) ^ zmm2
float var_68[0x4] = zmm3
float result = _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
float temp0_23[0x4] = _mm_unpacklo_ps(zmm3, _mm_shuffle_ps(zmm3, zmm3, 0x55)[0].q)
*(arg1 + 0x268) = temp0_23.q
*(arg1 + 0x270) = result
int64_t var_78 = temp0_23.q

if (*(rbx + 0x212) == 0)
    int64_t* rbx_1 = *(rbx + 0xc0)
    
    if (rbx_1 != 0)
        char rax_5 = sub_140a80f40()
        
        if (rax_5 != 0)
            jump(*(*rbx_1 + 0x48))
        
        if (data_143f138f4 == rax_5)
            if (data_143de5480 == rax_5)
                jump(*(*rbx_1 + 0x48))
            
            uint32_t rax_6
            rax_6.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_6.b != 0)
                jump(*(*rbx_1 + 0x48))
        
        void var_58
        void** rax_8 = sub_1421b17e0(&var_58, nullptr, 0xff)
        *(*rax_8 + 0x10) = rbx_1
        void* rcx_3 = *rax_8
        int32_t r8_1 = rax_8[2].d
        int64_t* rdx_1 = rax_8[1]
        int64_t* rbx_2 = *(rcx_3 + 0x20)
        int64_t* arg_10 = rbx_2
        void* rdi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_1 += 1
            rbx_2 = arg_10
        
        result = sub_1407c9450(rcx_3, rdx_1, r8_1, 1)
        
        if (rbx_2 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_10)

return result
