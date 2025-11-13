// 函数: sub_142656eb0
// 地址: 0x142656eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x50)
void* rax_2

if (r9 == 0)
    rax_2 = nullptr
else
    int32_t* rdx_3
    
    if (*(r9 + 0x458) == *(r9 + 0x484))
        rdx_3 = nullptr
    else
        void* r8_1 = r9 + 0x488
        void* rdx = *(r8_1 + 8)
        int64_t r11_1 = sx.q(*(arg2 + 0xc))
        
        if (rdx != 0)
            r8_1 = rdx
        
        int32_t rax_1 = *(r8_1 + (((sx.q(*(r9 + 0x498)) - 1) & r11_1) << 2))
        
        if (rax_1 == 0xffffffff)
            rdx_3 = nullptr
        else
            while (true)
                rdx_3 = (sx.q(rax_1) << 5) + *(r9 + 0x450)
                
                if (*rdx_3 == r11_1.d)
                    break
                
                rax_1 = rdx_3[6]
                
                if (rax_1 == 0xffffffff)
                    rax_2 = nullptr
                    goto label_142656f4f
            
            if (rax_1 == 0xffffffff)
                rdx_3 = nullptr
    
    rax_2 = &rdx_3[2]
    
    if (rdx_3 == 0)
        rax_2 = nullptr

label_142656f4f:

if (rax_2 != 0 && r9 != 0)
    uint128_t zmm0 = *rax_2
    void* rdx_4 = zmm0.q
    
    if (rdx_4 != 0)
        int32_t rcx_3 = zmm0.12:8.d
        
        if (rcx_3 != 0xffffffff && rcx_3 s< *(rdx_4 + 0x388))
            if (*rax_2 == 0)
                return 0
            
            void* rdx_5 = zmm0.q
            uint128_t temp0_1 = _mm_bsrli_si128(zmm0, 8)
            void* rax_3 = *(rdx_5 + 0x380)
            
            if (rax_3 != 0)
                rdx_5 = rax_3
            
            return *(rdx_5 + sx.q(temp0_1.d) * 0x38 + 0x20)

return 0
