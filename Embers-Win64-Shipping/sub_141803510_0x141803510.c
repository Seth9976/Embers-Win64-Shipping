// 函数: sub_141803510
// 地址: 0x141803510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* result = arg2
*arg2 = 0
arg2[1] = 0

if (*(arg1 + 0x98) != 0)
    int32_t arg_8
    sub_14062d6e0(arg1 + 0x28, &arg_8, arg3)
    int64_t rax_1 = sx.q(arg_8)
    void* const rcx_1
    
    if (rax_1.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x28) + rax_1 * 0x28
    
    int64_t* rdx_2 = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        rdx_2 = nullptr
    
    if (rdx_2 != 0)
        sub_140597df0(result, rdx_2)

return result
