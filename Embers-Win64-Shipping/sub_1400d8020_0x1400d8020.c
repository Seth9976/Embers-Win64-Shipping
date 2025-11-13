// 函数: sub_1400d8020
// 地址: 0x1400d8020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm15[0x4]
uint32_t var_38[0x4] = zmm15
float zmm14[0x4]
float var_48[0x4] = zmm14
float zmm13[0x4]
float var_58[0x4] = zmm13
float zmm12[0x4]
float var_68[0x4] = zmm12
uint32_t zmm11[0x4]
uint32_t var_78[0x4] = zmm11
uint32_t zmm10[0x4]
uint32_t var_88[0x4] = zmm10
uint32_t zmm9[0x4]
uint32_t var_98[0x4] = zmm9
float zmm8[0x4]
float var_a8[0x4] = zmm8
float zmm7[0x4]
float var_b8[0x4] = zmm7
float zmm6[0x4]
float var_c8[0x4] = zmm6
float zmm1[0x4] = *arg9
float zmm0[0x4] = arg5
uint32_t result = _mm_movemask_ps(zmm1)
int32_t rsi_4 = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
float zmm2[0x4]
float zmm3[0x4]
uint32_t zmm4[0x4]
uint32_t zmm5[0x4]

if (result != 0xf)
    float var_218_1[0x4] = zmm1
    float var_278_2[0x4]
    uint32_t var_268_2[0x4]
    int32_t rdi_1
    
    if (rsi_4 s<= 0)
        rdi_1 = 0
        zmm9 = zx.o(0)
        zmm13 = zx.o(0)
        __builtin_memset(&var_278_2, 0, 0x20)
        
        if (0 s>= arg8)
            zmm3 = var_218_1
            zmm4 = var_268_2
        else
        label_1400d8d84:
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi_1), 0), data_142e11d00)
            zmm8 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm0)
            zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm8
            int64_t rsi_8 = sx.q(zmm1[0])
            void* rax_9 = &(*arg4)[rsi_8]
            zmm0 = (*arg4)[rsi_8]
            int64_t rdi_5 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
            void* rsi_10 = &(*arg4)[rdi_5]
            float temp0_335[0x4] = _mm_unpacklo_ps(zmm0, (*arg4)[rdi_5][0].q)
            int64_t rbx_6 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
            void* rdi_7 = &(*arg4)[rbx_6]
            zmm2 = (*arg4)[rbx_6]
            int64_t rbp_7 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
            void* rbx_8 = &(*arg4)[rbp_7]
            float temp0_338[0x4] = _mm_unpacklo_ps(zmm2, (*arg4)[rbp_7][0].q)
            zmm0 = temp0_335[0].q | temp0_338[0].q << 0x40
            zmm2 = data_142fc95e0 & zmm8
            zmm11 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_9), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_10))[0].q)
            float temp0_343[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdi_7), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_8))[0].q)
            zmm11 = zmm11[0].q | temp0_343[0].q << 0x40
            zmm2 = data_142fc95f0 & zmm8
            zmm4 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_9), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_10))[0].q)
            float temp0_348[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdi_7), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_8))[0].q)
            zmm4 = zmm4[0].q | temp0_348[0].q << 0x40
            uint32_t var_178_2[0x4] = zmm11
            float var_168_2[0x4] = zmm4
            zmm10 = zx.o(0)
            zmm5 = (*arg3)[3]
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            uint32_t var_148_4[0x4] = zmm5
            uint32_t var_138_4[0x4] = zmm5
            uint32_t var_128_4[0x4] = zmm5
            uint32_t var_118_4[0x4] = zmm5
            zmm2 = *arg3
            zmm6 = (*arg3)[1]
            zmm1 = (*arg3)[2]
            float temp0_350[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_351[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_352[0x4] = _mm_mul_ps(zmm11, temp0_351)
            float temp0_353[0x4] = _mm_mul_ps(temp0_351, zmm4)
            zmm4 = _mm_mul_ps(zmm4, temp0_350)
            float temp0_355[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_356[0x4] = _mm_mul_ps(temp0_350, zmm0)
            float temp0_357[0x4] = _mm_mul_ps(zmm0, temp0_355)
            float temp0_358[0x4] = _mm_mul_ps(zmm5, zmm10)
            zmm4 = _mm_sub_ps(zmm4, _mm_mul_ps(temp0_355, zmm11))
            float temp0_361[0x4] = _mm_sub_ps(temp0_357, temp0_353)
            float temp0_362[0x4] = _mm_sub_ps(temp0_352, temp0_356)
            float temp0_363[0x4] = _mm_sub_ps(temp0_358, temp0_358)
            zmm4 = _mm_add_ps(zmm4, zmm4)
            float temp0_365[0x4] = _mm_add_ps(temp0_361, temp0_361)
            float temp0_366[0x4] = _mm_add_ps(temp0_362, temp0_362)
            float temp0_367[0x4] = _mm_add_ps(temp0_363, temp0_363)
            uint32_t var_258_4[0x4] = zmm4
            float var_248_4[0x4] = temp0_365
            float var_238_4[0x4] = temp0_366
            float var_228_4[0x4] = temp0_367
            float temp0_368[0x4] = _mm_mul_ps(zmm5, zmm4)
            zmm11 = _mm_mul_ps(zmm5, temp0_365)
            zmm15 = _mm_mul_ps(zmm5, temp0_366)
            float temp0_371[0x4] = __addps_xmmps_memps(temp0_368, zmm0)
            zmm11 = __addps_xmmps_memps(zmm11, var_178_2)
            zmm15 = __addps_xmmps_memps(zmm15, var_168_2)
            float temp0_375[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_367, zmm5), zmm10)
            float var_108_2[0x4] = temp0_371
            uint32_t var_f8_2[0x4] = zmm11
            uint32_t var_e8_2[0x4] = zmm15
            zmm6 = *arg3
            zmm1 = (*arg3)[1]
            zmm2 = (*arg3)[2]
            float temp0_376[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_377[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm5 = _mm_mul_ps(temp0_365, temp0_377)
            float temp0_379[0x4] = _mm_mul_ps(temp0_377, temp0_366)
            float temp0_380[0x4] = _mm_mul_ps(temp0_366, temp0_376)
            float temp0_381[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_382[0x4] = _mm_mul_ps(temp0_376, zmm4)
            zmm4 = _mm_mul_ps(zmm4, temp0_381)
            float temp0_385[0x4] = _mm_sub_ps(temp0_380, _mm_mul_ps(temp0_381, temp0_365))
            zmm4 = _mm_sub_ps(zmm4, temp0_379)
            zmm5 = _mm_sub_ps(zmm5, temp0_382)
            float temp0_388[0x4] = _mm_add_ps(temp0_385, temp0_371)
            zmm4 = _mm_add_ps(zmm4, zmm11)
            zmm5 = _mm_add_ps(zmm5, zmm15)
            zmm1 = arg3[1][0]
            zmm0 = (*arg3)[5]
            float temp0_392[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_388)
            float temp0_394[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4)
            zmm11 = (*arg3)[6]
            zmm11 = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm5)
            zmm12 = *arg1
            zmm2 = *arg2
            zmm3 = (*arg2)[1]
            zmm4 = _mm_sub_ps(temp0_392, _mm_shuffle_ps(zmm2, zmm2, 0))
            float temp0_400[0x4] = _mm_sub_ps(temp0_394, _mm_shuffle_ps(zmm3, zmm3, 0))
            zmm3 = (*arg2)[2]
            zmm5 = _mm_sub_ps(zmm11, _mm_shuffle_ps(zmm3, zmm3, 0))
            zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm4), zmm10)
            float temp0_406[0x4] = _mm_add_ps(_mm_mul_ps(temp0_400, temp0_400), zmm4)
            zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm5), temp0_406)
            float temp0_409[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
            float temp0_410[0x4] = _mm_rsqrt_ps(zmm5)
            zmm5 = _mm_mul_ps(_mm_mul_ps(zmm5, temp0_410), temp0_410)
            float temp0_415[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), temp0_410), data_142d3f640)
            float temp0_416[0x4] = _mm_rcp_ps(temp0_415)
            float temp0_417[0x4] = _mm_mul_ps(temp0_415, temp0_416)
            zmm2 = arg5
            float temp0_422[0x4] = _mm_sub_ps(
                _mm_sub_ps(temp0_409, 
                    _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_417), temp0_416)), 
                _mm_shuffle_ps(zmm2, zmm2, 0))
            float var_d8_2[0x4] = temp0_375
            zmm2 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_422, data_142fc95d0, 1), zmm8)
            result = _mm_movemask_ps(zmm2)
            
            if (result.b == 0)
                zmm3 = var_218_1
                zmm4 = var_268_2
            else
                float temp0_426[0x4] = _mm_mul_ps(temp0_392, temp0_422)
                result = zx.d(result.b)
                zmm3 = var_278_2
                zmm4 = zmm3
                char temp0_427 = result.b & 1
                
                if (temp0_427 == 0)
                    zmm0 = _mm_mul_ps(temp0_394, temp0_422)
                    zmm5 = zmm13
                    
                    if (temp0_427 != 0)
                        goto label_1400d928b
                    
                    goto label_1400d90fb
                
                zmm4 = zmm3
                zmm4[0] = zmm4[0] f+ temp0_426[0]
                zmm0 = _mm_mul_ps(temp0_394, temp0_422)
                zmm5 = zmm13
                
                if (temp0_427 == 0)
                label_1400d90fb:
                    zmm11 = _mm_mul_ps(zmm11, temp0_422)
                    zmm8 = zmm9
                    
                    if (temp0_427 != 0)
                        zmm8 = zmm9
                        zmm8[0] = zmm8[0] f+ zmm11[0]
                else
                label_1400d928b:
                    zmm5 = zmm13
                    zmm5[0] = zmm5[0] f+ zmm0[0]
                    zmm11 = _mm_mul_ps(zmm11, temp0_422)
                    zmm8 = zmm9
                    
                    if (temp0_427 != 0)
                        zmm8 = zmm9
                        zmm8[0] = zmm8[0] f+ zmm11[0]
                
                float temp0_430[0x4] = _mm_add_ps(var_278_2, temp0_426)
                char temp4_1 = result.b & 2
                zmm3 = var_218_1
                
                if (temp4_1 == 0)
                    zmm10 = temp0_430
                    zmm13 = _mm_add_ps(zmm13, zmm0)
                    
                    if (temp4_1 != 0)
                        zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm5, 1), zmm5, 0xe2)
                else
                    zmm10 = temp0_430
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_430, zmm4, 1), zmm4, 0xe2)
                    zmm13 = _mm_add_ps(zmm13, zmm0)
                    
                    if (temp4_1 != 0)
                        zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm5, 1), zmm5, 0xe2)
                
                zmm9 = _mm_add_ps(zmm9, zmm11)
                bool cond:33_1
                bool cond:34_1
                bool cond:41_1
                bool cond:42_1
                
                if (temp4_1 == 0)
                    char temp11_1 = result.b & 4
                    cond:33_1 = temp11_1 != 0
                    cond:34_1 = temp11_1 == 0
                    cond:41_1 = temp11_1 == 0
                    cond:42_1 = temp11_1 != 0
                    
                    if (temp11_1 != 0)
                        goto label_1400d94ca
                    
                    goto label_1400d92d1
                
                zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm8, 1), zmm8, 0xe2)
                char temp10_1 = result.b & 4
                cond:33_1 = temp10_1 != 0
                cond:34_1 = temp10_1 == 0
                cond:41_1 = temp10_1 == 0
                cond:42_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                label_1400d94ca:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm10, zmm4, 0x32), 0x84)
                    
                    if (cond:34_1)
                        goto label_1400d92d7
                    
                    goto label_1400d94dc
                
            label_1400d92d1:
                
                if (not(cond:33_1))
                label_1400d92d7:
                    
                    if (cond:42_1)
                        goto label_1400d94ef
                    
                    goto label_1400d92dd
                
            label_1400d94dc:
                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm13, zmm5, 0x32), 0x84)
                bool cond:49_1
                bool cond:50_1
                bool cond:57_1
                bool cond:58_1
                
                if (not(cond:41_1))
                label_1400d94ef:
                    zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm9, zmm8, 0x32), 0x84)
                    char temp19_1 = result.b & 8
                    cond:49_1 = temp19_1 == 0
                    cond:50_1 = temp19_1 != 0
                    cond:57_1 = temp19_1 == 0
                    cond:58_1 = temp19_1 != 0
                    
                    if (temp19_1 == 0)
                        goto label_1400d92e5
                    
                    goto label_1400d9506
                
            label_1400d92dd:
                char temp18_1 = result.b & 8
                cond:49_1 = temp18_1 == 0
                cond:50_1 = temp18_1 != 0
                cond:57_1 = temp18_1 == 0
                cond:58_1 = temp18_1 != 0
                
                if (temp18_1 == 0)
                label_1400d92e5:
                    var_278_2 = zmm4
                    
                    if (cond:50_1)
                        goto label_1400d951a
                    
                    goto label_1400d92ef
                
            label_1400d9506:
                var_278_2 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm10, zmm4, 0x23), 0x24)
                
                if (cond:49_1)
                label_1400d92ef:
                    zmm13 = zmm5
                    
                    if (not(cond:57_1))
                        zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm9, zmm8, 0x23), 0x24)
                else
                label_1400d951a:
                    zmm13 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm13, zmm5, 0x23), 0x24)
                    
                    if (cond:58_1)
                        zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm9, zmm8, 0x23), 0x24)
                
                zmm0 = var_268_2
                zmm12 = _mm_and_ps(_mm_add_ps(temp0_422, zmm0), zmm2)
                zmm9 = zmm8
                zmm4 = _mm_or_ps(_mm_andnot_ps(zmm2, zmm0), zmm12)
    else
        zmm8 = (*arg3)[3]
        float temp0_112[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float var_198_2[0x4] = *arg3
        float var_1a8_2[0x4] = (*arg3)[1]
        float var_1b8_2[0x4] = (*arg3)[2]
        zmm1 = *arg1
        float temp0_113[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg2
        zmm2 = (*arg2)[1]
        float temp0_114[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_115[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg2)[2]
        float temp0_116[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_117[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        int32_t rbx_2 = 0
        rdi_1 = 0
        __builtin_memset(&var_278_2, 0, 0x20)
        zmm13 = zx.o(0)
        zmm9 = zx.o(0)
        
        do
            int64_t rax_2 = sx.q(rbx_2)
            zmm7 = *(arg4 + rax_2)
            zmm0 = *(arg4 + rax_2 + 0x10)
            zmm1 = *(arg4 + rax_2 + 0x20)
            float temp0_142[0x4] = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0x4e), 
                    _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
                zmm1, 0xc4)
            zmm4 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
            float temp0_145[0x4] = _mm_shuffle_ps(zmm7, zmm0, 5)
            float temp0_148[0x4] = _mm_shuffle_ps(temp0_145, 
                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_145, zmm0, 0xf8), 0x22), 0x28)
            uint32_t var_258_2[0x4] = zmm4
            int128_t var_228_2 = zx.o(0)
            zmm10 = var_1a8_2
            zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_150[0x4] = _mm_mul_ps(zmm10, temp0_142)
            float temp0_151[0x4] = _mm_shuffle_ps(var_1b8_2, var_1b8_2, 0)
            float temp0_152[0x4] = _mm_mul_ps(temp0_151, zmm4)
            float temp0_153[0x4] = _mm_shuffle_ps(var_198_2, var_198_2, 0)
            zmm5 = _mm_mul_ps(temp0_153, temp0_148)
            float temp0_156[0x4] = _mm_sub_ps(temp0_150, _mm_mul_ps(temp0_148, temp0_151))
            float temp0_158[0x4] = _mm_sub_ps(temp0_152, _mm_mul_ps(temp0_142, temp0_153))
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm4, zmm10))
            float temp0_161[0x4] = _mm_add_ps(temp0_156, temp0_156)
            float temp0_162[0x4] = _mm_add_ps(temp0_158, temp0_158)
            zmm5 = _mm_add_ps(zmm5, zmm5)
            zmm4 = _mm_mul_ps(temp0_112, temp0_162)
            float temp0_165[0x4] = _mm_mul_ps(temp0_161, temp0_151)
            float temp0_166[0x4] = _mm_mul_ps(temp0_162, temp0_151)
            float temp0_171[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm5, zmm10), temp0_166), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_112, temp0_161), var_258_2))
            float temp0_172[0x4] = _mm_mul_ps(temp0_112, zmm5)
            float temp0_173[0x4] = _mm_mul_ps(temp0_162, temp0_153)
            zmm5 = _mm_mul_ps(zmm5, temp0_153)
            zmm4 = __addps_xmmps_memps(zmm4, temp0_148)
            float temp0_177[0x4] = _mm_add_ps(_mm_sub_ps(temp0_165, zmm5), zmm4)
            float temp0_178[0x4] = __addps_xmmps_memps(temp0_172, temp0_142)
            float temp0_181[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_173, _mm_mul_ps(temp0_161, zmm10)), temp0_178)
            zmm14 = arg3[1][0]
            zmm15 = (*arg3)[5]
            float temp0_183[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_171)
            zmm15 = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_177)
            zmm11 = (*arg3)[6]
            zmm11 = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_181)
            float temp0_188[0x4] = __subps_xmmps_memps(temp0_183, temp0_114)
            float temp0_189[0x4] = __subps_xmmps_memps(zmm15, temp0_115)
            float temp0_190[0x4] = __subps_xmmps_memps(zmm11, temp0_116)
            float temp0_192[0x4] = _mm_add_ps(_mm_mul_ps(temp0_188, temp0_188), zx.o(0))
            float temp0_194[0x4] = _mm_add_ps(_mm_mul_ps(temp0_189, temp0_189), temp0_192)
            float temp0_196[0x4] = _mm_add_ps(_mm_mul_ps(temp0_190, temp0_190), temp0_194)
            float temp0_197[0x4] = _mm_rsqrt_ps(temp0_196)
            float temp0_199[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_196, temp0_197), temp0_197)
            float temp0_202[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_199), temp0_197), data_142d3f640)
            float temp0_203[0x4] = _mm_rcp_ps(temp0_202)
            float temp0_204[0x4] = _mm_mul_ps(temp0_202, temp0_203)
            float var_148_2[0x4] = temp0_112
            float var_138_2[0x4] = temp0_112
            float var_128_2[0x4] = temp0_112
            float var_118_2[0x4] = temp0_112
            float temp0_208[0x4] = __subps_xmmps_memps(
                _mm_sub_ps(temp0_113, 
                    _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_204), temp0_203)), 
                temp0_117)
            zmm10 = __cmpps_xmmps_memps_immb(temp0_208, data_142fc95d0, 1)
            result = _mm_movemask_ps(zmm10)
            
            if (result.b != 0)
                float temp0_211[0x4] = _mm_mul_ps(temp0_183, temp0_208)
                result = zx.d(result.b)
                zmm6 = var_278_2
                zmm4 = zmm6
                char temp1_1 = result.b & 1
                
                if (temp1_1 == 0)
                    zmm15 = _mm_mul_ps(zmm15, temp0_208)
                    zmm3 = zmm13
                    
                    if (temp1_1 != 0)
                        goto label_1400d85e6
                    
                    goto label_1400d88cc
                
                zmm4 = zmm6
                zmm4[0] = zmm4[0] f+ temp0_211[0]
                zmm15 = _mm_mul_ps(zmm15, temp0_208)
                zmm3 = zmm13
                
                if (temp1_1 != 0)
                label_1400d85e6:
                    zmm3 = zmm13
                    zmm3[0] = zmm3[0] f+ zmm15[0]
                    zmm11 = _mm_mul_ps(zmm11, temp0_208)
                    zmm5 = zmm9
                    
                    if (temp1_1 == 0)
                        goto label_1400d88da
                    
                    goto label_1400d85fd
                
            label_1400d88cc:
                zmm11 = _mm_mul_ps(zmm11, temp0_208)
                zmm5 = zmm9
                bool cond:21_1
                bool cond:22_1
                bool cond:28_1
                bool cond:29_1
                
                if (temp1_1 == 0)
                label_1400d88da:
                    zmm6 = _mm_add_ps(zmm6, temp0_211)
                    char temp6_1 = result.b & 2
                    cond:21_1 = temp6_1 != 0
                    cond:22_1 = temp6_1 == 0
                    cond:28_1 = temp6_1 == 0
                    cond:29_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_1400d861d
                    
                    goto label_1400d88e6
                
            label_1400d85fd:
                zmm5 = zmm9
                zmm5[0] = zmm5[0] f+ zmm11[0]
                zmm6 = _mm_add_ps(zmm6, temp0_211)
                char temp5_1 = result.b & 2
                cond:21_1 = temp5_1 != 0
                cond:22_1 = temp5_1 == 0
                cond:28_1 = temp5_1 == 0
                cond:29_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                label_1400d861d:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm4, 1), zmm4, 0xe2)
                    zmm13 = _mm_add_ps(zmm13, zmm15)
                    
                    if (cond:22_1)
                        goto label_1400d88f0
                    
                    goto label_1400d8636
                
            label_1400d88e6:
                zmm13 = _mm_add_ps(zmm13, zmm15)
                
                if (not(cond:21_1))
                label_1400d88f0:
                    zmm9 = _mm_add_ps(zmm9, zmm11)
                    
                    if (cond:29_1)
                        goto label_1400d864f
                    
                    goto label_1400d88fa
                
            label_1400d8636:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm3, 1), zmm3, 0xe2)
                zmm9 = _mm_add_ps(zmm9, zmm11)
                bool cond:35_1
                bool cond:36_1
                bool cond:43_1
                bool cond:44_1
                
                if (not(cond:28_1))
                label_1400d864f:
                    zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm5, 1), zmm5, 0xe2)
                    char temp13_1 = result.b & 4
                    cond:35_1 = temp13_1 == 0
                    cond:36_1 = temp13_1 != 0
                    cond:43_1 = temp13_1 != 0
                    cond:44_1 = temp13_1 == 0
                    
                    if (temp13_1 == 0)
                        goto label_1400d8902
                    
                    goto label_1400d8661
                
            label_1400d88fa:
                char temp12_1 = result.b & 4
                cond:35_1 = temp12_1 == 0
                cond:36_1 = temp12_1 != 0
                cond:43_1 = temp12_1 != 0
                cond:44_1 = temp12_1 == 0
                
                if (temp12_1 != 0)
                label_1400d8661:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm6, zmm4, 0x32), 0x84)
                    
                    if (not(cond:35_1))
                    label_1400d8673:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm13, zmm3, 0x32), 0x84)
                        
                        if (cond:44_1)
                            goto label_1400d890e
                        
                        goto label_1400d8685
                else
                label_1400d8902:
                    
                    if (cond:36_1)
                        goto label_1400d8673
                
                bool cond:51_1
                bool cond:52_1
                bool cond:59_1
                bool cond:60_1
                
                if (not(cond:43_1))
                label_1400d890e:
                    char temp21_1 = result.b & 8
                    cond:51_1 = temp21_1 != 0
                    cond:52_1 = temp21_1 == 0
                    cond:59_1 = temp21_1 != 0
                    cond:60_1 = temp21_1 == 0
                    
                    if (temp21_1 != 0)
                        goto label_1400d8699
                    
                    goto label_1400d8916
                
            label_1400d8685:
                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm9, zmm5, 0x32), 0x84)
                char temp20_1 = result.b & 8
                cond:51_1 = temp20_1 != 0
                cond:52_1 = temp20_1 == 0
                cond:59_1 = temp20_1 != 0
                cond:60_1 = temp20_1 == 0
                
                if (temp20_1 != 0)
                label_1400d8699:
                    var_278_2 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm6, zmm4, 0x23), 0x24)
                    
                    if (cond:52_1)
                        goto label_1400d8920
                    
                    goto label_1400d86ad
                
            label_1400d8916:
                var_278_2 = zmm4
                
                if (cond:51_1)
                label_1400d86ad:
                    zmm13 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm13, zmm3, 0x23), 0x24)
                    
                    if (cond:59_1)
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm9, zmm5, 0x23), 0x24)
                else
                label_1400d8920:
                    zmm13 = zmm3
                    
                    if (not(cond:60_1))
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm9, zmm5, 0x23), 0x24)
                
                zmm0 = var_268_2
                zmm2 = _mm_and_ps(_mm_add_ps(temp0_208, zmm0), zmm10)
                zmm9 = zmm5
                var_268_2 = _mm_or_ps(_mm_andnot_ps(zmm10, zmm0), zmm2)
            
            rdi_1 += 4
            rbx_2 += 0x30
        while (rdi_1 s< rsi_4)
        
        if (rdi_1 s< arg8)
            goto label_1400d8d84
        
        zmm3 = var_218_1
        zmm4 = var_268_2
    zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0))
    zmm0 = zmm3 & not.o(var_278_2)
    float temp0_474[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm0, 0xee), zmm0)
    float temp0_475[0x4] = _mm_shuffle_ps(temp0_474, temp0_474, 0xe5)
    temp0_475[0] = temp0_475[0] + temp0_474[0]
    zmm1 = zmm3 & not.o(zmm13)
    float temp0_477[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    float temp0_478[0x4] = _mm_shuffle_ps(temp0_477, temp0_477, 0xe5)
    temp0_478[0] = temp0_478[0] + temp0_477[0]
    float temp0_479[0x4] = _mm_unpacklo_ps(temp0_475, temp0_478[0].q)
    zmm1 = zmm3 & not.o(zmm9)
    float temp0_481[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    float temp0_482[0x4] = _mm_shuffle_ps(temp0_481, temp0_481, 0xe5)
    temp0_482[0] = temp0_482[0] + temp0_481[0]
    float temp0_483[0x4] = _mm_add_ps(zx.o(*arg7)[0].q | arg7[1].d[0].q << 0x40, 
        temp0_479[0].q | temp0_482[0].q << 0x40)
    *arg7 = temp0_483[0]
    float temp0_484[0x4] = _mm_shuffle_ps(temp0_483, temp0_483, 0xe5)
    temp0_483[0].q = temp0_483 u>> 0x40
    *(arg7 + 4) = temp0_484[0]
    arg7[1].d = temp0_483[0]
    zmm3 &= not.o(zmm4)
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm3, 0xee), zmm3)
else
    float var_278_1[0x4]
    float var_268_1[0x4]
    int32_t rdi
    
    if (rsi_4 s<= 0)
        rdi = 0
        zmm15 = zx.o(0)
        zmm12 = zx.o(0)
        __builtin_memset(&var_278_1, 0, 0x20)
        
        if (0 s>= arg8)
            zmm5 = var_268_1
        else
        label_1400d8993:
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi), 0), data_142e11d00)
            zmm8 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm0)
            zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm8
            int64_t rsi_5 = sx.q(zmm1[0])
            void* rax_4 = &(*arg4)[rsi_5]
            zmm0 = (*arg4)[rsi_5]
            int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
            void* rsi_7 = &(*arg4)[rdi_2]
            float temp0_230[0x4] = _mm_unpacklo_ps(zmm0, (*arg4)[rdi_2][0].q)
            int64_t rbx_3 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
            void* rdi_4 = &(*arg4)[rbx_3]
            zmm2 = (*arg4)[rbx_3]
            int64_t rbp_1 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
            void* rbx_5 = &(*arg4)[rbp_1]
            float temp0_233[0x4] = _mm_unpacklo_ps(zmm2, (*arg4)[rbp_1][0].q)
            zmm0 = temp0_230[0].q | temp0_233[0].q << 0x40
            zmm2 = data_142fc95e0 & zmm8
            zmm10 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_4), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_7))[0].q)
            float temp0_238[0x4] = _mm_unpacklo_ps(
                *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdi_4), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_5))[0].q)
            zmm10 = zmm10[0].q | temp0_238[0].q << 0x40
            zmm2 = data_142fc95f0 & zmm8
            float temp0_240[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_4), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_7))[0].q)
            zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdi_4), 
                (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_5))[0].q)
            zmm3 = temp0_240[0].q | zmm4[0].q << 0x40
            uint32_t var_178_1[0x4] = zmm10
            zmm9 = zx.o(0)
            zmm4 = (*arg3)[3]
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
            uint32_t var_148_3[0x4] = zmm4
            uint32_t var_138_3[0x4] = zmm4
            uint32_t var_128_3[0x4] = zmm4
            uint32_t var_118_3[0x4] = zmm4
            zmm5 = *arg3
            zmm6 = (*arg3)[1]
            zmm1 = (*arg3)[2]
            float temp0_245[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_247[0x4] = _mm_mul_ps(zmm10, zmm5)
            zmm5 = _mm_mul_ps(zmm5, zmm3)
            float temp0_249[0x4] = _mm_mul_ps(zmm3, temp0_245)
            float temp0_250[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_251[0x4] = _mm_mul_ps(temp0_245, zmm0)
            float temp0_252[0x4] = _mm_mul_ps(zmm0, temp0_250)
            float temp0_253[0x4] = _mm_mul_ps(zmm4, zmm9)
            float temp0_255[0x4] = _mm_sub_ps(temp0_249, _mm_mul_ps(temp0_250, zmm10))
            float temp0_256[0x4] = _mm_sub_ps(temp0_252, zmm5)
            float temp0_257[0x4] = _mm_sub_ps(temp0_247, temp0_251)
            float temp0_258[0x4] = _mm_sub_ps(temp0_253, temp0_253)
            float temp0_259[0x4] = _mm_add_ps(temp0_255, temp0_255)
            float temp0_260[0x4] = _mm_add_ps(temp0_256, temp0_256)
            float temp0_261[0x4] = _mm_add_ps(temp0_257, temp0_257)
            float temp0_262[0x4] = _mm_add_ps(temp0_258, temp0_258)
            float var_258_3[0x4] = temp0_259
            float var_248_3[0x4] = temp0_260
            float var_238_3[0x4] = temp0_261
            float var_228_3[0x4] = temp0_262
            zmm11 = _mm_mul_ps(zmm4, temp0_259)
            zmm10 = _mm_mul_ps(zmm4, temp0_260)
            float temp0_265[0x4] = _mm_mul_ps(zmm4, temp0_261)
            zmm11 = __addps_xmmps_memps(zmm11, zmm0)
            zmm10 = __addps_xmmps_memps(zmm10, var_178_1)
            float temp0_268[0x4] = __addps_xmmps_memps(temp0_265, zmm3)
            float temp0_270[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_262, zmm4), zmm9)
            uint32_t var_108_1[0x4] = zmm11
            uint32_t var_f8_1[0x4] = zmm10
            float var_e8_1[0x4] = temp0_268
            zmm6 = *arg3
            zmm1 = (*arg3)[1]
            zmm5 = (*arg3)[2]
            float temp0_271[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_272[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm4 = _mm_mul_ps(temp0_260, temp0_272)
            float temp0_274[0x4] = _mm_mul_ps(temp0_272, temp0_261)
            float temp0_275[0x4] = _mm_mul_ps(temp0_261, temp0_271)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_277[0x4] = _mm_mul_ps(temp0_271, temp0_259)
            float temp0_278[0x4] = _mm_mul_ps(temp0_259, zmm5)
            float temp0_280[0x4] = _mm_sub_ps(temp0_275, _mm_mul_ps(zmm5, temp0_260))
            float temp0_281[0x4] = _mm_sub_ps(temp0_278, temp0_274)
            zmm4 = _mm_sub_ps(zmm4, temp0_277)
            float temp0_283[0x4] = _mm_add_ps(temp0_280, zmm11)
            float temp0_284[0x4] = _mm_add_ps(temp0_281, zmm10)
            zmm4 = _mm_add_ps(zmm4, temp0_268)
            zmm1 = arg3[1][0]
            zmm0 = (*arg3)[5]
            float temp0_287[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_283)
            float temp0_289[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_284)
            zmm10 = (*arg3)[6]
            zmm10 = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm4)
            zmm11 = *arg1
            zmm2 = *arg2
            zmm3 = (*arg2)[1]
            zmm4 = _mm_sub_ps(temp0_287, _mm_shuffle_ps(zmm2, zmm2, 0))
            float temp0_295[0x4] = _mm_sub_ps(temp0_289, _mm_shuffle_ps(zmm3, zmm3, 0))
            zmm3 = (*arg2)[2]
            zmm5 = _mm_sub_ps(zmm10, _mm_shuffle_ps(zmm3, zmm3, 0))
            zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm4), zmm9)
            float temp0_301[0x4] = _mm_add_ps(_mm_mul_ps(temp0_295, temp0_295), zmm4)
            zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm5), temp0_301)
            zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0)
            float temp0_305[0x4] = _mm_rsqrt_ps(zmm5)
            zmm5 = _mm_mul_ps(_mm_mul_ps(zmm5, temp0_305), temp0_305)
            float temp0_310[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), temp0_305), data_142d3f640)
            float temp0_311[0x4] = _mm_rcp_ps(temp0_310)
            float temp0_312[0x4] = _mm_mul_ps(temp0_310, temp0_311)
            zmm2 = arg5
            zmm11 = _mm_sub_ps(
                _mm_sub_ps(zmm11, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_312), temp0_311)), 
                _mm_shuffle_ps(zmm2, zmm2, 0))
            float var_d8_1[0x4] = temp0_270
            uint32_t temp0_319[0x4] =
                _mm_and_ps(__cmpps_xmmps_memps_immb(zmm11, data_142fc95d0, 1), zmm8)
            result = _mm_movemask_ps(temp0_319)
            
            if (result.b == 0)
                zmm5 = var_268_1
            else
                float temp0_321[0x4] = _mm_mul_ps(temp0_287, zmm11)
                result = zx.d(result.b)
                zmm2 = var_278_1
                zmm3 = zmm2
                char temp2_1 = result.b & 1
                
                if (temp2_1 == 0)
                    zmm0 = _mm_mul_ps(temp0_289, zmm11)
                    zmm4 = zmm12
                    
                    if (temp2_1 != 0)
                        goto label_1400d9166
                    
                    goto label_1400d8d0a
                
                zmm3 = zmm2
                zmm3[0] = zmm3[0] + temp0_321[0]
                zmm0 = _mm_mul_ps(temp0_289, zmm11)
                zmm4 = zmm12
                
                if (temp2_1 == 0)
                label_1400d8d0a:
                    zmm10 = _mm_mul_ps(zmm10, zmm11)
                    zmm2 = zmm15
                    
                    if (temp2_1 != 0)
                        zmm2 = zmm15
                        zmm2[0] = zmm2[0] f+ zmm10[0]
                else
                label_1400d9166:
                    zmm4 = zmm12
                    zmm4[0] = zmm4[0] f+ zmm0[0]
                    zmm10 = _mm_mul_ps(zmm10, zmm11)
                    zmm2 = zmm15
                    
                    if (temp2_1 != 0)
                        zmm2 = zmm15
                        zmm2[0] = zmm2[0] f+ zmm10[0]
                
                float temp0_324[0x4] = _mm_add_ps(var_278_1, temp0_321)
                char temp7_1 = result.b & 2
                
                if (temp7_1 == 0)
                    zmm9 = temp0_324
                    zmm12 = _mm_add_ps(zmm12, zmm0)
                    
                    if (temp7_1 != 0)
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm4, 1), zmm4, 0xe2)
                else
                    zmm9 = temp0_324
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_324, zmm3, 1), zmm3, 0xe2)
                    zmm12 = _mm_add_ps(zmm12, zmm0)
                    
                    if (temp7_1 != 0)
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm4, 1), zmm4, 0xe2)
                
                zmm15 = _mm_add_ps(zmm15, zmm10)
                bool cond:37_1
                bool cond:38_1
                bool cond:45_1
                bool cond:46_1
                
                if (temp7_1 == 0)
                    char temp15_1 = result.b & 4
                    cond:37_1 = temp15_1 != 0
                    cond:38_1 = temp15_1 == 0
                    cond:45_1 = temp15_1 == 0
                    cond:46_1 = temp15_1 != 0
                    
                    if (temp15_1 != 0)
                        goto label_1400d944b
                    
                    goto label_1400d91ac
                
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm2, 1), zmm2, 0xe2)
                char temp14_1 = result.b & 4
                cond:37_1 = temp14_1 != 0
                cond:38_1 = temp14_1 == 0
                cond:45_1 = temp14_1 == 0
                cond:46_1 = temp14_1 != 0
                
                if (temp14_1 != 0)
                label_1400d944b:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x32), 0x84)
                    
                    if (cond:38_1)
                        goto label_1400d91b2
                    
                    goto label_1400d945d
                
            label_1400d91ac:
                
                if (not(cond:37_1))
                label_1400d91b2:
                    
                    if (cond:46_1)
                        goto label_1400d946f
                    
                    goto label_1400d91b8
                
            label_1400d945d:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm12, zmm4, 0x32), 0x84)
                bool cond:53_1
                bool cond:54_1
                bool cond:61_1
                bool cond:62_1
                
                if (not(cond:45_1))
                label_1400d946f:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm15, zmm2, 0x32), 0x84)
                    char temp23_1 = result.b & 8
                    cond:53_1 = temp23_1 == 0
                    cond:54_1 = temp23_1 != 0
                    cond:61_1 = temp23_1 == 0
                    cond:62_1 = temp23_1 != 0
                    
                    if (temp23_1 == 0)
                        goto label_1400d91c0
                    
                    goto label_1400d9485
                
            label_1400d91b8:
                char temp22_1 = result.b & 8
                cond:53_1 = temp22_1 == 0
                cond:54_1 = temp22_1 != 0
                cond:61_1 = temp22_1 == 0
                cond:62_1 = temp22_1 != 0
                
                if (temp22_1 == 0)
                label_1400d91c0:
                    var_278_1 = zmm3
                    
                    if (cond:54_1)
                        goto label_1400d9499
                    
                    goto label_1400d91ca
                
            label_1400d9485:
                var_278_1 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x23), 0x24)
                
                if (cond:53_1)
                label_1400d91ca:
                    zmm12 = zmm4
                    
                    if (not(cond:61_1))
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm15, zmm2, 0x23), 0x24)
                else
                label_1400d9499:
                    zmm12 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm12, zmm4, 0x23), 0x24)
                    
                    if (cond:62_1)
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm15, zmm2, 0x23), 0x24)
                
                uint32_t temp0_443[0x4] = _mm_and_ps(_mm_add_ps(zmm11, var_268_1), temp0_319)
                zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_319, var_268_1), temp0_443)
                zmm15 = zmm2
    else
        zmm8 = (*arg3)[3]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float var_198_1[0x4] = *arg3
        float var_1a8_1[0x4] = (*arg3)[1]
        float var_1b8_1[0x4] = (*arg3)[2]
        zmm1 = *arg1
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm1 = *arg2
        zmm2 = (*arg2)[1]
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm1 = (*arg2)[2]
        float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        int32_t rbx_1 = 0
        rdi = 0
        __builtin_memset(&var_278_1, 0, 0x20)
        zmm12 = zx.o(0)
        zmm15 = zx.o(0)
        
        do
            int64_t rax_1 = sx.q(rbx_1)
            zmm0 = *(arg4 + rax_1)
            zmm1 = *(arg4 + rax_1 + 0x10)
            zmm2 = *(arg4 + rax_1 + 0x20)
            zmm5 = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm0, 0x4e), 
                    _mm_shuffle_epi32(zmm1, 0xe5)[0].q), 
                zmm2, 0xc4)
            float temp0_33[0x4] = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm2, zmm1, 0x21), 0x2c)
            float temp0_34[0x4] = _mm_shuffle_ps(zmm0, zmm1, 5)
            float temp0_37[0x4] = _mm_shuffle_ps(temp0_34, 
                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(temp0_34, zmm1, 0xf8), 0x22), 0x28)
            uint32_t var_238_1[0x4] = zmm5
            int128_t var_228_1 = zx.o(0)
            zmm9 = var_1a8_1
            zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
            float temp0_39[0x4] = _mm_mul_ps(zmm9, zmm5)
            float temp0_40[0x4] = _mm_shuffle_ps(var_1b8_1, var_1b8_1, 0)
            float temp0_41[0x4] = _mm_mul_ps(temp0_40, temp0_33)
            float temp0_42[0x4] = _mm_shuffle_ps(var_198_1, var_198_1, 0)
            zmm4 = _mm_mul_ps(temp0_42, temp0_37)
            float temp0_45[0x4] = _mm_sub_ps(temp0_39, _mm_mul_ps(temp0_37, temp0_40))
            float temp0_47[0x4] = _mm_sub_ps(temp0_41, _mm_mul_ps(zmm5, temp0_42))
            zmm4 = _mm_sub_ps(zmm4, _mm_mul_ps(temp0_33, zmm9))
            float temp0_50[0x4] = _mm_add_ps(temp0_45, temp0_45)
            float temp0_51[0x4] = _mm_add_ps(temp0_47, temp0_47)
            zmm4 = _mm_add_ps(zmm4, zmm4)
            zmm5 = _mm_mul_ps(temp0_1, temp0_51)
            float temp0_54[0x4] = _mm_mul_ps(temp0_50, temp0_40)
            float temp0_55[0x4] = _mm_mul_ps(temp0_51, temp0_40)
            float temp0_60[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm4, zmm9), temp0_55), 
                __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_50), temp0_33))
            float temp0_61[0x4] = _mm_mul_ps(temp0_1, zmm4)
            float temp0_62[0x4] = _mm_mul_ps(temp0_51, temp0_42)
            zmm4 = _mm_mul_ps(zmm4, temp0_42)
            zmm5 = __addps_xmmps_memps(zmm5, temp0_37)
            float temp0_66[0x4] = _mm_add_ps(_mm_sub_ps(temp0_54, zmm4), zmm5)
            float temp0_67[0x4] = __addps_xmmps_memps(temp0_61, var_238_1)
            float temp0_70[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_62, _mm_mul_ps(temp0_50, zmm9)), temp0_67)
            zmm13 = arg3[1][0]
            zmm14 = (*arg3)[5]
            float temp0_72[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_60)
            float temp0_74[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), temp0_66)
            zmm10 = (*arg3)[6]
            zmm10 = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_70)
            float temp0_77[0x4] = __subps_xmmps_memps(temp0_72, temp0_3)
            float temp0_78[0x4] = __subps_xmmps_memps(temp0_74, temp0_4)
            float temp0_79[0x4] = __subps_xmmps_memps(zmm10, temp0_5)
            float temp0_81[0x4] = _mm_add_ps(_mm_mul_ps(temp0_77, temp0_77), zx.o(0))
            float temp0_83[0x4] = _mm_add_ps(_mm_mul_ps(temp0_78, temp0_78), temp0_81)
            float temp0_85[0x4] = _mm_add_ps(_mm_mul_ps(temp0_79, temp0_79), temp0_83)
            float temp0_86[0x4] = _mm_rsqrt_ps(temp0_85)
            float temp0_88[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_85, temp0_86), temp0_86)
            float temp0_91[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_88), temp0_86), data_142d3f640)
            float temp0_92[0x4] = _mm_rcp_ps(temp0_91)
            float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_92)
            float var_148_1[0x4] = temp0_1
            float var_138_1[0x4] = temp0_1
            float var_128_1[0x4] = temp0_1
            float var_118_1[0x4] = temp0_1
            float temp0_97[0x4] = __subps_xmmps_memps(
                _mm_sub_ps(temp0_2, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_93), temp0_92)), 
                temp0_6)
            zmm9 = __cmpps_xmmps_memps_immb(temp0_97, data_142fc95d0, 1)
            result = _mm_movemask_ps(zmm9)
            
            if (result.b != 0)
                float temp0_100[0x4] = _mm_mul_ps(temp0_72, temp0_97)
                result = zx.d(result.b)
                zmm6 = var_278_1
                zmm3 = zmm6
                char temp3_1 = result.b & 1
                
                if (temp3_1 == 0)
                    zmm14 = _mm_mul_ps(temp0_74, temp0_97)
                    zmm2 = zmm12
                    
                    if (temp3_1 != 0)
                        goto label_1400d8196
                    
                    goto label_1400d847c
                
                zmm3 = zmm6
                zmm3[0] = zmm3[0] + temp0_100[0]
                zmm14 = _mm_mul_ps(temp0_74, temp0_97)
                zmm2 = zmm12
                
                if (temp3_1 != 0)
                label_1400d8196:
                    zmm2 = zmm12
                    zmm2[0] = zmm2[0] + zmm14[0]
                    zmm10 = _mm_mul_ps(zmm10, temp0_97)
                    zmm4 = zmm15
                    
                    if (temp3_1 == 0)
                        goto label_1400d848a
                    
                    goto label_1400d81ad
                
            label_1400d847c:
                zmm10 = _mm_mul_ps(zmm10, temp0_97)
                zmm4 = zmm15
                bool cond:25_1
                bool cond:26_1
                bool cond:31_1
                bool cond:32_1
                
                if (temp3_1 == 0)
                label_1400d848a:
                    zmm6 = _mm_add_ps(zmm6, temp0_100)
                    char temp9_1 = result.b & 2
                    cond:25_1 = temp9_1 != 0
                    cond:26_1 = temp9_1 == 0
                    cond:31_1 = temp9_1 == 0
                    cond:32_1 = temp9_1 != 0
                    
                    if (temp9_1 != 0)
                        goto label_1400d81cd
                    
                    goto label_1400d8496
                
            label_1400d81ad:
                zmm4 = zmm15
                zmm4[0] = zmm4[0] f+ zmm10[0]
                zmm6 = _mm_add_ps(zmm6, temp0_100)
                char temp8_1 = result.b & 2
                cond:25_1 = temp8_1 != 0
                cond:26_1 = temp8_1 == 0
                cond:31_1 = temp8_1 == 0
                cond:32_1 = temp8_1 != 0
                
                if (temp8_1 != 0)
                label_1400d81cd:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm3, 1), zmm3, 0xe2)
                    zmm12 = _mm_add_ps(zmm12, zmm14)
                    
                    if (cond:26_1)
                        goto label_1400d84a0
                    
                    goto label_1400d81e6
                
            label_1400d8496:
                zmm12 = _mm_add_ps(zmm12, zmm14)
                
                if (not(cond:25_1))
                label_1400d84a0:
                    zmm15 = _mm_add_ps(zmm15, zmm10)
                    
                    if (cond:32_1)
                        goto label_1400d81ff
                    
                    goto label_1400d84aa
                
            label_1400d81e6:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm2, 1), zmm2, 0xe2)
                zmm15 = _mm_add_ps(zmm15, zmm10)
                bool cond:39_1
                bool cond:40_1
                bool cond:47_1
                bool cond:48_1
                
                if (not(cond:31_1))
                label_1400d81ff:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm4, 1), zmm4, 0xe2)
                    char temp17_1 = result.b & 4
                    cond:39_1 = temp17_1 == 0
                    cond:40_1 = temp17_1 != 0
                    cond:47_1 = temp17_1 != 0
                    cond:48_1 = temp17_1 == 0
                    
                    if (temp17_1 == 0)
                        goto label_1400d84b2
                    
                    goto label_1400d8211
                
            label_1400d84aa:
                char temp16_1 = result.b & 4
                cond:39_1 = temp16_1 == 0
                cond:40_1 = temp16_1 != 0
                cond:47_1 = temp16_1 != 0
                cond:48_1 = temp16_1 == 0
                
                if (temp16_1 != 0)
                label_1400d8211:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm6, zmm3, 0x32), 0x84)
                    
                    if (not(cond:39_1))
                    label_1400d8223:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x32), 0x84)
                        
                        if (cond:48_1)
                            goto label_1400d84be
                        
                        goto label_1400d8235
                else
                label_1400d84b2:
                    
                    if (cond:40_1)
                        goto label_1400d8223
                
                bool cond:55_1
                bool cond:56_1
                bool cond:63_1
                bool cond:64_1
                
                if (not(cond:47_1))
                label_1400d84be:
                    char temp25_1 = result.b & 8
                    cond:55_1 = temp25_1 != 0
                    cond:56_1 = temp25_1 == 0
                    cond:63_1 = temp25_1 != 0
                    cond:64_1 = temp25_1 == 0
                    
                    if (temp25_1 != 0)
                        goto label_1400d8249
                    
                    goto label_1400d84c6
                
            label_1400d8235:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm15, zmm4, 0x32), 0x84)
                char temp24_1 = result.b & 8
                cond:55_1 = temp24_1 != 0
                cond:56_1 = temp24_1 == 0
                cond:63_1 = temp24_1 != 0
                cond:64_1 = temp24_1 == 0
                
                if (temp24_1 != 0)
                label_1400d8249:
                    var_278_1 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm6, zmm3, 0x23), 0x24)
                    
                    if (cond:56_1)
                        goto label_1400d84d0
                    
                    goto label_1400d825d
                
            label_1400d84c6:
                var_278_1 = zmm3
                
                if (cond:55_1)
                label_1400d825d:
                    zmm12 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x23), 0x24)
                    
                    if (cond:63_1)
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm15, zmm4, 0x23), 0x24)
                else
                label_1400d84d0:
                    zmm12 = zmm2
                    
                    if (not(cond:64_1))
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm15, zmm4, 0x23), 0x24)
                
                zmm1 = _mm_and_ps(_mm_add_ps(temp0_97, var_268_1), zmm9)
                zmm15 = zmm4
                var_268_1 = _mm_or_ps(_mm_andnot_ps(zmm9, var_268_1), zmm1)
            
            rdi += 4
            rbx_1 += 0x30
        while (rdi s< rsi_4)
        
        if (rdi s< arg8)
            goto label_1400d8993
        
        zmm5 = var_268_1
    zmm1 = var_278_1
    float temp0_447[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm1, zmm1[0].q), zmm1)
    float temp0_448[0x4] = _mm_shuffle_ps(temp0_447, temp0_447, 0xe5)
    temp0_448[0] = temp0_448[0] + temp0_447[0]
    float temp0_450[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm12, zmm12[0].q), zmm12)
    float temp0_451[0x4] = _mm_shuffle_ps(temp0_450, temp0_450, 0xe5)
    temp0_451[0] = temp0_451[0] + temp0_450[0]
    float temp0_452[0x4] = _mm_unpacklo_ps(temp0_448, temp0_451[0].q)
    float temp0_454[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm15, zmm15[0].q), zmm15)
    float temp0_455[0x4] = _mm_shuffle_ps(temp0_454, temp0_454, 0xe5)
    temp0_455[0] = temp0_455[0] + temp0_454[0]
    float temp0_456[0x4] = _mm_add_ps(zx.o(*arg7)[0].q | arg7[1].d[0].q << 0x40, 
        temp0_452[0].q | temp0_455[0].q << 0x40)
    *arg7 = temp0_456[0]
    float temp0_457[0x4] = _mm_shuffle_ps(temp0_456, temp0_456, 0xe5)
    temp0_456[0].q = temp0_456 u>> 0x40
    *(arg7 + 4) = temp0_457[0]
    arg7[1].d = temp0_456[0]
    zmm0 = _mm_add_ps(_mm_shuffle_epi32(zmm5, 0xee), zmm5)
float temp0_487[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
temp0_487[0] = temp0_487[0] + zmm0[0]
temp0_487[0] = temp0_487[0] f+ *arg6
*arg6 = temp0_487[0]
return result
