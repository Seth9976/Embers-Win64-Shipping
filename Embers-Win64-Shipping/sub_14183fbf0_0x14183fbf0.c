// 函数: sub_14183fbf0
// 地址: 0x14183fbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg2 + 0xf8)
int64_t result = sx.q(*(arg2 + 0x100))

for (void* rbp_2 = &i[result * 0xc]; i != rbp_2; i = &i[0xc])
    void arg_10
    result = sub_1408f1b50(arg1 + 0x1b0, &arg_10, i)
    
    if (*result == 0xffffffff)
        int64_t rsi_1 = sx.q(arg3[1].d)
        int32_t rax = (rsi_1 + 1).d
        arg3[1].d = rax
        
        if (rax s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
        
        result = sub_140596d10((rsi_1 << 4) + *arg3, i)

return result
