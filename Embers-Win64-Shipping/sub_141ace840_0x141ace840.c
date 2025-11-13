// 函数: sub_141ace840
// 地址: 0x141ace840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = data_143f2ba08
int32_t* rcx = *arg1
float zmm4 = __maxss_xmmss_memss(arg3.d, 0x38d1b717)
float arg_18 = zmm4
bool cond:0 = data_143de5480 == 0
uint64_t result = zx.q(rcx[arg1[1] * 0xf - 0xd])
uint64_t var_178 = *(sx.q(arg1[1].d) * 0x3c + rcx - 0x3c)
int32_t var_170 = result.d
int64_t rdx

if (cond:0)
    rdx = 0
else
    result = GetCurrentThreadId()
    rcx = *arg1
    zmm4 = arg_18
    rdx.b = result.d != data_143de5470

uint128_t zmm3 = *(rsi + (rdx << 2))
int32_t* rdi = rcx
float zmm12[0x4] = 0x3f800000
int32_t arg_8

if (zmm3.d f>= 0f)
    arg_8 = _mm_min_ss(zmm3.d, 0x3f800000).d
else
    arg_8 = 0

float zmm9[0x4] = *arg2
uint128_t zmm6 = *(arg2 + 4)
zmm9[0] = zmm9[0] f- *rcx
uint128_t zmm8 = *(arg2 + 8)
arg3.d = zmm6.d f- rcx[1]
uint128_t zmm0
zmm0.d = zmm8.d f- rcx[2]
zmm9[0] = zmm9[0] * zmm9[0]
arg3.d = arg3.d f* arg3.d
zmm0.d = zmm0.d f* zmm0.d
arg3.d = arg3.d f+ zmm9[0]
arg3.d = arg3.d f+ zmm0.d
float zmm11[0x4] = _mm_sqrt_ss(0, arg3.d)
float arg_10 = zmm11[0]

