// 函数: sub_1424278c0
// 地址: 0x1424278c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg5)
int64_t r15 = sx.q(arg6)
uint64_t r11 = zx.q(arg2)
int64_t r10 = sx.q(arg3)
uint64_t rax

if (rsi.d s> 0)
    int64_t r8 = arg1
    uint64_t i_2 = zx.q(rsi.d)
    uint64_t rdx_1 = sx.q((arg4 - 1) * r15.d) + arg1
    uint64_t i
    
    do
        int64_t rcx_1
        int64_t rdi_2
        
        if (r10 s> 0)
            rdi_2, rcx_1 = __memfill_u32(r8, r11.d, r10)
        int64_t rcx_2 = 0
        
        if (r10 s> 0)
            rax = rdx_1
            
            do
                rcx_2 += 1
                *rax = r11.d
                rax += 4
            while (rcx_2 s< r10)
        
        r8 += r15
        rdx_1 += sx.q(neg.d(r15.d))
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t rbp_1 = arg4 - rsi.d

if (rsi.d s>= rbp_1)
    return 

int64_t r8_2 = sx.q(rsi.d * r15.d) + arg1
uint64_t i_3 = zx.q(rbp_1 - rsi.d)
uint64_t i_1

do
    int64_t rcx_4
    int64_t rdi_4
    
    if (rsi.d s> 0)
        rdi_4, rcx_4 = __memfill_u32(r8_2, r11.d, rsi)
    rax = 0
    
    if (rsi.d s> 0)
        do
            int64_t rcx_7 = r10 - rsi + rax
            rax += 1
            *(r8_2 + (rcx_7 << 2)) = r11.d
        while (rax s< rsi)
    
    r8_2 += r15
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
