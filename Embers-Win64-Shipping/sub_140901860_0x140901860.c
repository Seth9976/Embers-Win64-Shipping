// 函数: sub_140901860
// 地址: 0x140901860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (*(arg1 + 0x110) + arg2 u> *(arg1 + 0x118))
    int32_t* rsi_1 = *(arg1 + 0x10)
    int32_t arg_8
    sub_140865c40(arg1 + 0x70, &arg_8, rsi_1)
    int64_t rax_1 = sx.q(arg_8)
    void* const rcx_1
    
    if (rax_1.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x70) + rax_1 * 0x18
    
    int64_t* rax_3 = rcx_1 + 8
    
    if (rcx_1 == 0)
        rax_3 = nullptr
    
    int64_t rcx_2
    
    if (rax_3 == 0)
        int64_t arg_10 = 0
        rcx_2 = 0
    else
        rcx_2 = *rax_3
    
    int64_t arg_18 = rcx_2
    sub_140906bc0(arg1, &arg_18, rsi_1)
    int64_t rax_5 = arg_18
    *(arg1 + 0x110) -= *(*(rsi_1 + 8) + 0x50)
    int64_t var_48 = rax_5
    int32_t var_40_1 = *rsi_1
    sub_140906040(arg1 + 0xc0, &var_48)
    int64_t* rbx_1 = *(rsi_1 + 0x10)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_9 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    j_sub_140a74f90(rsi_1)
