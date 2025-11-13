// 函数: sub_1407bba30
// 地址: 0x1407bba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = *(arg1 + 0x34)
void* rbx = *(arg1 + 0x28)
int32_t rdi = *(arg1 + 0x3c)
int64_t var_30 = zmm0
char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_1407bbab8:
        void var_20
        int64_t* rax_2 = sub_140789630(&var_20, nullptr, 0xff)
        void* rcx_1 = *rax_2
        *(rcx_1 + 0x10) = rbx.o
        *(rcx_1 + 0x20) = rdi.q
        void* rcx_2 = *rax_2
        int32_t r8 = rax_2[2].d
        int64_t* rdx = rax_2[1]
        int64_t* rbx_1 = *(rcx_2 + 0x30)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        int32_t result = sub_140778000(rcx_2, rdx, r8, 1)
        
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
            goto label_1407bbab8

*(rbx + 0xc8) = zmm0
*(rbx + 0xd0) = rdi
return &data_143f02b98
