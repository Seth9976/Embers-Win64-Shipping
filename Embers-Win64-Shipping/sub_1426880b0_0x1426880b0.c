// 函数: sub_1426880b0
// 地址: 0x1426880b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = arg1[0x4e].d
int128_t* r12 = arg4
int32_t var_f8 = (*(arg1 + 0x26c)).d
int32_t var_d0 = data_143b515d0
int32_t var_f4 = zmm1.d
uint128_t zmm0
zmm0.q = data_143b515c8.q
int32_t var_f0 = 0x7f7fc99e
*arg4 = zmm0
uint128_t var_d8 = zmm0
arg4[1].q = 0
uint128_t zmm7
zmm7.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000191753454f
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rand()))
zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f+ zmm6.d
zmm0.d = zmm0.d f* 3.05185094e-05f

if (zmm0.d f<= 1f)
    zmm6 = zmm0
else
    zmm6.d = 2f f- zmm0.d

zmm6.d = zmm6.d f* arg3.d
float zmm0_1[0x4]
float zmm6_1
float zmm8_1
zmm0_1, zmm6_1, zmm8_1 = __libm_sse2_sincosf_(zmm7)
int64_t* rdi = arg5
float temp0_3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
zmm0_1[0] = zmm0_1[0] * zmm6_1
int64_t rax_4 = *rdi
temp0_3[0] = temp0_3[0] * zmm6_1
int64_t var_88 = rax_4
zmm0_1[0] = zmm0_1[0] f+ *(arg2 + 4)
void* rax_5 = rdi[1]
void* var_80 = rax_5
temp0_3[0] = temp0_3[0] f+ *arg2
float var_e4 = zmm0_1[0]
float var_e0 = arg2[1].d[0]
float var_e8 = temp0_3[0]

if (rax_5 != 0)
    *(rax_5 + 8) += 1

(*(arg1[0x44] + 0x10))(&arg1[0x44], &var_e8, r12, &var_f8, &var_88, 0)
int64_t temp1 = r12[1].q
bool cond:1 = temp1 != 0

if (temp1 == 0)
    if (arg1[0x95] != 0)
        float zmm3_1[0x4] = *arg2
        float zmm1_1[0x4] = arg2[1].d
        int64_t zmm2 = *(arg2 + 4)
        zmm3_1[0] = zmm3_1[0] - zmm8_1
        zmm1_1[0] = zmm1_1[0] + 3.39999995e+38f
        zmm1_1[0] = zmm1_1[0] - 3.39999995e+38f
        int64_t zmm4_1 = zmm2
        int64_t var_108 = 0
        zmm2.d = zmm2.d f- zmm8_1
        int32_t i_1 = 0
        float var_b8_1 = zmm1_1[0]
        zmm3_1[0] = zmm3_1[0] + zmm8_1
        zmm4_1.d = zmm4_1.d f+ zmm8_1
        float var_a0_1 = zmm1_1[0]
        float temp0_4[0x4] = _mm_unpacklo_ps(zmm3_1, zmm2)
        float var_94_1 = var_b8_1
        int64_t rax_9 = *rdi
        int64_t var_a8 = temp0_4.q
        var_d8.q = rax_9
        void* rax_10 = rdi[1]
        int64_t var_9c_1 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
        char var_90_1 = 1
        var_d0.q = rax_10
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        int32_t zmm10_1 = sub_1426870c0(arg1, &var_a8, &var_108, &var_d8, arg6)
        int32_t i = i_1
        int64_t r15_1 = var_108
        
        if (i s> 0)
            do
                int32_t rax_12 = rand()
                int32_t rdi_1 = i - 1
                uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(i))
                int64_t var_118 = 0
                int32_t var_110_1 = 0
                uint128_t zmm2_1
                zmm2_1.d = _mm_cvtepi32_ps(zx.o(rax_12)).d f* zmm10_1
                zmm2_1.d = zmm2_1.d f* zmm0_2.d
                int32_t rax_13 = int.d(zmm2_1.d)
                
                if (rax_13 s<= rdi_1)
                    rdi_1 = rax_13
                
                int64_t rcx_2 = sx.q(rdi_1) * 3
                int64_t* r14_1 = r15_1 + (rcx_2 << 3)
                char rax_15
                int32_t zmm6_2
                rax_15, zmm6_2, zmm10_1 =
                    sub_142684490(arg1[0x95], *(r15_1 + (rcx_2 << 3)), arg2, &var_118)
                
                if (rax_15 != 0)
                    zmm2_1.d = (*(arg2 + 4)).d f- var_118:4.d
                    int64_t zmm1_2
                    zmm1_2.d = (*arg2).d f- var_118.d
                    zmm0_2.d = arg2[1].d.d f- var_110_1
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm1_2.d = zmm1_2.d f* zmm1_2.d
                    zmm0_2.d = zmm0_2.d f* zmm0_2.d
                    zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                    zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                    
                    if (zmm2_1.d f< zmm6_2)
                        int32_t var_b8_2 = var_110_1
                        int64_t rax_21 = *r14_1
                        zmm0_2.q = var_118
                        *r12 = zmm0_2
                        r12[1].q = rax_21
                        break
                
                int32_t rdx_5 = i - rdi_1 - 1
                
                if (rdx_5 s>= 1)
                    rdx_5 = 1
                
                if (rdx_5 != 0)
                    memcpy(r14_1, r15_1 + sx.q(i - rdx_5) * 0x18, rdx_5 * 0x18)
                
                i -= 1
                i_1 = i
            while (i s> 0)
            
            rdi = arg5
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
    
    cond:1 = r12[1].q != 0

int64_t* rbx_1 = rdi[1]
int64_t* rsi
rsi.b = cond:1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rdi_2 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_2 == 1)
            int64_t r8_6 = *rbx_1
            (*(r8_6 + 8))(rbx_1, 1, r8_6)

return zx.q(rsi.b)
