// 函数: sub_1423bfa30
// 地址: 0x1423bfa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = 0
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t r9_1 = 0
    
    do
        r9_1 += 8
        i += 1
        *(*(*(arg1 + 0x10) + r9_1 - 8) + 0x128) = 0
    while (i s< *(arg1 + 0x18))

*(arg1 + 0x30) = 0
*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) s> 0xffffffff)
    return 

return sub_1405c5570(arg1 + 0x10, 0) __tailcall
