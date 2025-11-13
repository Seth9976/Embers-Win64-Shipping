// 函数: sub_142affed0
// 地址: 0x142affed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)

if (*(rbx + 0x4c) s< 8)
    return sub_142afed70(arg1, arg2) __tailcall

char* rdx_1 = *(arg1 + 0x10)
int32_t rsi = *(arg1 + 0x18)
int32_t rsi_1 = rsi - rdx_1.d

if (rsi == rdx_1.d && *(rbx + 0x48) == rsi_1)
    return 

void* r9_2 = *(arg1 + 0x20)
int64_t r14_1 = *(arg1 + 0x28)

if (r9_2 u>= r14_1)
    *arg2 = 0xf
    return 

int32_t* r11_2 = *(arg1 + 0x30)
int32_t r14_3 = ((r14_1 - r9_2) s>> 1).d
int32_t rbp_1 = 0
uint32_t r10_2 = 0

if (*(rbx + 0x48) != 0)
    *(rbx + 0x41) = *(rbx + 0x48)
    *(rbx + 0x40) = 1
    *(rbx + 0x48) = 0

uint64_t r8_2 = zx.q(sx.d(*(rbx + 0x40)))
uint64_t rax

if (r8_2.d == 0)
label_142b0007a:
    int32_t r8_5 = r14_3 * 2
    
    if (r8_5 u> rsi_1)
        r8_5 = rsi_1 & 0xfffffffe
    
    if (r10_2.w != 0)
    label_142b00228:
        *(rbx + 0x41) = r10_2.b
        rax.w = r10_2.w u>> 8
        *(rbx + 0x42) = rax.b
        *(rbx + 0x40) = 2
        
        if ((0x400 & r10_2.w) != 0)
            *arg2 = 0xc
        else
            if (rsi_1 u< 2)
                goto label_142b0028f
            
            uint16_t rcx_7 = zx.w(rdx_1[1]) << 8 | zx.w(*rdx_1)
            
            if ((zx.d(rcx_7) & 0xfffffc00) != 0xdc00)
                *arg2 = 0xc
            else
                *r9_2 = r10_2.w
                rdx_1 = &rdx_1[2]
                r9_2 += 2
                
                if (r11_2 != 0)
                    *r11_2 = rbp_1
                    r11_2 = &r11_2[1]
                
                *(rbx + 0x90) = rcx_7
                *(rbx + 0x5d) = 1
                *(rbx + 0x40) = 0
                *arg2 = 0xf
    else
        if (r8_5 != 0)
            rsi_1 -= r8_5
            uint64_t r8_6 = zx.q(r8_5 u>> 1)
            r14_3 -= r8_6.d
            
            if (r11_2 != 0)
                int32_t i
                
                do
                    uint16_t rax_13 = zx.w(*rdx_1)
                    uint16_t rcx_5 = zx.w(rdx_1[1])
                    rdx_1 = &rdx_1[2]
                    r10_2 = zx.d(rcx_5 << 8) | zx.d(rax_13)
                    
                    if ((r10_2 & 0xfffff800) == 0xd800)
                        if ((0x400 & r10_2.w) != 0)
                            break
                        
                        if (r8_6.d u< 2)
                            break
                        
                        uint16_t rcx_6 = zx.w(rdx_1[1]) << 8 | zx.w(*rdx_1)
                        
                        if ((zx.d(rcx_6) & 0xfffffc00) != 0xdc00)
                            break
                        
                        *r9_2 = r10_2.w
                        rdx_1 = &rdx_1[2]
                        r9_2 += 2
                        r8_6 = zx.q(r8_6.d - 1)
                        rax = 4
                        *r9_2 = rcx_6
                        *r11_2 = rbp_1
                        r11_2 = &r11_2[1]
                    else
                        *r9_2 = r10_2.w
                        rax = 2
                    
                    *r11_2 = rbp_1
                    r9_2 += 2
                    r11_2 = &r11_2[1]
                    rbp_1 += rax.d
                    i = r8_6.d
                    r8_6 = zx.q(r8_6.d - 1)
                while (i != 1)
            else
                int32_t i_1
                
                do
                    uint16_t rax_7 = zx.w(*rdx_1)
                    uint16_t rcx_3 = zx.w(rdx_1[1])
                    rdx_1 = &rdx_1[2]
                    r10_2 = zx.d(rcx_3 << 8) | zx.d(rax_7)
                    
                    if ((r10_2 & 0xfffff800) == 0xd800)
                        if ((0x400 & r10_2.w) != 0)
                            break
                        
                        if (r8_6.d u< 2)
                            break
                        
                        uint16_t rcx_4 = zx.w(rdx_1[1]) << 8 | zx.w(*rdx_1)
                        
                        if ((zx.d(rcx_4) & 0xfffffc00) != 0xdc00)
                            break
                        
                        *r9_2 = r10_2.w
                        rdx_1 = &rdx_1[2]
                        r8_6 = zx.q(r8_6.d - 1)
                        *(r9_2 + 2) = rcx_4
                        r9_2 += 2
                    else
                        *r9_2 = r10_2.w
                    
                    r9_2 += 2
                    i_1 = r8_6.d
                    r8_6 = zx.q(r8_6.d - 1)
                while (i_1 != 1)
            
            if (r8_6.d != 0)
                r14_3 += r8_6.d
                rsi_1 = rsi_1 + (r8_6 << 1).d - 2
                
                if (r10_2.w != 0)
                    goto label_142b00228
        
    label_142b0028f:
        
        if (*arg2 s<= 0 && rsi_1 != 0)
            if (r14_3 == 0)
                *arg2 = 0xf
            else
                *(sx.q(*(rbx + 0x40)) + rbx + 0x41) = *rdx_1
                *(rbx + 0x40) += 1
                rdx_1 = &rdx_1[1]
