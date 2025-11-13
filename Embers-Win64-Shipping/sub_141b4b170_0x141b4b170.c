// 函数: sub_141b4b170
// 地址: 0x141b4b170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = *(arg1 + 0x60)
void* i = arg1

if (i_1 != 0)
    i = i_1

int64_t result = sx.q(*(arg1 + 0x68))

for (void* rdi_2 = result * 0x30 + i; i != rdi_2; i += 0x30)
    int64_t* rcx = *(i + 0x20)
    result = (*(*rcx + 0x28))(rcx, arg2, i)

return result
