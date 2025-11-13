// 函数: sub_142ba93f0
// 地址: 0x142ba93f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*arg2)
int32_t rcx_1 = *(arg1 + 0x260) + 1

if (r8.d u< rcx_1)
    int32_t* r9_1 = *(arg1 + 0x248)
    int32_t* rax = &r9_1[r8 * 6]
    uint64_t rdx_1 = zx.q(*(arg1 + 0x240))
    
    if (rcx_1 != rdx_1.d || rax[3] != r8.d)
        rax = r9_1
        void* rcx_2 = &r9_1[rdx_1 * 6]
        
        if (r9_1 u< rcx_2)
            while (rax[3] != r8.d)
                rax = &rax[6]
                
                if (rax u>= rcx_2)
                    break
        
        if (rax != rcx_2)
            goto label_142ba9454
    else
    label_142ba9454:
        
        if (rax[4].b != 0)
            int64_t rcx_3 = sx.q(*(arg1 + 0x268))
            
            if (rcx_3.d s>= *(arg1 + 0x26c))
                *(arg1 + 0x18) = 0x82
                return 
            
            int32_t* r8_1 = *(arg1 + 0x270) + rcx_3 * 0x18
            *r8_1 = *(arg1 + 0x204)
            int32_t rcx_6 = *(arg1 + 0x210)
            r8_1[2] = 1
            r8_1[1] = rcx_6 + 1
            *(r8_1 + 0x10) = rax
            *(arg1 + 0x268) += 1
            sub_142ba9d60(arg1, *rax, rax[1])
            *(arg1 + 0x220) = 0
            return 

*(arg1 + 0x18) = 0x86
