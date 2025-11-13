// 函数: sub_140a8f690
// 地址: 0x140a8f690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 + 0x28) == 0 || arg3 s< 0)
    result.b = 0
    return result

if (arg3 == 0)
    result.b = 1
    return result

int64_t rsi = *(arg1 + 0x10)

if (rsi != *(arg1 + 0x18))
    int64_t* rcx = *(arg1 + 8)
    
    if ((*(*rcx + 0x10))(rcx, rsi) != 0)
        *(arg1 + 0x18) = rsi

int64_t* rcx_1 = *(arg1 + 8)
char rax_3 = (*(*rcx_1 + 0x28))(rcx_1, arg2, arg3)

if (rax_3 != 0)
    int64_t rcx_2 = *(arg1 + 0x20)
    *(arg1 + 0x10) += arg3
    int64_t rdx_2 = *(arg1 + 0x10)
    
    if (rdx_2 s>= rcx_2)
        rcx_2 = rdx_2
    
    *(arg1 + 0x20) = rcx_2
    __builtin_memset(arg1 + 0x20030, 0xff, 0x20)
    *(arg1 + 0x18) = rdx_2

return zx.q(rax_3)
