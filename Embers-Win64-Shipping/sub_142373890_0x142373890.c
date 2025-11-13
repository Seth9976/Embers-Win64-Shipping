// 函数: sub_142373890
// 地址: 0x142373890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0xc0))

if (rdx.d == 0)
    return 

int32_t rdi_1 = 0
int32_t r15_1 = 0
int64_t r14
r14.b = **(arg1 + 0xb8) != arg2
int64_t rbx_1 = 0

do
    int64_t r9_1 = sx.q(rdi_1)
    rbx_1 += 1
    rdi_1 += 1
    
    if (rbx_1 s< rdx)
        int64_t* rcx = *(arg1 + 0xb8) + (rbx_1 << 3)
        
        do
            int64_t* rax
            rax.b = *rcx != arg2
            
            if (zx.d(r14.b) != rax.d)
                break
            
            rdi_1 += 1
            rbx_1 += 1
            rcx = &rcx[1]
        while (rbx_1 s< rdx)
    
    int32_t rbp_2 = rdi_1 - r9_1.d
    
    if (r14.b != 0)
        if (r15_1 != r9_1.d)
            int64_t rcx_1 = *(arg1 + 0xb8)
            memmove(rcx_1 + (sx.q(r15_1) << 3), rcx_1 + (r9_1 << 3), rbp_2 << 3)
        
        r15_1 += rbp_2
    
    r14.b ^= 1
while (rbx_1 s< rdx)

*(arg1 + 0xc0) = r15_1
