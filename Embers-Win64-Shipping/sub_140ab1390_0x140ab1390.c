// 函数: sub_140ab1390
// 地址: 0x140ab1390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t* i = *(arg1 + 0x140)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x148)) * 2]; i != rsi_2; i = &i[2])
    int64_t* rcx = *i
    
    if ((*(*rcx + 0x10))(rcx, zx.q(arg3), arg2) != 0)
        break

return arg2
