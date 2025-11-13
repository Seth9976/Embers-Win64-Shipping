// 函数: sub_140d0a9b0
// 地址: 0x140d0a9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5452 != 0)
    jump(*(**(arg1 + 0x78) + 0x310))

int32_t rdi = 0
int64_t result = sub_140cbccd0(arg1)

if (result != 0)
    rdi = *(result + 0x290) & 0x100000

int64_t* rsi = *(arg1 + 0x78)

if (rsi != 0)
    result = sub_140d3cb50(rsi)
    int64_t result_1 = result
    
    if (result != 0)
        int32_t rbx_1 = *(result + 0x290)
        *(result + 0x290) = rbx_1 | rdi
        int64_t rdx_3 = *rsi
        result = (*(rdx_3 + 0x310))(rsi, rdx_3)
        *(result_1 + 0x290) = rbx_1

return result
