// 函数: sub_142bb3da0
// 地址: 0x142bb3da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(arg1 + 0x2a0))(arg3, 0x676c7966, arg2, arg1 + 0x400)
int32_t rbp = 0

if (result.b != 0x8e)
    if (result != 0)
        return result
    
    if (*(*(arg1 + 0xd0) + 0x50) == 0)
        *(arg1 + 0x404) = sub_1408e52d0(arg2)
    else
        *(arg1 + 0x404) = 0
else
    *(arg1 + 0x400) = 0

int32_t arg_8

if ((*(arg1 + 0x2a0))(arg1, 0x6c6f6361, arg2, &arg_8) != 0)
    return 0x90

int32_t rdi_1 = arg_8
uint32_t rax_5
char rcx_2

if (*(arg1 + 0x132) == 0)
    rcx_2 = 1
    
    if (rdi_1 u>= 0x20000)
        rdi_1 = 0x1ffff
    
    rax_5 = rdi_1 u>> 1
else
    rcx_2 = 2
    
    if (rdi_1 u>= 0x40000)
        rdi_1 = 0x3ffff
    
    rax_5 = rdi_1 u>> 2

*(arg1 + 0x434) = rax_5
int32_t rax_7 = *(arg1 + 0x10)
int32_t rdx = *(arg1 + 0x434)
arg_8 = rdi_1

if (rdx != rax_7 + 1 && rdx u<= rax_7)
    void* rsi_1 = *(arg1 + 0xf8)
    rdi_1 = (rax_7 + 1) << rcx_2
    void* r14_3 = (zx.q(*(arg1 + 0xf4)) << 4) + rsi_1
    int32_t rax_8 = sub_1408e52d0(arg2)
    int32_t r8_2
    r8_2.b = 0
    int32_t rdx_1 = 0x7fffffff
    
    if (rsi_1 u>= r14_3)
        rdx_1 = arg2[1].d - rax_8
    else
        do
            int32_t rcx_5 = *(rsi_1 + 8) - rax_8
            
            if (rcx_5 s> 0 && rcx_5 s< rdx_1)
                rdx_1 = rcx_5
                r8_2.b = 1
            
            rsi_1 += 0x10
        while (rsi_1 u< r14_3)
        
        if (r8_2.b == 0)
            rdx_1 = arg2[1].d - rax_8
    
    if (rdi_1 u> rdx_1)
        int32_t rax_11 = *(arg1 + 0x434)
        
        if (rax_11 != 0)
            rbp = rax_11 - 1
        
        rdi_1 = arg_8
        *(arg1 + 0x10) = rbp
    else
        int32_t rax_10 = *(arg1 + 0x10) + 1
        arg_8 = rdi_1
        *(arg1 + 0x434) = rax_10

return sub_142b96670(arg2, rdi_1, arg1 + 0x438)
