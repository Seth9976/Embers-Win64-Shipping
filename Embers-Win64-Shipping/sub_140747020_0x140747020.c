// 函数: sub_140747020
// 地址: 0x140747020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[5]
*arg1 = &data_142d99ca0

if (rbx != 0)
    int64_t* arg_8 = rbx
    arg1[5] = 0
    uint32_t rax_1 = sub_140a80f40()
    
    if (rax_1.b != 0)
    label_140747087:
        
        if (rbx != 0)
            (**rbx)(rbx, 1)
    else
        if (data_143f138f4 == rax_1.b)
            if (data_143de5480 == rax_1.b)
                rax_1.b = 1
            else
                rax_1.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_1.b != 0)
                goto label_140747087
        
        void var_28
        void** rax_3 = sub_140750a40(&var_28, nullptr, 0xff)
        *(*rax_3 + 0x10) = rbx
        void* rcx_3 = *rax_3
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx_1 = rax_3[1]
        int64_t* rbx_1 = *(rcx_3 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        sub_1405a5630(rcx_3, rdx_1, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax_4 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_4 == 1)
                sub_140a2f6e0(arg_10)

int64_t* rcx_5 = arg1[5]

if (rcx_5 != 0)
    (**rcx_5)(rcx_5, 1)

return sub_140d163b0(arg1) __tailcall
