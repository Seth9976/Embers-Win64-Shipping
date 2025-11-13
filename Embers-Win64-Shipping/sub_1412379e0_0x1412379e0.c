// 函数: sub_1412379e0
// 地址: 0x1412379e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t var_11c
__builtin_memset(&var_11c, 0, 0x43)
void* rbx = arg1
int128_t var_178
__builtin_memset(&var_178, 0, 0x30)
int128_t var_130 = zx.o(0)
int16_t var_d8 = 0
sub_140fdc870(arg2, &var_178)
int64_t result = data_1439b54a0
int32_t rdx_1 = 0
int32_t rcx_1 = arg3[1].d
int64_t i_2 = sx.q(*(rbx + 0xa8))
int64_t result_1 = result
int32_t var_234 = 0
int64_t i_3 = i_2
int32_t var_120 = 0

if (rcx_1 s> 0)
    int64_t* r9_1 = nullptr
    int64_t r8 = 0
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    int128_t zmm11 = 0x3f800000
    int128_t zmm12 = zx.o(0)
    int128_t zmm14 = 0x3f866666
    int64_t* var_220_1 = nullptr
    int64_t var_200_1 = 0
    
    do
        int32_t r15_1 = 0
        int64_t* rdi_2 = *arg3 + r8
        int32_t var_238_1 = 0
        int64_t* var_228_1 = rdi_2
        
        if (i_2 s> 0)
            void* rsi_1 = arg2 + 0x30
            int64_t var_218_1 = 0
            int64_t r8_1 = 0
            int64_t i_1 = i_2
            int64_t i
            
            do
                int64_t rax_3
                
                if (arg3[1].d != arg3[3].d)
                    int32_t rcx_2 = 0
                    int64_t rdx_2 = *(r9_1 + arg3[4])
                    
                    if ((rdx_2 u>> 0x20).d != 0)
                        rcx_2 = r15_1
                    
                    rax_3 = sx.q((rdx_2.d & 0x7fffffff) + rcx_2)
                else
                    rax_3 = sx.q(rdx_1)
                
                int64_t rcx_3 = rax_3 * 3
                int64_t rax_8 = arg3[2]
                void* rbx_2 = *(rbx + 0xa0) + r8_1
                int64_t zmm0 = *(rax_8 + (rcx_3 << 2))
                int64_t* rax_9 = rax_8 + (rcx_3 << 2)
                zmm10 = *(rdi_2 + 0xc)
                zmm6 = zx.o(*(rbx_2 + 0x15a4))
                void*** rcx_6 = (*rsi_1 + 7) & 0xfffffffffffffff8
                zmm7 = zx.o(*(rbx_2 + 0x15a0))
                zmm8 = zx.o(*(rbx_2 + 0x159c))
                zmm9 = zx.o(*(rbx_2 + 0x1598))
                int64_t* var_230 = rax_9
                int32_t rax_10 = rax_9[1].d
                void* rax_11 = &rcx_6[5]
                zmm6 = _mm_cvtepi32_ps(zmm6)
                zmm7 = _mm_cvtepi32_ps(zmm7)
                zmm8 = _mm_cvtepi32_ps(zmm8)
                zmm9 = _mm_cvtepi32_ps(zmm9)
                
                if (rax_11 u> *(rsi_1 + 8))
                    zmm6 = sub_140b0e3d0(rsi_1, 0x30)
                    rcx_6 = (*rsi_1 + 7) & 0xfffffffffffffff8
                    rax_11 = &rcx_6[5]
                
                *rsi_1 = rax_11
                void** rax_12 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_12 = rcx_6
                *(arg2 + 8) = &rcx_6[1]
                rcx_6[1] = 0
                *rcx_6 = &data_142d54998
                rcx_6[2].d = zmm9.d
                *(rcx_6 + 0x14) = zmm8.d
                *(rcx_6 + 0x1c) = zmm7.d
                rcx_6[4].d = zmm6.d
                rcx_6[3].d = 0
                *(rcx_6 + 0x24) = 0x3f800000
                void* var_1e8
                sub_1419a2ec0(*(rbx_2 + 0x5150), &var_1e8, &data_143e879d0, 0)
                uint128_t zmm0_1 = zx.o(*(rbx_2 + 0x60c))
                float rax_14 = *(rbx_2 + 0x614)
                float zmm3 = zmm0_1.d f- zmm0.d.d
                int32_t zmm1 = *(rbx_2 + 0xd30)
                uint128_t zmm4_1
                zmm4_1.d = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55).d f- zmm0:4.d.d
                float zmm2 = rax_14 f- rax_10.d
                zmm0_1.d = zmm10.d f* zmm14.d
                zmm4_1.d = zmm4_1.d f* zmm4_1.d
                zmm1 = zmm1 f+ zmm1 f+ zmm0_1.d
                zmm4_1.d = zmm4_1.d f+ zmm3 * zmm3
                zmm4_1.d = zmm4_1.d f+ zmm2 * zmm2
                
                if (zmm4_1.d f< zmm1 f* zmm1 || zmm11.d f<= *(rbx_2 + 0x2bc))
                    rax_14.b = 1
                else
                    rax_14.b = 0
                
                char rcx_11 = *(rbx_2 + 0xd34)
                int64_t rax_16
                
                if (rax_14.b == 0)
                    int64_t rax_17 = data_1439b54e8
                    
                    if (rcx_11 != 0)
                        rax_17 = data_1439b5500
                    
                    int64_t var_140_2 = rax_17
                    rax_16 = data_1439b53d0
                else
                    int64_t rax_15 = data_1439b5500
                    
                    if (rcx_11 != 0)
                        rax_15 = data_1439b54e8
                    
                    int64_t var_140_1 = rax_15
                    rax_16 = data_14395d9e8
                
                int64_t var_138_1 = rax_16
                int64_t* rcx_12 = *(rbx_2 + 0x5150)
                int64_t rax_21
                void* rsi_2
                void* r14_2
                void* var_1e0
                void* rax_22
                
                if (zmm12.d f!= rdi_2[2].d)
                    void* var_1a0
                    sub_1419a2ec0(rcx_12, &var_1a0, &data_143e83290, 1)
                    rsi_2 = var_1e8
                    int64_t rax_23 = 0
                    var_178.q = data_1439c9410
                    
                    if (rsi_2 != 0)
                        int64_t rdx_8 = sx.q(*(rsi_2 + 0x10c))
                        int64_t* rdi_4 = *(var_1e0 + 0x10)
                        int64_t rax_25 = rdi_4[3]
                        
                        if (*(rax_25 + (rdx_8 << 3)) == 0)
                            sub_1419ccf30(rdi_4, rdx_8.d)
                            rax_25 = rdi_4[3]
                        
                        rax_23 = *(rax_25 + (rdx_8 << 3))
                        rdi_2 = var_228_1
                    
                    var_178:8.q = rax_23
                    rax_21 = 0
                    r14_2 = var_1a0
                    
                    if (r14_2 != 0)
                        void* var_198
                        rax_22 = var_198
                    label_141237e70:
                        int64_t rdx_9 = sx.q(*(r14_2 + 0x10c))
                        int64_t* rdi_5 = *(rax_22 + 0x10)
                        int64_t rax_26 = rdi_5[3]
                        
                        if (*(rax_26 + (rdx_9 << 3)) == 0)
                            sub_1419ccf30(rdi_5, rdx_9.d)
                            rax_26 = rdi_5[3]
                        
                        rax_21 = *(rax_26 + (rdx_9 << 3))
                        r15_1 = var_238_1
                        rdi_2 = var_228_1
                else
                    void* var_1b0
                    sub_1419a2ec0(rcx_12, &var_1b0, &data_143e83290, 0xd)
                    rsi_2 = var_1e8
                    int64_t rax_18 = 0
                    var_178.q = data_1439c9410
                    
                    if (rsi_2 != 0)
                        int64_t rdx_6 = sx.q(*(rsi_2 + 0x10c))
                        int64_t* rdi_3 = *(var_1e0 + 0x10)
                        int64_t rax_20 = rdi_3[3]
                        
                        if (*(rax_20 + (rdx_6 << 3)) == 0)
                            sub_1419ccf30(rdi_3, rdx_6.d)
                            rax_20 = rdi_3[3]
                        
                        rax_18 = *(rax_20 + (rdx_6 << 3))
                        rdi_2 = var_228_1
                    
                    var_178:8.q = rax_18
                    rax_21 = 0
                    r14_2 = var_1b0
                    
                    if (r14_2 != 0)
                        void* var_1a8
                        rax_22 = var_1a8
                        goto label_141237e70
                int128_t var_158_1
                var_158_1.q = rax_21
                sub_1419870b0(arg2, &var_178, 2)
                int32_t zmm13_1
                zmm7, zmm8, zmm10, zmm11, zmm12, zmm13_1, zmm14 =
                    sub_14123cde0(r14_2, arg2, rbx_2, rdi_2, var_230)
                float zmm6_1 =
                    sub_141080be0(rsi_2, arg2, *(arg2 + 0x188), *(rbx_2 + 0x10)) f+ *(rbx_2 + 0x600)
                zmm7.d = zmm7.d f+ *(rbx_2 + 0x604)
                zmm8.d = zmm8.d f+ *(rbx_2 + 0x608)
                int64_t* rax_28 = *(arg2 + 0x188)
                zmm10.d = zmm10.d f* zmm13_1
                float var_1d8 = zmm6_1
                int32_t var_1d4_1 = zmm7.d
                int32_t var_1d0_1 = zmm8.d
                int32_t var_1cc_1 = zmm10.d
                var_230 = rax_28
                int64_t* var_248_1
                var_248_1.d = 0
                sub_1405d0e10(arg2, &var_230, rsi_2 + 0x118, &var_1d8, var_248_1.d)
                var_230 = *(arg2 + 0x188)
                int128_t var_188 = zx.o(0)
                var_248_1.d = 0
                sub_1405d0e10(arg2, &var_230, rsi_2 + 0x11e, &var_188, var_248_1.d)
                result = sub_141223ee0(arg2)
                rsi_1 = arg2 + 0x30
                rdx_1 = var_234
                r8_1 = var_218_1 + 0x5240
                r9_1 = var_220_1
                r15_1 += 1
                i = i_1
                i_1 -= 1
                rbx = arg1
                var_238_1 = r15_1
                var_218_1 = r8_1
            while (i != 1)
            rcx_1 = arg3[1].d
            r8 = var_200_1
            i_2 = i_3
        
        rdx_1 += 1
        r8 += 0x1c
        r9_1 = &r9_1[1]
        var_234 = rdx_1
        var_200_1 = r8
        var_220_1 = r9_1
    while (rdx_1 s< rcx_1)

__security_check_cookie(rax_1 ^ &var_268)
return result
