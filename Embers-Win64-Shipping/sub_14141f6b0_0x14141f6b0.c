// 函数: sub_14141f6b0
// 地址: 0x14141f6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xa0)

if (*(rax + 0xd7c) != 0 && *(rax + 0xd7d) == 0)
    return *(*(arg2 + 0x198) + 8)

int64_t* rcx = *(arg1 + 0x28)
void* result = *(*(*rcx + 8))(rcx)
void* result_1 = result

if (result != 0)
    *(result + 8) += 1
    result = result_1

sub_1405d1550(&result_1)
return result
