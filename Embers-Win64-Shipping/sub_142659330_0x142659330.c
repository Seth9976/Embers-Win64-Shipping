// 函数: sub_142659330
// 地址: 0x142659330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x50)
int32_t r11 = 0
void* rax_2

if (r10 == 0)
    rax_2 = nullptr
else
    int32_t* rdx_3
    
    if (*(r10 + 0x458) == *(r10 + 0x484))
        rdx_3 = nullptr
    else
        void* r8 = r10 + 0x488
        void* rdx = *(r8 + 8)
        int64_t r9 = sx.q(*(arg2 + 0xc))
        
        if (rdx != 0)
            r8 = rdx
        
        int32_t rax_1 = *(r8 + (((sx.q(*(r10 + 0x498)) - 1) & r9) << 2))
        
        if (rax_1 == 0xffffffff)
            rdx_3 = nullptr
        else
            while (true)
                rdx_3 = (sx.q(rax_1) << 5) + *(r10 + 0x450)
                
                if (*rdx_3 == r9.d)
                    break
                
                rax_1 = rdx_3[6]
                
                if (rax_1 == 0xffffffff)
                    rax_2 = nullptr
                    goto label_1426593e7
            
            if (rax_1 == 0xffffffff)
                rdx_3 = nullptr
    
    rax_2 = &rdx_3[2]
    
    if (rdx_3 == 0)
        rax_2 = nullptr

label_1426593e7:

if (rax_2 != 0 && r10 != 0)
    uint128_t zmm0 = *rax_2
    void* rdx_4 = zmm0.q
    
    if (rdx_4 != 0)
        int32_t rcx_3 = zmm0.12:8.d
        
        if (rcx_3 != 0xffffffff && rcx_3 s< *(rdx_4 + 0x388))
            void* rdx_5 = zmm0.q
            uint128_t temp0 = _mm_bsrli_si128(zmm0, 8)
            void* rax_3 = *(rdx_5 + 0x380)
            
            if (rax_3 != 0)
                rdx_5 = rax_3
            
            void* rdx_6 = rdx_5 + sx.q(temp0.d) * 0x38
            void* rcx_5 = *(rdx_6 + 0x20)
            int32_t r8_2
            
            if (*(rcx_5 + 0x28) == 0 && *(rcx_5 + 0x18) == 0)
                r8_2 = 0
            
            if (*(rcx_5 + 0x28) != 0 || *(rcx_5 + 0x18) != 0 || (*(rcx_5 + 0xc8) & 1) != 0)
                r8_2 = 1
            
            if (*(rcx_5 + 0x90) != 0 || *(rcx_5 + 0xa0) != 0 || *(rcx_5 + 0xb0) != 0
                    || ((*(rcx_5 + 0xc8) u>> 1).b & 1) != 0)
                r11 = 2
            
            *arg3 = (*(rcx_5 + 0xb8) u>> 1 & 1) << 2 | r11 | r8_2
            uint128_t zmm7 = *rdx_6
            uint128_t zmm2 = *(rdx_6 + 8)
            int128_t zmm5 = *(rdx_6 + 4)
            zmm0.d = zmm2.d f+ *(rdx_6 + 0x14)
            uint128_t zmm8
            zmm8.d = zmm7.d f+ *(rdx_6 + 0xc)
            zmm7.d = zmm7.d f- *(rdx_6 + 0xc)
            zmm2.d = zmm2.d f- *(rdx_6 + 0x14)
            int128_t zmm6
            zmm6.d = zmm5.d f+ *(rdx_6 + 0x10)
            zmm5.d = zmm5.d f- *(rdx_6 + 0x10)
            int96_t var_68_1
            var_68_1:8.d = zmm0.d
            uint64_t var_4c = (_mm_unpacklo_ps(zmm8, zmm6.q)).q
            int32_t var_50 = zmm2.d
            int32_t var_44 = var_68_1:8.d
            zmm0.q = (_mm_unpacklo_ps(zmm7, zmm5.q)).q
            *arg4 = zmm0
            arg4[1].q = var_4c
            *(arg4 + 0x18) = 1.d
            int32_t rax_16
            rax_16.b = 1
            return rax_16

rax_2.b = 0
return rax_2
