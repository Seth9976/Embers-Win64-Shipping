// 函数: sub_1405e39a0
// 地址: 0x1405e39a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x58))

if (rdx.d == 0)
    return 

int32_t* rax = *(arg1 + 0x50)
int32_t* rcx = arg1 + 0x48
int32_t rdi_1 = 0
int32_t r12_1 = 0

if (rax != 0)
    rcx = rax

int64_t r14
r14.b = *rcx != arg2
int64_t rbx_1 = 0

do
    int64_t r9_1 = sx.q(rdi_1)
    rbx_1 += 1
    rdi_1 += 1
    
    if (rbx_1 s< rdx)
        int32_t* rax_1 = *(arg1 + 0x50)
        int32_t* rcx_1 = arg1 + 0x48
        
        if (rax_1 != 0)
            rcx_1 = rax_1
        
        do
            rax.b = rcx_1[rbx_1] != arg2
            
            if (zx.d(r14.b) != rax.d)
                break
            
            rdi_1 += 1
            rbx_1 += 1
        while (rbx_1 s< rdx)
    
    int32_t rbp_2 = rdi_1 - r9_1.d
    
    if (r14.b != 0)
        if (r12_1 != r9_1.d)
            int32_t* rax_2 = *(arg1 + 0x50)
            int32_t* rcx_2 = arg1 + 0x48
            
            if (rax_2 != 0)
                rcx_2 = rax_2
            
            memmove(&rcx_2[sx.q(r12_1)], &rcx_2[r9_1], rbp_2 << 2)
        
        r12_1 += rbp_2
    
    r14.b ^= 1
while (rbx_1 s< rdx)

*(arg1 + 0x58) = r12_1
