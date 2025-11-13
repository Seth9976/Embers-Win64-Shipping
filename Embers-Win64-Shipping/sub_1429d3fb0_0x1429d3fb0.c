// 函数: sub_1429d3fb0
// 地址: 0x1429d3fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 8)
int32_t i = 0

if (*(r8 + 4) s<= 0)
    return 

int64_t rbx_1 = 0
int32_t r12_1 = 0

do
    char* r11_2 = *(arg1 + 0x1b0) + rbx_1
    int64_t rcx = sx.q(r12_1) << 2
    int32_t* rdx_2 = *(arg1 + 0xc0) + rcx
    int32_t* r8_2 = *(r8 + 0x78) + rcx
    
    if ((*r11_2 & 1) == 0)
        if ((*(sx.q(*r8_2) + *(arg1 + 0x1c8)) & 1) != 0)
            *rdx_2 = 1
            *(*(arg1 + 0xd8) + (rbx_1 << 2)) = 1
        
        if ((*(sx.q(r8_2[1]) + *(arg1 + 0x1c8)) & 1) != 0)
            rdx_2[1] = 1
            *(*(arg1 + 0xd8) + (rbx_1 << 2)) = 1
    else
        *rdx_2 = 2
        rdx_2[1] = 2
        *(*(arg1 + 0xd8) + (rbx_1 << 2)) = 2
    
    void* rdx_3 = *(arg1 + 8)
    int64_t rax_7 = *(rdx_3 + 0x90)
    int32_t r10_1 = *(rax_7 + (rbx_1 << 3))
    int32_t* rbp_1 = *(rdx_3 + 0xa8) + (sx.q(*(rax_7 + (rbx_1 << 3) + 4)) << 2)
    void* rax
    
    if (r10_1 == 2)
        int64_t rdx_4 = *(arg1 + 0x198)
        rax.b = *r11_2 & 0xe1
        *r11_2 = (((*(sx.q(rbp_1[1]) + rdx_4) ^ *(sx.q(*rbp_1) + rdx_4)) & 1) * 2) | rax.b
    else if (r10_1 s>= 2)
        int32_t r8_5 = 1
        char rsi_1 = *(sx.q(*rbp_1) + *(arg1 + 0x198))
        *r11_2 &= 0xe1
        
        if (r10_1 s> 1)
            rax = &rbp_1[1]
            
            do
                if ((*(sx.q(*rax) + *(arg1 + 0x198)) & 1) != (rsi_1 & 1))
                    *r11_2 = (*r11_2 & 0xe3) | 2
                    break
                
                r8_5 += 1
                rax += 4
            while (r8_5 s< r10_1)
    else
        *r11_2 &= 0xe1
    r8 = *(arg1 + 8)
    i += 1
    r12_1 += 2
    rbx_1 += 1
while (i s< *(r8 + 4))
