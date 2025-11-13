// 函数: sub_141b24ee0
// 地址: 0x141b24ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_1 = sub_1424a23e0()
    void* rdx_1 = *(arg1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        return *(arg1 + 0x220)
    
    void* rax_5 = sub_14255cbc0()
    void* rdx_2 = *(arg1 + 0x10)
    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (rax_6.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
        return arg1

return nullptr
