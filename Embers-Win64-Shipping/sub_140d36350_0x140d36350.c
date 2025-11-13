// 函数: sub_140d36350
// 地址: 0x140d36350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = *(arg2 + 0x20)
void* result_1 = arg2 + 0x40
int32_t rsi = *rax
*(arg2 + 0x20) = &rax[1]
int64_t rdi = sx.q(*(result_1 + 0x28))
int32_t rax_2 = (rdi + 1).d
*(result_1 + 0x28) = rax_2

if (rax_2 s> *(result_1 + 0x2c))
    sub_14083a280(result_1, rdi.d)

void* result = *(result_1 + 0x20)

if (result != 0)
    result_1 = result

*(result_1 + (rdi << 2)) = rsi
return result
