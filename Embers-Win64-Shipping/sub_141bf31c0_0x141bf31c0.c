// 函数: sub_141bf31c0
// 地址: 0x141bf31c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x1d8))

if (rdx.d == 0)
    return 

int64_t* rax = *(arg1 + 0x1d0)
int32_t r15_1 = 0
int32_t rdi_1 = 0
int64_t rsi

if (*rax != arg2 || rax[3].b != 1)
    rsi.b = 1
else
    rsi.b = 0

int64_t rbx_1 = 0

do
    int64_t r10_1 = sx.q(rdi_1)
    rbx_1 += 1
    rdi_1 += 1
    
    if (rbx_1 s< rdx)
        void* rdx_1 = &(*(arg1 + 0x1d0))[rbx_1 * 5]
        
        do
            if (*rdx_1 != arg2 || *(rdx_1 + 0x18) != 1)
                rax.b = 1
            else
                rax.b = 0
            
            if (rsi.b != rax.b)
                break
            
            rdi_1 += 1
            rbx_1 += 1
            rdx_1 += 0x28
        while (rbx_1 s< rdx)
    
    int32_t rbp_2 = rdi_1 - r10_1.d
    
    if (rsi.b != 0)
        if (r15_1 != r10_1.d)
            int64_t r9_1 = *(arg1 + 0x1d0)
            memmove(r9_1 + sx.q(r15_1) * 0x28, r9_1 + r10_1 * 0x28, rbp_2 * 0x28)
        
        r15_1 += rbp_2
    
    rsi.b ^= 1
while (rbx_1 s< rdx)

*(arg1 + 0x1d8) = r15_1
