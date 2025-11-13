// 函数: sub_142c52400
// 地址: 0x142c52400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = data_143ccb898(0x10)

if (rax == 0)
    return rax

rax[1] = 0
*rax = arg2

if (arg1 == 0)
    return rax

int64_t* i = arg1[1]
int64_t* i_1 = arg1

for (; i != 0; i = i[1])
    i_1 = i

i_1[1] = rax
return arg1
