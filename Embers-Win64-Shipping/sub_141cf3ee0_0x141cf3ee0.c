// 函数: sub_141cf3ee0
// 地址: 0x141cf3ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (*(arg1 + 8) != *(arg1 + 0x24))
    void* r10_1 = *(arg1 + 0x28)
    
    if ((r10_1.b & 1) != 0)
        r10_1 = &arg1[0x28 + (r10_1 s>> 1)]
    
    rbx_1 = *(r10_1 + (((sx.q(*(arg1 + 0x30)) - 1) & sx.q(arg3)) << 2))

if (*(arg1 + 8) == *(arg1 + 0x24) || rbx_1 == 0xffffffff)
label_141cf3fbd:
    *arg2 = 0xffffffff
else
    uint64_t rdx = zx.q(*arg1)
    void* rcx_3 = *arg1
    
    while (true)
        if ((rdx.b & 1) != 0)
            rcx_3 = &arg1[rcx_3 s>> 1]
        
        int64_t rsi_2 = sx.q(rbx_1) * 0xa
        void* rax_4 = rcx_3 + (rsi_2 << 3)
        int16_t* rdx_1
        
        if (arg4[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *arg4
            
            if ((rdx_1.b & 1) != 0)
                rdx_1 = (rdx_1 s>> 1) + arg4
        
        void* rcx_5
        
        if (*(rax_4 + 8) == 0)
            rcx_5 = &data_142d40450
        else
            rcx_5 = *rax_4
            
            if ((rcx_5.b & 1) != 0)
                rcx_5 = (rcx_5 s>> 1) + rax_4
        
        if (sub_140a54510(rcx_5, rdx_1) == 0)
            *arg2 = rbx_1
            break
        
        rdx = *arg1
        void* rax_6 = rdx
        
        if ((rdx.b & 1) != 0)
            rax_6 = &arg1[rax_6 s>> 1]
        
        rbx_1 = *(rax_6 + (rsi_2 << 3) + 0x48)
        rcx_3 = rdx
        
        if (rbx_1 == 0xffffffff)
            goto label_141cf3fbd

return arg2
