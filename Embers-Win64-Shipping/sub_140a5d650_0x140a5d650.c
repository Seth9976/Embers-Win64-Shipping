// 函数: sub_140a5d650
// 地址: 0x140a5d650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    rbx_2 = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_140a5d6f1:
    *arg2 = 0xffffffff
else
    int64_t rdx = *arg1
    
    while (true)
        int64_t rdi_1 = sx.q(rbx_2) * 0x28
        int16_t* rax_3
        
        if (arg4[1].d == 0)
            rax_3 = &data_142d40450
        else
            rax_3 = *arg4
        
        int16_t* const rcx_1
        
        if (*(rdi_1 + rdx + 8) == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *(rdi_1 + rdx)
        
        if (sub_140a54510(rcx_1, rax_3) == 0)
            *arg2 = rbx_2
            break
        
        rdx = *arg1
        rbx_2 = *(rdi_1 + rdx + 0x20)
        
        if (rbx_2 == 0xffffffff)
            goto label_140a5d6f1

return arg2
