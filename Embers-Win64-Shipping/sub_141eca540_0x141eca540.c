// 函数: sub_141eca540
// 地址: 0x141eca540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x128)
int64_t* rdi = r8
void* rcx = &r8[sx.q(*(arg1 + 0x130))]
int32_t rdi_1

if (r8 == rcx)
label_141eca582:
    rdi_1 = -1
label_141eca592:
    int64_t rbx_1 = *arg2
    void* const rcx_4
    
    if (*(arg1 + 0xe0) == *(arg1 + 0x10c))
    label_141eca62b:
        rcx_4 = nullptr
    else
        int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8_1 = arg1 + 0x110
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_6 = *(r8_1 + (((sx.q(*(arg1 + 0x120)) - 1) & sx.q(rax_4)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_141eca62b_1:
            rcx_4 = nullptr
        else
            int64_t r8_2 = *(arg1 + 0xd8)
            
            while (true)
                int64_t rdx_3 = sx.q(rax_6) * 3
                rcx_4 = r8_2 + (rdx_3 << 3)
                
                if (*(r8_2 + (rdx_3 << 3)) == rbx_1)
                    break
                
                rax_6 = *(rcx_4 + 0x10)
                
                if (rax_6 == 0xffffffff)
                    goto label_141eca62b_2
            
            if (rax_6 == 0xffffffff)
            label_141eca62b_2:
                rcx_4 = nullptr
    
    void* r8_3 = rcx_4 + 8
    
    if (rcx_4 == 0)
        r8_3 = nullptr
    
    if (r8_3 != 0)
        *arg2 = *r8_3
        int64_t* r9 = *(arg1 + 0x128)
        int64_t* rax_9 = r9
        void* rdx_4 = &r9[sx.q(*(arg1 + 0x130))]
        
        if (r9 != rdx_4)
            do
                if (*rax_9 == *r8_3)
                    return (rax_9 - r9) s>> 3
                
                rax_9 = &rax_9[1]
            while (rax_9 != rdx_4)
        
        return 0xffffffff
else
    while (*rdi != *arg2)
        rdi = &rdi[1]
        
        if (rdi == rcx)
            goto label_141eca582
    
    rdi_1 = ((rdi - r8) s>> 3).d
    
    if (rdi_1 == 0xffffffff)
        goto label_141eca592

return zx.q(rdi_1)
