// 函数: sub_141d02cc0
// 地址: 0x141d02cc0
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
label_141d02dbd:
    *arg2 = 0xffffffff
else
    uint64_t rdx_2 = zx.q(*arg1)
    void* rcx_6 = *arg1
    
    while (true)
        if ((rdx_2.b & 1) != 0)
            rcx_6 = &arg1[rcx_6 s>> 1]
        
        int64_t r14_2 = sx.q(rbx_1) * 0xa
        void* rax_4 = rcx_6 + (r14_2 << 3)
        void* rdx_3
        
        if (arg3[1].d == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *arg3
            
            if ((rdx_3.b & 1) != 0)
                rdx_3 = (rdx_3 s>> 1) + arg3
        
        void* rcx_8
        
        if (*(rax_4 + 8) == 0)
            rcx_8 = &data_142d40450
        else
            rcx_8 = *rax_4
            
            if ((rcx_8.b & 1) != 0)
                rcx_8 = (rcx_8 s>> 1) + rax_4
        
        if (sub_140a54510(rcx_8, rdx_3) == 0)
            *arg2 = rbx_1
            break
        
        rdx_2 = *arg1
        void* rax_6 = rdx_2
        
        if ((rdx_2.b & 1) != 0)
            rax_6 = &arg1[rax_6 s>> 1]
        
        rbx_1 = *(rax_6 + (r14_2 << 3) + 0x48)
        rcx_6 = rdx_2
        
        if (rbx_1 == 0xffffffff)
            goto label_141d02dbd

return arg2
