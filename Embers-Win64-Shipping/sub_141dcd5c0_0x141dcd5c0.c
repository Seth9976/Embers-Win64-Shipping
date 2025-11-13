// 函数: sub_141dcd5c0
// 地址: 0x141dcd5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdx_1

if (*(arg1 + 0x20) == 0)
    rdx_1 = nullptr
else
    void* rax_1 = sub_1425492f0()
    
    if (rax_1 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = *(arg1 + 0x20)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx_1 = nullptr

return sub_140d3a3a0(arg1 + 0x28, rdx_1) __tailcall
