// 函数: sub_140847d00
// 地址: 0x140847d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0x14) = *(arg2 + 0x14)

if (arg1 + 0x28 != arg2 + 0x28)
    void* rbx_1 = *(arg1 + 0x28)
    
    if ((rbx_1.b & 1) != 0)
        rbx_1 = (rbx_1 s>> 1) + arg1 + 0x28
    
    int32_t i_1 = arg1[3].d
    
    if (i_1 != 0)
        int32_t i
        
        do
            sub_140a1d5c0(rbx_1)
            rbx_1 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rdx_1 = *(arg2 + 0x28)
    
    if ((rdx_1.b & 1) != 0)
        rdx_1 = (rdx_1 s>> 1) + arg2 + 0x28
    
    sub_140841790(arg1 + 0x28, rdx_1, arg2[3].d, *(arg1 + 0x34), 0)

*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x48) = *(arg2 + 0x48)

if (&arg1[5] != &arg2[5])
    void* rdi_1 = arg2[5].q
    int64_t r14_1 = sx.q(*(arg2 + 0x58))
    
    if ((rdi_1.b & 1) != 0)
        rdi_1 = (rdi_1 s>> 1) + &arg2[5]
    
    int32_t r8_2 = *(arg1 + 0x5c)
    *(arg1 + 0x58) = r14_1.d
    
    if (r14_1.d != 0 || r8_2 != 0)
        sub_14085a1c0(&arg1[5], r14_1.d, r8_2)
        void* rcx_3 = arg1[5].q
        
        if ((rcx_3.b & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + &arg1[5]
        
        memcpy(rcx_3, rdi_1, (r14_1 * 0x14).d)
    else
        *(arg1 + 0x5c) = r14_1.d

arg1[6].q = arg2[6].q
*(arg1 + 0x68) = *(arg2 + 0x68)
return arg1
