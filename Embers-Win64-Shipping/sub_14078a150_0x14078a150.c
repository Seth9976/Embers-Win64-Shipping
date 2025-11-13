// 函数: sub_14078a150
// 地址: 0x14078a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x28)
int64_t rdi = *(arg3 + 0xe0)
int64_t var_30 = rdi
char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_14078a1c6:
        void var_28
        int64_t* rax_3 = sub_140788e50(&var_28, nullptr, 0xff)
        *(*rax_3 + 0x10) = rbx.o
        void* rcx_4 = *rax_3
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx_2 = rax_3[1]
        int64_t* rbx_1 = *(rcx_4 + 0x28)
        int64_t* arg_8 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_8
        
        int32_t result = sub_1405e48c0(rcx_4, rdx_2, r8_1, 1)
        
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
            goto label_14078a1c6

return sub_1407c25e0(rbx + 0xc8, rdi) __tailcall
