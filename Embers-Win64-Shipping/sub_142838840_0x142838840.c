// 函数: sub_142838840
// 地址: 0x142838840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0xd98)
int32_t r9 = *(result + 0x1c)
int32_t rdx = *(result + 0x18)

if (*(arg1 + 0xda0) != 0)
    int32_t r8_1 = *(arg1 + 0xde0)
    
    if (r8_1 s< rdx)
        *(arg1 + 0xde0) = rdx
        r8_1 = rdx
    else if (r8_1 s> r9)
        *(arg1 + 0xde0) = r9
        r8_1 = r9
    
    int32_t rax = *(arg1 + 0xde4)
    
    if (rax s< rdx)
        *(arg1 + 0xde4) = rdx
        rax = rdx
    else if (rax s> r9)
        *(arg1 + 0xde4) = r9
        rax = r9
    
    int32_t r9_1 = r8_1
    
    if (r8_1 s> rax)
        *(arg1 + 0xde0) = rax
        r9_1 = rax
        rax = r8_1
        *(arg1 + 0xde4) = r8_1
    
    if (r9_1 == rax)
        return sub_1428394c0(arg1)
    
    if (((int.d(fconvert.t(*(arg1 + 0x6d8))) - 1) & 0xfffffffd) == 0)
        int32_t rax_3 = *(arg1 + 0xde8)
        int32_t r11_1
        
        if (rax_3 s>= rdx)
            r11_1 = rax_3
            
            if (rax_3 s> r9 + 1)
                *(arg1 + 0xde8) = r9 + 1
                rax_3 = r9 + 1
                r11_1 = r9 + 1
        else
            *(arg1 + 0xde8) = rdx
            rax_3 = rdx
            r11_1 = rdx
        
        int32_t r8_2 = *(arg1 + 0xdec)
        int32_t rbx_1
        
        if (r8_2 s>= rdx)
            rbx_1 = r8_2
            
            if (r8_2 s> r9 + 1)
                *(arg1 + 0xdec) = r9 + 1
                r8_2 = r9 + 1
                rbx_1 = r9 + 1
        else
            *(arg1 + 0xdec) = rdx
            r8_2 = rdx
            rbx_1 = rdx
        
        int32_t r9_2 = rax_3
        int32_t rdi_1 = r8_2
        
        if (rax_3 s> r8_2)
            *(arg1 + 0xde8) = r8_2
            r9_2 = r8_2
            *(arg1 + 0xdec) = rax_3
            rdi_1 = rax_3
            r11_1 = r8_2
            rbx_1 = rax_3
        
        if (rdi_1 s< r9_2 + 2)
            *(arg1 + 0x6d8) = 0
            r9_2 = r11_1
        
        void* rax_5 = *(arg1 + 0xd98)
        
        if (r9_2 s>= *(rax_5 + 0x20) && rbx_1 s<= *(rax_5 + 0x24))
            if (*(rax_5 + 0x48) == 0)
                *(arg1 + 0xe90) = *(arg1 + 0xe8c)
            else
                uint128_t zmm1
                zmm1.q = *(rax_5 + 0x50) f/ _mm_cvtps_pd(*(arg1 + 0xdf0))
                *(arg1 + 0xe90) = _mm_cvtpd_ps(zmm1)[0]
    
    if ((*(arg1 + 0xda0) & 2) != 0)
        if (r9 + 1 - rdx s< 2 && ((int.d(fconvert.t(*(arg1 + 0x6d8))) - 1) & 0xfffffffd) == 0)
            *(arg1 + 0x6d8) = 0
        
        *(arg1 + 0xdb8) = sx.q(*(arg1 + 0xde0)) << 0x20
    
    result = zx.q(int.d(fconvert.t(*(arg1 + 0x6d8))))
    
    if ((result.d == 3 && *(arg1 + 0xe84) s< 5) || result.d == 1)
        result = *(arg1 + 0xdb8) u>> 0x20
        
        if (result.d s>= *(arg1 + 0xdec))
            result = sx.q(*(arg1 + 0xde8)) << 0x20
            *(arg1 + 0xdb8) = result
    
    *(arg1 + 0xda0) = 0

return result
