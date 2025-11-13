// 函数: sub_1409cb260
// 地址: 0x1409cb260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x3b8)
int64_t result

for (void* rdi = &i[sx.q(*(arg1 + 0x3c0))]; i != rdi; i = &i[1])
    int64_t* rcx = *i
    
    if ((*(*rcx + 0x2a0))(rcx, arg1).b == 0)
        result.b = 0
        return result

result.b = 1
return result
