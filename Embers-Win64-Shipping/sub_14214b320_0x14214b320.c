// 函数: sub_14214b320
// 地址: 0x14214b320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x30)
int64_t result = sx.q(*(rdi + 0x50))
int64_t* rdi_1

if (result.d s<= 0)
label_14214b371:
    rdi_1 = nullptr
else
    rdi_1 = *(rdi + 0x48)
    int64_t result_1 = result
    result = 0
    
    while (*rdi_1 != arg2)
        result += 1
        rdi_1 = &rdi_1[5]
        
        if (result s>= result_1)
            goto label_14214b371

if (rdi_1 == 0)
    result.b = 0
else
    int64_t* rdx_5
    
    if (*(arg1 + 0x98) == *(arg1 + 0xc4))
    label_14214b3ee:
        rdx_5 = nullptr
    else
        int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8 = arg1 + 0xc8
        void* rcx_1 = *(r8 + 8)
        
        if (rcx_1 != 0)
            r8 = rcx_1
        
        int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0xd8)) - 1) & sx.q(rax_2)) << 2))
        
        if (rax_4 == 0xffffffff)
        label_14214b3ee_1:
            rdx_5 = nullptr
        else
            while (true)
                rdx_5 = (sx.q(rax_4) << 5) + *(arg1 + 0x90)
                
                if (*rdx_5 == arg2)
                    break
                
                rax_4 = rdx_5[3].d
                
                if (rax_4 == 0xffffffff)
                    goto label_14214b3ee_2
            
            if (rax_4 == 0xffffffff)
            label_14214b3ee_2:
                rdx_5 = nullptr
    
    void* rcx_2 = &rdx_5[1]
    
    if (rdx_5 == 0)
        rcx_2 = nullptr
    
    if (rcx_2 == 0)
        rcx_2 = &rdi_1[3]
    
    result.b = 1
    *arg3 = *rcx_2

return result
