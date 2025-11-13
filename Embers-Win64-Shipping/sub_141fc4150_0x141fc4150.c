// 函数: sub_141fc4150
// 地址: 0x141fc4150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2

if (arg2 != 0)
    for (int64_t* i = *(arg1 + 0xcf0); i != &i[sx.q(*(arg1 + 0xcf8))]; i = &i[1])
        if (*i == arg2)
            if (arg2 == *(arg1 + 0x768))
                break
            
            sub_1409d7d20(arg1 + 0xcf0, &arg_10)
            void* rdi = arg_10
            int64_t* rbx = *(rdi + 0x418)
            
            if (arg3 == 0)
                rbx[0x13] = 0
            
            sub_14213f9e0(rbx)
            (*(*rbx + 0x2d8))(rbx)
            int64_t rax_2
            rax_2.b = 1
            *(rdi + 0x418) = 0
            return rax_2

int64_t rax
rax.b = 0
return rax
