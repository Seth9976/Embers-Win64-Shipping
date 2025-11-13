// 函数: sub_14266cf60
// 地址: 0x14266cf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
void* rbx = *(*arg1 + 0x50)
int32_t* result
void* r8_2

if (rbx == 0)
    r8_2 = nullptr
else
    *(rbx + 0x484)
    int32_t* rdx_3
    
    if (*(rbx + 0x458) == *(rbx + 0x484))
        rdx_3 = nullptr
    else
        void* r8 = rbx + 0x488
        void* rdx = *(r8 + 8)
        int64_t r9 = sx.q(*(arg2 + 0xc))
        
        if (rdx != 0)
            r8 = rdx
        
        result = zx.q(*(r8 + (((sx.q(*(rbx + 0x498)) - 1) & r9) << 2)))
        
        if (result.d == 0xffffffff)
            rdx_3 = nullptr
        else
            while (true)
                rdx_3 = (sx.q(result.d) << 5) + *(rbx + 0x450)
                
                if (*rdx_3 == r9.d)
                    break
                
                result = zx.q(rdx_3[6])
                
                if (result.d == 0xffffffff)
                    r8_2 = nullptr
                    goto label_14266d01f
            
            if (result.d == 0xffffffff)
                rdx_3 = nullptr
    
    r8_2 = &rdx_3[2]
    
    if (rdx_3 == 0)
        r8_2 = nullptr

label_14266d01f:

if (r8_2 == 0 || rbx == 0)
    result.b = 0
