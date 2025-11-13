// 函数: sub_1421726c0
// 地址: 0x1421726c0
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
    label_14217276f:
        rcx_5 = nullptr
    else
        void* r8_1 = &r9_1[7]
        void* rdx = *(r8_1 + 8)
        int64_t r10_1 = sx.q(*(r14_1 + *(arg1 + 0x1e8)))
        
        if (rdx != 0)
            r8_1 = rdx
        
        int32_t rax_5 = *(r8_1 + (((sx.q(r9_1[9].d) - 1) & r10_1) << 2))
        
        if (rax_5 == 0xffffffff)
        label_14217276f_1:
            rcx_5 = nullptr
        else
            while (true)
                rcx_5 = (sx.q(rax_5) << 4) + *r9_1
                
                if (*rcx_5 == r10_1.d)
                    break
                
                rax_5 = rcx_5[2]
                
                if (rax_5 == 0xffffffff)
                    goto label_14217276f_2
            
            if (rax_5 == 0xffffffff)
            label_14217276f_2:
                rcx_5 = nullptr
    
    int32_t rax = rcx_5[1]
    
    if (rax s> 0xffffffff && rax s<= arg2)
        rcx_5[1] = 0xffffffff
        int32_t rax_6 = *(arg1 + 0x1f0)
        int32_t rcx_7 = rax_6 - rdi_1
        
        if (rcx_7 != 1)
            int64_t rax_7 = *(arg1 + 0x1e8)
            memmove(r15_1 + rax_7, rsi_2 + rax_7, (rcx_7 - 1) << 2)
            rax_6 = *(arg1 + 0x1f0)
        
        *(arg1 + 0x1f0) = rax_6 - 1
        sub_1405dac90(arg1 + 0x1e8)
    
    rsi_2 -= 4
    r15_1 -= 4
    r14_1 -= 4
    temp1_1 = rdi_1
    rdi_1 -= 1
while (temp1_1 - 1 s>= 0)
