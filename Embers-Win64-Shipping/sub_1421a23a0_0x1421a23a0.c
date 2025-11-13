// 函数: sub_1421a23a0
// 地址: 0x1421a23a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4.d
void* rbx = *(arg2 + 0x18)
int32_t r9 = arg3
void* r14 = *(arg2 + 0x1e8)
void* rax = *(arg2 + 0x1e0)
float var_248 = 1f
void* var_298 = rbx

if (rax != 0)
    var_248 = (*(rax + 0x114))[0]

void* rax_1 = *(arg2 + 0x1f0)
char arg_10

if (rax_1 == 0)
    arg_10 = 0
else
    arg_10 = *(rax_1 + 0xd0) & 1

void* rax_2 = *(arg2 + 0x200)
char var_2a0

if (rax_2 == 0)
    var_2a0 = 0
else
    var_2a0 = *(rax_2 + 0xd0) & 1

int64_t rcx_2 = *(arg2 + 0xf0)
int32_t rax_3 = *(arg2 + 0x118)
int64_t r8 = *(arg2 + 0xf8)
uint64_t result = zx.q(rax_3 - 1)
int32_t rdx = *(arg2 + 0x114)
int64_t r13 = sx.q(result.d)
int64_t var_288 = rcx_2
int32_t var_29c = rdx
int64_t var_280 = r8

