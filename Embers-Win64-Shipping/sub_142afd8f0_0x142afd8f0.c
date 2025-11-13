// 函数: sub_142afd8f0
// 地址: 0x142afd8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *(arg1 + 8)
char* r14 = *(arg1 + 0x20)
int16_t* r10 = *(arg1 + 0x10)
int32_t i_6 = *(arg1 + 0x28) - r14.d
int16_t rsi = 0xff
int64_t r12 = *(arg1 + 0x18)
char* r11 = r14
int32_t* result = *(arg1 + 0x30)
uint32_t rdi = *(r13 + 0x54)

if (*(r13 + 0x30) != &data_143664340)
    rsi = 0x7f

int32_t r9 = sbb.d(arg4, arg4, rdi != 0)
int32_t i_2 = ((r12 - r10) s>> 1).d

if (i_2 s>= i_6)
    i_2 = i_6

if (rdi == 0 || i_2 s<= 0)
    if (i_2 s>= 0x10)
        int32_t i = i_2 s>> 4
        int32_t i_5 = i
        
        do
            int16_t rdx = *r10
            *r11 = rdx.b
            int16_t rcx_2 = r10[1]
            r11[1] = rcx_2.b
            int16_t rcx_3 = r10[2]
            r11[2] = rcx_3.b
            int16_t rcx_4 = r10[3]
            r11[3] = rcx_4.b
            int16_t rcx_5 = r10[4]
            r11[4] = rcx_5.b
            int16_t rcx_6 = r10[5]
            r11[5] = rcx_6.b
            int16_t rcx_7 = r10[6]
            r11[6] = rcx_7.b
            int16_t rcx_8 = r10[7]
            r11[7] = rcx_8.b
            int16_t rcx_9 = r10[8]
            r11[8] = rcx_9.b
            int16_t rcx_10 = r10[9]
            r11[9] = rcx_10.b
            int16_t rcx_11 = r10[0xa]
            r11[0xa] = rcx_11.b
            int16_t rcx_12 = r10[0xb]
            r11[0xb] = rcx_12.b
            int16_t rcx_13 = r10[0xc]
            r11[0xc] = rcx_13.b
            int16_t rcx_14 = r10[0xd]
            r11[0xd] = rcx_14.b
            int16_t rcx_15 = r10[0xe]
            r11[0xe] = rcx_15.b
            int16_t rcx_16 = r10[0xf]
            r10 = &r10[0x10]
            r11[0xf] = rcx_16.b
            r11 = &r11[0x10]
            
            if ((rcx_16 | rdx | rcx_2 | rcx_3 | rcx_4 | rcx_5 | rcx_6 | rcx_7 | rcx_8 | rcx_9
                    | rcx_10 | rcx_11 | rcx_12 | rcx_13 | rcx_14 | rcx_15) u> rsi)
                r10 -= 0x20
                r11 -= 0x10
                break
            
            i -= 1
        while (i s> 0)
        
        int32_t i_1 = i_5 - i
        int32_t rcx_18 = i_1 << 4
        i_2 -= rcx_18
        
        if (result != 0)
            r14 = &r14[sx.q(rcx_18)]
            
            for (; i_1 s> 0; i_1 -= 1)
                int64_t j_1 = 0x10
                int64_t j
                
                do
                    *result = r9
                    result = &result[1]
                    r9 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
    
    if (i_2 s> 0)
        int16_t rcx_20
        
        do
            rcx_20 = *r10
            r10 = &r10[1]
            
            if (rcx_20 u> rsi)
                goto label_142afdade
            
            *r11 = rcx_20.b
            i_2 -= 1
            r11 = &r11[1]
        while (i_2 s> 0)
        
        if (rcx_20 u> rsi)
        label_142afdade:
            rdi = zx.d(rcx_20)
            
            if ((rdi & 0xfffff800) == 0xd800 && not(test_bit(rdi, 0xa)))
                goto label_142afdaf7
            
        label_142afdb21:
            int32_t rdx_2 = 0xa
            
            if ((rdi & 0xfffff800) == 0xd800)
                rdx_2 = 0xc
            
            *arg2 = rdx_2
            *(r13 + 0x54) = rdi
else
label_142afdaf7:
    
    if (r10 u< r12)
        uint32_t rdx_1 = zx.d(*r10)
        
        if ((rdx_1 & 0xfffffc00) == 0xdc00)
            r10 = &r10[1]
            rdi = ((rdi - 0xd7f7) << 0xa) + rdx_1
        
        goto label_142afdb21
    
    *(r13 + 0x54) = rdi

if (result != 0)
    void* i_4 = r11 - r14
    
    if (r11 != r14)
        void* i_3
        
        do
            *result = r9
            result = &result[1]
            r9 += 1
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)

if (*arg2 s<= 0 && r10 u< r12 && r11 u>= *(arg1 + 0x28))
    *arg2 = 0xf

*(arg1 + 0x10) = r10
*(arg1 + 0x20) = r11
*(arg1 + 0x30) = result
return result
