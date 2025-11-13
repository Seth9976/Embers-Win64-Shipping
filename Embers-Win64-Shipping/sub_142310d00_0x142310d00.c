// 函数: sub_142310d00
// 地址: 0x142310d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_1
rdx_1.b = (arg2 u>> 0x20).d == 0

if ((rdx_1.b & sub_140b5b8a0(arg2.d, 0)) == 0)
    int32_t arg_10
    sub_14230f130(arg1 + 0xe8, &arg_10, arg2)
    int64_t rax_2 = sx.q(arg_10)
    void* rax_5
    
    if (rax_2.d == 0xffffffff)
        rax_5 = nullptr
    else
        rax_5 = rax_2 * 0x60 + *(arg1 + 0xe8)
    
    void* const rcx_2 = rax_5 + 0x10
    
    if (rax_5 == 0)
        rcx_2 = nullptr
    
    if (rcx_2 != 0)
        return *(rcx_2 + 0x30)

return 0
