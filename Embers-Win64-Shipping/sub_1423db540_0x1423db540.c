// 函数: sub_1423db540
// 地址: 0x1423db540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141996af0()
char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_1423db5a6:
        void var_28
        void** rax_2 = sub_1423d72c0(&var_28, nullptr, 0xff)
        *(*rax_2 + 0x10) = arg1
        void* rcx_3 = *rax_2
        int32_t r8_1 = rax_2[2].d
        int64_t* rdx_1 = rax_2[1]
        int64_t* rbx_1 = *(rcx_3 + 0x20)
        int64_t* arg_18 = rbx_1
        int32_t* rdi = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi += 1
            rbx_1 = arg_18
        
        int32_t result = sub_1405a5630(rcx_3, rdx_1, r8_1, 1)
        
        if (rbx_1 != 0)
            result = *rdi
            *rdi -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_18)
        
        return result
    
    if (data_143de5480 != rax)
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b == 0)
            goto label_1423db5a6

jump(*(*arg1 + 0x148))
