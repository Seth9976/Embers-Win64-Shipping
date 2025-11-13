// 函数: sub_14122b980
// 地址: 0x14122b980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = &__return_addr
bool cond:0 = data_1439b633c == 0
int32_t rsi = *(arg3 + 0xc)
void* r13 = arg2
uint128_t zmm7 = *(arg3 + 0x1c)
uint128_t zmm8 = *(arg3 + 0x20)
uint128_t zmm9 = *(arg3 + 0x24)
uint128_t zmm10 = 0x3f800000
int128_t zmm12 = 0x3f000000
uint128_t zmm3
zmm3.d = 1f f/ _mm_cvtepi32_ps(zx.o(rsi)).d
zmm8.d = zmm8.d f* 0.5f
zmm9.d = zmm9.d f* 0.5f
uint128_t zmm14 = zmm3
zmm7.d = zmm7.d f* 0.5f
uint128_t zmm6
zmm6.d = zmm8.d f+ *(arg3 + 0x14)
uint128_t zmm11
zmm11.d = zmm3.d f* zmm8.d
uint128_t zmm1
zmm1.d = zmm9.d f+ *(arg3 + 0x18)
zmm3.d = zmm3.d f* zmm9.d
uint128_t zmm2
zmm2.d = zmm7.d f+ *(arg3 + 0x10)
int32_t var_f4 = zmm11.d
int32_t arg_18 = zmm3.d
zmm14.d = zmm14.d f* zmm7.d
int32_t var_158
int32_t var_148
int64_t var_12c
int32_t var_118

if (cond:0 || rsi s<= 2)
    int32_t i = 0
    
    if (*(arg2 + 0x1148) s> 0)
        zmm3.d = zmm3.d f+ zmm1.d
        zmm14.d = zmm14.d f+ zmm2.d
        int64_t** rsi_1 = nullptr
        zmm6.d = zmm6.d f+ zmm11.d
        arg_18 = zmm3.d
        
        do
            int32_t rax_10 = *(arg3 + 0xc)
            int64_t rcx_7 = *(r13 + 0x1140)
            var_148 = rax_10
            int32_t var_144_2 = rax_10
            int32_t var_140_2 = rax_10
            int64_t* rcx_8 = *(rsi_1 + rcx_7)
            var_158 = rax_10
            int32_t var_154_2 = rax_10
            int32_t var_150_3 = rax_10
            var_118 = zmm14.d
            int32_t var_114_2 = zmm6.d
            int32_t var_110_2 = zmm3.d
            int32_t var_108_2 = zmm7.d
            int32_t var_104_2 = zmm8.d
            int32_t var_100_2 = zmm9.d
            var_12c = 0
            int32_t var_124_2 = 0
            int32_t var_10c_2 = 0
            int32_t var_fc_2 = 0
            i_1, zmm6, zmm7, zmm8, zmm9, zmm14 =
                sub_1422a5c00(rcx_8, &var_118, &var_158, &var_148, &var_12c, arg4, arg5)
            zmm3 = arg_18
            rsi_1 = &rsi_1[1]
            i += 1
        while (i s< *(r13 + 0x1148))
