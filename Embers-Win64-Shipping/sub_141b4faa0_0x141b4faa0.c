// 函数: sub_141b4faa0
// 地址: 0x141b4faa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140a80f80()

if (result == 0)
    *(arg1 + 0x340) = 0xffffffff
    bool cond:0_1 = *(arg1 + 0x33c) == 0
    *(arg1 + 0x338) = 0
    
    if (not(cond:0_1))
        sub_14085a940(arg1 + 0x310, 0)
    
    int64_t* rbx_1 = *(arg1 + 0x238)
    char rax = sub_140a80f40()
    
    if (rax != 0)
        jump(*(*rbx_1 + 0x20))
    
    if (data_143f138f4 == rax)
        if (data_143de5480 == rax)
            jump(*(*rbx_1 + 0x20))
        
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b != 0)
            jump(*(*rbx_1 + 0x20))
    
    void var_28
    void** rax_3 = sub_141b52820(&var_28, nullptr, 0xff)
    *(*rax_3 + 0x10) = rbx_1
    void* rcx_4 = *rax_3
    int32_t r8_1 = rax_3[2].d
    int64_t* rdx_1 = rax_3[1]
    int64_t* rbx_2 = *(rcx_4 + 0x20)
    int64_t* arg_18 = rbx_2
    int32_t* rsi_1 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rsi_1 += 1
        rbx_2 = arg_18
    
    result = sub_1405a5630(rcx_4, rdx_1, r8_1, 1)
    
    if (rbx_2 != 0)
        int32_t rdi_1 = *rsi_1
        *rsi_1 -= 1
        
        if (rdi_1 == 1)
            return sub_140a2f6e0(arg_18)

return result
