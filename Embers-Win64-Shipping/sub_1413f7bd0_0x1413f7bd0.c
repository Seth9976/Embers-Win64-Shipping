// 函数: sub_1413f7bd0
// 地址: 0x1413f7bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = arg2
char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_1413f7c3a:
        void var_28
        int64_t* rax_2 = sub_1413dde80(&var_28, nullptr, 0xff)
        *(*rax_2 + 0x10) = arg1.o
        void* rcx_2 = *rax_2
        int32_t r8 = rax_2[2].d
        int64_t* rdx = rax_2[1]
        int64_t* rbx_1 = *(rcx_2 + 0x28)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        int32_t result = sub_1405e48c0(rcx_2, rdx, r8, 1)
        
        if (rbx_1 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_10)
        
        return result
    
    if (data_143de5480 != rax)
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b == 0)
            goto label_1413f7c3a

*(arg1 + 0x1d58) = arg2
return &data_143f02b98
