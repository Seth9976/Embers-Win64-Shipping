// 函数: sub_14239d760
// 地址: 0x14239d760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = i_1

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

int32_t rax_1 = sub_14083a1f0(arg1, arg3 + arg5, arg4)
uint64_t rdx_1 = *arg1

if (i_1 != 0)
    void* rcx = arg2 + 0x10
    int32_t i
    
    do
        *rdx_1 = *(rcx - 0x10)
        void* rax_3 = *(rcx - 8)
        *(rdx_1 + 8) = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        *(rdx_1 + 0x10) = *rcx
        rax_1 = *(rcx + 8)
        rcx += 0x20
        *(rdx_1 + 0x18) = rax_1
        rdx_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
