// 函数: sub_141d1e500
// 地址: 0x141d1e500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t result

if ((*(*(arg1 + 0x230) + 0x48))(arg1 + 0x230) s<= 0)
    result.b = 0
    return result

char* rdi = nullptr

do
    if (rdi[*(arg1 + 0x238)] != 0)
        result.b = 1
        return result
    
    int64_t rdx_1 = *(arg1 + 0x230)
    rsi += 1
    rdi = &rdi[1]
    result = (*(rdx_1 + 0x48))(arg1 + 0x230, rdx_1)
while (rsi s< result)

result.b = 0
return result