else
    while (true)
        rbp_1 += 1
        *(r8_2 + rbx + 0x41) = *rdx_1
        rdx_1 = &rdx_1[1]
        rsi_1 -= 1
        r8_2 = zx.q(r8_2.d + 1)
        
        if (r8_2.d != 2)
            if (r8_2.d != 4)
                goto label_142afffd2
            
            uint16_t r8_3 = zx.w(*(rbx + 0x44)) << 8 | zx.w(*(rbx + 0x43))
            
            if ((zx.d(r8_3) & 0xfffffc00) != 0xdc00)
                *arg2 = 0xc
                
                if (*(arg1 + 0x10) - rdx_1 s< 2)
                    rax = zx.q(*(rbx + 0x43)) | 0x100
                    *(rbx + 0x40) = 2
                    *(rbx + 0x48) = rax.d
                    rdx_1 -= 1
                else
                    rdx_1 -= 2
                    *(rbx + 0x40) = 2
                
                break
            
            *r9_2 = zx.w(*(rbx + 0x42)) << 8 | zx.w(*(rbx + 0x41))
            r9_2 += 2
            
            if (r14_3 u< 2)
                *(rbx + 0x90) = r8_3
                r14_3 = 0
                *(rbx + 0x5d) = 1
                *arg2 = 0xf
            else
                *r9_2 = r8_3
                r9_2 += 2
                
                if (r11_2 != 0)
                    *r11_2 = -1
                    r11_2 = &r11_2[2]
                
                r14_3 -= 2
            
            r10_2 = 0
            r8_2 = 0
        else
            r10_2.w = zx.w(*(rbx + 0x42)) << 8
            r10_2.w |= zx.w(*(rbx + 0x41))
            
            if ((zx.d(r10_2.w) & 0xfffff800) != 0xd800)
                *r9_2 = r10_2.w
                r9_2 += 2
                
                if (r11_2 != 0)
                    *r11_2 = 0xffffffff
                    r11_2 = &r11_2[1]
                
                r14_3 -= 1
                r10_2 = 0
                r8_2 = 0
            else if ((0x400 & r10_2.w) == 0)
                r10_2 = 0
            label_142afffd2:
                
                if (rsi_1 != 0)
                    continue
        
        *(rbx + 0x40) = r8_2.b
        goto label_142b0007a
*(arg1 + 0x30) = r11_2
*(arg1 + 0x20) = r9_2
*(arg1 + 0x10) = rdx_1
