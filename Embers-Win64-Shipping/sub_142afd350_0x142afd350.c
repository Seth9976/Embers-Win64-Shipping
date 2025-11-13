// 函数: sub_142afd350
// 地址: 0x142afd350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t* r9 = *(arg1 + 0x20)
void* r8 = arg1
int64_t r11 = *(arg1 + 0x18)
int32_t rbp = 0
char* r14 = *(arg1 + 0x10)
int32_t* r10 = arg2
int32_t* result = *(arg1 + 0x30)
uint16_t* rsi = r9
int32_t i_1 = ((*(arg1 + 0x28) - r9) s>> 1).d
int32_t i_3 = r11.d - r14.d

if (i_3 s< i_1)
    i_1 = i_3

if (i_1 s>= 8)
    int32_t i = i_1 s>> 3
    int32_t i_5 = i
    
    do
        uint16_t rdi_1 = zx.w(*r14)
        *rsi = rdi_1
        uint16_t rbx_1 = zx.w(r14[1])
        rsi[1] = rbx_1
        uint16_t r11_1 = zx.w(r14[2])
        rsi[2] = r11_1
        uint16_t r10_1 = zx.w(r14[3])
        rsi[3] = r10_1
        uint16_t r8_1 = zx.w(r14[4])
        rsi[4] = r8_1
        uint16_t rdx = zx.w(r14[5])
        rsi[5] = rdx
        uint16_t rcx_1 = zx.w(r14[6])
        rsi[6] = rcx_1
        uint16_t r9_1 = zx.w(r14[7])
        rsi[7] = r9_1
        r9_1.b |= rcx_1.b
        r9_1.b |= rdx.b
        r9_1.b |= r8_1.b
        r9_1.b |= r10_1.b
        r9_1.b |= r11_1.b
        r9_1.b |= rbx_1.b
        r9_1.b |= rdi_1.b
        
        if (r9_1.b u> 0x7f)
            break
        
        r14 = &r14[8]
        rsi = &rsi[8]
        i -= 1
    while (i s> 0)
    
    uint64_t r13_1 = zx.q(i_5 - i)
    uint32_t rcx_2 = (r13_1 << 3).d
    i_1 -= rcx_2
    
    if (result != 0)
        r9 = &r9[sx.q(rcx_2)]
        
        if (r13_1.d s> 0)
            int32_t rdx_1 = 2
            
            do
                *result = rbp
                result[1] = rdx_1 - 1
                rbp += 8
                result[2] = rdx_1
                result[3] = rdx_1 + 1
                r13_1 = zx.q(r13_1.d - 1)
                result[4] = rdx_1 + 2
                result[5] = rdx_1 + 3
                result[6] = rdx_1 + 4
                result[7] = rdx_1 + 5
                rdx_1 += 8
                result = &result[8]
            while (r13_1.d s> 0)
    
    r8 = arg1
    r10 = arg2

if (i_1 s<= 0)
label_142afd50b:
    
    if (r14 u< r11 && rsi u>= *(r8 + 0x28))
        *r10 = 0xf
else
    char rdx_2
    
    do
        rdx_2 = *r14
        r14 = &r14[1]
        
        if (rdx_2 u> 0x7f)
            goto label_142afd4f7
        
        i_1 -= 1
        *rsi = zx.w(rdx_2)
        rsi = &rsi[1]
    while (i_1 s> 0)
    
    if (rdx_2 u<= 0x7f)
        goto label_142afd50b
    
label_142afd4f7:
    void* rcx_11 = *(r8 + 8)
    *(rcx_11 + 0x41) = rdx_2
    *(rcx_11 + 0x40) = 1
    *r10 = 0xc

if (result != 0)
    int64_t i_4 = (rsi - r9) s>> 1
    
    if (i_4 != 0)
        int64_t i_2
        
        do
            *result = rbp
            result = &result[1]
            rbp += 1
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

*(r8 + 0x10) = r14
*(r8 + 0x20) = rsi
*(r8 + 0x30) = result
return result