if (not(zmm11[0] <= zmm4))
    int32_t r13_1 = 1
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    int64_t var_d8_1 = arg5.q
    float zmm1[0x4]
    
    if (*(arg1 + 0x34) != 0)
        int32_t var_188
        uint128_t zmm7_1
        zmm6, zmm7_1, zmm8, zmm9, zmm11, zmm12 = sub_141ab4480(&var_188, arg1, &var_178, arg2)
        int32_t i = 1
        
        if (*(arg1 + 0x24) - 1 s> 1)
            int32_t var_180
            float zmm5_1[0x4] = var_180
            float (* rcx_2)[0x4] = 0x3c
            int32_t var_184
            uint128_t zmm4_1 = var_184
            
            do
                int64_t rdx_2 = *arg1
                zmm14 = data_143dbb200
                arg5 = data_143dbb1fc
                zmm3 = data_143dbb1f8
                zmm6 = *(rcx_2 + rdx_2 - 0x3c)
                zmm8.d = (*(rcx_2 + rdx_2 - 0x38)).d f- *(rcx_2 + rdx_2 + 4)
                zmm9 = *(rcx_2 + rdx_2 - 0x34)
                zmm9[0] = zmm9[0] f- *(rcx_2 + rdx_2 + 8)
                zmm10 = *(rcx_2 + rdx_2)
                zmm6.d = zmm6.d f- zmm10[0]
                arg3.d = zmm8.d f* zmm8.d
                zmm9[0] = zmm9[0] * zmm9[0]
                zmm0.d = zmm6.d f* zmm6.d
                arg3.d = arg3.d f+ zmm0.d
                arg3.d = arg3.d f+ zmm9[0]
                
                if (not(arg3.d f== zmm12[0]))
                    if (arg3.d f>= 9.99999994e-09f)
                        zmm4_1.d = zmm7_1.d
                        float temp0_3[0x4] = _mm_rsqrt_ss(arg3[0], arg3.d)
                        zmm3.d = arg3.d f* zmm4_1.d
                        zmm0.d = temp0_3.d f* temp0_3[0]
                        zmm1 = zmm3
                        zmm1[0] = zmm1[0] f* zmm0.d
                        arg3.d = zmm4_1.d f- zmm1[0]
                        zmm0.d = temp0_3.d f* arg3.d
                        temp0_3[0] = temp0_3[0] f+ zmm0.d
                        temp0_3[0] = temp0_3[0] * temp0_3[0]
                        zmm3.d = zmm3.d f* temp0_3[0]
                        zmm4_1.d = zmm4_1.d f- zmm3.d
                        zmm3 = data_143dbb1f8
                        zmm0.d = temp0_3.d f* zmm4_1.d
                        zmm4_1 = var_184
                        temp0_3[0] = temp0_3[0] f+ zmm0.d
                        zmm6.d = zmm6.d f* temp0_3[0]
                        zmm8.d = zmm8.d f* temp0_3[0]
                        zmm9[0] = zmm9[0] * temp0_3[0]
                        zmm5_1 = var_180
                    else
                        zmm6 = zmm3
                        zmm8 = arg5
                        zmm9 = zmm14
                
                zmm13 = zmm6
                zmm12 = zmm9
                zmm9[0] = zmm9[0] f* var_188
                zmm0 = zmm8
                zmm8.d = zmm8.d f* var_188
                zmm6.d = zmm6.d f* zmm4_1.d
                zmm0.d = zmm0.d f* zmm5_1[0]
                zmm8.d = zmm8.d f- zmm6.d
                zmm13.d = zmm13.d f* zmm5_1[0]
                zmm6.d = (*(rcx_2 + rdx_2 + 0x40)).d f- *(rcx_2 + rdx_2 + 4)
                zmm13.d = zmm13.d f- zmm9[0]
                zmm12[0] = zmm12[0] f* zmm4_1.d
                zmm9 = *(rcx_2 + rdx_2 + 0x3c)
                zmm9[0] = zmm9[0] - zmm10[0]
                zmm10 = *(rcx_2 + rdx_2 + 0x44)
                zmm10[0] = zmm10[0] f- *(rcx_2 + rdx_2 + 8)
                zmm12[0] = zmm12[0] f- zmm0.d
                arg3.d = zmm6.d f* zmm6.d
                zmm0.d = zmm9.d f* zmm9[0]
                zmm10[0] = zmm10[0] * zmm10[0]
                arg3.d = arg3.d f+ zmm0.d
                arg3.d = arg3.d f+ zmm10[0]
                
                if (not(arg3.d f== 1f))
                    if (arg3.d f>= 9.99999994e-09f)
                        zmm4_1.d = zmm7_1.d
                        float temp0_4[0x4] = _mm_rsqrt_ss(arg3[0], arg3.d)
                        zmm3.d = arg3.d f* zmm4_1.d
                        zmm0.d = temp0_4.d f* temp0_4[0]
                        zmm1 = zmm3
                        zmm1[0] = zmm1[0] f* zmm0.d
                        arg3.d = zmm4_1.d f- zmm1[0]
                        zmm0.d = temp0_4.d f* arg3.d
                        temp0_4[0] = temp0_4[0] f+ zmm0.d
                        temp0_4[0] = temp0_4[0] * temp0_4[0]
                        zmm3.d = zmm3.d f* temp0_4[0]
                        zmm4_1.d = zmm4_1.d f- zmm3.d
                        zmm0.d = temp0_4.d f* zmm4_1.d
                        temp0_4[0] = temp0_4[0] f+ zmm0.d
                        zmm9[0] = zmm9[0] * temp0_4[0]
                        zmm6.d = zmm6.d f* temp0_4[0]
                        zmm10[0] = zmm10[0] * temp0_4[0]
                        zmm5_1 = var_180
                    else
                        zmm9 = zmm3
                        zmm6 = arg5
                        zmm10 = zmm14
                
                zmm6.d = zmm6.d f* zmm13.d
                zmm9[0] = zmm9[0] * zmm12[0]
                zmm10[0] = zmm10[0] f* zmm8.d
                zmm6.d = zmm6.d f+ zmm9[0]
                zmm6.d = zmm6.d f+ zmm10[0]
                int64_t* rax_3
                
                if (zmm6.d f<= 0f)
                    int32_t var_158
                    rax_3 = &var_158
                    var_158 = (var_188 ^ 0x80000000).d
                    float var_154_1 = (var_184 ^ 0x80000000)[0]
                    int32_t var_150_1 = (zmm5_1 ^ 0x80000000).d
                else
                    uint64_t var_164
                    rax_3 = &var_164
                    var_164 = var_188.q
                    int32_t var_15c_1 = var_180
                
                i += 1
                int32_t rax_4 = rax_3[1].d
                zmm4_1 = var_184
                zmm12 = 0x3f800000
                *(rcx_2 + rdx_2 + 0x10) = *rax_3
                *(rcx_2 + rdx_2 + 0x18) = rax_4
                rcx_2 = &(*rcx_2)[0xf]
            while (i s< *(arg1 + 0x24) - 1)
            
            zmm9 = *arg2
            zmm6 = *(arg2 + 4)
            zmm8 = *(arg2 + 8)
            rdi = *arg1
            zmm11 = arg_10
    
    zmm3 = arg_8
    zmm6.d = zmm6.d f- rdi[1]
    int64_t rax_7 = sx.q(arg1[1].d)
    zmm12[0] = zmm12[0] f- zmm3.d
    zmm8.d = zmm8.d f- rdi[2]
    int32_t i_1 = 0
    arg5 = var_178.d
    zmm0 = var_178:4.d
    zmm9[0] = zmm9[0] f- *rdi
    zmm6.d = zmm6.d f* zmm3.d
    zmm9[0] = zmm9[0] f* zmm3.d
    zmm8.d = zmm8.d f* zmm3.d
    zmm0.d = zmm0.d f- rdi[rax_7 * 0xf - 0xe]
    arg3.d = arg5.d f- rdi[rax_7 * 0xf - 0xf]
    zmm0.d = zmm0.d f* zmm12[0]
    arg3.d = arg3.d f* zmm12[0]
    zmm6.d = zmm6.d f+ zmm0.d
    zmm0.d = var_170.d f- rdi[rax_7 * 0xf - 0xd]
    arg3.d = arg3.d f+ zmm9[0]
    zmm0.d = zmm0.d f* zmm12[0]
    zmm8.d = zmm8.d f+ zmm0.d
    
    if (*(arg1 + 0x24) s> 0)
        int32_t* rcx_4 = nullptr
        
        do
            int64_t rax_8 = *arg1
            zmm1 = zmm6
            i_1 += 1
            zmm0.d = arg3.d f+ *(rcx_4 + rax_8)
            zmm1[0] = zmm1[0] f+ *(rcx_4 + rax_8 + 4)
            *(rcx_4 + rax_8) = zmm0.d
            zmm0.d = zmm8.d f+ *(rcx_4 + rax_8 + 8)
            *(rcx_4 + rax_8 + 4) = zmm1[0]
            *(rcx_4 + rax_8 + 8) = zmm0.d
            rcx_4 = &rcx_4[0xf]
        while (i_1 s< *(arg1 + 0x24))
    
    int32_t rsi_1 = 1
    
    if (arg4 s>= 1)
        rsi_1 = arg4
    
    arg_8 = rsi_1
    uint32_t zmm6_1[0x4]
    uint32_t zmm8_1[0x4]
    uint32_t zmm9_1[0x4]
    uint128_t zmm13_1
    float zmm14_1[0x4]
    int64_t zmm15
    
    do
        int64_t rcx_5
        int64_t rdi_1
        
        if (*(arg1 + 0x24) s> 3)
            rdi_1 = data_143f2ba38
            
            if (data_143de5480 == 0)
                rcx_5 = 0
            else
                rcx_5.b = GetCurrentThreadId() != data_143de5470
        
        int64_t zmm1_1
        
        if (*(arg1 + 0x24) s<= 3 || *(rdi_1 + (rcx_5 << 2)) != 1 || zmm11[0] <= zmm12[0])
            sub_141ab3c40(arg2, arg1)
            zmm10, zmm12, zmm13_1, zmm14_1, zmm15 = sub_141ab3800(&var_178, arg1)
        else
            int32_t rsi_2 = arg1[1].d
            int64_t rdi_2 = 0
            int64_t r12_1 = *arg1
            int64_t var_110 = 0
            int32_t var_108_1 = rsi_2
            
            if (rsi_2 != 0)
                sub_14174fdd0(&var_110, rsi_2, 0)
                rdi_2 = var_110
                memcpy(rdi_2, r12_1, rsi_2 * 0x3c)
            else
                int32_t var_104_1 = 0
            
            int64_t var_f8_1 = arg1[3]
            int32_t var_ec_1 = *(arg1 + 0x24)
            int32_t var_e0_1 = arg1[6].d
            int32_t var_100_1 = arg1[2].d.d
            char var_dc_1 = *(arg1 + 0x34)
            int32_t var_f0_1 = arg1[4].d.d
            char var_db_1 = *(arg1 + 0x35)
            uint64_t var_e8_1 = arg1[5]
            sub_141ab3c40(arg2, &var_110)
            int32_t rsi_3 = arg1[1].d
            int64_t r12_2 = *arg1
            void* const var_148 = nullptr
            int32_t var_140_1 = rsi_3
            
            if (rsi_3 != 0)
                sub_14174fdd0(&var_148, rsi_3, 0)
                memcpy(var_148, r12_2, rsi_3 * 0x3c)
            else
                int32_t var_13c_1 = 0
            
            int64_t var_130_1 = arg1[3]
            int32_t var_124_1 = *(arg1 + 0x24)
            int32_t var_118_1 = arg1[6].d
            int32_t var_138_1 = arg1[2].d.d
            char var_114_1 = *(arg1 + 0x34)
            int32_t var_128_1 = arg1[4].d.d
            char var_113_1 = *(arg1 + 0x35)
            int64_t var_120_1 = arg1[5]
            int32_t zmm7_2
            zmm7_2, zmm10, zmm12, zmm13_1, zmm14_1, zmm15 = sub_141ab3800(&var_178, &var_148)
            int32_t i_2 = 0
            void* const rcx_12 = var_148
            
            if (*(arg1 + 0x24) s> 0)
                void* r9_2 = rcx_12 + 4
                int64_t* r10_2 = rdi_2 - rcx_12
                
                do
                    void* r8_4 = -4 - rcx_12 + r9_2
                    zmm0.d = (*(r10_2 + r9_2 + 4)).d f+ *(r9_2 + 4)
                    float zmm2[0x4] = *(r10_2 + r9_2 - 4)
                    i_2 += 1
                    zmm2[0] = zmm2[0] f+ *(r9_2 - 4)
                    zmm1_1.d = (*(r10_2 + r9_2)).d f+ *r9_2
                    int64_t rdx_9 = *arg1
                    r9_2 += 0x3c
                    zmm0.d = zmm0.d f* zmm7_2
                    zmm2[0] = zmm2[0] f* zmm7_2
                    int32_t var_15c_2 = zmm0.d
                    zmm1_1.d = zmm1_1.d f* zmm7_2
                    *(r8_4 + rdx_9) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                    *(r8_4 + rdx_9 + 8) = var_15c_2
                while (i_2 s< *(arg1 + 0x24))
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            if (rdi_2 != 0)
                sub_140a74f90(rdi_2)
            
            rsi_1 = arg_8
        
        float* rdx_10 = *arg1
        result = sx.q(arg1[1].d)
        float zmm5_2 = *(arg2 + 4) - rdx_10[1]
        float zmm4_2 = *arg2 - *rdx_10
        float zmm3_1 = *(arg2 + 8) - rdx_10[2]
        zmm9_1 = rdx_10[result * 0xf - 0xf]
        zmm8_1 = rdx_10[result * 0xf - 0xe]
        zmm1_1.d = zmm15.d f- zmm9_1[0]
        zmm6_1 = rdx_10[result * 0xf - 0xd]
        zmm14_1[0] = zmm14_1[0] f- zmm8_1[0]
        zmm0.d = zmm13_1.d f- zmm6_1[0]
        zmm1_1.d = zmm1_1.d f* zmm1_1.d
        zmm0.d = zmm0.d f* zmm0.d
        zmm14_1[0] = zmm14_1[0] * zmm14_1[0]
        zmm14_1[0] = zmm14_1[0] f+ zmm1_1.d
        zmm14_1[0] = zmm14_1[0] f+ zmm0.d
        zmm0 = _mm_sqrt_ss(0, zmm5_2 * zmm5_2 + zmm4_2 * zmm4_2 + zmm3_1 * zmm3_1)
        zmm11 = _mm_sqrt_ss(zx.o(0)[0], zmm14_1[0])
        zmm11[0] = zmm11[0] f+ zmm0.d
        bool cond:8_1 = zmm11[0] > zmm10[0]
        zmm10 = arg_18
        
        if (cond:8_1)
            break
        
        if (zmm11[0] <= zmm10[0])
            break
        
        r13_1 += 1
    while (r13_1 s< rsi_1)
    
    zmm9_1[0] = zmm9_1[0] f- zmm15.d
    
    if (_mm_and_ps(zmm9_1, 0x7fffffff)[0] f> 9.99999975e-05f)
        result, zmm10, zmm11 = sub_141ab3800(&var_178, arg1)
    else
        zmm8_1[0] = zmm8_1[0] f- zmm14_1[0]
        
        if (_mm_and_ps(zmm8_1, 0x7fffffff)[0] f> 9.99999975e-05f)
            result, zmm10, zmm11 = sub_141ab3800(&var_178, arg1)
        else
            zmm6_1[0] = zmm6_1[0] f- zmm13_1.d
            
            if (not(_mm_and_ps(zmm6_1, 0x7fffffff)[0] f<= 9.99999975e-05f))
                result, zmm10, zmm11 = sub_141ab3800(&var_178, arg1)
    
    if (not(zmm11[0] > zmm10[0]))
        uint64_t* rcx_16 = *arg1
        *rcx_16 = *arg2
        result = zx.q(*(arg2 + 8))
        rcx_16[1].d = result.d

return result
