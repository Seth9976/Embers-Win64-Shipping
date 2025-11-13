// 函数: sub_142c43440
// 地址: 0x142c43440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 0x70)
int64_t rsi
rsi.b = 0
uint64_t rdi = zx.q(arg2)
int32_t r10 = arg2
int32_t r11 = (rdi + 3).d

if (r11 u<= arg3 && *(rbp + rdi * 0x14 + 0x12) == 0x10)
    arg4 = zx.q((rdi + 1).d) * 5
    
    if (*(rbp + (arg4 << 2) + 0x12) == 0x12)
        arg4 = zx.q((rdi + 2).d) * 5
        
        if (*(rbp + (arg4 << 2) + 0x12) == 4)
            r10 = r11
            rsi.b = 1

int32_t r9_2 = rdi.d

if (r10 u< arg3)
    char* rdx_1 = rbp + 0x12 + zx.q(r10) * 0x14
    
    do
        arg4.b = rdx_1[-6] u>> 5
        
        if ((arg4.b & 1) == 0)
            char rcx_1 = *rdx_1
            
            if (rcx_1 u>= 0x20)
                arg4 = 0
            else
                arg4 = zx.q(1 << rcx_1)
            
            if ((arg4.d & 0xb1806) != 0)
                r9_2 = r10
                break
        
        r10 += 1
        rdx_1 = &rdx_1[0x14]
    while (r10 u< arg3)

char temp0 = rsi.b
rsi.b = neg.b(rsi.b)
int32_t r8 = rdi.d
int32_t rdx_2 = (sbb.d(arg4.d, arg4.d, temp0 != 0) & 3) + rdi.d

if (rdi.d u< rdx_2)
    void* rax_6 = rdi * 0x14 + 0x13 + rbp
    int32_t i_4 = rdx_2 - rdi.d
    uint64_t i_2 = zx.q(i_4)
    r8 = i_4 + rdi.d
    uint64_t i
    
    do
        *rax_6 = 5
        rax_6 += 0x14
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r8 u< r9_2)
    uint64_t rax_7 = zx.q(r8)
    int32_t i_5 = r9_2 - r8
    r8 += i_5
    char* rax_9 = rbp + 0x13 + rax_7 * 0x14
    uint64_t i_3 = zx.q(i_5)
    uint64_t i_1
    
    do
        *rax_9 = 3
        rax_9 = &rax_9[0x14]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (r8 u< arg3)
    uint64_t rax_10 = zx.q(r8)
    r8 += 1
    *(rbp + rax_10 * 0x14 + 0x13) = 4

int32_t r9_3 = 5

if (r8 u< arg3)
    char* rdx_4 = rbp + 0x13 + zx.q(r8) * 0x14
    
    do
        char rax_12 = rdx_4[-1]
        
        if (rax_12 == 0x16)
            *rdx_4 = 3
        else if (*rdx_4 u>= 4)
            if (rax_12 == 0x1e)
                *rdx_4 = *(rbp + zx.q(r8 - 1) * 0x14 + 0x13)
            else if (r9_3 == 5)
                if (rax_12 == 0x1b)
                    r9_3 = 8
                
                *rdx_4 = r9_3.b
            else if (r9_3 != 8)
                *rdx_4 = r9_3.b
            else if (rax_12 == 0xa)
                *rdx_4 = 7
            else if (rax_12 != 0x1b)
                r9_3 = 9
                *rdx_4 = r9_3.b
            else
                *rdx_4 = 8
        
        r8 += 1
        rdx_4 = &rdx_4[0x14]
    while (r8 u< arg3)

return sub_142bf59c0(arg1, rdi.d, arg3, sub_142c43060) __tailcall
