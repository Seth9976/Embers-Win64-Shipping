// 函数: sub_1414224f0
// 地址: 0x1414224f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_14142253f:
        void var_28
        int64_t* rax_2 = sub_14141bcd0(&var_28, nullptr, 0xff)
        void* rcx_1 = *rax_2
        int32_t r8 = rax_2[2].d
        int64_t* rdx = rax_2[1]
        int64_t* rbx = *(rcx_1 + 0x18)
        int64_t* arg_18 = rbx
        int32_t* rdi = &rbx[9]
        
        if (rbx != 0)
            *rdi += 1
            rbx = arg_18
        
        int32_t result = sub_1405a5890(rcx_1, rdx, r8, 1)
        
        if (rbx != 0)
            result = *rdi
            *rdi -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_18)
        
        return result
    
    if (data_143de5480 != rax)
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b == 0)
            goto label_14142253f

return sub_141267420(&data_1439b6580) __tailcall