else
    uint128_t zmm0 = *r8_2
    void* rcx_3 = zmm0.q
    
    if (rcx_3 == 0)
        result.b = 0
    else
        result = zx.q(zmm0.12:8.d)
        
        if (result.d == 0xffffffff || result.d s>= *(rcx_3 + 0x388))
            result.b = 0
        else
            void* rdx_4 = zmm0.q
            uint128_t temp0_1 = _mm_bsrli_si128(zmm0, 8)
            void* rax_1 = *(rdx_4 + 0x380)
            
            if (rax_1 != 0)
                rdx_4 = rax_1
            
            void* rdx_5 = rdx_4 + sx.q(temp0_1.d) * 0x38
            uint128_t var_98 = *rdx_5
            int64_t var_88_1 = *(rdx_5 + 0x10)
            int32_t var_80_1 = *(rdx_5 + 0x18)
            int64_t var_78_1 = *(rdx_5 + 0x20)
            int64_t* rax_6 = *(rdx_5 + 0x28)
            
            if (rax_6 != 0)
                rax_6[1].d += 1
            
            int32_t var_68_1 = *(rdx_5 + 0x30)
            uint128_t var_a8 = *r8_2
            sub_142665790(rbx + 0x10, &var_a8)
            float zmm8[0x4] = arg3[3]
            int128_t zmm9
            zmm9.d = arg3[4].d f- arg3[1]
            zmm8[0] = zmm8[0] f- *arg3
            uint128_t zmm7_1
            zmm7_1.d = arg3[5].d f- arg3[2]
            int64_t zmm2_1 = zmm9.q
            zmm9.d = zmm9.d f* zmm9.d
            zmm2_1.d = zmm2_1.d f* 0.5f
            zmm8[0] = zmm8[0] * 0.5f
            uint128_t zmm1_1
            zmm1_1.d = zmm7_1.d f* 0.5f
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm8[0] = zmm8[0] f+ *arg3
            float temp0_2[0x4] = _mm_unpacklo_ps(zmm8, zmm2_1)
            zmm2_1.d = zmm2_1.d f+ arg3[1]
            zmm9.d = zmm9.d f+ zmm8[0]
            int96_t var_d8_1
            var_d8_1:8.d = zmm1_1.d
            zmm1_1.d = zmm1_1.d f+ arg3[2]
            int32_t var_b4_1 = var_d8_1:8.d
            zmm7_1.d = zmm7_1.d f* zmm7_1.d
            var_d8_1:8.d = zmm1_1.d
            int32_t var_c0_1 = var_d8_1:8.d
            zmm9.d = zmm9.d f+ zmm7_1.d
            zmm1_1.q = _mm_unpacklo_ps(zmm8, zmm2_1)[0].q
            zmm9.d = zmm9.d f* 0.25f
            uint128_t var_c8_1 = zmm1_1
            float temp0_4[0x4] = _mm_sqrt_ss(0, zmm9.d)
            var_98 = zmm1_1
            int64_t var_88_2 = temp0_2.q
            float var_80_2 = temp0_4[0]
            sub_142647a10(rbx + 0x10, &var_98, rbx + 0x10, rbx + 0x3f0)
            int32_t r15_1 = 1
            
            if (rax_6 != 0)
                rax_6[1].d -= 1
                
                if (rax_6[1].d == 1)
                    (**rax_6)(rax_6)
                    int32_t rsi_1 = *(rax_6 + 0xc)
                    *(rax_6 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*(*rax_6 + 8))(rax_6, 1)
            
            if (*(arg4 + 0x18) != 0)
                void* r9_2 = *(*arg1 + 0x50)
                
                if (r9_2 == 0)
                    result = nullptr
                else
                    int32_t* rdx_11
                    
                    if (*(r9_2 + 0x458) == *(r9_2 + 0x484))
                        rdx_11 = nullptr
                    else
                        void* r8_4 = r9_2 + 0x488
                        void* rdx_8 = *(r8_4 + 8)
                        int64_t r10_1 = sx.q(*(arg2 + 0xc))
                        
                        if (rdx_8 != 0)
                            r8_4 = rdx_8
                        
                        int32_t rax_16 = *(r8_4 + (((sx.q(*(r9_2 + 0x498)) - 1) & r10_1) << 2))
                        
                        if (rax_16 == 0xffffffff)
                            rdx_11 = nullptr
                        else
                            while (true)
                                rdx_11 = (sx.q(rax_16) << 5) + *(r9_2 + 0x450)
                                
                                if (*rdx_11 == r10_1.d)
                                    break
                                
                                rax_16 = rdx_11[6]
                                
                                if (rax_16 == 0xffffffff)
                                    result = nullptr
                                    goto label_14266d2cf
                            
                            if (rax_16 == 0xffffffff)
                                rdx_11 = nullptr
                    
                    result = &rdx_11[2]
                    
                    if (rdx_11 == 0)
                        result = nullptr
                
            label_14266d2cf:
                
                if (result != 0 && r9_2 != 0)
                    uint128_t zmm0_2 = *result
                    void* rdx_12 = zmm0_2.q
                    var_a8 = zmm0_2
                    
                    if (rdx_12 != 0)
                        int32_t rcx_12 = var_a8:8.d
                        
                        if (rcx_12 != 0xffffffff && rcx_12 s< *(rdx_12 + 0x388))
                            void* rdx_13 = zmm0_2.q
                            uint128_t temp0_7 = _mm_bsrli_si128(zmm0_2, 8)
                            void* rax_17 = *(rdx_13 + 0x380)
                            
                            if (rax_17 != 0)
                                rdx_13 = rax_17
                            
                            void* rcx_14 = *(rdx_13 + sx.q(temp0_7.d) * 0x38 + 0x20)
                            
                            if (*(rcx_14 + 0x28) == 0 && *(rcx_14 + 0x18) == 0
                                    && (*(rcx_14 + 0xc8) & 1) == 0)
                                r15_1 = 0
                            
                            if (*(rcx_14 + 0x90) != 0 || *(rcx_14 + 0xa0) != 0
                                    || *(rcx_14 + 0xb0) != 0
                                    || ((*(rcx_14 + 0xc8) u>> 1).b & 1) != 0)
                                rdi = 2
                            
                            sub_142647430(arg1[1], arg4, 
                                (*(rcx_14 + 0xb8) u>> 1 & 1) << 2 | rdi | r15_1)
            
            result.b = 1

return result
