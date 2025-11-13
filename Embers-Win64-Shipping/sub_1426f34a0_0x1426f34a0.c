// 函数: sub_1426f34a0
// 地址: 0x1426f34a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143478880

if (((arg1[1].d u>> 4).b & 1) == 0)
    return arg1

void* rbx = arg1[2]

if ((*(rbx + 0xcc) & 1) != 0)
    return arg1

int64_t rsi = sx.q(data_143f72228)
int32_t rax_2 = (rsi + 1).d
bool cond:0 = rax_2 s<= data_143f7222c
data_143f72228 = rax_2

if (not(cond:0))
    sub_1405a4d70(&data_143f72220)

*(data_143f72220 + (rsi << 3)) = rbx
return arg1
