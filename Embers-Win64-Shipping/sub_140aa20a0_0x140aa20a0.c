// 函数: sub_140aa20a0
// 地址: 0x140aa20a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x910) != 0)
    return sub_140aa2110(arg1, arg2) __tailcall

void* result_1 = arg1 + 0x10
int64_t rdi = sx.q(*(result_1 + 0x808))
int32_t rax_1 = (rdi + 1).d
*(result_1 + 0x808) = rax_1

if (rax_1 s> *(result_1 + 0x80c))
    sub_140ac0c40(result_1, rdi.d)

void* result = *(result_1 + 0x800)

if (result != 0)
    result_1 = result

*(result_1 + (rdi << 3)) = arg2
return result
