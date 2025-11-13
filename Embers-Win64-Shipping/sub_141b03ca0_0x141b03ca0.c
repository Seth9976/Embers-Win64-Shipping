// 函数: sub_141b03ca0
// 地址: 0x141b03ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141a4c090(&arg1[0xb], arg2)

if (result == 0)
    void* rax_1 = (*(*arg1 + 0x2d8))(arg1)
    void* const rdi_1 = rax_1
    void* rax_2
    void* rcx_2
    int64_t rdx
    
    if (rax_1 != 0)
        rax_2 = sub_141b40bf0()
        rcx_2 = *(rdi_1 + 0x10)
        rdx = sx.q(*(rax_2 + 0x38))
    
    if (rax_1 == 0 || rdx.d s> *(rcx_2 + 0x38) || *(*(rcx_2 + 0x30) + (rdx << 3)) != rax_2 + 0x30)
        rdi_1 = nullptr
    
    int64_t rsi_1 = sx.q(arg1[0xc].d)
    int32_t rax_4 = (rsi_1 + 1).d
    arg1[0xc].d = rax_4
    
    if (rax_4 s> *(arg1 + 0x64))
        sub_1405a4d70(&arg1[0xb])
    
    result = arg1[0xb]
    *(result + (rsi_1 << 3)) = rdi_1

return result
