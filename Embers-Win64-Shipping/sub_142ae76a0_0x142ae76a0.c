// 函数: sub_142ae76a0
// 地址: 0x142ae76a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) == 0)
    *(arg1 + 8) = 0
    return 

int32_t i = 0

if (*(arg1 + 8) s<= 0)
    *(arg1 + 8) = 0
    return 

int64_t* rsi = nullptr

do
    int64_t rcx = *(rsi + *(arg1 + 0x10))
    
    if (rcx != 0)
        (*(arg1 + 0x18))(rcx)
    
    i += 1
    rsi = &rsi[1]
while (i s< *(arg1 + 8))

*(arg1 + 8) = 0
