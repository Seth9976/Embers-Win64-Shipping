// 函数: sub_14200ae80
// 地址: 0x14200ae80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rcx = sx.q(*(arg1 + 0x40))

if (rcx.d == 0)
    return 

int32_t rdi_1 = 0
int32_t r15_1 = 0
int64_t r12
r12.b = **(arg1 + 0x38) != arg2
int64_t rbx_1 = 0

do
    int64_t r9_1 = sx.q(rdi_1)
    rbx_1 += 1
    rdi_1 += 1
    
    if (rbx_1 s< rcx)
        int64_t* rcx_1 = *(arg1 + 0x38) + (rbx_1 << 3)
        
        do
            int32_t rax_3
            rax_3.b = *rcx_1 != arg2
            
            if (zx.d(r12.b) != rax_3)
                break
            
            rdi_1 += 1
            rbx_1 += 1
            rcx_1 = &rcx_1[1]
        while (rbx_1 s< rcx)
    
    int32_t rbp_2 = rdi_1 - r9_1.d
    
    if (r12.b != 0)
        if (r15_1 != r9_1.d)
            int64_t rcx_2 = *(arg1 + 0x38)
            memmove(rcx_2 + (sx.q(r15_1) << 3), rcx_2 + (r9_1 << 3), rbp_2 << 3)
        
        r15_1 += rbp_2
    
    r12.b ^= 1
while (rbx_1 s< rcx)

*(arg1 + 0x40) = r15_1

if (rcx.d != r15_1)
    sub_14200d930(arg2 + 0x18f, arg1)
