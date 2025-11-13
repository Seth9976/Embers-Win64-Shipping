// 函数: sub_1409154f0
// 地址: 0x1409154f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg2 + 0x78))(arg2)

if (result == 0)
    return result

if (sub_140d226f0(arg1, sub_14247bf70()) == 0)
    void* rax_4 = sub_140d226f0(arg1, sub_1409162c0())
    int64_t* rax_5 = sub_1409162c0()
    int64_t rsi_1 = rax_5[0x23]
    
    if (rsi_1 == 0)
        int64_t rdx_2 = *rax_5
        (*(rdx_2 + 0x390))(rax_5, rdx_2)
        rsi_1 = rax_5[0x23]
    
    if (sub_140d209c0(rax_4) == rsi_1)
        return sub_141d343b0(sub_141dc9840(result)) __tailcall

return result
