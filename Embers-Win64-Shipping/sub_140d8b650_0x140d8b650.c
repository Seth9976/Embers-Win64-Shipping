// 函数: sub_140d8b650
// 地址: 0x140d8b650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
*(arg1 + 0x128) = i_1
void* rdi = arg1

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0x12c) = 4
    return arg5

sub_140dbc410(arg1, arg3 + arg5, arg4)
void* rax_1 = *(rdi + 0x120)

if (rax_1 != 0)
    rdi = rax_1

if (i_1 != 0)
    rax_1 = rdi + 0x38
    void* rsi_1 = arg2 - rdi
    int32_t i
    
    do
        *(rax_1 - 0x38) = *(rsi_1 + rax_1 - 0x38)
        *(rax_1 - 0x28) = *(rsi_1 + rax_1 - 0x28)
        *(rax_1 - 0x18) = *(rsi_1 + rax_1 - 0x18)
        *(rax_1 - 8) = *(rsi_1 + rax_1 - 8)
        *rax_1 = *(rsi_1 + rax_1)
        void* rcx_1 = *(rsi_1 + rax_1 + 8)
        *(rax_1 + 8) = rcx_1
        
        if (rcx_1 != 0)
            *(rcx_1 + 8) += 1
        
        rax_1 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
