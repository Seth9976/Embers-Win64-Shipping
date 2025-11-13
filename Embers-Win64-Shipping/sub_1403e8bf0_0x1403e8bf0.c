// 函数: sub_1403e8bf0
// 地址: 0x1403e8bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = sx.d(*arg2)
int32_t rdi = 1
int32_t rax_1 = sx.d(arg2[1]) - r10
int32_t r9 = 1
int32_t rcx = 1

if (rax_1 s> 1)
    r9 = rax_1

int64_t rbp = sx.q(arg3)
int16_t r9_1 = 0x7fff

if (r10 s> 1)
    rcx = r10

int32_t r14 = divs.dp.d(0:0x20000, r9)
int32_t rcx_1 = divs.dp.d(0:0x20000, rcx) + r14
int16_t rax_4 = 0x7fff

if (rcx_1 s< 0x7fff)
    rax_4 = rcx_1.w

*arg1 = rax_4
int64_t r10_1 = sx.q((rbp - 1).d)

if (r10_1 s> 1)
    int64_t rbx_2 = arg1 - arg2
    void* r11_1 = &arg2[2]
    int64_t i_1 = ((r10_1 - 2) u>> 1) + 1
    int64_t i
    
    do
        int32_t r8 = 1
        int32_t rcx_3 = sx.d(*r11_1) - sx.d(*(r11_1 - 2))
        r11_1 += 4
        
        if (rcx_3 s> 1)
            r8 = rcx_3
        
        int16_t rcx_4 = 0x7fff
        int32_t temp0_2 = divs.dp.d(0:0x20000, r8)
        int32_t rax_8 = temp0_2 + r14
        
        if (rax_8 s< 0x7fff)
            rcx_4 = rax_8.w
        
        *(rbx_2 + r11_1 - 6) = rcx_4
        int32_t rdx_4 = sx.d(*(r11_1 - 2)) - sx.d(*(r11_1 - 4))
        int32_t rcx_5 = 1
        
        if (rdx_4 s> 1)
            rcx_5 = rdx_4
        
        int32_t temp0_3 = divs.dp.d(0:0x20000, rcx_5)
        int16_t rcx_6 = 0x7fff
        r14 = temp0_3
        int32_t rax_11 = temp0_3 + temp0_2
        
        if (rax_11 s< 0x7fff)
            rcx_6 = rax_11.w
        
        *(rbx_2 + r11_1 - 4) = rcx_6
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rdx_6 = 0x8000 - sx.d(*((rbp << 1) + -fffffffffffffffe + arg2))

if (rdx_6 s> 1)
    rdi = rdx_6

int32_t result = divs.dp.d(0:0x20000, rdi)
int32_t rcx_8 = result + r14

if (rcx_8 s< 0x7fff)
    r9_1 = rcx_8.w

*((rbp << 1) + -fffffffffffffffe + arg1) = r9_1
return result
