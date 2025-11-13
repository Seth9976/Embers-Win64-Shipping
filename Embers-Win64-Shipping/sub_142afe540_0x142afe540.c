// 函数: sub_142afe540
// 地址: 0x142afe540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8 = *(arg1 + 0x10)
int64_t rdi = *(arg1 + 0x18)
void* rbx = *(arg1 + 8)
char* r10 = r8

if (r8 u>= rdi)
    *arg2 = 8
    return 0xffff

uint16_t rdx = zx.w(*r8)
void* i = &r8[1]

if (rdx.b s>= 0)
    *(arg1 + 0x10) = i
    return zx.q(rdx.b)

if ((rdx + 0x3e).b u<= 0x32)
    int64_t r9_1 = 0
    int16_t rcx
    rcx.b = rdx.b u>= 0xf0
    int16_t temp0_1 = rcx
    rcx += sbb.w(rdx + 0x3e, rdx + 0x3e, rdx.b u< 0xe0) + 2
    
    if (temp0_1 != neg.w(sbb.w(rdx + 0x3e, rdx + 0x3e, rdx.b u< 0xe0) + 2))
        if (zx.q(rcx) + i u<= rdi)
            uint32_t rax_11 = zx.d(rdx.b)
            uint32_t rdi_3 = rax_11 << 6
            
            if (rcx == 2)
                uint32_t rsi_2 = zx.d(*i)
                
                if (test_bit(sx.d(*((zx.q(rdx.b) & 0xf) + " 000000000000")), zx.d((rsi_2 u>> 5).b)))
                    char rcx_6 = *(i + 1)
                    i += 1
                    
                    if (rcx_6 s< 0xc0)
                        *(arg1 + 0x10) = i + 1
                        return zx.q(zx.d(rcx_6) - 0xe2080 + (rsi_2 << 6) + (rdi_3 << 6))
            else if (rcx != 1)
                uint32_t rsi_5 = zx.d(*i)
                
                if (test_bit(sx.d(*((zx.q(rsi_5) u>> 4) + 0x14363c6e8)), rax_11 & 7))
                    char rcx_9 = *(i + 1)
                    i += 1
                    
                    if (rcx_9 s< 0xc0)
                        rdx = zx.w(*(i + 1))
                        i += 1
                        
                        if (rdx.b s< 0xc0)
                            *(arg1 + 0x10) = i + 1
                            return zx.q(zx.d(rdx.b) - 0x3c82080 + (zx.d(rcx_9) << 6)
                                + (zx.d(rsi_5.b) << 0xc) + (rdi_3 << 0xc))
            else
                char rcx_7 = *i
                
                if (rcx_7 s< 0xc0)
                    *(arg1 + 0x10) = i + 1
                    return zx.q(zx.d(rcx_7) - 0x3080 + rdi_3)
            
            *(arg1 + 0x10) = i
            rdx.b = 0
            void* r11_2 = i - r10
            
            if (r10 u> i)
                r11_2 = nullptr
            
            if (r11_2 != 0)
                do
                    char rax_32 = *r10
                    r10 = &r10[1]
                    int64_t rcx_14 = sx.q(rdx.b)
                    r9_1 += 1
                    rdx.b += 1
                    *(rcx_14 + rbx + 0x41) = rax_32
                while (r9_1 u< r11_2)
            
            *(rbx + 0x40) = rdx.b
            *arg2 = 0xc
        else
            *(rbx + 0x41) = rdx.b
            *arg2 = 0xb
            r9_1.b = 1
            
            if (i u< *(arg1 + 0x18))
                uint32_t rdi_1 = zx.d(rcx + 1)
                uint32_t rsi_1 = zx.d(rdx.b)
                
                do
                    char r10_1 = *i
                    
                    if (rdi_1 u<= 2 || r9_1.b s> 1)
                        rdx.b = r10_1 s< 0xc0
                    else if (rdi_1 != 3)
                        rdx.b = 1 << (rsi_1.b & 7)
                        rdx.b &= *((zx.q(r10_1) u>> 4) + 0x14363c6e8)
                    else
                        rdx.b = 1 << r10_1 u>> 5
                        rdx.b &= *((zx.q(rsi_1) & 0xf) + " 000000000000")
                    
                    if (rdx.b == 0)
                        *arg2 = 0xc
                        break
                    
                    int64_t rax_9 = sx.q(r9_1.b)
                    i += 1
                    r9_1.b += 1
                    *(rax_9 + rbx + 0x41) = r10_1
                while (i u< *(arg1 + 0x18))
            
            *(rbx + 0x40) = r9_1.b
            *(arg1 + 0x10) = i
        
        return 0xffff

*(rbx + 0x41) = rdx.b
*(rbx + 0x40) = 1
*arg2 = 0xc
*(arg1 + 0x10) = i
return 0xffff
