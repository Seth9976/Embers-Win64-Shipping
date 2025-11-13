// 函数: sub_1419aa4a0
// 地址: 0x1419aa4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_1419aa4fc:
        void var_28
        void** rax_4 = sub_14199c1b0(&var_28, nullptr, 0xff)
        *(*rax_4 + 0x10) = arg1
        void* rcx_4 = *rax_4
        int32_t r8_1 = rax_4[2].d
        int64_t* rdx_1 = rax_4[1]
        int64_t* rbx_1 = *(rcx_4 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rdi = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi += 1
            rbx_1 = arg_10
        
        sub_1405a5630(rcx_4, rdx_1, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax_5 = *rdi
            *rdi -= 1
            
            if (rax_5 == 1)
                sub_140a2f6e0(arg_10)
        
        return sub_1419a21e0(0) __tailcall
    
    if (data_143de5480 != rax)
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b == 0)
            goto label_1419aa4fc

(*(*arg1 + 0x30))(arg1)
return sub_1419a21e0(0) __tailcall
