// 函数: sub_1423387b0
// 地址: 0x1423387b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    char rax_1 = sub_140a80f40()
    
    if (rax_1 != 0)
        sub_14240e4b0(*(arg1 + 0x18), &data_143f02b98, 1, 0)
    else if (data_143f138f4 != rax_1)
    label_142338823:
        void var_28
        void** rax_3 = sub_142331ef0(&var_28, nullptr, 0xff)
        *(*rax_3 + 0x10) = arg1
        void* rcx_3 = *rax_3
        int32_t r8_2 = rax_3[2].d
        int64_t* rdx_1 = rax_3[1]
        int64_t* rbx_1 = *(rcx_3 + 0x20)
        int64_t* arg_18 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_18
        
        sub_1405a5630(rcx_3, rdx_1, r8_2, 1)
        
        if (rbx_1 != 0)
            int32_t rax_4 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_4 == 1)
                sub_140a2f6e0(arg_18)
    else if (data_143de5480 == rax_1)
        sub_14240e4b0(*(arg1 + 0x18), &data_143f02b98, 1, 0)
    else
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b == 0)
            goto label_142338823
        
        sub_14240e4b0(*(arg1 + 0x18), &data_143f02b98, 1, 0)
    
    sub_1419a21e0(0)

void* rcx_5 = *(arg1 + 8)

if (rcx_5 == 0)
    return 

return sub_142403670(rcx_5) __tailcall
