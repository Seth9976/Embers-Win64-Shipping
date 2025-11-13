// 函数: sub_142192c30
// 地址: 0x142192c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x10)

for (void* rdi = &i[sx.q(*(arg1 + 0x18))]; i != rdi; i = &i[1])
    int64_t* rcx = *i
    int64_t result = (**rcx)(rcx, arg2)
    
    if (result != 0)
        return result

return 0
