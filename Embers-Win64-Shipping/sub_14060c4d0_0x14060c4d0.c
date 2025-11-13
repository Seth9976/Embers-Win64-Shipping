// 函数: sub_14060c4d0
// 地址: 0x14060c4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
char* rsi = arg2
*(arg1 + 0x100) = 0

if (arg2 == 0)
    *(arg1 + 0x108) = 0
    *(arg1 + 0x110) = 0
    return arg1

int64_t rbp = -1

do
    rbp += 1
while (arg2[rbp] != 0)

char* rax = rsi
void* r15_1 = &rsi[sx.q(rbp.d)]
char* arg_8 = rax
int32_t i = 0x7fffffff

if (rsi u< r15_1)
    while (i s> 0)
        int32_t rax_3
        int32_t rcx_1
        
        if (sub_14060e800(&arg_8, r15_1.d - rax.d) - 0x10000 u> 0xfffff || i s< 2)
            rax_3 = 1
            rcx_1 = -1
        else
            rax_3 = 2
            rcx_1 = -2
        
        rdi += rax_3
        i += rcx_1
        rax = arg_8
        
        if (rax u>= r15_1)
            break

int64_t rcx_2 = *(arg1 + 0x100)
int32_t i_1 = rdi + 1
*(arg1 + 0x110) = rdi

if (i_1 u> 0x80)
    if (rcx_2 != 0 || i_1 != 0)
        *(arg1 + 0x100) = sub_140a84c80(rcx_2, sx.q(i_1) * 2, 0)
else if (rcx_2 != 0)
    *(arg1 + 0x100) = sub_140a84c80(rcx_2, 0, 0)

void* rax_5 = *(arg1 + 0x100)
void* rdi_1 = arg1
arg_8 = rsi

if (rax_5 != 0)
    rdi_1 = rax_5

void* rbp_2 = &rsi[sx.q((rbp + 1).d)]
*(arg1 + 0x108) = rdi_1

if (rsi u>= rbp_2)
    return arg1

while (i_1 s> 0)
    int32_t rax_7 = sub_14060e800(&arg_8, rbp_2.d - rsi.d)
    int32_t rax_10
    
    if (rax_7 - 0x10000 u> 0xfffff)
        if (rax_7 u> 0x10ffff)
            rax_7 = 0x3f
        
        *rdi_1 = rax_7.w
        rax_10 = -1
    else if (i_1 s< 2)
        *rdi_1 = 0x3f.w
        rax_10 = -1
    else
        int32_t rcx_4
        rcx_4.w = (rax_7 - 0x10000).w & 0x3ff
        *rdi_1 = ((rax_7 - 0x10000) u>> 0xa).w - 0x2800
        rdi_1 += 2
        rcx_4.w -= 0x2400
        rax_10 = -2
        *rdi_1 = rcx_4.w
    
    rsi = arg_8
    rdi_1 += 2
    i_1 += rax_10
    
    if (rsi u>= rbp_2)
        break

return arg1
