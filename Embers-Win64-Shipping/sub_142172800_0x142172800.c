// 函数: sub_142172800
// 地址: 0x142172800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x1f0)
int32_t rdi_1 = rdi - 1

if (rdi - 1 s< 0)
    return 

int64_t r14_1 = sx.q(rdi_1) << 2
int64_t r15_1 = r14_1
int64_t rsi_2 = sx.q(rdi_1 + 1) << 2
int32_t temp1_1

do
    int64_t* r9_1 = *(arg1 + 0x2e8)
    int32_t* rcx_5
    
    if (r9_1[1].d == *(r9_1 + 0x34))
    label_1421728af:
        rcx_5 = nullptr
    else
        void* r8_1 = &r9_1[7]
        void* rdx = *(r8_1 + 8)
        int64_t r10_1 = sx.q(*(r14_1 + *(arg1 + 0x1e8)))
        
        if (rdx != 0)
            r8_1 = rdx
        
        int32_t rax = *(r8_1 + (((sx.q(r9_1[9].d) - 1) & r10_1) << 2))
        
        if (rax == 0xffffffff)
        label_1421728af_1:
            rcx_5 = nullptr
        else
            while (true)
                rcx_5 = (sx.q(rax) << 4) + *r9_1
                
                if (*rcx_5 == r10_1.d)
                    break
                
                rax = rcx_5[2]
                
                if (rax == 0xffffffff)
                    goto label_1421728af_2
            
            if (rax == 0xffffffff)
            label_1421728af_2:
                rcx_5 = nullptr
    
    if (rcx_5[1] == arg2)
        rcx_5[1] = 0xfffffffe
        int32_t rax_4 = *(arg1 + 0x1f0)
        int32_t rcx_7 = rax_4 - rdi_1
        
        if (rcx_7 != 1)
            int64_t rax_5 = *(arg1 + 0x1e8)
            memmove(r15_1 + rax_5, rsi_2 + rax_5, (rcx_7 - 1) << 2)
            rax_4 = *(arg1 + 0x1f0)
        
        *(arg1 + 0x1f0) = rax_4 - 1
        sub_1405dac90(arg1 + 0x1e8)
    
    rsi_2 -= 4
    r15_1 -= 4
    r14_1 -= 4
    temp1_1 = rdi_1
    rdi_1 -= 1
while (temp1_1 - 1 s>= 0)
