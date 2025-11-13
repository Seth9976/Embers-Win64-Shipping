// 函数: sub_140808700
// 地址: 0x140808700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x38) != 0)
    char rax_1 = sub_140a80f40()
    
    if (rax_1 == 0)
        if (data_143f138f4 != rax_1)
        label_140808759:
            void var_28
            int64_t* rax_3 = sub_1407eb8e0(&var_28, nullptr, 0xff)
            *(*rax_3 + 0x10) = arg1
            void* rcx_2 = *rax_3
            int32_t r8 = rax_3[2].d
            int64_t* rdx = rax_3[1]
            int64_t* rbx_1 = *(rcx_2 + 0x20)
            int64_t* arg_10 = rbx_1
            int32_t* rdi = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi += 1
                rbx_1 = arg_10
            
            int32_t result = sub_1405a5630(rcx_2, rdx, r8, 1)
            
            if (rbx_1 != 0)
                result = *rdi
                *rdi -= 1
                
                if (result == 1)
                    return sub_140a2f6e0(arg_10)
            
            return result
        
        if (data_143de5480 != rax_1)
            uint32_t rax_2
            rax_2.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_2.b == 0)
                goto label_140808759

return sub_1408087d0(arg1) __tailcall
