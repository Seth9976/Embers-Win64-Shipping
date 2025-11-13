// 函数: sub_141fba550
// 地址: 0x141fba550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xb30)
void arg_8
int64_t* result
int64_t rbx_1

if (rcx != 0)
    rbx_1 = *arg2
    result = (*(*rcx + 0x18))(rcx, &arg_8)

if (rcx != 0 && *result == rbx_1)
label_141fba5e7:
    result.b = 1
else
    int64_t* i = *(arg1 + 0xb20)
    
    for (void* rsi_3 = &i[sx.q(*(arg1 + 0xb28)) * 2]; i != rsi_3; i = &i[2])
        int64_t* rcx_1 = *i
        
        if (*(*(*rcx_1 + 0x18))(rcx_1, &arg_8) == *arg2)
            goto label_141fba5e7
    
    result.b = 0

return result
