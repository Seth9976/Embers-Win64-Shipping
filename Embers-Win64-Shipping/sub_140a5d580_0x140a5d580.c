// 函数: sub_140a5d580
// 地址: 0x140a5d580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    rbx_2 = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_140a5d623:
    *arg2 = 0xffffffff
else
    int64_t rax_2 = *arg1
    
    while (true)
        int64_t rdi_2 = sx.q(rbx_2) << 5
        int16_t* rdx
        
        if (arg4[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg4
        
        int16_t* const rcx
        
        if (*(rdi_2 + rax_2 + 8) == 0)
            rcx = &data_142d40450
        else
            rcx = *(rdi_2 + rax_2)
        
        if (sub_140a54510(rcx, rdx) == 0)
            *arg2 = rbx_2
            break
        
        rax_2 = *arg1
        rbx_2 = *(rdi_2 + rax_2 + 0x18)
        
        if (rbx_2 == 0xffffffff)
            goto label_140a5d623

return arg2
