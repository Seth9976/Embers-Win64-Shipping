// 函数: sub_141a3c860
// 地址: 0x141a3c860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_1 = sub_142486350()
    void* rdx_1 = *(arg1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        return arg1
    
    void* rax_5 = sub_142452380()
    void* rdx_2 = *(arg1 + 0x10)
    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (rax_6.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
        return sub_141a3c720(arg1) __tailcall

return 0
