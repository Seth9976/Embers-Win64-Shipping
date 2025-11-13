// 函数: sub_141d5a500
// 地址: 0x141d5a500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 8) u>> 4)

if ((result.b & 1) == 0)
    void var_18
    result = sub_140b214c0(&var_18)
    void* rcx_1 = *(arg1 + 0x110)
    *(arg1 + 0x120) = *result
    sub_141d50740(rcx_1, arg1 + 0x120)
    
    if (*(arg1 + 0xc8) == 0)
        result = sub_141d520f0(sub_140cde0b0(), 0, 0x48, 0, 0, 0)
        *(arg1 + 0xc8) = result

return result
