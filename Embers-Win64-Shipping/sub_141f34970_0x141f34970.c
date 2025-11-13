// 函数: sub_141f34970
// 地址: 0x141f34970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d3c6e0(arg1 + 0x438)
void* result_1 = result

if (result != 0)
    void* rax = sub_142591550()
    void* rcx_1 = *(result_1 + 0x10)
    result = rax + 0x30
    int64_t rdx_1 = sx.q(*(result + 8))
    
    if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == result)
        result = *(result_1 + 0x430)
        
        if (*(arg1 + 0x430) == result && *(arg1 + 0x8b0) != 0 && *(result_1 + 0x8b0) != 0)
            *(arg1 + 0x71a) |= 0x22

return result
