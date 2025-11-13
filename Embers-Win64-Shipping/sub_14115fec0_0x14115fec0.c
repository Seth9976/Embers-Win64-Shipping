// 函数: sub_14115fec0
// 地址: 0x14115fec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
*(arg1 + 0x20) = arg3
void* rbx = arg1

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0x24) = 1
    return arg5

sub_14119a440(arg1, arg3 + arg5, arg4)
void* rax_1 = *(rbx + 0x18)

if (rax_1 != 0)
    rbx = rax_1

if (i_1 != 0)
    int128_t* rsi_1 = arg2 - rbx
    int32_t i
    
    do
        *rbx = *(rsi_1 + rbx)
        rax_1 = *(rsi_1 + rbx + 0x10)
        *(rbx + 0x10) = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        rbx += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
