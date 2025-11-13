// 函数: sub_141e16550
// 地址: 0x141e16550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg2[2]
int32_t rdi = 0
float zmm8[0x4] = arg4
float zmm9[0x4] = arg6
int32_t i_2 = arg2[1].d

if (i_2 != 0)
    int64_t rsi_1 = 0
    void* r15_1 = nullptr
    uint64_t i_1 = zx.q(i_2)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    uint64_t i
    
    do
        int64_t rcx = sx.q(*(r15_1 + *(rax + 0x70)))
        
        if (rcx.d != 0xffffffff)
            int32_t* rbx_2 = rcx * 0x3c + *arg1
            arg5[0].o = rbx_2[0xa]
            uint128_t zmm0_1
            float zmm8_1[0x4]
            float zmm9_1[0x4]
            int64_t zmm10_1
            zmm0_1, zmm8_1, zmm9_1, zmm10_1 = sub_141e176e0(rbx_2[9], arg5[0].o, zmm8, zmm9)
            int64_t rax_2 = *arg2
            arg4 = zmm0_1
            arg4[0] = arg4[0] f* *rbx_2
            float zmm2_1[0x4] = zmm0_1
            zmm0_1.d = zmm0_1.d f* rbx_2[2]
            zmm2_1[0] = zmm2_1[0] f* rbx_2[1]
            *(rsi_1 + rax_2 + 0x10) = __addps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(arg4, zmm0_1.q), 
                    _mm_unpacklo_ps(zmm2_1, zmm10_1)[0].q), 
                *(rsi_1 + rax_2 + 0x10))
            int32_t rax_3 = rbx_2[5]
            uint64_t var_e8_1 = *(rbx_2 + 0xc)
            uint32_t zmm0_2[0x4]
            int32_t zmm7_1
            float zmm8_2[0x4]
            float zmm9_2[0x4]
            float zmm10_2
            float zmm11_1[0x4]
            float zmm12_1[0x4]
            int32_t zmm13_1
            zmm0_2, zmm7_1, zmm8_2, zmm9_2, zmm10_2, zmm11_1, zmm12_1, zmm13_1 =
                sub_141e176e0(rbx_2[0xb], rbx_2[0xc], zmm8_1, zmm9_1)
            float zmm2_2[0x4] = zmm0_2
            zmm2_2[0] = zmm2_2[0] f* zmm7_1
            bool cond:0_1 = zmm2_2[0] < zmm10_2
            zmm0_2 = zmm2_2
            zmm0_2[0] = zmm0_2[0] f* 0.159154937f
            
            if (cond:0_1)
                zmm0_2[0] = zmm0_2[0] f- zmm7_1
            else
                zmm0_2[0] = zmm0_2[0] f+ zmm7_1
            
            zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm0_2[0])))
            zmm0_2[0] = zmm0_2[0] f* 6.28318548f
            zmm2_2[0] = zmm2_2[0] f- zmm0_2[0]
            float zmm5_1[0x4]
            
            if (not(zmm2_2[0] <= 1.57079637f))
                zmm0_2 = 0x40490fdb
                zmm5_1 = zmm11_1
                zmm0_2[0] = 3.14159274f - zmm2_2[0]
                zmm2_2 = zmm0_2
            else if (zmm2_2[0] f>= zmm13_1)
                zmm5_1 = zmm12_1
            else
                zmm0_2 = 0xc0490fdb
                zmm5_1 = zmm11_1
                zmm0_2[0] = -3.14159274f - zmm2_2[0]
                zmm2_2 = zmm0_2
            
            uint32_t zmm1_1[0x4] = 0x3638b88e
            float zmm4_1[0x4] = zmm2_2
            arg4 = rax_3
            float zmm6_1[0x4] = var_e8_1.d
            float (* rax_5)[0x4] = *arg2
            zmm4_1[0] = zmm4_1[0] * zmm2_2[0]
            zmm0_2 = zmm4_1
            zmm0_2[0] = zmm0_2[0] f* 2.3889859e-08f
            zmm1_1[0] = 2.75255616e-06f f- zmm0_2[0]
            zmm0_2 = zmm4_1
            zmm0_2[0] = zmm0_2[0] f* 2.60516146e-07f
            zmm1_1[0] = zmm1_1[0] f* zmm4_1[0]
            zmm1_1[0] = zmm1_1[0] f- 0.000198408743f
            zmm1_1[0] = zmm1_1[0] f* zmm4_1[0]
            zmm1_1[0] = zmm1_1[0] f+ 0.00833333097f
            zmm1_1[0] = zmm1_1[0] f* zmm4_1[0]
            zmm1_1[0] = zmm1_1[0] f- 0.166666672f
            zmm1_1[0] = zmm1_1[0] f* zmm4_1[0]
            zmm1_1[0] = zmm1_1[0] f+ zmm12_1[0]
            zmm1_1[0] = zmm1_1[0] f* zmm2_2[0]
            zmm2_2 = var_e8_1:4.d
            zmm6_1[0] = zmm6_1[0] f* zmm1_1[0]
            zmm2_2[0] = zmm2_2[0] f* zmm1_1[0]
            arg4[0] = arg4[0] f* zmm1_1[0]
            zmm1_1 = 0x37cfb4c2
            zmm1_1[0] = 2.47604949e-05f f- zmm0_2[0]
            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
            zmm6_1[0] = zmm2_2[0]
            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc6)
            zmm6_1[0] = arg4[0]
            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x27)
            zmm1_1[0] = zmm1_1[0] f* zmm4_1[0]
            zmm1_1[0] = zmm1_1[0] f- 0.00138883782f
            zmm1_1[0] = zmm1_1[0] f* zmm4_1[0]
            zmm1_1[0] = zmm1_1[0] f+ 0.0416666381f
            zmm1_1[0] = zmm1_1[0] f* zmm4_1[0]
            zmm1_1[0] = zmm1_1[0] f- zmm7_1
            zmm1_1[0] = zmm1_1[0] f* zmm4_1[0]
            zmm4_1 = *(rax_5 + rsi_1)
            zmm1_1[0] = zmm1_1[0] f+ zmm12_1[0]
            zmm1_1[0] = zmm1_1[0] f* zmm5_1[0]
            zmm5_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1b)
            zmm6_1[0] = zmm1_1[0]
            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x39)
            zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x4e)
            zmm5_1 = _mm_mul_ps(zmm5_1, _mm_shuffle_ps(zmm6_1, zmm6_1, 0))
            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xff), zmm4_1)
            zmm5_1 = __mulps_xmmps_memps(zmm5_1, data_143f39670)
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xb1)
            zmm5_1 = _mm_add_ps(zmm5_1, zmm0_2)
            zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55))
            zmm4_1 = _mm_mul_ps(zmm4_1, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa))
            zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f39660)
            zmm4_1 = __mulps_xmmps_memps(zmm4_1, data_143f39650)
            *(rax_5 + rsi_1) = _mm_add_ps(_mm_add_ps(zmm5_1, zmm1_1), zmm4_1)
            float zmm0[0x4]
            int64_t zmm10_3
            zmm0, arg5, zmm8, zmm9, zmm10_3 = sub_141e176e0(rbx_2[0xd], rbx_2[0xe], zmm8_2, zmm9_2)
            int64_t rax_6 = *arg2
            arg4 = zmm0
            arg4[0] = arg4[0] f* rbx_2[6]
            float zmm2[0x4] = zmm0
            zmm2[0] = zmm2[0] f* rbx_2[7]
            int64_t zmm4_2 = zmm0[0].q
            arg5[0].o = *(rax_6 + rsi_1 + 0x20)
            zmm0 = arg5[0].o
            arg4[0] = arg4[0] f+ arg5[0]
            zmm0 = _mm_shuffle_ps(zmm0, arg5[0].o, 0x55)
            zmm4_2.d = zmm4_2.d f* rbx_2[8]
            zmm2[0] = zmm2[0] + zmm0[0]
            arg5[0].o = _mm_shuffle_ps(arg5[0].o, arg5[0].o, 0xaa)
            zmm4_2.d = zmm4_2.d f+ arg5[0]
            zmm2 = _mm_unpacklo_ps(zmm2, zmm10_3)
            *(rax_6 + rsi_1 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(arg4, zmm4_2), zmm2[0].q)
        
        r15_1 += 4
        rsi_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = 0

