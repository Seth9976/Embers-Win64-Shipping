// 函数: sub_141064100
// 地址: 0x141064100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[8]

if (arg2 s> rax)
    arg1[8] = arg2
    
    if (arg2 s> arg1[9])
        int64_t rax_1 = sub_140dbc4b0(&arg1[2], rax)
        *arg1 = 0xffffffff
        return rax_1
else if (arg2 s< rax && arg2 != rax)
    arg1[8] = arg2
    rax = sub_140dbcee0(&arg1[2])

*arg1 = 0xffffffff
return rax
