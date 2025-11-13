// 函数: sub_1429d88e0
// 地址: 0x1429d88e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = *(arg1 + 8)
int32_t i = 0

if (*rsi s<= 0)
    return 

int64_t r15_1 = 0

do
    char* r14_2 = *(arg1 + 0x198) + r15_1
    int32_t* r11_1 = *(arg1 + 0x78) + (sx.q(*(*(arg1 + 0x58) + (r15_1 << 3) + 4)) << 2)
    int64_t rdx_1 = sx.q(*(*(arg1 + 0x68) + (r15_1 << 3) + 4))
    int64_t rax = *(arg1 + 0x90)
    int32_t* rdi_1 = *(rsi + 0x30) + (sx.q(*(*(rsi + 0x18) + (r15_1 << 3) + 4)) << 2)
    
    if ((*r14_2 & 1) == 0)
        int64_t r9_1 = *(arg1 + 0x1c8)
        
        if ((zx.d(*(sx.q(rdi_1[2]) + r9_1)) & 1) + (zx.d(*(sx.q(rdi_1[1]) + r9_1)) & 1)
                != neg.d(zx.d(*(sx.q(*rdi_1) + r9_1)) & 1))
            int32_t* r9_2 = *(rsi + 0x48) + (sx.q(*(*(rsi + 0x18) + (r15_1 << 3) + 4)) << 2)
            int64_t r8_7 = *(arg1 + 0x1b0)
            char r10_5 = ((((*(sx.q(r9_2[1]) + r8_7) & 0xfe) * 2) | *(sx.q(*r9_2) + r8_7)) & 0x1e)
                | (*(sx.q(r9_2[2]) + r8_7) & 6) << 2 | (*r14_2 & 0xe1)
            *r14_2 = r10_5
            
            if ((r10_5 & 0x1e) != 0)
                r11_1[3] = 1
                *(rax + (rdx_1 << 2)) = 1
                *(rax + (rdx_1 << 2) + 4) = 1
                *(rax + (rdx_1 << 2) + 8) = 1
            
            if ((*(sx.q(*rdi_1) + *(arg1 + 0x1c8)) & 1) != 0)
                *r11_1 = 1
                *(rax + (rdx_1 << 2)) = 1
            
            if ((*(sx.q(rdi_1[1]) + *(arg1 + 0x1c8)) & 1) != 0)
                r11_1[1] = 1
                *(rax + (rdx_1 << 2) + 4) = 1
            
            if ((*(sx.q(rdi_1[2]) + *(arg1 + 0x1c8)) & 1) != 0)
                r11_1[2] = 1
                *(rax + (rdx_1 << 2) + 8) = 1
    else
        *r11_1 = 2
        r11_1[1] = 2
        r11_1[2] = 2
        r11_1[3] = 2
        *(rax + (rdx_1 << 2)) = 2
        *(rax + (rdx_1 << 2) + 4) = 2
        *(rax + (rdx_1 << 2) + 8) = 2
        *r14_2 &= 0xe1
    
    rsi = *(arg1 + 8)
    i += 1
    r15_1 += 1
while (i s< *rsi)
