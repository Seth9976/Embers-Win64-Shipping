// 函数: sub_14183f4b0
// 地址: 0x14183f4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xf8)
int64_t result = sx.q(*(arg1 + 0x100))

for (void* rdi_1 = result * 0x138 + i; i != rdi_1; i += 0x138)
    if (*(i + 0x70) != 3)
        int64_t* rcx = *(i + 0x88)
        result = (*(*rcx + 0x110))(rcx, *(i + 0x78), arg2, i + 0xe8, arg3)

return result
