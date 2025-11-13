// 函数: sub_1407ce980
// 地址: 0x1407ce980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x68))
int32_t rax = (rdi + 1).d
*(arg1 + 0x68) = rax

if (rax s> *(arg1 + 0x6c))
    sub_140809460(arg1, rdi.d)

void* rax_1 = *(arg1 + 0x60)
void* rcx = arg1

if (rax_1 != 0)
    rcx = rax_1

void* result_1 = arg1 + 0x70
*(rcx + (rdi << 3)) = arg2
int64_t rdi_1 = sx.q(*(result_1 + 0x38))
int32_t rax_2 = (rdi_1 + 1).d
*(result_1 + 0x38) = rax_2

if (rax_2 s> *(result_1 + 0x3c))
    sub_140809140(result_1, rdi_1.d)

void* result = *(result_1 + 0x30)

if (result != 0)
    result_1 = result

*(result_1 + (rdi_1 << 2)) = 0x1f0
return result
