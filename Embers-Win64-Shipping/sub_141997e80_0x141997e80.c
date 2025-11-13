// 函数: sub_141997e80
// 地址: 0x141997e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_141997ed6:
        void var_28
        void** rax_3 = sub_14199bc70(&var_28, nullptr, 0xff)
        *(*rax_3 + 0x10) = arg1
        void* rcx_3 = *rax_3
        int32_t r8 = rax_3[2].d
        int64_t* rdx = rax_3[1]
        int64_t* rbx_1 = *(rcx_3 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rdi = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi += 1
            rbx_1 = arg_10
        
        int32_t result = sub_1405a5630(rcx_3, rdx, r8, 1)
        
        if (rbx_1 != 0)
            result = *rdi
            *rdi -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_10)
        
        return result
    
    if (data_143de5480 != rax)
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b == 0)
            goto label_141997ed6

jump(*(*arg1 + 0x28))
