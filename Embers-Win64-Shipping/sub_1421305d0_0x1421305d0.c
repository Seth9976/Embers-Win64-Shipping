// 函数: sub_1421305d0
// 地址: 0x1421305d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rax_1 = sub_142006940()
        int64_t r8_1 = *rax_1
        (*(r8_1 + 0x138))(rax_1, *(rsi_1 + *(arg1 + 0x28)), r8_1)
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x30))

*(arg1 + 0x20) = 0

if (*(arg1 + 0x24) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x18, 0)

int32_t result = *(arg1 + 0x34)
*(arg1 + 0x30) = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(arg1 + 0x28, 0) __tailcall

return result
