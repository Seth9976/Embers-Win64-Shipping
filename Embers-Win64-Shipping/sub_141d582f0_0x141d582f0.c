// 函数: sub_141d582f0
// 地址: 0x141d582f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f37a22 != 0)
    *arg2 = *arg4
    void* rax_1 = arg4[1]
    arg2[1] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    arg2[2].d = arg4[2].d
    return arg2

data_143f37a22 = 1
void* rcx = *(arg1 + 0x58)

if (rcx != 0)
    (*(*(rcx + 0x28) + 8))(rcx + 0x28)
    data_143f37a22 = 0
    return arg2

*arg2 = *arg4
void* rax_7 = arg4[1]
arg2[1] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

arg2[2].d = arg4[2].d
data_143f37a22 = 0
return arg2
