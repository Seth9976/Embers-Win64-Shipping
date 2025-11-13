// 函数: sub_1422ac950
// 地址: 0x1422ac950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = arg2 & 7
char var_30 = rbx
char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_1422ac9c6:
        void var_28
        int64_t* rax_3 = sub_142296fe0(&var_28, nullptr, 0xff)
        *(*rax_3 + 0x10) = arg1.o
        void* rcx_2 = *rax_3
        int32_t r8 = rax_3[2].d
        int64_t* rdx = rax_3[1]
        int64_t* rbx_1 = *(rcx_2 + 0x28)
        int64_t* arg_8 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_8
        
        int32_t rax_4 = sub_1405e48c0(rcx_2, rdx, r8, 1)
        
        if (rbx_1 != 0)
            rax_4 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_4 == 1)
                return sub_140a2f6e0(arg_8)
        
        return rax_4
    
    if (data_143de5480 != rax)
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b == 0)
            goto label_1422ac9c6

*(arg1 + 0x3f) = rbx
void* rax_2 = *(arg1 + 0x110)
*(rax_2 + 0x120) |= 2
return rax_2
