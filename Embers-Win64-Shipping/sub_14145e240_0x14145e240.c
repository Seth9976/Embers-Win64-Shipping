// 函数: sub_14145e240
// 地址: 0x14145e240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t arg_10 = arg2

if (arg3 == 0)
    return 

void* r10_1 = arg1 + 8
uint64_t rax
void* const rcx_2

if (*(arg1 + 0x10) == *(r10_1 + 0x34))
labelid_1f:
    rcx_2 = nullptr
else
    void* rcx = *(r10_1 + 0x40)
    void* r9_1 = r10_1 + 0x38
    
    if (rcx != 0)
        r9_1 = rcx
    
    rax = zx.q(*(r9_1 + (((sx.q(*(r10_1 + 0x48)) - 1) & sx.q(arg2)) << 2)))
    
    if (rax.d == 0xffffffff)
    label_14145e2c0:
        rcx_2 = nullptr
    else
        int64_t r9_2 = *r10_1
        
        while (true)
            int64_t r8_3 = sx.q(rax.d) * 5
            rcx_2 = r9_2 + (r8_3 << 3)
            
            if (*(r9_2 + (r8_3 << 3)) == arg2)
                break
            
            rax = zx.q(*(rcx_2 + 0x20))
            
            if (rax.d == 0xffffffff)
                goto label_14145e2c0_1
        
        if (rax.d == 0xffffffff)
        label_14145e2c0_1:
            rcx_2 = nullptr

void* r13_1 = rcx_2 + 8

if (rcx_2 == 0)
    r13_1 = nullptr

if (r13_1 == 0)
    return 

int64_t rcx_3 = sx.q(*(r13_1 + 8))
int32_t r14_1

if (rcx_3.d != 0)
    int64_t rbx_1 = 0
    int32_t rdi_1 = 0
    int64_t r12
    r12.b = **r13_1 != arg3
    r14_1 = 0
    
    do
        int64_t r9_3 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rcx_3)
            int64_t rcx_4 = *r13_1 + (rbx_1 << 3)
            
            do
                rax.b = *rcx_4 != arg3
                
                if (zx.d(r12.b) != rax.d)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_4 += 8
            while (rbx_1 s< rcx_3)
        
        int32_t rbp_2 = rdi_1 - r9_3.d
        
        if (r12.b != 0)
            if (r14_1 != r9_3.d)
                int64_t rcx_5 = *r13_1
                memmove(rcx_5 + (sx.q(r14_1) << 3), rcx_5 + (r9_3 << 3), rbp_2 << 3)
            
            r14_1 += rbp_2
        
        r12.b ^= 1
    while (rbx_1 s< rcx_3)
    
    *(r13_1 + 8) = r14_1

if (rcx_3.d == 0 || r14_1 == 0)
    sub_14145e090(r10_1, &arg_10)
