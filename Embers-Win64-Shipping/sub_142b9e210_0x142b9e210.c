// 函数: sub_142b9e210
// 地址: 0x142b9e210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1

if (rax != 0)
    memcpy(*(arg2 + 8) + (sx.q(arg2[1]) << 3), *(arg1 + 8), rax << 3)

char* rax_3 = sx.q(arg2[1]) + *(arg2 + 0x10)
int32_t i_3 = *arg1
char* r8_3 = *(arg1 + 0x10)

if (i_3 != 0)
    int32_t i
    
    do
        char rcx_1 = *r8_3
        
        if ((rcx_1 & 1) == 0)
            *rax_3 = rcx_1 & 2
        else
            *rax_3 = 1
        
        r8_3 = &r8_3[1]
        rax_3 = &rax_3[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

char* rdx_1 = *(arg1 + 0x10)
int16_t* r8_4 = *(arg2 + 0x18) + (sx.q(*arg2) << 1)
int32_t i_2 = *arg1
int16_t rax_5 = arg2[1]

if (i_2 == 0)
    arg2[1] += i_2.w
    return rax_5

int32_t i_1

do
    if ((*rdx_1 & 8) != 0)
        *r8_4 = rax_5
        r8_4 = &r8_4[1]
        *arg2 += 1
    
    rdx_1 = &rdx_1[1]
    rax_5 += 1
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
int16_t rax_6 = *arg1
arg2[1] += rax_6
return rax_6
