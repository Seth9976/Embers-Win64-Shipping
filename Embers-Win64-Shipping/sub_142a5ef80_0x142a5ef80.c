// 函数: sub_142a5ef80
// 地址: 0x142a5ef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1
uint64_t rdx
rax_1, rdx = sub_142abafe0(**(arg1 + 0x170))

if (rax_1 == 0)
    void* rax_2 = *(arg1 + 0x170)
    *(rax_2 + 0x890) = 0
    return rax_2

int64_t* rcx_1 = *(arg1 + 0x170)
uint64_t rax_3 = *rcx_1

if ((*(rax_3 + 0xc8) & 1) != 0)
    rdx.b = 1
else
    int16_t rdx_1 = *(rax_3 + 0xc8)
    
    if (rdx_1 s< 0)
        rdx = zx.q(*(rax_3 + 0xcc))
    else
        rdx = zx.q(sx.d(rdx_1) s>> 5)
    
    if (rdx.d != 1)
        rdx.b = 0
    else
        int16_t r8_1 = *(rax_3 + 0xc8)
        
        if (r8_1 s< 0)
            rdx = zx.q(*(rax_3 + 0xcc))
        else
            rdx = zx.q(sx.d(r8_1) s>> 5)
        
        if (rdx.d == 0)
            rdx.b = 0
        else
            rdx = rax_3 + 0xca
            
            if ((r8_1.b & 2) == 0)
                rdx = *(rax_3 + 0xd8)
            
            if (*rdx == 0x2d)
                rdx.b = 1
            else
                rdx.b = 0

if (*(rax_3 + 0x228) s>> 5 == 0 && *(rax_3 + 0x2a8) s>> 5 == 0 && rdx.b != 0
        && (*(rax_3 + 0x148) & 0xffe0) == 0)
    int32_t rdx_4 = *(rax_3 + 0x48)
    char r11_1 = *(rax_3 + 0x4c)
    
    if (rdx_4 s<= 0 || rdx_4 == 3)
        rax_3.b = 0
    else
        rax_3.b = 1
    
    void* r8_2 = rcx_1[1]
    
    if (r11_1 == 0)
    label_142a5f0a2:
        void* rax_6 = rcx_1[0x111]
        int32_t rsi = *(rax_6 + 0x6c)
        int32_t rbp = *(rax_6 + 0x58)
        
        if (rsi s> 0xa || *(rax_6 + 0x64) s> 0)
            rcx_1[0x112].b = 0
            return rax_6
        
        int32_t r10_1 = *(r8_2 + 0x748)
        int16_t rax_7 = *(r8_2 + 0x190)
        uint64_t rax_9
        
        if (rax_7 s< 0)
            rax_9 = zx.q(*(r8_2 + 0x194))
        else
            rax_9 = zx.q(sx.d(rax_7) s>> 5)
        
        if (rax_9.d != 1 || r10_1 u> 0xffff)
            rcx_1[0x112].b = 0
        else
            rcx_1[0x112].b = rax_9.b
            char rdi_1 = 0
            *(*(arg1 + 0x170) + 0x892) = r10_1.w
            int16_t rcx_3
            
            if (r11_1 == 0 || rdx_4 != 3)
                rcx_3 = 0
            else
                rcx_3 = sub_142a4a1a0(r8_2 + 0x48, 0)
            
            *(*(arg1 + 0x170) + 0x894) = rcx_3
            *(*(arg1 + 0x170) + 0x896) = sub_142a4a1a0(r8_2 + 0x188, 0)
            
            if (rsi u<= 0x7f)
                rdi_1 = rsi.b
            
            char rcx_6 = rbp.b
            *(*(arg1 + 0x170) + 0x898) = rdi_1
            
            if (rbp u> 0x7f)
                rcx_6 = 0x7f
            
            rax_9 = *(arg1 + 0x170)
            *(rax_9 + 0x899) = rcx_6
        
        return rax_9
    
    if (rax_3.b == 0)
        int16_t rax_4 = *(r8_2 + 0x50)
        
        if (rax_4 s< 0)
            rax_3 = zx.q(*(r8_2 + 0x54))
        else
            rax_3 = zx.q(sx.d(rax_4) s>> 5)
        
        if (rax_3.d == 1)
            goto label_142a5f0a2

rcx_1[0x112].b = 0
return rax_3
