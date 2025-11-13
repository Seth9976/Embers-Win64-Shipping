// 函数: sub_141e45960
// 地址: 0x141e45960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141dd1570(arg1)

if (*(arg1 + 0xf0) == 3)
    result = *(arg1 + 0x230)
    
    if (result != 0)
        result = *(result + 0x430)
        *(arg1 + 0x238) = result

void* rcx = *(arg1 + 0x230)

if (rcx != 0)
    result = sub_141f64a80(rcx)
    *(arg1 + 0x240) = result

return result
