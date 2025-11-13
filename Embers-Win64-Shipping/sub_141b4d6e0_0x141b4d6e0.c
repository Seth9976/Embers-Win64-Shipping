// 函数: sub_141b4d6e0
// 地址: 0x141b4d6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_141b4d738:
        void var_28
        int64_t* rax_3 = sub_141b53400(&var_28, nullptr, 0xff)
        void* rcx_2 = *rax_3
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx_1 = rax_3[1]
        int64_t* rbx = *(rcx_2 + 0x18)
        int64_t* arg_18 = rbx
        int32_t* rdi = &rbx[9]
        
        if (rbx != 0)
            *rdi += 1
            rbx = arg_18
        
        int32_t result = sub_1405a5890(rcx_2, rdx_1, r8_1, 1)
        
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
            goto label_141b4d738

return sub_1419668e0(&data_143f02b98) __tailcall
