// 函数: sub_141b4f960
// 地址: 0x141b4f960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x140)

if (rbx != 0)
    if (sub_140a80f40() == 0)
        sub_141997f50(rbx + 0x20)
    else
        (*(*(rbx + 0x20) + 0x30))(rbx + 0x20)
    
    if (sub_140a80f40() == 0)
        sub_141997f50(rbx + 0x48)
    else
        (*(*(rbx + 0x48) + 0x30))(rbx + 0x48)
    
    sub_141997f50(rbx + 0x70)

uint32_t rax_5

if (data_143de5480 != 0)
    rax_5.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 != 0 && rax_5.b == 0)
    sub_1405d16e0(arg1 + 0x160, nullptr)
else
    char rax_6 = sub_140a80f40()
    
    if (rax_6 != 0)
        sub_1405d16e0(arg1 + 0x160, nullptr)
    else if (data_143f138f4 != rax_6)
    label_141b4fa1a:
        void var_28
        void** rax_8 = sub_141b52c20(&var_28, nullptr, 0xff)
        *(*rax_8 + 0x10) = arg1
        void* rcx_5 = *rax_8
        int32_t r8_1 = rax_8[2].d
        int64_t* rdx_1 = rax_8[1]
        int64_t* rbx_1 = *(rcx_5 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        sub_1405a5630(rcx_5, rdx_1, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax_9 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_9 == 1)
                sub_140a2f6e0(arg_10)
    else if (data_143de5480 == rax_6)
        sub_1405d16e0(arg1 + 0x160, nullptr)
    else
        uint32_t rax_7
        rax_7.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_7.b == 0)
            goto label_141b4fa1a
        
        sub_1405d16e0(arg1 + 0x160, nullptr)

return sub_141997870(arg1 + 0x18) __tailcall
