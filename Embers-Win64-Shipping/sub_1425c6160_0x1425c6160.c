// 函数: sub_1425c6160
// 地址: 0x1425c6160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 8)
sub_1425c9240(*(rsi + 8))
*(rsi + 0x24) -= 1
int32_t i_2 = *(rsi + 0x24)
int64_t* rbx = *(rsi + 8)
int16_t arg_8

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rax = *rbx
        arg_8 = 9
        (*(rax + 0x150))(rbx, &arg_8, 2)
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(rsi + 8)

arg_8 = 0x7d
(*(*rbx + 0x150))(rbx, &arg_8, 2)
*(rsi + 0x18) -= 1
int64_t result = sub_140679af0(rsi + 0x10)
*(rsi + 0x20) = 3
return result
