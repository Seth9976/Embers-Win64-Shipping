// 函数: sub_140fef100
// 地址: 0x140fef100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2 = *(arg3 + 0x34)
int32_t result_1 = *(arg2 + 0x34)
int32_t result = result_2

if (result_1 u<= result_2)
    result = result_1

int32_t rbx = result_1 - result

if (result != 0)
    int32_t rdi_1 = result_2 - result - rbx
    uint64_t rsi_1 = zx.q(result)
    uint64_t i
    
    do
        int64_t* rcx = *(arg1 + 0x150)
        result = (*(*rcx + 0x170))(rcx, *(arg2 + 0xa0), zx.q(rbx), 0, 0, 0, *(arg3 + 0xa0), 
            rdi_1 + rbx, 0)
        rbx += 1
        i = rsi_1
        rsi_1 -= 1
    while (i != 1)

return result
