// 函数: sub_142afd5b0
// 地址: 0x142afd5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 8)

if (*(rax + 0x40) s> 0)
    *arg3 = 0xffffff81
    return rax

char* r8 = *(arg1 + 0x20)
char* rax_1 = *(arg2 + 0x10)
int32_t i_1 = *(arg1 + 0x28) - r8.d
int64_t rbp = *(arg2 + 0x18)
int32_t i_2 = rbp.d - rax_1.d

if (i_2 s< i_1)
    i_1 = i_2

if (i_1 s>= 0x10)
    int32_t i = i_1 s>> 4
    int32_t i_3 = i
    
    do
        char rdx = *rax_1
        *r8 = rdx
        char rcx_1 = rax_1[1]
        r8[1] = rcx_1
        char rcx_2 = rax_1[2]
        r8[2] = rcx_2
        char rcx_3 = rax_1[3]
        r8[3] = rcx_3
        char rcx_4 = rax_1[4]
        r8[4] = rcx_4
        char rcx_5 = rax_1[5]
        r8[5] = rcx_5
        char rcx_6 = rax_1[6]
        r8[6] = rcx_6
        char rcx_7 = rax_1[7]
        r8[7] = rcx_7
        char rcx_8 = rax_1[8]
        r8[8] = rcx_8
        char rcx_9 = rax_1[9]
        r8[9] = rcx_9
        char rcx_10 = rax_1[0xa]
        r8[0xa] = rcx_10
        char rcx_11 = rax_1[0xb]
        r8[0xb] = rcx_11
        char rcx_12 = rax_1[0xc]
        r8[0xc] = rcx_12
        char rcx_13 = rax_1[0xd]
        r8[0xd] = rcx_13
        char rcx_14 = rax_1[0xe]
        r8[0xe] = rcx_14
        char rcx_15 = rax_1[0xf]
        rax_1 = &rax_1[0x10]
        r8[0xf] = rcx_15
        r8 = &r8[0x10]
        
        if ((rdx | rcx_1 | rcx_2 | rcx_3 | rcx_4 | rcx_5 | rcx_6 | rcx_7 | rcx_8 | rcx_9 | rcx_10
                | rcx_11 | rcx_12 | rcx_13 | rcx_14 | rcx_15) u> 0x7f)
            rax_1 -= 0x10
            r8 -= 0x10
            break
        
        i -= 1
    while (i s> 0)
    
    i_1 += (i - i_3) << 4

for (; i_1 s> 0; i_1 -= 1)
    char rcx_16 = *rax_1
    
    if (rcx_16 u> 0x7f)
        *arg3 = 0xffffff81
        goto label_142afd727
    
    *r8 = rcx_16
    rax_1 = &rax_1[1]
    r8 = &r8[1]

if (rax_1 u< rbp && r8 u>= *(arg1 + 0x28))
    *arg3 = 0xf

label_142afd727:
*(arg2 + 0x10) = rax_1
*(arg1 + 0x20) = r8
return rax_1
