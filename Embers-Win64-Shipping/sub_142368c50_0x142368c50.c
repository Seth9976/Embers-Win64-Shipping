// 函数: sub_142368c50
// 地址: 0x142368c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x28)
int64_t result

for (void* rsi = &i[sx.q(*(arg1 + 0x30))]; i != rsi; i = &i[1])
    int64_t* rdi_1 = *i
    
    if (rdi_1 != 0)
        sub_140cd85e0(rdi_1)
        
        if ((*(*rdi_1 + 0x280))(rdi_1).b != 0)
            result.b = 1
            return result

result.b = 0
return result
