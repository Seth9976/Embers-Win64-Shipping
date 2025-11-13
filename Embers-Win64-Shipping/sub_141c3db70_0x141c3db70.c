// 函数: sub_141c3db70
// 地址: 0x141c3db70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_20 = arg4[0]
int32_t* rdi = arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3)
float var_108[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
float zmm11[0x4] = arg4
float zmm0[0x4] = _mm_shuffle_epi32(zx.o(arg3), 0)
void*** rax_4 = j_sub_140a82f30(0x20)
void*** rax_5
int64_t rsi_1

if (rax_4 == 0)
    rsi_1 = 0
    rax_5 = nullptr
else
    rax_5 = sub_141c2dbf0(rax_4, ((temp1 - temp0) s>> 1) + 1, *rdi)
    rsi_1 = 0

*arg1 = rax_5
int32_t i = 0
int32_t i_1 = 0

if (*rdi s<= 0)
    return arg1

int32_t* r12_1 = nullptr
float zmm6[0x4]
float var_58_1[0x4] = zmm6
float zmm7[0x4]
float var_68_1[0x4] = zmm7
float zmm9[0x4] = 0x40000000
float zmm10[0x4]
float var_98_1[0x4] = zmm10
float zmm12[0x4] = 0x3f000000
float zmm13[0x4] = zx.o(0)
float zmm14[0x4] = 0xbf000000
float zmm15[0x4] = 0x3f800000
uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(arg3))
int32_t* var_138_1 = nullptr
int32_t arg_18 = zmm8.d