else
    int32_t i_2 = 0
    
    if (*(arg2 + 0x1148) s> 0)
        int64_t* rcx = nullptr
        uint128_t zmm13
        uint128_t var_b8_1 = zmm13
        int64_t* var_e8_1 = nullptr
        uint128_t zmm15
        uint128_t var_d8_1 = zmm15
        
        do
            int64_t* r13_1 = *(rcx + *(r13 + 0x1140))
            int32_t rcx_1 = 0xc
            
            if (data_1439b6338 u< 0xc)
                rcx_1 = data_1439b6338
            
            void* rbx_1 = r13_1[2]
            uint128_t zmm0 = powf(0x3f080000.d, _mm_cvtepi32_ps(zx.o(rcx_1)).d)
            zmm3 = *(arg3 + 0x1c)
            zmm2.d = zmm0.d f* *(rbx_1 + 0x70)
            var_158.q = 0
            zmm1 = _mm_cvtepi32_ps(zx.o(rsi))
            int32_t var_150_1 = 0
            var_148.q = 0
            zmm2.d = zmm2.d f+ zmm2.d
            zmm3.d = zmm3.d f/ zmm1.d
            float zmm5_1 = zmm10.d f/ zmm1.d
            zmm1.d = zmm2.d f/ zmm3.d
            float zmm4_1 = zmm5_1
            zmm5_1 = zmm5_1 f* *(arg3 + 0x24)
            zmm4_1 = zmm4_1 f* *(arg3 + 0x20)
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- zmm12.d
            int32_t rbx_2 = int.d(zmm1.d)
            zmm1 = zmm2
            zmm2.d = zmm2.d f/ zmm5_1
            int32_t rbx_3 = rbx_2 s>> 1
            
            if (rbx_3 s<= 1)
                rbx_3 = 1
            
            zmm1.d = zmm1.d f/ zmm4_1
            zmm2.d = zmm2.d f+ zmm2.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm2.d = zmm2.d f- zmm12.d
            zmm1.d = zmm1.d f- zmm12.d
            zmm8.d = _mm_cvtepi32_ps(zx.o(rbx_3)).d f* zmm3.d
            int32_t r14_1 = int.d(zmm1.d)
            zmm1 = *(arg3 + 0x18)
            int32_t r14_2 = r14_1 s>> 1
            int32_t var_138_1 = zmm1.d
            
            if (r14_2 s<= 1)
                r14_2 = 1
            
            int32_t rax_2 = int.d(zmm2.d) s>> 1
            
            if (rax_2 s<= 1)
                rax_2 = 1
            
            int32_t rdx = 0
            int32_t var_134_1 = rax_2
            int32_t var_140_1 = 0
            zmm2.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* zmm5_1
            zmm0.d = _mm_cvtepi32_ps(zx.o(r14_2)).d f* zmm4_1
            int32_t var_f0_1 = zmm2.d
            int32_t var_f8_1 = zmm0.d
            
            if (rsi s> 0)
                int32_t r8 = rsi
                int32_t rax_6
                
                do
                    int32_t var_150_2 = rax_2
                    zmm15 = zmm2
                    
                    if (rax_2 + rdx s> r8)
                        zmm15.d = (*(arg3 + 0x24)).d f+ *(arg3 + 0x18)
                        var_150_2 = r8 - rdx
                        zmm15.d = zmm15.d f- zmm1.d
                    
                    zmm13 = *(arg3 + 0x14)
                    int32_t rcx_2 = 0
                    int32_t var_144_1 = 0
                    rax_6 = r8
                    
                    if (r8 s> 0)
                        do
                            int32_t var_154_1 = r14_2
                            zmm7 = zmm0
                            int32_t r9 = r14_2
                            
                            if (r14_2 + rcx_2 s> r8)
                                zmm7.d = (*(arg3 + 0x20)).d f+ *(arg3 + 0x14)
                                r9 = r8 - rcx_2
                                var_154_1 = r9
                                zmm7.d = zmm7.d f- zmm13.d
                            
                            zmm6 = *(arg3 + 0x10)
                            int32_t rdx_1 = 0
                            var_148 = 0
                            rax_6 = r8
                            
                            if (r8 s> 0)
                                zmm7.d = zmm7.d f* zmm12.d
                                zmm10.d = zmm13.d f+ zmm11.d
                                zmm9.d = zmm15.d f* zmm12.d
                                zmm11.d = zmm1.d f+ arg_18
                                
                                while (true)
                                    var_158 = rbx_3
                                    zmm3 = zmm8
                                    int32_t rcx_3 = rbx_3
                                    
                                    if (rbx_3 + rdx_1 s> r8)
                                        zmm3.d = (*(arg3 + 0x1c)).d f+ *(arg3 + 0x10)
                                        rcx_3 = r8 - rdx_1
                                        var_158 = rcx_3
                                        zmm3.d = zmm3.d f- zmm6.d
                                    
                                    zmm3.d = zmm3.d f* zmm12.d
                                    zmm4_1 = zmm7.d
                                    zmm5_1 = zmm9.d
                                    
                                    if (rcx_3 == 1)
                                        zmm3 = zx.o(0)
                                    
                                    if (r9 == 1)
                                        zmm4_1 = (zx.o(0)).d
                                    
                                    if (var_150_2 == 1)
                                        zmm5_1 = (zx.o(0)).d
                                    
                                    var_12c.d = r8
                                    zmm2.d = zmm3.d f+ zmm6.d
                                    var_12c:4.d = r8
                                    int32_t var_124_1 = r8
                                    zmm1.d = zmm10.d f+ zmm4_1
                                    zmm0.d = zmm11.d f+ zmm5_1
                                    int32_t var_108_1 = zmm3.d
                                    zmm2.d = zmm2.d f+ zmm14.d
                                    float var_104_1 = zmm4_1
                                    float var_100_1 = zmm5_1
                                    int32_t var_10c_1 = 0
                                    int32_t var_114_1 = zmm1.d
                                    int32_t var_110_1 = zmm0.d
                                    var_118 = zmm2.d
                                    int32_t var_fc_1 = 0
                                    zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, 
                                        zmm15 = sub_1422a5c00(r13_1, &var_118, &var_158, &var_12c, 
                                        &var_148, arg4, arg5)
                                    zmm6.d = zmm6.d f+ zmm8.d
                                    rsi = *(arg3 + 0xc)
                                    rdx_1 = var_148 + rbx_3
                                    var_148 = rdx_1
                                    r8 = rsi
                                    
                                    if (rdx_1 s>= rsi)
                                        break
                                    
                                    r9 = var_154_1
                                
                                rcx_2 = var_144_1
                                rax_6 = rsi
                                zmm0 = var_f8_1
                                zmm1 = var_138_1
                                zmm11 = var_f4
                            
                            rcx_2 += r14_2
                            zmm13.d = zmm13.d f+ zmm0.d
                            var_144_1 = rcx_2
                            r8 = rax_6
                        while (rcx_2 s< rax_6)
                        
                        rdx = var_140_1
                        zmm2 = var_f0_1
                    
                    rdx += var_134_1
                    zmm1.d = zmm1.d f+ zmm2.d
                    r8 = rax_6
                    var_140_1 = rdx
                    rax_2 = var_134_1
                    var_138_1 = zmm1.d
                while (rdx s< rax_6)
                zmm10 = 0x3f800000
            
            i_1 = i_2 + 1
            r13 = arg2
            rcx = &var_e8_1[1]
            i_2 = i_1
            var_e8_1 = rcx
        while (i_1 s< *(r13 + 0x1148))
return i_1
