// 函数: sub_141d72920
// 地址: 0x141d72920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141d7a3f0()
int64_t* i = rax[3]
int64_t result = sx.q(rax[4].d)

for (void* rsi = &i[result]; i != rsi; i = &i[1])
    void* rbp_1 = *i
    void arg_18
    result = (*(*(rbp_1 + 0x28) + 0x28))(rbp_1 + 0x28, &arg_18)
    
    if (*result == arg2)
        return (*(*(rbp_1 + 0x28) + 0x20))(rbp_1 + 0x28)

return result
