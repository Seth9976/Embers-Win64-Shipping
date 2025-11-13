// 函数: sub_1420f6ea0
// 地址: 0x1420f6ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xa8)
int64_t result = sx.q(*(arg1 + 0xb0))

for (void* rdi = i + result * 0x28; i != rdi; i += 0x28)
    int64_t* rcx_1 = *(i + 8)
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x30))(rcx_1)

return result
