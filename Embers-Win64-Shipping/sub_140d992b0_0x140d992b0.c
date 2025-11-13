// 函数: sub_140d992b0
// 地址: 0x140d992b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0xf0)
int64_t result = sx.q(*(arg1 + 0xf8))

for (void* rdi_1 = result * 0x58 + i; i != rdi_1; i = &i[0xb])
    int64_t* rcx = *i
    
    if (rcx != 0)
        result = (*(*rcx + 8))(rcx, arg2)

return result
