// 函数: sub_14242e7b0
// 地址: 0x14242e7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_4 = *(arg1 + 0xb8)

if ((arg2 & 0xfffffffd) == 0)
    if (rax_4 == 0)
        return sub_14242e620(arg1, 0 - *(arg1 + 0x38)) __tailcall
    
    return sub_14242e620(arg1, *(rax_4 + 0x20) - *(arg1 + 0x38)) __tailcall

if (rax_4 == 0)
    return sub_14242e620(arg1, 0) __tailcall

return sub_14242e620(arg1, *(rax_4 + 0x20)) __tailcall
