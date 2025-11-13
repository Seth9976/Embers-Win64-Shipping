// 函数: sub_14243b170
// 地址: 0x14243b170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax

if (data_143f5e408 != 0)
    rax = data_143f5e798
else
    data_143f5e790 = 0
    rax = &data_143f5e408
    data_143f5e408 = &data_143f5e790

arg1[1] = rax
data_143f5e798 = arg1
void** result = arg1[1]
*arg1 = &data_143f5e790

if (result != 0)
    *result = arg1

return result
