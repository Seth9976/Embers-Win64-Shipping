// 函数: sub_142718d10
// 地址: 0x142718d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x50)
int32_t r10 = *(arg1 + 0x40)

if (r10 s< result || result s<= 0)
    result.b = 0
    return result

if (r10 s> result)
    int32_t rcx_4
    
    do
        int32_t i_4 = 0
        int32_t i = 0
        uint64_t r11_1 = 0
        float zmm1 = 3.40282347e+38f
        float zmm0
        
        if (r10 s>= 4)
            void* rdx_2 = *(arg1 + 0x38) + 0xe8
            int32_t i_6 = 2
            r11_1 = zx.q(((r10 - 4) u>> 2) + 1) << 2
            
            do
                float zmm2 = *(rdx_2 - 0x80)
                int32_t i_2 = i
                float zmm4 = *rdx_2
                float temp0_1 = _mm_min_ss(zmm2, zmm1)
                
                if (zmm1 <= zmm2)
                    i_2 = i_4
                
                temp0_1 - zmm4
                float zmm3 = temp0_1
                
                if (not(temp0_1 <= zmm4))
                    zmm3 = zmm4
                
                zmm0 = *(rdx_2 + 0x80)
                int32_t i_3 = i_6 - 1
                zmm2 = *(rdx_2 + 0x100)
                
                if (temp0_1 <= zmm4)
                    i_3 = i_2
                
                int32_t i_5 = i_6
                float temp0_2 = _mm_min_ss(zmm3, zmm0)
                
                if (zmm3 <= zmm0)
                    i_5 = i_3
                
                temp0_2 - zmm2
                zmm1 = temp0_2
                
                if (not(temp0_2 <= zmm2))
                    zmm1 = zmm2
                
                i_4 = i_6 + 1
                
                if (temp0_2 <= zmm2)
                    i_4 = i_5
                
                rdx_2 += 0x200
                i += 4
                i_6 += 4
            while (i s< r10 - 3)
        
        if (i s< r10)
            float* rdx_5 = *(arg1 + 0x38) + 0x68 + (r11_1 << 7)
            
            do
                zmm0 = zmm1
                zmm1 = *rdx_5
                int32_t i_1 = i
                rdx_5 = &rdx_5[0x20]
                bool cond:3_1 = zmm0 <= zmm1
                zmm1 = _mm_min_ss(zmm1, zmm0)
                
                if (cond:3_1)
                    i_1 = i_4
                
                i += 1
                i_4 = i_1
            while (i s< r10)
        
        int64_t rbp_1 = *(arg1 + 0x38)
        int64_t rdi_3 = sx.q(i_4) << 7
        int64_t rcx = *(rdi_3 + rbp_1 + 0x58)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *(rdi_3 + rbp_1 + 0x48)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rcx_4 = *(arg1 + 0x40)
        int32_t rax_1 = rcx_4 - i_4
        
        if (rax_1 != 1)
            int64_t rcx_2 = *(arg1 + 0x38)
            memmove(rcx_2 + rdi_3, (sx.q(i_4 + 1) << 7) + rcx_2, (rax_1 - 1) << 7)
            rcx_4 = *(arg1 + 0x40)
        
        *(arg1 + 0x40) = rcx_4 - 1
        r10 = rcx_4 - 1
    while (rcx_4 - 1 s> *(arg1 + 0x50))

result.b = 1
return result
