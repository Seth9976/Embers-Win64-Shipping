// 函数: sub_141a10610
// 地址: 0x141a10610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x1a]

if (rdi != 0)
    void* rax_1
    rax_1, arg2 = sub_141a225c0()
    void* rdx_1 = *(rdi + 0x10)
    int64_t result = sx.q(*(rax_1 + 0x38))
    int64_t result_1
    
    if (result.d s<= *(rdx_1 + 0x38))
        result_1 = result
    
    if (result.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (result_1 << 3)) != rax_1 + 0x30
            || (((arg1[0x84].d).b ^ (*(arg1[0x1a] + 0x420)).b) & 2) != 0)
        result.b = 1
        return result

return sub_142129bc0(arg1, arg2) __tailcall
