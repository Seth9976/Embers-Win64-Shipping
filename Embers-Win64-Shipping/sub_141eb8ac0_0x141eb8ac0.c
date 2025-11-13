// 函数: sub_141eb8ac0
// 地址: 0x141eb8ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x68))
void* result_1 = arg1 + 0x50
int32_t rax = (rdi + 1).d
*(result_1 + 0x18) = rax

if (rax s> *(result_1 + 0x1c))
    sub_140dbc4b0(result_1, rdi.d)

void* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*(result_1 + (rdi << 2)) = arg2
return result