uint64_t result
float zmm8_3[0x4]
uint32_t zmm9_3[0x4]
result, zmm8_3, zmm9_3 = sub_141e451a0(arg2, arg5)
void* rcx_2 = arg3[2]

if (rcx_2 != 0)
    result = zx.q(arg3[3].w)
    
    if (arg3[1].d == result.d)
        int32_t r15_2 = *(arg1 + 0x18)
        
        if (*(rcx_2 + 8) s<= r15_2)
            r15_2 = *(rcx_2 + 8)
        
        if (r15_2 != 0)
            int64_t rbx_3 = 0
            
            do
                result = arg3[2]
                uint64_t rcx_3 = zx.q(rdi.w)
                int16_t rdx
                
                if (rcx_3.d s>= *(result + 8))
                    rdx = -1
                else
                    result = *result
                    rdx = *(result + (rcx_3 << 1))
                
                if (rdx != 0xffff)
                    result = *(arg1 + 0x10)
                    int64_t rbp_1 = *arg3
                    uint64_t rsi_2 = zx.q(rdx)
                    uint32_t zmm0_3[0x4]
                    int32_t zmm10_4
                    zmm0_3, zmm8_3, zmm9_3, zmm10_4 =
                        sub_141e176e0(*(rbx_3 + result), *(rbx_3 + result + 4), zmm8_3, zmm9_3)
                    
                    if (not(zmm0_3[0] f== zmm10_4))
                        zmm0_3[0] = zmm0_3[0] f+ *(rbp_1 + (rsi_2 << 3))
                        *(rbp_1 + (rsi_2 << 3) + 4) = 1
                        *(rbp_1 + (rsi_2 << 3)) = zmm0_3[0]
                
                rdi += 1
                rbx_3 += 8
            while (rdi != r15_2)

return result
