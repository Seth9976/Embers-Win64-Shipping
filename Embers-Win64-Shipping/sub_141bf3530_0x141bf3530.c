// 函数: sub_141bf3530
// 地址: 0x141bf3530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rcx = sx.q(*(arg2 + 0x1d8))

if (rcx.d == 0)
    return 

int64_t* rax = *(arg2 + 0x1d0)
int32_t r15_1 = 0
int32_t rdi_1 = 0
int64_t rsi

if (*rax != arg1 || rax[3].b != 0)
    rsi.b = 1
else
    rsi.b = 0

int64_t rbx_1 = 0

do
    int64_t r10_1 = sx.q(rdi_1)
    rbx_1 += 1
    rdi_1 += 1
    
    if (rbx_1 s< rcx)
        void* rdx = &(*(arg2 + 0x1d0))[rbx_1 * 5]
        
        do
            if (*rdx != arg1 || *(rdx + 0x18) != 0)
                rax.b = 1
            else
                rax.b = 0
            
            if (rsi.b != rax.b)
                break
            
            rdi_1 += 1
            rbx_1 += 1
            rdx += 0x28
        while (rbx_1 s< rcx)
    
    int32_t rbp_2 = rdi_1 - r10_1.d
    
    if (rsi.b != 0)
        if (r15_1 != r10_1.d)
            int64_t r9_1 = *(arg2 + 0x1d0)
            memmove(r9_1 + sx.q(r15_1) * 0x28, r9_1 + r10_1 * 0x28, rbp_2 * 0x28)
        
        r15_1 += rbp_2
    
    rsi.b ^= 1
while (rbx_1 s< rcx)

*(arg2 + 0x1d8) = r15_1
