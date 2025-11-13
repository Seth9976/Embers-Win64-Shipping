// 函数: sub_142409d30
// 地址: 0x142409d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x80) = data_143dbb1f0.d
*(arg1 + 0x84) = data_143dbb1f0:4.d
int64_t* rax = sub_140ac6680(arg1 + 0x130)
int64_t* r12 = rax
int32_t r9 = rax[1].d
int64_t result = 0xffffffff
uint64_t rdi = zx.q(r9 - 1)

if (r9 == 0)
    rdi = 0xffffffff

int32_t rcx_1 = r9 - 1

if (r9 == 0)
    rcx_1 = -1

int64_t rbx = 0

if (r9 == 0)
    rcx_1 = 0

if (rcx_1 != 0)
    void* rax_1 = *(arg2 + 0x68)
    uint128_t zmm6 = zx.o(0)
    uint128_t zmm8 = zx.o(0)
    uint128_t zmm14 = zx.o(0)
    float var_184_1 = 0f
    int32_t rcx_2
    
    if (rax_1 == 0)
        rcx_2 = -1
    else
        rcx_2 = *(rax_1 + 0x18)
    
    result = *(arg1 + 0x148)
    uint128_t zmm7 = 0x3f800000
    
    if (r9 == 0)
        rdi = 0
    
    int32_t arg_8 = 0x3f800000
    int32_t var_188_1 = 0x3f800000
    uint128_t zmm10 = 0x3f800000
    int32_t var_17c_1 = rdi.d
    uint128_t zmm0_1
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(result + 0x6c))).d f+ *(arg1 + 0x38)
    zmm0_1.d = zmm0_1.d f* *(arg1 + 0xa0)
    
    if (rdi.d s> 0)
        int64_t rcx_3 = 0
        uint128_t zmm11
        uint128_t var_a8_1 = zmm11
        uint128_t zmm12
        uint128_t var_b8_1 = zmm12
        uint128_t zmm13
        uint128_t var_c8_1 = zmm13
        uint128_t zmm15
        uint128_t var_e8_1 = zmm15
        int64_t var_178_1 = 0
        
        do
            int16_t rax_3 = sub_14200d6b0(*(arg1 + 0x148), *(*r12 + (rcx_3 << 1)))
            void* rcx_5 = *(arg1 + 0x148)
            uint64_t rax_4 = zx.q(rax_3)
            
            if (rax_4.d s< *(rcx_5 + 0x40))
                int64_t r14_1 = *(rcx_5 + 0x38)
                uint64_t rsi_1 = rax_4 * 3
                uint128_t zmm0_2
                
                if (not(zmm6.d f!= *(arg1 + 0x84)))
                    zmm0_2, zmm6, zmm7, zmm8 = sub_142005cc0(rcx_5)
                    zmm0_2.d = zmm0_2.d f* *(arg1 + 0xa4)
                    *(arg1 + 0x84) = zmm0_2.d
                
                uint32_t r8 = zx.d(*(*r12 + (var_178_1 << 1)))
                int64_t rcx_6
                rcx_6.b = r8 - 0xa u<= 3
                rcx_6.b |= r8.w == 0x2029
                char rdx_1 = rcx_6.b
                
                if (r8.w == 0x2028)
                    rdx_1 = 1
                
                if ((rdx_1 | r8.w == 0x85) == 0)
                    void* rax_9 = *(arg1 + 0x148)
                    uint64_t rcx_9 = zx.q(*(r14_1 + (rsi_1 << 3) + 0x10))
                    
                    if (rcx_9.d s< *(rax_9 + 0x50))
                        int64_t* r13_1 = *(*(rax_9 + 0x48) + (rcx_9 << 3))
                        
                        if (r13_1 != 0)
                            int64_t r9_1 = r13_1[0xf]
                            
                            if (r9_1 != 0)
                                int64_t var_168_1
                                void* rcx_10
                                
                                if (rbx == r9_1)
                                    rcx_10 = *(arg1 + 0x128)
                                    var_168_1 = r9_1
                                
                                char var_198
                                uint128_t zmm9
                                
                                if (rbx != r9_1 || rcx_10 == 0)
                                    var_198 = 0
                                    void* rax_13
                                    rax_13, zmm8, zmm9 = sub_14240fbe0(arg2, 1, nullptr, r9_1, 
                                        *(arg1 + 0x14), arg1 + 0x44, 0)
                                    int32_t r9_2 = *(arg1 + 0x14)
                                    *(arg1 + 0x128) = rax_13
                                    sub_141eab3b0(rax_13, (rdi * 2).d, r13_1[0xf], r9_2)
                                    zmm0_2 = sub_141eab450(*(arg1 + 0x128), (rdi << 2).d)
                                    (*(*r13_1 + 0x338))(r13_1)
                                    zmm7.d = zmm9.d f/ zmm0_2.d
                                    arg_8 = zmm7.d
                                    (*(*r13_1 + 0x340))(r13_1)
                                    rcx_10 = *(arg1 + 0x128)
                                    zmm10.d = zmm9.d f/ zmm0_2.d
                                    var_168_1 = r13_1[0xf]
                                    var_188_1 = zmm10.d
                                
                                int32_t zmm2 = *(arg1 + 0xa4)
                                zmm13 = zx.o(*(r14_1 + (rsi_1 << 3) + 8))
                                zmm0_2.d = zmm8.d f+ arg3[1]
                                float zmm1 = zmm14.d + *arg3
                                zmm9 = zx.o(*(r14_1 + (rsi_1 << 3) + 4))
                                zmm12 = zx.o(*(r14_1 + (rsi_1 << 3) + 0xc))
                                zmm8 = zx.o(*(r14_1 + (rsi_1 << 3)))
                                uint128_t zmm3 =
                                    _mm_cvtepi32_ps(zx.o(*(r14_1 + (rsi_1 << 3) + 0x14)))
                                int32_t var_130_1 = 0
                                zmm13 = _mm_cvtepi32_ps(zmm13)
                                zmm3.d = zmm3.d f* zmm2
                                zmm15.d = zmm13.d f* *(arg1 + 0xa0)
                                zmm3.d = zmm3.d f+ zmm0_2.d
                                zmm0_2 = *(arg1 + 0x3c)
                                int32_t var_12c_1 = zmm0_2.d
                                zmm6.d = zmm0_2.d f* zmm3.d
                                zmm9.d = _mm_cvtepi32_ps(zmm9).d f* zmm10.d
                                zmm11.d = zmm15.d f+ zmm1
                                zmm12 = _mm_cvtepi32_ps(zmm12)
                                int32_t var_15c_1 = zmm9.d
                                zmm10.d = zmm12.d f* zmm2
                                zmm8.d = _mm_cvtepi32_ps(zmm8).d f* zmm7.d
                                zmm10.d = zmm10.d f+ zmm3.d
                                zmm7.d = zmm0_2.d f* zmm1
                                int32_t var_160 = zmm8.d
                                int32_t var_134_1 = zmm6.d
                                int32_t var_138 = zmm7.d
                                zmm10.d = zmm10.d f* zmm0_2.d
                                zmm11.d = zmm11.d f* zmm0_2.d
                                int32_t rax_18 =
                                    sub_141e93fc0(rcx_10, &var_138, &var_160, arg4, rcx_2)
                                int32_t zmm0_5 = *(arg1 + 0x3c)
                                zmm13.d = zmm13.d f* arg_8
                                void* rcx_16 = *(arg1 + 0x128)
                                int32_t var_154_1 = zmm9.d
                                int32_t var_128 = zmm11.d
                                zmm13.d = zmm13.d f+ zmm8.d
                                int32_t var_124_1 = zmm6.d
                                int32_t var_11c_1 = zmm0_5
                                int32_t var_120_1 = 0
                                int32_t var_158 = zmm13.d
                                int32_t rax_19 =
                                    sub_141e93fc0(rcx_16, &var_128, &var_158, arg4, rcx_2)
                                int32_t zmm0_6 = *(arg1 + 0x3c)
                                zmm12.d = zmm12.d f* var_188_1
                                void* rcx_17 = *(arg1 + 0x128)
                                int32_t var_150 = zmm8.d
                                int32_t var_118 = zmm7.d
                                zmm12.d = zmm12.d f+ zmm9.d
                                int32_t var_114_1 = zmm10.d
                                int32_t var_10c_1 = zmm0_6
                                int32_t var_110_1 = 0
                                int32_t var_14c_1 = zmm12.d
                                int32_t rax_20 =
                                    sub_141e93fc0(rcx_17, &var_118, &var_150, arg4, rcx_2)
                                int32_t var_148 = zmm13.d
                                void* rcx_18 = *(arg1 + 0x128)
                                int32_t var_fc_1 = *(arg1 + 0x3c)
                                int32_t var_144_1 = zmm12.d
                                int32_t var_108 = zmm11.d
                                int32_t var_104_1 = zmm10.d
                                int32_t var_100_1 = 0
                                int32_t rax_21 =
                                    sub_141e93fc0(rcx_18, &var_108, &var_148, arg4, rcx_2)
                                var_198.q = arg1 + 0x44
                                int32_t* var_1a0
                                var_1a0.d = *(arg1 + 0x14)
                                int32_t var_1a8_5
                                var_1a8_5.q = r13_1[0xf]
                                sub_141e93b40(*(arg1 + 0x128), rax_18, rax_19, rax_21, var_1a8_5, 
                                    var_1a0.d, var_198)
                                var_198.q = arg1 + 0x44
                                var_1a0.d = *(arg1 + 0x14)
                                var_1a8_5.q = r13_1[0xf]
                                sub_141e93b40(*(arg1 + 0x128), rax_18, rax_21, rax_20, var_1a8_5, 
                                    var_1a0.d, var_198)
                                r12 = rax
                                wint_t _C = *(*r12 + (var_178_1 << 1) + 2)
                                
                                if (_C != 0 && iswspace(_C) == 0)
                                    zmm15.d = zmm15.d f+ zmm0_1.d
                                
                                zmm7 = arg_8
                                zmm14.d = zmm14.d f+ zmm15.d
                                zmm10 = var_188_1
                                zmm6 = zx.o(0)
                                zmm8 = var_184_1
                                rbx = var_168_1
                                rdi = zx.q(var_17c_1)
                                
                                if (not(zmm14.d f<= *(arg1 + 0x80)))
                                    *(arg1 + 0x80) = zmm14.d
                else
                    zmm14 = zmm6
                    float zmm0_3
                    float zmm8_1
                    zmm0_3, zmm8_1 = sub_142005cc0(*(arg1 + 0x148))
                    var_184_1 = zmm8_1 + zmm0_3 f* *(arg1 + 0xa4)
                    float zmm0_4
                    zmm0_4, zmm6, zmm7, zmm8 = sub_142005cc0(*(arg1 + 0x148))
                    *(arg1 + 0x84) = zmm0_4 f* *(arg1 + 0xa4) f+ *(arg1 + 0x84)
            
            rcx_3 = var_178_1 + 1
            result = sx.q(rdi.d)
            var_178_1 = rcx_3
        while (rcx_3 s< result)

return result