do
    float zmm1[0x4] = zx.o(0)
    zmm15[0] = zmm15[0] f/ rdi[1]
    zmm1[0] = float.s(i)
    zmm1[0] = zmm1[0] * zmm15[0]
    zmm10 = powf(zmm9[0], zmm1[0])
    zmm10[0] = zmm10[0] f* rdi[2]
    zmm7 = _mm_shuffle_ps(zmm10, zmm10, 0)
    zmm9 = powf(zmm9[0], zmm15[0])
    zmm10[0] = zmm10[0] f* rdi[3]
    zmm9[0] = zmm9[0] - zmm15[0]
    zmm9[0] = zmm9[0] * zmm10[0]
    zmm10[0] = zmm10[0] - zmm9[0]
    
    if (not(zmm10[0] > zmm11[0]))
        zmm11[0] = zmm11[0] + zmm11[0]
        
        if (not(zmm10[0] > zmm11[0]))
            float (* var_168)[0x4] = nullptr
            uint128_t zmm2
            zmm2.d = zmm9.d f* 6.06970835f
            int32_t var_15c_1 = 0
            float (* rdi_1)[0x4] = nullptr
            zmm11[0] = zmm11[0] * zmm12[0]
            zmm10[0] = zmm10[0] f- zmm2.d
            
            if (zmm10[0] >= zmm13[0])
                zmm1 = _mm_min_ss(zmm10[0], zmm11[0])
            else
                zmm1 = zmm13
            
            zmm2.d = zmm2.d f+ zmm10[0]
            
            if (zmm2.d f>= zmm13[0])
                zmm2 = _mm_min_ss(zmm2.d, zmm11[0])
            else
                zmm2 = zmm13
            
            zmm2.d = zmm2.d f* zmm8.d
            int32_t r14_1 = 1
            int32_t rdx_2 = 0
            zmm12 = zmm15
            zmm1[0] = zmm1[0] f* zmm8.d
            zmm12[0] = zmm12[0] / zmm11[0]
            zmm2.d = zmm2.d f* zmm12[0]
            zmm1[0] = zmm1[0] * zmm12[0]
            zmm2.d = zmm2.d f+ zmm2.d
            float var_140_1 = zmm12[0]
            zmm1[0] = zmm1[0] + zmm1[0]
            zmm2.d = zmm2.d f- 0.5f
            zmm14[0] = zmm14[0] - zmm1[0]
            int32_t r13_3 = neg.d(int.d(zmm14[0]) s>> 1)
            
            if ((int.d(zmm2.d) s>> 1) - r13_3 + 1 s>= 1)
                r14_1 = (int.d(zmm2.d) s>> 1) - r13_3 + 1
            
            zmm14 = _mm_shuffle_epi32(zx.o(r13_3), 0)
            
            if (r14_1 s> 0)
                int32_t var_160_1 = 0
                sub_1405dadb0(&var_168, r14_1)
                rdx_2 = var_160_1
                rdi_1 = var_168
            
            int32_t j_6 = r14_1 + rdx_2
            
            if (j_6 s> var_15c_1)
                sub_1406105e0(&var_168)
                rdi_1 = var_168
            
            int32_t j = 0
            zmm8.d = zmm9.d f* zmm9[0]
            zmm2 = _mm_shuffle_ps(zmm8, zmm8, 0)
            float zmm0_1[0x4]
            
            if (r14_1 s> 0 && r14_1 u>= 4)
                zmm12 = data_142e11d00
                j = 0
                rsi_1 = 0
                int32_t rax_11 = r14_1 & 0x80000003
                
                if (rax_11 s< 0)
                    rax_11 = ((rax_11 - 1) | 0xfffffffc) + 1
                
                zmm0_1 = __cvtdq2ps_xmmps_memdq(zmm0)
                zmm13 = data_142d3f790
                zmm6 = _mm_rcp_ps(zmm0_1)
                zmm11 = _mm_rcp_ps(zmm2)
                zmm1 = _mm_mul_ps(zmm6, zmm6)
                zmm6 = _mm_add_ps(zmm6, zmm6)
                zmm1 = _mm_mul_ps(zmm1, zmm0_1)
                zmm0_1 = _mm_mul_ps(zmm11, zmm11)
                zmm11 = _mm_add_ps(zmm11, zmm11)
                zmm6 = _mm_sub_ps(zmm6, zmm1)
                zmm11 = _mm_sub_ps(zmm11, _mm_mul_ps(zmm0_1, zmm2))
                
                do
                    zmm0_1 = _mm_sub_ps(
                        _mm_mul_ps(
                            _mm_mul_ps(
                                _mm_cvtepi32_ps(_mm_add_epi32(
                                    _mm_add_epi32(_mm_shuffle_epi32(zx.o(j), 0), zmm12), zmm14)), 
                                var_108), 
                            zmm6), 
                        zmm7)
                    zmm0_1, zmm6, zmm7 = sub_142c94120(_mm_mul_ps(
                        _mm_mul_ps(_mm_mul_ps(zmm0_1, zmm0_1), zmm13), zmm11))
                    *(rdi_1 + (rsi_1 << 2)) = zmm0_1
                    rsi_1 += 4
                    j += 4
                while (j s< r14_1 - rax_11)
                
                zmm15 = 0x3f800000
                zmm13 = zx.o(0)
                zmm11 = arg_20
                zmm12 = var_140_1
            
            zmm14 = 0xbf000000
            int64_t r12_4 = sx.q(r14_1)
            
            if (rsi_1 s< r12_4)
                int32_t r14_2 = j + r13_3
                zmm15[0] = zmm15[0] f/ arg_18
                zmm15[0] = zmm15[0] f/ zmm8.d
                
                do
                    zmm0_1 = _mm_cvtepi32_ps(zx.o(r14_2))
                    zmm0_1[0] = zmm0_1[0] * zmm11[0]
                    zmm0_1[0] = zmm0_1[0] * zmm15[0]
                    zmm0_1[0] = zmm0_1[0] - zmm10[0]
                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                    zmm0_1[0] = zmm0_1[0] * -0.5f
                    zmm0_1[0] = zmm0_1[0] * zmm15[0]
                    (*rdi_1)[rsi_1] = expf(zmm0_1[0])[0]
                    r14_2 += 1
                    rsi_1 += 1
                while (rsi_1 s< r12_4)
            
            if (j_6 s> 0)
                float (* rsi_2)[0x4] = rdi_1
                uint64_t j_5 = zx.q(j_6)
                uint64_t j_1
                
                do
                    if (_finite(_mm_cvtps_pd((*rsi_2)[0].q)[0].q) == 0)
                        *rsi_2 = 0
                    
                    rsi_2 = &(*rsi_2)[1]
                    j_1 = j_5
                    j_5 -= 1
                while (j_1 != 1)
            
            zmm8 = arg_18
            zmm12[0] = zmm12[0] * zmm9[0]
            zmm15[0] = zmm15[0] f/ zmm8.d
            zmm6 = _mm_max_ss(zmm12[0], zmm15[0])
            int64_t j_10
            
            if (j_6 s> 0)
                int64_t j_2 = 0
                zmm1 = zmm13
                
                if (j_6 s> 0 && j_6 u>= 8)
                    zmm2 = zx.o(0)
                    zmm1 = zx.o(0)
                    int32_t rdx_5 = j_6 & 0x80000007
                    
                    if (rdx_5 s< 0)
                        rdx_5 = ((rdx_5 - 1) | 0xfffffff8) + 1
                    
                    do
                        zmm2 = _mm_add_ps(zmm2, *(rdi_1 + (j_2 << 2)))
                        zmm0_1 = *(rdi_1 + (j_2 << 2) + 0x10)
                        j_2 += 8
                        zmm1 = _mm_add_ps(zmm1, zmm0_1)
                    while (j_2 s< sx.q(j_6 - rdx_5))
                    
                    zmm2 = _mm_add_ps(zmm2, zmm1)
                    zmm1 = zmm2
                    zmm1[0].q = zmm2 u>> 0x40
                    zmm1 = _mm_add_ps(zmm1, zmm2)
                    zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xf5)
                    zmm1[0] = zmm1[0] + zmm0_1[0]
                
                j_10 = sx.q(j_6)
                
                if (j_2 s< j_10)
                    if (j_10 - j_2 s>= 4)
                        void* rax_20 = &(*rdi_1)[j_2 + 2]
                        int64_t j_4 = ((j_10 - j_2 - 4) u>> 2) + 1
                        j_2 += j_4 << 2
                        int64_t j_3
                        
                        do
                            zmm1[0] = zmm1[0] f+ *(rax_20 - 8)
                            zmm1[0] = zmm1[0] f+ *(rax_20 - 4)
                            zmm1[0] = zmm1[0] f+ *rax_20
                            zmm1[0] = zmm1[0] f+ *(rax_20 + 4)
                            rax_20 += 0x10
                            j_3 = j_4
                            j_4 -= 1
                        while (j_3 != 1)
                    
                    for (; j_2 s< j_10; j_2 += 1)
                        zmm1[0] = zmm1[0] + (*rdi_1)[j_2]
            
            if (j_6 s<= 0 || zmm1[0] >= 0.949999988f)
                zmm12 = 0x3f000000
            else
                memset(rdi_1, 0, j_10 << 2)
                zmm2.d = zmm8.d f* zmm10[0]
                zmm0_1 = _mm_cvtepi32_ps(zx.o(r13_3))
                zmm2.d = zmm2.d f* zmm12[0]
                zmm12 = 0x3f000000
                zmm2.d = zmm2.d f- zmm0_1[0]
                zmm1 = zmm2
                zmm1[0] = zmm1[0] f+ zmm2.d
                zmm1[0] = zmm1[0] - 0.5f
                int32_t rcx_5 = int.d(zmm1[0]) s>> 1
                
                if (rcx_5 s< 0)
                label_141c3e13d:
                    
                    if (rcx_5 + 1 s>= 0 && rcx_5 + 1 s< j_6)
                        zmm6 = zmm15
                        (*rdi_1)[sx.q(rcx_5) + 1] = 0x3f800000
                else if (rcx_5 + 1 s>= j_6)
                    if (rcx_5 s>= j_6)
                        goto label_141c3e13d
                    
                    zmm6 = zmm15
                    (*rdi_1)[sx.q(rcx_5)] = 0x3f800000
                else
                    int64_t rax_22 = sx.q(rcx_5)
                    zmm6 = zmm15
                    zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(rcx_5))[0]
                    zmm15[0] = zmm15[0] f- zmm2.d
                    zmm15[0] = zmm15[0] - zmm15[0]
                    (*rdi_1)[rax_22] = zmm15[0]
                    (*rdi_1)[rax_22 + 1] = zmm15[0]
            
            uint32_t rcx_6 = zx.d(arg2[4].b)
            
            if (rcx_6 != 0)
                if (rcx_6 == 1)
                    zmm0_1 = zmm8
                    zmm0_1[0] = zmm0_1[0] * zmm6[0]
                    zmm0_1[0] = zmm0_1[0] * 2.50662827f
                    zmm2 = _mm_sqrt_ss(0, zmm0_1[0])
                else
                    zmm2.d = zmm8.d f* zmm6[0]
                    zmm2.d = zmm2.d f* 2.50662827f
                
                if (not(zmm2.d f<= zmm13[0]) && not(zmm2.d f== zmm15[0]))
                    zmm15[0] = zmm15[0] f/ zmm2.d
                    int32_t j_8 = j_6
                    float var_f8[0x4] = rdi_1.o
                    sub_141c34660(&var_f8, zmm15)
            
            if (r13_3 s>= ((temp1 - temp0) s>> 1) + 1)
                j_6 = 0
                r13_3 = 0
                int32_t j_7 = 0
                
                if (var_15c_1 != 0)
                    sub_1405dadb0(&var_168, 0)
                    rdi_1 = var_168
                    j_6 = j_7
            else if (j_6 + r13_3 s> ((temp1 - temp0) s>> 1) + 1)
                int32_t rsi_4 = ((temp1 - temp0) s>> 1) + 1 - r13_3
                
                if (rsi_4 s> j_6)
                    int32_t rsi_5 = rsi_4 - j_6
                    int64_t j_11 = sx.q(j_6)
                    j_6 = j_11.d + rsi_5
                    
                    if (j_6 s> var_15c_1)
                        sub_1406105e0(&var_168)
                        rdi_1 = var_168
                    
                    memset(&(*rdi_1)[j_11], 0, sx.q(rsi_5) << 2)
                else if (rsi_4 s< j_6)
                    int32_t rax_28 = j_6 - rsi_4
                    
                    if (j_6 != rsi_4)
                        int32_t j_9 = j_6 - rax_28
                        
                        if (j_9 != rsi_4)
                            memmove(&(*rdi_1)[sx.q(rsi_4)], &(*rdi_1)[sx.q(rax_28 + rsi_4)], 
                                (j_9 - rsi_4) << 2)
                        
                        sub_1405dac90(&var_168)
                        rdi_1 = var_168
                        j_6 = j_9
            
            uint64_t rsi_6 = 0
            r12_1 = var_138_1
            uint64_t var_150 = 0
            void*** r14_3 = *arg1
            *(r12_1 + r14_3[2]) = r13_3
            int32_t r15_1
            int32_t var_144
            
            if (j_6 != 0)
                sub_140638750(&var_150, j_6, 0)
                rsi_6 = var_150
                memcpy(rsi_6, rdi_1, j_6 << 2)
                r15_1 = var_144
            else
                r15_1 = 0
                var_144 = 0
            void* r14_6 = &r14_3[2][1] + r12_1
            
            if (r14_6 == &var_150)
                if (rsi_6 != 0)
                    sub_140a74f90(rsi_6)
                
                rsi_1 = 0
            else
                int64_t rcx_19 = *r14_6
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                *r14_6 = rsi_6
                rsi_1 = 0
                var_150 = 0
                int32_t var_148_1
                var_148_1.q = 0
                *(r14_6 + 8) = j_6
                *(r14_6 + 0xc) = r15_1
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
            
            rdi = arg2
    
    r12_1 = &r12_1[6]
    zmm9 = 0x40000000
    i = i_1 + 1
    i_1 = i
    var_138_1 = r12_1
while (i s< *rdi)

return arg1
