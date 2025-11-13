// 函数: sub_140da0560
// 地址: 0x140da0560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* rbx_1 = arg1[8]
    void* rdi_1 = &arg1[7]
    int64_t r9_1 = sx.q(sub_140daa5a0(arg3))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    rbx_2 = *(rdi_1 + ((r9_1 & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_140da0633:
    *arg2 = 0xffffffff
else
    int64_t rdi_2 = *arg1
    
    while (true)
        int64_t* r14_1 = sx.q(rbx_2) * 0x38
        int64_t rax_5 = *(r14_1 + rdi_2 + 0x18)
        
        if (rax_5 == arg3[3])
            if (rax_5 != 0)
                *arg2 = rbx_2
                break
            
            int16_t* rdx
            
            if (arg3[1].d == rax_5.d)
                rdx = &data_142d40450
            else
                rdx = *arg3
            
            int16_t* const rcx_1
            
            if (*(r14_1 + rdi_2 + 8) == 0)
                rcx_1 = &data_142d40450
            else
                rcx_1 = *(r14_1 + rdi_2)
            
            if (sub_140a54510(rcx_1, rdx) == 0 && *(r14_1 + rdi_2 + 0x10) == arg3[2].b
                    && *(r14_1 + rdi_2 + 0x11) == *(arg3 + 0x11)
                    && *(r14_1 + rdi_2 + 0x14) == *(arg3 + 0x14))
                *arg2 = rbx_2
                break
        
        rdi_2 = *arg1
        rbx_2 = *(r14_1 + rdi_2 + 0x30)
        
        if (rbx_2 == 0xffffffff)
            goto label_140da0633

return arg2
