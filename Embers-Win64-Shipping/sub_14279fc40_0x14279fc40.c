// 函数: sub_14279fc40
// 地址: 0x14279fc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(data_143f88a88)
int32_t rax = (rbx + 1).d
bool cond:0 = rax s<= data_143f88a8c
data_143f88a88 = rax

if (not(cond:0))
    sub_1405a4d70(&data_143f88a80)

int64_t result = data_143f88a80
*(result + (rbx << 3)) = *arg1
*arg1 = 0
return result
