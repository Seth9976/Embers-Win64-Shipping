// 函数: sub_142850a80
// 地址: 0x142850a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rsi = *(arg1 + 8)
int32_t r8 = 1

if (rsi != arg2)
    int64_t rbp_1 = *(arg1 + 0x30)
    
    if (*rsi != *arg2)
        (*(rsi + 0x20))()
        *(arg1 + 8) = arg2
        r8 = (*(arg2 + 0x10))(arg1)
    else
        *(arg1 + 8) = arg2
    
    if (rbp_1 == *(rsi + 0x30))
        *(arg1 + 0x30) = *(arg2 + 0x30)
    else if (rbp_1 == *(rsi + 0x28))
        *(arg1 + 0x30) = *(arg2 + 0x28)

return zx.q(r8)
