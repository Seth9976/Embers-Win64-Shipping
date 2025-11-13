// 函数: sub_141d02b90
// 地址: 0x141d02b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (*(arg1 + 8) != *(arg1 + 0x24))
    void* rcx
    
    if (arg3[1].d == 0)
        rcx = &data_142d40450
    else
        rcx = *arg3
        
        if ((rcx.b & 1) != 0)
            rcx = (rcx s>> 1) + arg3
    
    int32_t rax_1 = sub_1405de2b0(rcx)
    void* rdx = *(arg1 + 0x28)
    
    if ((rdx.b & 1) != 0)
        rdx = &arg1[0x28 + (rdx s>> 1)]
    
    rbx_1 = *(rdx + (((sx.q(*(arg1 + 0x30)) - 1) & sx.q(rax_1)) << 2))

if (*(arg1 + 8) == *(arg1 + 0x24) || rbx_1 == 0xffffffff)
label_141d02c8b:
    *arg2 = 0xffffffff
else
    uint64_t rcx_6 = zx.q(*arg1)
    void* rax_3 = *arg1
    
    while (true)
        if ((rcx_6.b & 1) != 0)
            rax_3 = &arg1[rax_3 s>> 1]
        
        int64_t r14_2 = sx.q(rbx_1) << 5
        void* r8 = r14_2 + rax_3
        void* rdx_2
        
        if (arg3[1].d == 0)
            rdx_2 = &data_142d40450
        else
            rdx_2 = *arg3
            
            if ((rdx_2.b & 1) != 0)
                rdx_2 = (rdx_2 s>> 1) + arg3
        
        void* rcx_7
        
        if (*(r8 + 8) == 0)
            rcx_7 = &data_142d40450
        else
            rcx_7 = *r8
            
            if ((rcx_7.b & 1) != 0)
                rcx_7 = (rcx_7 s>> 1) + r8
        
        if (sub_140a54510(rcx_7, rdx_2) == 0)
            *arg2 = rbx_1
            break
        
        rcx_6 = *arg1
        void* rax_6 = rcx_6
        
        if ((rcx_6.b & 1) != 0)
            rax_6 = &arg1[rax_6 s>> 1]
        
        rbx_1 = *(r14_2 + rax_6 + 0x18)
        rax_3 = rcx_6
        
        if (rbx_1 == 0xffffffff)
            goto label_141d02c8b

return arg2
