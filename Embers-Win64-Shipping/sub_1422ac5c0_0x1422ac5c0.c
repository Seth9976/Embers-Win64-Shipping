// 函数: sub_1422ac5c0
// 地址: 0x1422ac5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_30 = arg2
char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_1422ac62e:
        void var_28
        int64_t* rax_2 = sub_142296bf0(&var_28, nullptr, 0xff)
        *(*rax_2 + 0x10) = arg1.o
        void* rcx_2 = *rax_2
        int32_t r8 = rax_2[2].d
        int64_t* rdx = rax_2[1]
        int64_t* rbx_1 = *(rcx_2 + 0x28)
        int64_t* arg_8 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_8
        
        int32_t result = sub_1405e48c0(rcx_2, rdx, r8, 1)
        
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
            goto label_1422ac62e

*(arg1 + 0x3c) &= 0xbf
*(arg1 + 0x3c) |= arg2 << 6
return &data_143f02b98
