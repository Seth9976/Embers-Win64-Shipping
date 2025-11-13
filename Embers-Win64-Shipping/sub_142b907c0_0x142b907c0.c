// 函数: sub_142b907c0
// 地址: 0x142b907c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15_1 = *(arg1 + 0x210) * 2

if (r15_1 s> 0x80)
    abort()
    noreturn

int64_t rcx = sx.q(*(arg1 + 0x210))

if (rcx.d s>= 0x100)
    abort()
    noreturn

uint64_t rax = 0
int32_t i = 0

if (rcx.d s> 0)
    int64_t r10_1 = 0
    
    do
        int64_t r8_1 = *(arg1 + 0x200)
        int32_t* rdx_1 = r10_1 + (rcx << 2)
        i += 1
        r10_1 += 4
        *(rdx_1 + r8_1) = *(r10_1 + r8_1 - 4)
    while (i s< *(arg1 + 0x210))

int32_t i_1 = 0

if (*(arg1 + 0x210) s> 0)
    int64_t rbx_1 = 0
    
    do
        int64_t r10_2 = rbx_1
        
        if (rbx_1 s>= 0)
            int64_t rdx_2 = *(arg1 + 0x200)
            int64_t rcx_2 = rcx << 2
            int32_t* r8_3 = rcx_2 + (rbx_1 << 2) + rdx_2
            int32_t* r11 = rcx_2 + rdx_2
            int64_t temp0_1
            
            do
                uint64_t rdx_3 = zx.q(*r11)
                r11 = &r11[1]
                uint64_t rcx_3 = zx.q(*r8_3)
                r8_3 = &r8_3[-1]
                rax += rdx_3 * rcx_3
                temp0_1 = r10_2
                r10_2 -= 1
            while (temp0_1 - 1 s>= 0)
        
        int32_t rdx_6 = rax.d & 0xfffffff
        rax u>>= 0x1c
        i_1 += 1
        *(*(arg1 + 0x200) + (rbx_1 << 2)) = rdx_6
        rbx_1 += 1
    while (i_1 s< *(arg1 + 0x210))

int64_t rbp = sx.q(*(arg1 + 0x210))
int64_t r14 = sx.q(r15_1)
int64_t rdi = rbp

if (rbp s< r14)
    do
        int32_t rsi_1 = *(arg1 + 0x210)
        int32_t rdx_8 = *(arg1 + 0x210) - 1
        int32_t rbx_3 = rbp.d - rdx_8
        
        if (rbx_3 s< rsi_1)
            int64_t r8_4 = *(arg1 + 0x200)
            int32_t* r10_3 = r8_4 + ((sx.q(rbx_3) + rcx) << 2)
            int32_t* r11_1 = r8_4 + ((sx.q(rdx_8) + rcx) << 2)
            uint64_t i_3 = zx.q(rsi_1 - rbx_3)
            uint64_t i_2
            
            do
                uint64_t rdx_10 = zx.q(*r11_1)
                r11_1 = &r11_1[-1]
                uint64_t rcx_8 = zx.q(*r10_3)
                r10_3 = &r10_3[1]
                rax += rdx_10 * rcx_8
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        int32_t rdx_13 = rax.d & 0xfffffff
        rax u>>= 0x1c
        rbp = zx.q(rbp.d + 1)
        *(*(arg1 + 0x200) + (rdi << 2)) = rdx_13
        rdi += 1
    while (rdi s< r14)

uint64_t result = zx.q(*(arg1 + 0x214) * 2)
*(arg1 + 0x210) = r15_1
*(arg1 + 0x214) = result.d

if (r15_1 s> 0)
    int64_t rcx_10 = *(arg1 + 0x200)
    
    do
        result = sx.q(*(arg1 + 0x210) - 1)
        
        if (*(rcx_10 + (result << 2)) != 0)
            break
        
        *(arg1 + 0x210) -= 1
    while (*(arg1 + 0x210) s> 0)

if (*(arg1 + 0x210) == 0)
    *(arg1 + 0x214) = 0

return result
