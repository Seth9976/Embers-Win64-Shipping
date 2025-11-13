// 函数: sub_1408f1b50
// 地址: 0x1408f1b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = arg3[1].d
    int16_t* rdx
    
    if (rax_1 == 0)
        rdx = &data_142d40450
    else
        rdx = *arg3
    
    void* rbx_1 = arg1[8]
    void* rdi_1 = &arg1[7]
    int32_t rcx = rax_1 - 1
    
    if (rax_1 == 0)
        rcx = 0
    
    int64_t rcx_1 = sx.q(sub_1405969c0(rcx, rdx))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    rbx_2 = *(rdi_1 + ((rcx_1 & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_1408f1c12:
    *arg2 = 0xffffffff
else
    int64_t rax_5 = *arg1
    
    while (true)
        int64_t rdi_3 = sx.q(rbx_2) << 5
        int16_t* rdx_1
        
        if (arg3[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *arg3
        
        int16_t* const rcx_3
        
        if (*(rdi_3 + rax_5 + 8) == 0)
            rcx_3 = &data_142d40450
        else
            rcx_3 = *(rdi_3 + rax_5)
        
        if (sub_140a54510(rcx_3, rdx_1) == 0)
            *arg2 = rbx_2
            break
        
        rax_5 = *arg1
        rbx_2 = *(rdi_3 + rax_5 + 0x18)
        
        if (rbx_2 == 0xffffffff)
            goto label_1408f1c12

return arg2
