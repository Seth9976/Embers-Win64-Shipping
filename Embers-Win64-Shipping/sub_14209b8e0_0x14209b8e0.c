// 函数: sub_14209b8e0
// 地址: 0x14209b8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t rsi = 0
int32_t result = (*(*arg1 + 0x260))(arg1)

if (result s> 0)
    int64_t rbp_1 = 0
    
    do
        if (*(arg1[0xe] + rbp_1 + 0x10) == 0)
            sub_14208b5a0(arg1, rsi)
            *(arg1[0xe] + rbp_1 + 0x10) = sub_14208b5a0(arg1, rsi)
        
        rsi += 1
        rbp_1 += 0x14
        result = (*(*arg1 + 0x260))(arg1)
    while (rsi s< result)

return result
