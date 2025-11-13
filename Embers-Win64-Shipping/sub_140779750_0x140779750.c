// 函数: sub_140779750
// 地址: 0x140779750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_54 = arg3[0]
float var_58 = arg2[0]
int32_t var_50 = arg4
char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_1407797c2:
        void var_40
        int64_t* rax_2 = sub_140750f80(&var_40, nullptr, 0xff)
        void* rcx_1 = *rax_2
        *(rcx_1 + 0x10) = var_58.o
        *(rcx_1 + 0x20) = arg1
        void* rcx_2 = *rax_2
        int32_t r8_1 = rax_2[2].d
        int64_t* rdx_1 = rax_2[1]
        int64_t* rbx_1 = *(rcx_2 + 0x30)
        int64_t* arg_8 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_8
        
        int32_t result = sub_140778000(rcx_2, rdx_1, r8_1, 1)
        
        if (rbx_1 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_8)
        
        return result
    
    if (data_143de5480 != rax)
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b == 0)
            goto label_1407797c2

return sub_140774f40(arg1, arg2, arg3, arg4)
