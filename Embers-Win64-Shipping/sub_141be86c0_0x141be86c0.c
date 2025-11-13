// 函数: sub_141be86c0
// 地址: 0x141be86c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

void* const result = *(arg1 + 0x28)

if (result != 0)
    void* rax_1 = sub_141bfb280()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        return result

return nullptr
