// 函数: sub_1424028f0
// 地址: 0x1424028f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x58)

if (rbx != 0)
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_14240291e
            
            uint32_t rax_5
            rax_5.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_5.b != 0)
                goto label_14240291e
        
        void var_28
        void** rax_6 = sub_142405030(&var_28, nullptr, 0xff)
        *(*rax_6 + 0x10) = rbx
        void* rcx_4 = *rax_6
        int32_t r8_1 = rax_6[2].d
        int64_t* rdx_1 = rax_6[1]
        int64_t* rbx_1 = *(rcx_4 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        sub_1405a5630(rcx_4, rdx_1, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax_7 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_7 == 1)
                sub_140a2f6e0(arg_10)
    else
    label_14240291e:
        (*(*rbx + 0x30))(rbx)
        int32_t rax_3 = *(rbx + 0x44)
        *(rbx + 0x44) -= 1
        
        if (rax_3 == 1)
            (**rbx)(rbx, 1)
    
    *(arg1 + 0x58) = 0

return sub_140cd7d40(arg1) __tailcall