if (rax_3 - 1 s>= 0)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    float zmm10[0x4] = 0x80000000
    uint128_t zmm11 = 0x322bcc77
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    uint128_t zmm14 = 0x3f000000
    uint32_t zmm15[0x4] = 0x7fffffff
    void* rsi
    void* arg_8 = rsi
    int64_t temp1_1
    
    do
        void* rdi_3 = zx.q(zx.d(*(r8 + (r13 << 1))) * rdx) + rcx_2
        
        if ((*(rdi_3 + 0x5c) & 0x4000000) == 0)
            int64_t rax_4 = *arg1
            int32_t var_220 = r9
            uint64_t* result_1 = nullptr
            int64_t var_218 = 0
            int64_t var_178
            __builtin_memset(&var_178, 0, 0x28)
            int32_t* var_290 = nullptr
            int32_t* var_258 = nullptr
            int32_t* var_250 = nullptr
            uint64_t var_278
            int32_t var_270
            uint64_t var_268
            int32_t var_260
            uint64_t var_240
            int32_t var_238
            uint64_t var_230
            int32_t var_228
            float var_210
            float var_208
            int64_t var_170
            int64_t var_168
            int64_t var_160
            int64_t var_158
            (*(rax_4 + 0x388))(arg1, arg2, rdi_3, &var_220, &result_1, &var_218, &var_158, 
                &var_160, &var_168, &var_170, &var_178, &var_290, &var_258, &var_250, result_1, 
                var_2a0, var_298, var_290, var_288, var_280, var_278, var_270, var_268, var_260, 
                var_258, var_250, var_248, var_240, var_238, var_230, var_228, var_220, var_218, 
                var_210, var_208)
            uint128_t zmm0
            float zmm1[0x4]
            uint128_t zmm2
            float zmm4_1[0x4]
            uint128_t zmm5_1
            
            if (*(arg2 + 0x1d8) == 0)
                zmm2 = *(rbx + 0x1d0)
                uint64_t* result_5 = result_1
                zmm6 = data_142d4cc00
                int32_t var_148_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
                *result_5 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
                result_5[1].d = var_148_1
                zmm6 = __mulps_xmmps_memps(zmm6, *(rbx + 0x1e0))
                uint64_t* result_6 = result_1
                zmm5_1 = *(rbx + 0x1c0)
                zmm1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4_1)
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                zmm2 = _mm_sub_ps(zmm2, zmm0)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm1)
                arg4 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm5_1 = _mm_add_ps(zmm5_1, zmm6)
                arg4 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(arg4, zmm4_1), zmm0), zmm5_1)
                int32_t var_13c_1 = _mm_shuffle_ps(arg4, arg4, 0xaa).d
                *(result_6 + 0xc) = (_mm_unpacklo_ps(arg4, _mm_shuffle_ps(arg4, arg4, 0x55)[0].q)).q
                *(result_6 + 0x14) = var_13c_1
            
            float zmm7[0x4]
            
            if (*(arg2 + 0x1e0) == 0 && *(arg2 + 0x218) == 0)
                zmm0 = sub_141fe5610(&arg1[0xc], *(rdi_3 + 0xc), rbx, nullptr)
                zmm4_1 = *(rbx + 0x1c0)
                zmm9 = zmm0
                zmm5_1 = __mulps_xmmps_memps(data_142d4cc00, *(rbx + 0x1e0))
                zmm2 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                zmm1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm2)
                arg4 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm1), zmm0)
                arg4 = _mm_add_ps(arg4, arg4)
                zmm4_1 = _mm_mul_ps(zmm4_1, arg4)
                zmm6 = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xd2), zmm1)
                zmm0 = _mm_shuffle_ps(arg4, arg4, 0xc9)
                zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
                zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm0, zmm2)), zmm4_1)
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm2.d = zmm7.d f* zmm7[0]
                zmm0.d = zmm6.d f* zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm2.d = zmm2.d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm8[0]
                
                if (not(zmm2.d f<= zmm11.d))
                    zmm4_1 = zx.o(0)
                    zmm4_1[0] = zmm14.d
                    arg4.d = zmm2.d
                    zmm5_1 = _mm_rsqrt_ss(arg4.d, arg4.d)
                    arg4.d = arg4.d f* zmm4_1[0]
                    zmm0.d = zmm5_1.d f* zmm5_1.d
                    zmm1 = arg4
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2.d = zmm4_1.d f- zmm1[0]
                    zmm0.d = zmm5_1.d f* zmm2.d
                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                    zmm1 = zmm5_1
                    zmm1[0] = zmm1[0] f* zmm5_1.d
                    arg4.d = arg4.d f* zmm1[0]
                    zmm4_1[0] = zmm4_1[0] f- arg4.d
                    zmm0.d = zmm5_1.d f* zmm4_1[0]
                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                    int32_t var_244_1 = zmm5_1.d
                    zmm6[0] = zmm6[0] f* zmm5_1.d
                    zmm7[0] = zmm7[0] f* zmm5_1.d
                    zmm5_1.d = zmm5_1.d f* zmm8[0]
                    zmm8 = zmm5_1
                
                uint64_t* result_7 = result_1
                zmm0.d = zmm8.d f* zmm9.d
                zmm2.d = zmm6.d f* zmm9.d
                zmm7[0] = zmm7[0] f* zmm9.d
                zmm0.d = zmm0.d f+ result_7[1].d
                zmm2.d = zmm2.d f+ *result_7
                zmm7[0] = zmm7[0] f+ *(result_7 + 4)
                float var_124_1 = (zmm8 ^ zmm10)[0]
                int32_t var_130_1 = zmm0.d
                *(result_7 + 0x1c) = (_mm_unpacklo_ps(zmm2, zmm7[0].q)).q
                *(result_7 + 0x24) = var_130_1
                uint64_t* result_8 = result_1
                result_8[5] = (_mm_unpacklo_ps(zmm6 ^ zmm10, (zmm7 ^ zmm10)[0].q)).q
                result_8[6].d = var_124_1
            
            int32_t* rbx_1 = var_258
            uint64_t* result_9
            
            if (rbx_1 == 0)
                result_9 = result_1
            else
                char rcx_5 = (*rbx_1).b
                
                if ((rcx_5 & 1) != 0)
                    uint64_t* result_2 = result_1
                    zmm0 = *result_2
                    
                    if ((rcx_5 & 2) != 0)
                        zmm0.d = zmm0.d f* rbx_1[1]
                        *result_2 = zmm0.d
                        zmm0.d = rbx_1[2].d f* *(result_2 + 4)
                        *(result_2 + 4) = zmm0.d
                        zmm1 = rbx_1[3]
                        zmm1[0] = zmm1[0] f* result_2[1].d
                    else
                        zmm0.d = zmm0.d f+ rbx_1[1]
                        *result_2 = zmm0.d
                        zmm0.d = rbx_1[2].d f+ *(result_2 + 4)
                        *(result_2 + 4) = zmm0.d
                        zmm1 = rbx_1[3]
                        zmm1[0] = zmm1[0] f+ result_2[1].d
                    
                    result_2[1].d = zmm1[0]
                    rbx_1 = var_258
                
                result_9 = result_1
                
                if ((*rbx_1 & 4) != 0)
                    if (arg_10 != 0)
                        zmm1 = zx.o(*(rbx_1 + 0x10))
                        int32_t rax_10 = rbx_1[6]
                        zmm0 = zmm1
                        zmm4_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        zmm12 = rax_10
                        zmm13 = zmm1.d
                    else
                        int64_t var_200 = 0x3f800000
                        int32_t var_1f8_1 = 0
                        int32_t var_198
                        sub_140ad6660(&var_198, &var_200, result_9 + 0xc)
                        int32_t var_194
                        zmm9 = var_194
                        int32_t var_190
                        zmm6 = var_190
                        zmm7 = var_198
                        zmm0 = zx.o(*(rbx_1 + 0x10))
                        int32_t rax_9 = rbx_1[6]
                        zmm8 = zmm0
                        zmm4_1 = zmm0.d
                        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                        zmm12.d = zmm4_1.d f* zmm6[0]
                        zmm5_1.d = zmm8.d f* zmm7[0]
                        zmm11 = rax_9
                        zmm0.d = zmm8.d f* zmm6[0]
                        zmm10 = zmm11
                        zmm10[0] = zmm10[0] f* zmm9.d
                        zmm10[0] = zmm10[0] f- zmm0.d
                        zmm0.d = zmm11.d f* zmm7[0]
                        zmm12.d = zmm12.d f- zmm0.d
                        zmm0.d = zmm4_1.d f* zmm9.d
                        zmm10[0] = zmm10[0] + zmm10[0]
                        zmm5_1.d = zmm5_1.d f- zmm0.d
                        int32_t var_18c
                        zmm0 = var_18c
                        zmm12.d = zmm12.d f+ zmm12.d
                        zmm10[0] = zmm10[0] f* zmm0.d
                        zmm5_1.d = zmm5_1.d f+ zmm5_1.d
                        zmm10[0] = zmm10[0] + zmm4_1[0]
                        zmm2.d = zmm12.d f* zmm0.d
                        zmm4_1 = zmm10
                        zmm4_1[0] = zmm4_1[0] * zmm6[0]
                        zmm10[0] = zmm10[0] f* zmm9.d
                        arg4.d = zmm5_1.d f* zmm0.d
                        zmm2.d = zmm2.d f+ zmm8[0]
                        zmm0 = zmm12
                        zmm13.d = zmm5_1.d f* zmm9.d
                        zmm12.d = zmm12.d f* zmm7[0]
                        arg4.d = arg4.d f+ zmm11.d
                        zmm0.d = zmm0.d f* zmm6[0]
                        zmm5_1.d = zmm5_1.d f* zmm7[0]
                        zmm12.d = zmm12.d f- zmm10[0]
                        zmm13.d = zmm13.d f- zmm0.d
                        zmm4_1[0] = zmm4_1[0] f- zmm5_1.d
                        zmm12.d = zmm12.d f+ arg4.d
                        zmm13.d = zmm13.d f+ zmm10[0]
                        zmm4_1[0] = zmm4_1[0] f+ zmm2.d
                    
                    zmm0 = *(result_9 + 0xc)
                    zmm1 = result_9[2].d
                    zmm2 = *(result_9 + 0x14)
                    
                    if (((*rbx_1).b & 8) != 0)
                        zmm0.d = zmm0.d f* zmm13.d
                        zmm1[0] = zmm1[0] * zmm4_1[0]
                        zmm2.d = zmm2.d f* zmm12.d
                    else
                        zmm0.d = zmm0.d f+ zmm13.d
                        zmm1[0] = zmm1[0] + zmm4_1[0]
                        zmm2.d = zmm2.d f+ zmm12.d
                    
                    *(result_9 + 0xc) = zmm0.d
                    result_9[2].d = zmm1[0]
                    *(result_9 + 0x14) = zmm2.d
                    rbx_1 = var_258
                    result_9 = result_1
                
                char rax_12 = (*rbx_1).b
                
                if ((rax_12 & 0x10) != 0)
                    zmm1 = rbx_1[7]
                    zmm0 = result_9[3].d
                    
                    if ((rax_12 & 0x20) != 0)
                        zmm0.d = zmm0.d f* zmm1[0]
                    else
                        zmm0.d = zmm0.d f+ zmm1[0]
                    
                    result_9[3].d = zmm0.d
                    result_9 = result_1
            
            int32_t* rbx_2 = var_250
            
            if (rbx_2 != 0)
                char rax_13 = (*rbx_2).b
                
                if ((rax_13 & 1) != 0)
                    zmm0 = rbx_2[1]
                    
                    if ((rax_13 & 2) != 0)
                        zmm0.d = zmm0.d f* *(result_9 + 0x1c)
                        *(result_9 + 0x1c) = zmm0.d
                        zmm1 = rbx_2[2]
                        zmm1[0] = zmm1[0] f* result_9[4].d
                        result_9[4].d = zmm1[0]
                        zmm0.d = rbx_2[3].d f* *(result_9 + 0x24)
                    else
                        zmm0.d = zmm0.d f+ *(result_9 + 0x1c)
                        *(result_9 + 0x1c) = zmm0.d
                        zmm1 = rbx_2[2]
                        zmm1[0] = zmm1[0] f+ result_9[4].d
                        result_9[4].d = zmm1[0]
                        zmm0.d = rbx_2[3].d f+ *(result_9 + 0x24)
                    
                    *(result_9 + 0x24) = zmm0.d
                    rbx_2 = var_250
                    result_9 = result_1
                
                if ((*rbx_2 & 4) != 0)
                    if (var_2a0 != 0)
                        zmm1 = zx.o(*(rbx_2 + 0x10))
                        int32_t rax_15 = rbx_2[6]
                        zmm0 = zmm1
                        zmm4_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        zmm12 = rax_15
                        zmm13 = zmm1.d
                    else
                        int64_t var_1c8 = 0x3f800000
                        int32_t var_1c0_1 = 0
                        int32_t var_188
                        sub_140ad6660(&var_188, &var_1c8, &result_9[5])
                        int32_t var_184
                        zmm9 = var_184
                        int32_t var_180
                        zmm6 = var_180
                        zmm7 = var_188
                        zmm0 = zx.o(*(rbx_2 + 0x10))
                        int32_t rax_14 = rbx_2[6]
                        zmm8 = zmm0
                        zmm4_1 = zmm0.d
                        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                        zmm12.d = zmm4_1.d f* zmm6[0]
                        zmm5_1.d = zmm8.d f* zmm7[0]
                        zmm11 = rax_14
                        zmm0.d = zmm8.d f* zmm6[0]
                        zmm10 = zmm11
                        zmm10[0] = zmm10[0] f* zmm9.d
                        zmm10[0] = zmm10[0] f- zmm0.d
                        zmm0.d = zmm11.d f* zmm7[0]
                        zmm12.d = zmm12.d f- zmm0.d
                        zmm0.d = zmm4_1.d f* zmm9.d
                        zmm10[0] = zmm10[0] + zmm10[0]
                        zmm5_1.d = zmm5_1.d f- zmm0.d
                        int32_t var_17c
                        zmm0 = var_17c
                        zmm12.d = zmm12.d f+ zmm12.d
                        zmm10[0] = zmm10[0] f* zmm0.d
                        zmm5_1.d = zmm5_1.d f+ zmm5_1.d
                        zmm10[0] = zmm10[0] + zmm4_1[0]
                        zmm2.d = zmm12.d f* zmm0.d
                        zmm4_1 = zmm10
                        zmm4_1[0] = zmm4_1[0] * zmm6[0]
                        zmm10[0] = zmm10[0] f* zmm9.d
                        arg4.d = zmm5_1.d f* zmm0.d
                        zmm2.d = zmm2.d f+ zmm8[0]
                        zmm0 = zmm12
                        zmm13.d = zmm5_1.d f* zmm9.d
                        zmm12.d = zmm12.d f* zmm7[0]
                        arg4.d = arg4.d f+ zmm11.d
                        zmm0.d = zmm0.d f* zmm6[0]
                        zmm5_1.d = zmm5_1.d f* zmm7[0]
                        zmm12.d = zmm12.d f- zmm10[0]
                        zmm13.d = zmm13.d f- zmm0.d
                        zmm4_1[0] = zmm4_1[0] f- zmm5_1.d
                        zmm12.d = zmm12.d f+ arg4.d
                        zmm13.d = zmm13.d f+ zmm10[0]
                        zmm4_1[0] = zmm4_1[0] f+ zmm2.d
                    
                    zmm0 = result_9[5].d
                    zmm1 = *(result_9 + 0x2c)
                    zmm2 = result_9[6].d
                    
                    if (((*rbx_2).b & 8) != 0)
                        zmm0.d = zmm0.d f* zmm13.d
                        zmm1[0] = zmm1[0] * zmm4_1[0]
                        zmm2.d = zmm2.d f* zmm12.d
                    else
                        zmm0.d = zmm0.d f+ zmm13.d
                        zmm1[0] = zmm1[0] + zmm4_1[0]
                        zmm2.d = zmm2.d f+ zmm12.d
                    
                    result_9[5].d = zmm0.d
                    *(result_9 + 0x2c) = zmm1[0]
                    result_9[6].d = zmm2.d
                    rbx_2 = var_250
                    result_9 = result_1
                
                char rax_17 = (*rbx_2).b
                
                if ((rax_17 & 0x10) != 0)
                    zmm1 = rbx_2[7]
                    zmm0 = *(result_9 + 0x34)
                    
                    if ((rax_17 & 0x20) != 0)
                        zmm0.d = zmm0.d f* zmm1[0]
                    else
                        zmm0.d = zmm0.d f+ zmm1[0]
                    
                    *(result_9 + 0x34) = zmm0.d
                    result_9 = result_1
            
            int32_t i_7 = arg1[9].d
            int32_t i_5 = 1
            
            if (i_7 != 0)
                i_5 = i_7
            
            if (r14 == 0 || (*(r14 + 0x30) & 1) == 0)
                rsi.b = 0
            else
                rsi.b = 1
            
            zmm9 = *(arg1 + 0x44)
            zmm10 = zx.o(0)
            
            if (zmm9.d f== 0f || result_9[7].d s< 0)
                *(rdi_3 + 0x10) = *(result_9 + 0x1c)
                *(rdi_3 + 0x18) = *(result_9 + 0x24)
                result_9[7].d |= 0x80000000
                result_9 = result_1
            else
                zmm10 = *(rdi_3 + 0x10)
                zmm11 = *(result_9 + 0x1c)
                
                if (zmm10[0] f!= zmm11.d || result_9[4].d.d f!= *(rdi_3 + 0x14)
                        || not((*(result_9 + 0x24)).d f== *(rdi_3 + 0x18)))
                    zmm6 = result_9[4].d
                    zmm8 = zmm11
                    zmm7 = *(result_9 + 0x24)
                    zmm8[0] = zmm8[0] - zmm10[0]
                    zmm12 = *(rdi_3 + 0x14)
                    zmm13 = *(rdi_3 + 0x18)
                    zmm6[0] = zmm6[0] f- zmm12.d
                    zmm7[0] = zmm7[0] f- zmm13.d
                    zmm0.d = zmm8.d f* zmm8[0]
                    zmm2.d = zmm6.d f* zmm6[0]
                    zmm7[0] = zmm7[0] * zmm7[0]
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm2.d = zmm2.d f+ zmm7[0]
                    
                    if (not(zmm2.d f<= 9.99999994e-09f))
                        zmm4_1 = zx.o(0)
                        zmm4_1[0] = zmm14.d
                        zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                        arg4.d = zmm2.d f* zmm4_1[0]
                        zmm0.d = zmm5_1.d f* zmm5_1.d
                        zmm1 = arg4
                        zmm1[0] = zmm1[0] f* zmm0.d
                        zmm2.d = zmm4_1.d f- zmm1[0]
                        zmm0.d = zmm5_1.d f* zmm2.d
                        zmm5_1.d = zmm5_1.d f+ zmm0.d
                        zmm1 = zmm5_1
                        zmm1[0] = zmm1[0] f* zmm5_1.d
                        arg4.d = arg4.d f* zmm1[0]
                        zmm4_1[0] = zmm4_1[0] f- arg4.d
                        zmm0.d = zmm5_1.d f* zmm4_1[0]
                        zmm5_1.d = zmm5_1.d f+ zmm0.d
                        int32_t var_244_2 = zmm5_1.d
                        zmm8[0] = zmm8[0] f* zmm5_1.d
                        zmm6[0] = zmm6[0] f* zmm5_1.d
                        zmm7[0] = zmm7[0] f* zmm5_1.d
                    
                    zmm0 = arg_20
                    zmm8[0] = zmm8[0] f* zmm9.d
                    zmm6[0] = zmm6[0] f* zmm9.d
                    zmm8[0] = zmm8[0] f* zmm0.d
                    zmm7[0] = zmm7[0] f* zmm9.d
                    zmm8[0] = zmm8[0] + zmm10[0]
                    zmm6[0] = zmm6[0] f* zmm0.d
                    zmm7[0] = zmm7[0] f* zmm0.d
                    zmm0 = var_248
                    zmm6[0] = zmm6[0] f+ zmm12.d
                    var_210 = zmm8[0]
                    zmm8[0] = zmm8[0] f- zmm11.d
                    zmm7[0] = zmm7[0] f+ zmm13.d
                    float var_20c_1 = zmm6[0]
                    bool cond:5_1 = _mm_and_ps(zmm8, zmm15)[0] f>= zmm0.d
                    var_208 = zmm7[0]
                    
                    if (cond:5_1)
                        *(rdi_3 + 0x10) = var_210.q
                        *(rdi_3 + 0x18) = var_208
                    else
                        zmm6[0] = zmm6[0] f- result_9[4].d
                        
                        if (_mm_and_ps(zmm6, zmm15)[0] f>= zmm0.d)
                            *(rdi_3 + 0x10) = var_210.q
                            *(rdi_3 + 0x18) = var_208
                        else
                            zmm7[0] = zmm7[0] f- *(result_9 + 0x24)
                            
                            if (_mm_and_ps(zmm7, zmm15)[0] f>= zmm0.d)
                                *(rdi_3 + 0x10) = var_210.q
                                *(rdi_3 + 0x18) = var_208
                            else
                                *(rdi_3 + 0x10) = *(result_9 + 0x1c)
                                *(rdi_3 + 0x18) = *(result_9 + 0x24)
                                result_9[7].d |= 0x80000000
                                result_9 = result_1
                
                zmm10 = zx.o(0)
            
            zmm1 = *(result_9 + 0x1c)
            zmm1[0] = zmm1[0] f- *result_9
            zmm2.d = result_9[4].d.d f- *(result_9 + 4)
            zmm0.d = (*(result_9 + 0x24)).d f- result_9[1].d
            zmm11 = 0x322bcc77
            result_9[8] = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
            result_9[9].d = zmm0.d
            int32_t* result_10 = result_1
            zmm8 = result_10[0x11]
            zmm7 = result_10[0x10]
            zmm9 = result_10[0x12]
            zmm2.d = zmm7.d f* zmm7[0]
            zmm1 = zmm9
            zmm0.d = zmm8.d f* zmm8[0]
            zmm1[0] = zmm1[0] f* zmm9.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1[0]
            zmm6 = __maxss_xmmss_memss(_mm_sqrt_ss(0, zmm2.d)[0], 0x3a83126f)
            
            if (not(zmm2.d f<= 9.99999994e-09f))
                zmm4_1 = zx.o(0)
                zmm4_1[0] = zmm14.d
                zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                arg4.d = zmm2.d f* zmm4_1[0]
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm1 = arg4
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2.d = zmm4_1.d f- zmm1[0]
                zmm0.d = zmm5_1.d f* zmm2.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm1 = zmm5_1
                zmm1[0] = zmm1[0] f* zmm5_1.d
                arg4.d = arg4.d f* zmm1[0]
                zmm4_1[0] = zmm4_1[0] f- arg4.d
                zmm0.d = zmm5_1.d f* zmm4_1[0]
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm7[0] = zmm7[0] f* zmm5_1.d
                zmm8[0] = zmm8[0] f* zmm5_1.d
                zmm9.d = zmm9.d f* zmm5_1.d
                result_10[0x10] = zmm7[0]
                result_10[0x11] = zmm8[0]
                result_10[0x12] = zmm9.d
                result_10 = result_1
                int32_t var_244_3 = zmm5_1.d
            
            if (rsi.b != 0)
                int32_t rax_40 = result_10[0xe]
                int32_t rdx_8 = rax_40 s>> 0xc & 0xfff
                
                if (rax_40 s>= 0)
                    zmm1 = *(rdi_3 + 0x10)
                    zmm1[0] = zmm1[0] f- *result_10
                    zmm0.d = (*(rdi_3 + 0x18)).d f- result_10[2]
                    zmm2.d = (*(rdi_3 + 0x14)).d f- result_10[1]
                    zmm7 = 0x3f800000
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm4_1 = 0x3f800000
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm4_1[0] = 1f / zmm6[0]
                    zmm2.d = zmm2.d f+ zmm1[0]
                    zmm1 = *(r14 + 0x158)
                    bool cond:6_1 = zmm1[0] <= zmm10[0]
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm0 = zmm6
                    arg4 = _mm_sqrt_ss(0, zmm2.d)
                    
                    if (cond:6_1)
                        zmm1 = arg4
                        zmm2 = _mm_cvtepi32_ps(zx.o(rdx_8 + 1))
                        zmm1[0] = zmm1[0] * zmm4_1[0]
                        zmm0.d = zmm0.d f/ zmm2.d
                        zmm2.d = zmm2.d f* zmm1[0]
                        result_10[0x13] = zmm0.d
                        zmm2.d = zmm2.d f+ zmm2.d
                        *(result_1 + 0x54) = zmm1[0]
                        zmm2.d = zmm2.d f- zmm14.d
                        result_1[0xa].d = int.d(zmm2.d) s>> 1
                        uint64_t* result_15 = result_1
                        
                        if (result_15[0xa].d s> rdx_8)
                            result_15[0xa].d = rdx_8
                            result_15 = result_1
                        
                        int32_t rax_59 = result_15[0xa].d
                        zmm1 = _mm_cvtepi32_ps(zx.o(rax_59))
                        zmm1[0] = zmm1[0] f* *(result_15 + 0x4c)
                        arg4.d = arg4.d f- zmm1[0]
                        
                        if (rax_59 != rdx_8)
                            arg4.d = arg4.d f/ *(result_15 + 0x4c)
                        else
                            zmm6[0] = zmm6[0] - zmm1[0]
                            arg4.d = arg4.d f/ zmm6[0]
                        
                        *(result_15 + 0x54) = arg4.d
                        goto label_1421a389a
                    
                    zmm0.d = zmm0.d f/ zmm1[0]
                    int32_t r8_9 = rdx_8
                    zmm1 = arg4
                    int32_t rax_50 = int.d(zmm0.d)
                    zmm1[0] = zmm1[0] * zmm4_1[0]
                    
                    if (rax_50 s<= rdx_8)
                        r8_9 = rax_50
                    
                    zmm2 = _mm_cvtepi32_ps(zx.o(r8_9 + 1))
                    zmm0.d = zmm6.d f/ zmm2.d
                    zmm2.d = zmm2.d f* zmm1[0]
                    result_10[0x13] = zmm0.d
                    zmm2.d = zmm2.d f+ zmm2.d
                    *(result_1 + 0x54) = zmm1[0]
                    zmm2.d = zmm2.d f- zmm14.d
                    result_1[0xa].d = int.d(zmm2.d) s>> 1
                    uint64_t* result_14 = result_1
                    
                    if (result_14[0xa].d s> r8_9)
                        result_14[0xa].d = r8_9
                        result_14 = result_1
                    
                    int32_t rax_54 = result_14[0xa].d
                    zmm1 = _mm_cvtepi32_ps(zx.o(rax_54))
                    zmm1[0] = zmm1[0] f* *(result_14 + 0x4c)
                    arg4.d = arg4.d f- zmm1[0]
                    
                    if (rax_54 != r8_9)
                        arg4.d = arg4.d f/ *(result_14 + 0x4c)
                    else
                        zmm6[0] = zmm6[0] - zmm1[0]
                        arg4.d = arg4.d f/ zmm6[0]
                    
                    *(result_14 + 0x54) = arg4.d
                    
                    if (var_290 != 0)
                        zmm1 = _mm_cvtepi32_ps(zx.o(r8_9))
                        zmm0 = _mm_cvtepi32_ps(zx.o(rdx_8))
                        zmm1[0] = zmm1[0] f/ zmm0.d
                        zmm0, zmm7 = sub_141fe5610(r14 + 0x160, zmm1, 0, nullptr)
                        *var_290 = zmm0.d
                    label_1421a389a:
                        int32_t* rax_60 = var_290
                        
                        if (rax_60 != 0)
                            *rax_60 = 0x3f800000
                else
                    zmm1 = *(r14 + 0x158)
                    
                    if (zmm1[0] <= zmm10[0])
                        zmm7 = 0x3f800000
                        zmm0 = _mm_cvtepi32_ps(zx.o(rdx_8 + 1))
                        zmm6[0] = zmm6[0] f/ zmm0.d
                        result_10[0x13] = zmm6[0]
                        result_1[0xa].d = rdx_8
                        *(result_1 + 0x54) = 0
                        int32_t* rax_49 = var_290
                        
                        if (rax_49 != 0)
                            *rax_49 = 0x3f800000
                    else
                        int32_t r8_8 = rdx_8
                        zmm0.d = zmm6.d f/ zmm1[0]
                        int32_t rax_41 = int.d(zmm0.d)
                        
                        if (rax_41 s<= rdx_8)
                            r8_8 = rax_41
                        
                        zmm0 = _mm_cvtepi32_ps(zx.o(r8_8 + 1))
                        zmm6[0] = zmm6[0] f/ zmm0.d
                        result_10[0x13] = zmm6[0]
                        result_1[0xa].d = r8_8
                        *(result_1 + 0x54) = 0
                        
                        if (var_290 == 0)
                            zmm7 = 0x3f800000
                        else
                            zmm1 = _mm_cvtepi32_ps(zx.o(r8_8))
                            zmm0 = _mm_cvtepi32_ps(zx.o(rdx_8))
                            zmm1[0] = zmm1[0] f/ zmm0.d
                            *var_290 = sub_141fe5610(r14 + 0x160, zmm1, 0, nullptr).d
                            zmm7 = 0x3f800000
            else
                bool cond:4_1 = result_10[0xe] s>= 0
                arg4 = _mm_cvtepi32_ps(zx.o(i_5))
                zmm5_1.d = zmm6.d f/ arg4.d
                
                if (cond:4_1)
                    zmm1 = *(rdi_3 + 0x10)
                    zmm2.d = (*(rdi_3 + 0x14)).d f- result_10[1]
                    zmm1[0] = zmm1[0] f- *result_10
                    zmm0.d = (*(rdi_3 + 0x18)).d f- result_10[2]
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm2.d = zmm2.d f+ zmm1[0]
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm4_1 = _mm_sqrt_ss(0, zmm2.d)
                    
                    if (zmm4_1[0] <= zmm6[0])
                        result_10[0x13] = zmm5_1.d
                        zmm0.d = zmm4_1.d f/ zmm6[0]
                        *(result_1 + 0x54) = zmm0.d
                        arg4.d = arg4.d f* zmm0.d
                        arg4.d = arg4.d f+ arg4.d
                        arg4.d = arg4.d f- zmm14.d
                        result_1[0xa].d = int.d(arg4.d) s>> 1
                        uint64_t* result_3 = result_1
                        zmm0.d = _mm_cvtepi32_ps(zx.o(result_3[0xa].d)).d f* *(result_3 + 0x4c)
                        zmm4_1[0] = zmm4_1[0] f- zmm0.d
                        zmm4_1[0] = zmm4_1[0] f/ *(result_3 + 0x4c)
                        *(result_3 + 0x54) = zmm4_1[0]
                    else
                        *(rdi_3 + 0x10) = *(result_10 + 0x1c)
                        *(rdi_3 + 0x18) = result_10[9]
                        result_10[0xe] |= 0x80000000
                        *(result_1 + 0x4c) = zmm5_1.d
                        result_1[0xa].d = i_5
                        *(result_1 + 0x54) = 0
                else
                    result_10[0x13] = zmm5_1.d
                    result_1[0xa].d = i_5
                    *(result_1 + 0x54) = 0
                
                i_5 = result_1[0xa].d
                zmm7 = 0x3f800000
            
            uint64_t* result_4 = result_1
            
            if (arg1[9].d s<= 0)
                *(result_4 + 0x3c) = 0
                
                if (rsi.b != 0)
                    int32_t rax_63 = *(r14 + 0x150)
                    int32_t rdx_9 = 1
                    uint64_t* result_16 = result_1
                    
                    if (rax_63 != 0)
                        rdx_9 = rax_63
                    
                    result = zx.q(result_16[0xa].d * rdx_9 * 2)
                    result_16[0xb].d = result.d
                    uint64_t* result_17 = result_1
                    
                    if (result_17[7].d s< 0)
                        result = zx.q(rdx_9 * 2)
                        result_17[0xb].d += result.d
                else
                    result = result_1
                    *(result + 0x58) = 2
                
                goto label_1421a3974
            
            *(result_4 + 0x3c) = i_5
            uint64_t* result_11 = result_1
            zmm0 = _mm_cvtepi32_ps(zx.o(arg1[9].d))
            var_228 = result_11[1].d
            zmm13 = zx.o(*(result_11 + 0xc))
            zmm14.d = zmm7.d f/ zmm0.d
            var_260 = *(result_11 + 0x14)
            zmm9 = var_260
            var_230 = *result_11
            var_268 = zmm13.q
            zmm11 = var_268:4.d
            
            if (not(_mm_and_ps(zmm13, zmm15).d f> 9.99999975e-05f)
                    && not(_mm_and_ps(zmm11, zmm15).d f> 9.99999975e-05f)
                    && not(_mm_and_ps(zmm9, zmm15).d f> 9.99999975e-05f))
                zmm5_1 = *(var_298 + 0x1c0)
                zmm6 = __mulps_xmmps_memps(data_142d4cc00, *(var_298 + 0x1e0))
                zmm1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1)
                zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4_1), zmm0)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm1)
                arg4 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm5_1 = _mm_add_ps(zmm5_1, zmm6)
                arg4 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(arg4, zmm4_1), zmm0), zmm5_1)
                int32_t var_10c_1 = _mm_shuffle_ps(arg4, arg4, 0xaa).d
                zmm0 = _mm_unpacklo_ps(arg4, _mm_shuffle_ps(arg4, arg4, 0x55)[0].q)
                var_260 = var_10c_1
                zmm9 = var_260
                var_268 = zmm0.q
                zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                zmm13 = var_268.d
            
            zmm0 = result_11[3].d
            zmm12 = zx.o(result_11[5])
            zmm13.d = zmm13.d f* zmm0.d
            var_238 = *(result_11 + 0x24)
            zmm11.d = zmm11.d f* zmm0.d
            var_270 = result_11[6].d
            zmm8 = var_270
            zmm9.d = zmm9.d f* zmm0.d
            var_240 = *(result_11 + 0x1c)
            var_278 = zmm12.q
            zmm10 = var_278:4.d
            
            if (not(_mm_and_ps(zmm12, zmm15).d f> 9.99999975e-05f)
                    && not(_mm_and_ps(zmm10, zmm15).d f> 9.99999975e-05f)
                    && not(_mm_and_ps(zmm8, zmm15).d f> 9.99999975e-05f))
                zmm5_1 = *(var_298 + 0x1c0)
                zmm6 = __mulps_xmmps_memps(data_142d4cc00, *(var_298 + 0x1e0))
                zmm1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                zmm2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm2)
                arg4 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm1), zmm0)
                arg4 = _mm_add_ps(arg4, arg4)
                zmm5_1 = _mm_mul_ps(zmm5_1, arg4)
                zmm4_1 = _mm_shuffle_ps(arg4, arg4, 0xd2)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xc9), zmm2)
                zmm4_1 = _mm_mul_ps(zmm4_1, zmm1)
                zmm5_1 = _mm_add_ps(zmm5_1, zmm6)
                zmm4_1 = _mm_add_ps(_mm_sub_ps(zmm4_1, zmm0), zmm5_1)
                int32_t var_100_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa).d
                zmm0 = _mm_unpacklo_ps(zmm4_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)[0].q)
                var_270 = var_100_1
                zmm8 = var_270
                var_278 = zmm0.q
                zmm10 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                zmm12 = var_278.d
            
            zmm0 = *(result_11 + 0x34)
            int32_t i_8 = 0
            zmm15 = var_228
            int64_t i_6 = 0
            zmm12.d = zmm12.d f* zmm0.d
            int64_t i_4 = sx.q(i_5)
            zmm10[0] = zmm10[0] f* zmm0.d
            zmm8[0] = zmm8[0] f* zmm0.d
            
            if (i_5 s> 0)
                uint64_t* r8_5 = nullptr
                int64_t i_3 = i_4
                int32_t r10_1 = 1
                i_8 = i_5
                i_6 = i_4
                int64_t i
                
                do
                    int64_t rcx_10 = var_218
                    zmm2.d = float.s(r10_1)
                    r10_1 += 1
                    zmm2.d = zmm2.d f* zmm14.d
                    zmm1 = zmm2
                    zmm1[0] = zmm1[0] f* zmm2.d
                    zmm0.d = zmm1.d f* 3f
                    zmm1[0] = zmm1[0] f* zmm2.d
                    zmm1[0] = zmm1[0] + zmm1[0]
                    zmm1[0] = zmm1[0] - zmm1[0]
                    zmm1[0] = zmm1[0] + zmm1[0]
                    zmm5_1.d = zmm0.d f- zmm1[0]
                    zmm1[0] = zmm1[0] f- zmm0.d
                    zmm1[0] = zmm1[0] - zmm1[0]
                    zmm1[0] = zmm1[0] f* zmm12.d
                    zmm1[0] = zmm1[0] + 1f
                    zmm1[0] = zmm1[0] f+ zmm2.d
                    arg4.d = zmm1.d f* var_230.d
                    zmm2.d = zmm1.d f* var_230:4.d
                    zmm0.d = zmm1.d f* zmm13.d
                    zmm1[0] = zmm1[0] f* zmm15[0]
                    arg4.d = arg4.d f+ zmm0.d
                    zmm0.d = zmm5_1.d f* var_240.d
                    arg4.d = arg4.d f+ zmm1[0]
                    zmm1[0] = zmm1[0] * zmm10[0]
                    zmm1[0] = zmm1[0] * zmm8[0]
                    arg4.d = arg4.d f+ zmm0.d
                    zmm0.d = zmm1.d f* zmm11.d
                    zmm1[0] = zmm1[0] f* zmm9.d
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm0.d = zmm5_1.d f* var_240:4.d
                    zmm5_1.d = zmm5_1.d f* var_238
                    zmm1[0] = zmm1[0] + zmm1[0]
                    zmm2.d = zmm2.d f+ zmm1[0]
                    zmm1[0] = zmm1[0] + zmm1[0]
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm1[0] = zmm1[0] f+ zmm5_1.d
                    *(r8_5 + rcx_10) = (_mm_unpacklo_ps(arg4, zmm2.q)).q
                    *(r8_5 + rcx_10 + 8) = zmm1[0]
                    r8_5 += 0xc
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                result_11 = result_1
            
            result = zx.q(result_11[0xa].d * 2)
            result_11[0xb].d = result.d
            
            if (i_6 s< i_4)
                uint64_t* r8_7 = i_6 * 0xc
                int32_t r10_2 = i_8 + 1
                int64_t i_2 = i_4 - i_6
                int64_t i_1
                
                do
                    int64_t rcx_11 = var_218
                    zmm2.d = float.s(r10_2)
                    r10_2 += 1
                    zmm2.d = zmm2.d f* zmm14.d
                    zmm1 = zmm2
                    zmm1[0] = zmm1[0] f* zmm2.d
                    zmm0.d = zmm1.d f* 3f
                    zmm1[0] = zmm1[0] f* zmm2.d
                    zmm1[0] = zmm1[0] + zmm1[0]
                    zmm1[0] = zmm1[0] - zmm1[0]
                    zmm1[0] = zmm1[0] + zmm1[0]
                    zmm5_1.d = zmm0.d f- zmm1[0]
                    zmm1[0] = zmm1[0] f- zmm0.d
                    zmm1[0] = zmm1[0] - zmm1[0]
                    zmm1[0] = zmm1[0] f* zmm12.d
                    zmm1[0] = zmm1[0] + 1f
                    zmm1[0] = zmm1[0] f+ zmm2.d
                    arg4.d = zmm1.d f* var_230.d
                    zmm2.d = zmm1.d f* var_230:4.d
                    zmm0.d = zmm1.d f* zmm13.d
                    zmm1[0] = zmm1[0] f* zmm15[0]
                    arg4.d = arg4.d f+ zmm0.d
                    zmm0.d = zmm5_1.d f* var_240.d
                    arg4.d = arg4.d f+ zmm1[0]
                    zmm1[0] = zmm1[0] * zmm10[0]
                    zmm1[0] = zmm1[0] * zmm8[0]
                    arg4.d = arg4.d f+ zmm0.d
                    zmm0.d = zmm1.d f* zmm11.d
                    zmm1[0] = zmm1[0] f* zmm9.d
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm0.d = zmm5_1.d f* var_240:4.d
                    zmm5_1.d = zmm5_1.d f* var_238
                    zmm1[0] = zmm1[0] + zmm1[0]
                    zmm2.d = zmm2.d f+ zmm1[0]
                    zmm1[0] = zmm1[0] + zmm1[0]
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm1[0] = zmm1[0] f+ zmm5_1.d
                    *(r8_7 + rcx_11) = (_mm_unpacklo_ps(arg4, zmm2.q)).q
                    result = zx.q(zmm1[0])
                    *(r8_7 + rcx_11 + 8) = result.d
                    r8_7 += 0xc
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            if (rsi.b != 1)
                goto label_1421a35eb
            
            int32_t rax_37 = *(r14 + 0x150)
            int32_t rdx_5 = 1
            uint64_t* result_12 = result_1
            
            if (rax_37 != 0)
                rdx_5 = rax_37
            
            result = zx.q(result_12[0xa].d * rdx_5 * 2)
            result_12[0xb].d = result.d
            uint64_t* result_13 = result_1
            
            if (result_13[7].d s>= 0)
                zmm0 = *(result_13 + 0x54)
                rbx = var_298
                r8 = var_280
                r9 = arg3
                zmm14 = 0x3f000000
                zmm15 = 0x7fffffff
                zmm10 = 0x80000000
                zmm11 = 0x322bcc77
                
                if (not(zmm0.d f<= 9.99999975e-05f))
                    zmm1 = _mm_cvtepi32_ps(zx.o(rdx_5))
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm1[0] = zmm1[0] * 2f
                    zmm1[0] = zmm1[0] - 0.5f
                    result = zx.q((int.d(zmm1[0]) s>> 1) * 2)
                    result_13[0xb].d += result.d
            else
                result = zx.q(rdx_5 * 2)
                result_13[0xb].d += result.d
            label_1421a35eb:
                zmm15 = 0x7fffffff
                zmm14 = 0x3f000000
                zmm11 = 0x322bcc77
            label_1421a3974:
                zmm10 = 0x80000000
                rbx = var_298
                r8 = var_280
                r9 = arg3
            
            rcx_2 = var_288
            rdx = var_29c
        
        temp1_1 = r13
        r13 -= 1
    while (temp1_1 - 1 s>= 0)

return result
