// 函数: sub_140edf660
// 地址: 0x140edf660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = i_1

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

void* rax_1 = sub_14083a1f0(arg1, arg3 + arg5, arg4)
uint64_t rdx_1 = *arg1

if (i_1 != 0)
    rax_1 = arg2 + 4
    int32_t i
    
    do
        *rdx_1 = *(rax_1 - 4)
        *(rdx_1 + 4) = *rax_1
        *(rdx_1 + 0xc) = *(rax_1 + 8)
        *(rdx_1 + 0x10) = *(rax_1 + 0xc)
        void* rcx_4 = *(rax_1 + 0x14)
        *(rdx_1 + 0x18) = rcx_4
        
        if (rcx_4 != 0)
            *(rcx_4 + 8) += 1
        
        rdx_1 += 0x20
        rax_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
