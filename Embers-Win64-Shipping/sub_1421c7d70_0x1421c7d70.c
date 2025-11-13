// 函数: sub_1421c7d70
// 地址: 0x1421c7d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr

if (arg4 != 0)
    void* rsi_1 = *(arg4 + 0x18)
    
    if (rsi_1 != 0)
        void* rdi_1 = *(rsi_1 + 0xa0)
        
        if (rdi_1 != 0 && (*(rdi_1 + 0x5c) & 8) == 0)
            int32_t rax_1 = *(rdi_1 + 0xc)
            void* const rax_8
            
            if (rax_1 s>= data_143e1d9b4)
                rax_8 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_1)
                uint32_t rdx_1 = zx.d(temp0_1)
                int32_t rax_3 = temp1_1 + rdx_1
                rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
            
            if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
                int64_t arg_20 = 0
                
                if ((1 & sub_140b5b8a0(0, 0)) != 0)
                    sub_140d19010(rdi_1, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                void* result_1
                uint128_t zmm6_1
                float zmm7_1[0x4]
                float zmm8_1[0x4]
                float zmm9_1[0x4]
                result_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1 =
                    sub_140d2dfc0(sub_1425758e0(), rdi_1, 0, 0x40, 0, 0, 0, 0, 0)
                
                if (result_1 != 0)
                    void* rdx_4 = *(rdi_1 + 0x130)
                    result = result_1
                    void* rax_13 = *(rsi_1 + 0xc0)
                    
                    if (rax_13 != 0)
                        sub_141f4a650(result_1, rax_13, *(rsi_1 + 0xc8))
                    else if (rdx_4 != 0)
                        arg_20 = 0
                        sub_141f4a650(result_1, rdx_4, 0)
                    
                    *(result_1 + 0x8c) = *(rsi_1 + 0x8c)
                    *(result_1 + 0x258) = *(arg1 + 0x110)
                    *(result_1 + 0x338) ^= (zx.d(*(arg1 + 0x30)) ^ *(result_1 + 0x338)) & 1
                    *(result_1 + 0x20c) ^= (zx.d(*(arg1 + 0x31)) << 4 ^ *(result_1 + 0x20c)) & 0x10
                    *(result_1 + 0x214) = *(arg1 + 0x114)
                    sub_141f247e0(result_1, *(arg1 + 0x119))
                    sub_141ef1390(result_1)
                    int64_t rsi_2 = sx.q(*(arg4 + 0x1c8))
                    int32_t rax_24 = (rsi_2 + 1).d
                    *(arg4 + 0x1c8) = rax_24
                    
                    if (rax_24 s> *(arg4 + 0x1cc))
                        sub_1405a4d70(arg4 + 0x1c0)
                    
                    int64_t rax_25 = *(arg4 + 0x1c0)
                    float zmm2_1[0x4] = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
                    *(rax_25 + (rsi_2 << 3)) = result_1
                    void* rdx_7 = *(arg4 + 0x18)
                    int32_t var_30_1 = 0x3f800000
                    void* rcx_11 = *(*(arg4 + 0x28) + 0x30)
                    float rax_27 = 1f
                    uint32_t r8_1 = zx.d(*(rcx_11 + 0x58))
                    
                    if (rdx_7 != 0)
                        zmm2_1 = *(rdx_7 + 0x1e0)
                        float zmm0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                        float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                        rax_27 = zmm0_1[0]
                        zmm2_1 = _mm_unpacklo_ps(zmm2_1, zmm1_1[0].q)
                    
                    char var_48_1 = 0
                    char rcx_12 = *(rcx_11 + 0x59) & 1
                    float var_30_3 = rax_27
                    int64_t var_38 = zmm2_1.q
                    sub_1421cffe0(arg1, result_1, arg2, arg3, zmm6_1, zmm7_1, zmm8_1, zmm9_1, r8_1, 
                        &var_38, rcx_12, 0)
                
                return result

return nullptr
