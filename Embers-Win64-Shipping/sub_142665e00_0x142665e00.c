// 函数: sub_142665e00
// 地址: 0x142665e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r10 = *arg1
void* r9 = *(r10 + 0x50)

if (r9 != 0)
    result = zx.q(*(r9 + 0x458))
    int32_t* rdx_3
    
    if (result.d == *(r9 + 0x484))
    label_142665e9e:
        rdx_3 = nullptr
    else
        void* r8_1 = r9 + 0x488
        void* rdx = *(r8_1 + 8)
        int64_t r11_1 = sx.q(*(arg2 + 0xc))
        
        if (rdx != 0)
            r8_1 = rdx
        
        result = zx.q(*(r8_1 + (((sx.q(*(r9 + 0x498)) - 1) & r11_1) << 2)))
        
        if (result.d == 0xffffffff)
        label_142665e9e_1:
            rdx_3 = nullptr
        else
            while (true)
                rdx_3 = (sx.q(result.d) << 5) + *(r9 + 0x450)
                
                if (*rdx_3 == r11_1.d)
                    break
                
                result = zx.q(rdx_3[6])
                
                if (result.d == 0xffffffff)
                    goto label_142665e9e_2
            
            if (result.d == 0xffffffff)
            label_142665e9e_2:
                rdx_3 = nullptr
    
    void* rbx_1 = &rdx_3[2]
    
    if (rdx_3 == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        uint128_t zmm0 = *rbx_1
        void* rcx_3 = zmm0.q
        
        if (rcx_3 != 0)
            int32_t rax = zmm0.12:8.d
            
            if (rax != 0xffffffff && rax s< *(rcx_3 + 0x388))
                void* rdi_1 = arg1[1]
                void* rdx_4 = zmm0.q
                uint128_t temp0_1 = _mm_bsrli_si128(zmm0, 8)
                void* rax_1 = *(rdx_4 + 0x380)
                
                if (rax_1 != 0)
                    rdx_4 = rax_1
                
                void* rdx_5 = rdx_4 + sx.q(temp0_1.d) * 0x38
                bool cond:2_1 = (*(rdi_1 + 0x18) & 1) == 0
                uint128_t zmm6 = *rdx_5
                uint128_t zmm2 = *(rdx_5 + 8)
                int128_t zmm5 = *(rdx_5 + 4)
                zmm0.d = zmm2.d f+ *(rdx_5 + 0x14)
                uint128_t zmm8
                zmm8.d = zmm6.d f+ *(rdx_5 + 0xc)
                zmm6.d = zmm6.d f- *(rdx_5 + 0xc)
                zmm2.d = zmm2.d f- *(rdx_5 + 0x14)
                int128_t zmm7
                zmm7.d = zmm5.d f+ *(rdx_5 + 0x10)
                zmm5.d = zmm5.d f- *(rdx_5 + 0x10)
                int96_t var_78_1
                var_78_1:8.d = zmm0.d
                int32_t var_50_1 = zmm2.d
                uint64_t var_58_1 = (_mm_unpacklo_ps(zmm6, zmm5.q)).q
                uint64_t var_4c_1 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
                int32_t var_44_1 = var_78_1:8.d
                
                if (not(cond:2_1))
                    int64_t rsi_1 = sx.q(*(rdi_1 + 0x10))
                    int32_t var_60_1 = 1.d
                    int32_t var_5c_1 = 3
                    int32_t rax_7 = (rsi_1 + 1).d
                    *(rdi_1 + 0x10) = rax_7
                    
                    if (rax_7 s> *(rdi_1 + 0x14))
                        sub_1405c4e40(rdi_1 + 8)
                    
                    int64_t rax_8 = *(rdi_1 + 8)
                    uint128_t* rcx_7 = rsi_1 << 5
                    *(rcx_7 + rax_8) = var_58_1.o
                    *(rcx_7 + rax_8 + 0x10) = var_4c_1.o
                    r10 = *arg1
        
        sub_1426662a0(*(r10 + 0x50), rbx_1)
        result = *arg1
        void* rcx_9 = result[0xa]
        
        if (rcx_9 != 0)
            return sub_142665220(rcx_9 + 0x450, *(arg2 + 0xc))

return result
