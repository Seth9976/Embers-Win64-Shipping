// 函数: sub_1418fb480
// 地址: 0x1418fb480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg1 + 0x2c))
uint32_t r10 = *(r11 * 0x28 + 0x1439c85e8)
uint32_t r9_2 = *(arg1 + 0x20) u>> arg2
uint32_t rax = r10

if (r9_2 u>= r10)
    rax = r9_2

uint32_t result = divu.dp.d(0:(rax - 1 + r10), r10)

if ((r11 - 0x1e).d u<= 1)
    uint32_t result_1 = 2
    
    if (result u>= 2)
        result_1 = result
    
    result = result_1

*arg3 = (&data_1439c85f4)[r11 * 0xa] * result
return result
