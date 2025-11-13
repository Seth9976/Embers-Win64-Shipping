// 函数: sub_142199560
// 地址: 0x142199560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x10)
int64_t result

for (void* rdi = &i[sx.q(*(arg1 + 0x18))]; i != rdi; i = &i[1])
    int64_t* rcx = *i
    
    if ((*(*rcx + 0x60))(rcx).b != 0)
        result.b = 1
        return result

result.b = 0
return result
