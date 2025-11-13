// 函数: sub_142343fa0
// 地址: 0x142343fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x108) s<= 0)
    *(arg1 + 0x122) = 0
    return 

int64_t r15 = 0

do
    int32_t j = 0
    void* rsi_2 = *(arg1 + 0x100) + r15
    
    if (*(rsi_2 + 0x88) s> 0)
        int64_t rbx_1 = 0
        
        do
            sub_141997f50(*(*(rsi_2 + 0x80) + rbx_1))
            j += 1
            rbx_1 += 8
        while (j s< *(rsi_2 + 0x88))
    
    sub_141997f50(rsi_2 + 0x10)
    i += 1
    r15 += 0xb0
while (i s< *(arg1 + 0x108))

*(arg1 + 0x122) = 0
