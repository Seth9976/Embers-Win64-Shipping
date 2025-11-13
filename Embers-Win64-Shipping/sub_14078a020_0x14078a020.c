// 函数: sub_14078a020
// 地址: 0x14078a020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1407806d0(arg2 + 0x48)
int32_t result = sub_1407806d0(arg2 + 0x28)
void* rbx_1 = *(arg1 + 0x28)

if (rbx_1 != 0)
    int64_t rdi_1 = *(arg3 + 0xe0)
    int64_t rax = *(arg3 + 0x6f0)
    int64_t var_30_1 = rdi_1
    char rax_1 = sub_140a80f40()
    
    if (rax_1 != 0)
        return sub_1407c2880(rbx_1 + 0xc8, rdi_1) __tailcall
    
    if (data_143f138f4 == rax_1)
        if (data_143de5480 == rax_1)
            return sub_1407c2880(rbx_1 + 0xc8, rdi_1) __tailcall
        
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b != 0)
            return sub_1407c2880(rbx_1 + 0xc8, rdi_1) __tailcall
    
    void var_20
    int64_t* rax_4 = sub_1407890f0(&var_20, nullptr, 0xff)
    void* rcx_5 = *rax_4
    *(rcx_5 + 0x10) = rbx_1.o
    *(rcx_5 + 0x20) = rax
    void* rcx_6 = *rax_4
    int32_t r8_1 = rax_4[2].d
    int64_t* rdx_2 = rax_4[1]
    int64_t* rbx_2 = *(rcx_6 + 0x30)
    int64_t* arg_10 = rbx_2
    int32_t* rdi_2 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rdi_2 += 1
        rbx_2 = arg_10
    
    result = sub_140778000(rcx_6, rdx_2, r8_1, 1)
    
    if (rbx_2 != 0)
        result = *rdi_2
        *rdi_2 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)

return result
