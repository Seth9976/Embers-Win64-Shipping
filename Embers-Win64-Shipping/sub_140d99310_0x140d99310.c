// 函数: sub_140d99310
// 地址: 0x140d99310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *(arg1 + 0x10)

for (int64_t rdi = i + sx.q(*(arg1 + 0x18)) * 0x28; i != rdi; i += 0x28)
    (*(*arg2 + 0x38))(arg2, i + 0x20, 0, 0)

void* i_1 = *(arg1 + 0x38)
int64_t result = sx.q(*(arg1 + 0x40))

for (void* r14_1 = result * 0x38 + i_1; i_1 != r14_1; i_1 += 0x38)
    int64_t j = *i_1
    result = sx.q(*(i_1 + 8))
    
    for (int64_t rbp_1 = j + result * 0x28; j != rbp_1; j += 0x28)
        result = (*(*arg2 + 0x38))(arg2, j + 0x20, 0, 0)

return result
