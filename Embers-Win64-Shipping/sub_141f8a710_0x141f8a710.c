// 函数: sub_141f8a710
// 地址: 0x141f8a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t result_1 = 0x7fffffff

if (*(arg1 + 0x18) s<= 0)
    return 0x7fffffff

int64_t* rsi = nullptr
int32_t result

do
    int64_t* rcx = *(rsi + *(arg1 + 0x10))
    result = (*(*rcx + 0x88))(rcx)
    rsi = &rsi[1]
    
    if (result_1 s<= result)
        result = result_1
    
    i += 1
    result_1 = result
while (i s< *(arg1 + 0x18))

return result
