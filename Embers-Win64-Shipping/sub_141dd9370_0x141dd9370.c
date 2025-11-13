// 函数: sub_141dd9370
// 地址: 0x141dd9370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x100)
int64_t rdx = sx.q(*(arg1 + 0x108))
void* rsi = rdx * 0xb0

for (void* r8 = rsi + i; i != r8; i += 0xb0)
    if (*(i + 8) == *(arg2 + 8))
        int32_t result = *(arg2 + 0x10)
        *(i + 0x10) = result
        return result

int32_t rax_2 = (rdx + 1).d
*(arg1 + 0x108) = rax_2

if (rax_2 s> *(arg1 + 0x10c))
    sub_140a05e50(arg1 + 0x100)

return sub_141db7be0(*(arg1 + 0x100) + rsi, arg2) __tailcall
