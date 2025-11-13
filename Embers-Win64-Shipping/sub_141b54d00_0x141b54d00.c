// 函数: sub_141b54d00
// 地址: 0x141b54d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result_1 = *(arg1 + 0x278)

if (result_1 == 0)
    void* result_2 = j_sub_140a82f30(0xb0)
    result_1 = result_2
    
    if (result_2 == 0)
        result_1 = nullptr
    else
        *(result_2 + 0xa0) = 0
        *(result_2 + 0xa8) = 0
        *(result_2 + 0xac) = 0x14
    
    *(arg1 + 0x278) = result_1

int64_t rdi_1 = sx.q(*(result_1 + 0xa8))
int32_t rax_1 = (rdi_1 + 1).d
*(result_1 + 0xa8) = rax_1

if (rax_1 s> *(result_1 + 0xac))
    sub_141b65310(result_1, rdi_1.d)

void* result = *(result_1 + 0xa0)

if (result != 0)
    result_1 = result

*(result_1 + (rdi_1 << 3)) = arg2
return result
