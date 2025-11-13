// 函数: sub_141d73470
// 地址: 0x141d73470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141d7a3f0()
int64_t* i = rax[3]

for (void* rbp = &i[sx.q(rax[4].d)]; i != rbp; i = &i[1])
    void* r14_1 = *i
    void* result = r14_1 + 0x28
    void arg_18
    
    if (*(*(*(r14_1 + 0x28) + 0x28))(result, &arg_18) == arg2)
        if (r14_1 == 0)
            return nullptr
        
        return result

return nullptr
