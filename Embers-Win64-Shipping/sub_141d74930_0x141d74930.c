// 函数: sub_141d74930
// 地址: 0x141d74930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x14)
__builtin_memset(arg1 + 0x18, 0, 0x20)
sub_1405d16e0(arg1 + 0x20, nullptr)
*(arg1 + 0x40) = arg2
*(arg1 + 0x45) = 0
sub_1405d16e0(arg1 + 0x20, nullptr)
int32_t var_54 = arg3:4.d
int32_t var_58 = arg3.d
void* var_50 = arg1 + 0x10

if (sub_140a80f40() == 0)
    uint32_t rax_2
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_2.b == 0))
        void var_38
        int64_t* rax_3 = sub_141d77590(&var_38, nullptr, 0xff)
        *(*rax_3 + 0x10) = var_58.o
        void* rcx_6 = *rax_3
        int64_t* rdi_1 = *(rcx_6 + 0x28)
        
        if (rdi_1 != 0)
            rdi_1[9].d += 1
        
        sub_1405e48c0(rcx_6, rax_3[1], rax_3[2].d, 1)
        
        if (rdi_1 != 0)
            rdi_1[9].d -= 1
            
            if (rdi_1[9].d == 1)
                sub_140a2f6e0(rdi_1)
    else
        int128_t var_48 = var_58.o
        sub_141d759c0(&var_48)
else
    sub_141d759c0(&var_58)

return arg1
