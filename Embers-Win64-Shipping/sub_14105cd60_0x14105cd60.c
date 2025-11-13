// 函数: sub_14105cd60
// 地址: 0x14105cd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18

if (sub_14197ee80(&arg_18) == 0)
    data_1439c7a08 = 3
    data_143f0f1a0 = 0
else
    int32_t rax_1 = arg_18
    data_1439c7a08 = rax_1
    
    if (rax_1 == 1)
        data_143f0f1a0 = 0xe

void*** rax_2 = j_sub_140a82f30(0x68)

if (rax_2 == 0)
    data_143e2c7b8 = 0
    return 0

void*** result = sub_14103e950(rax_2, arg1 + 0x10)
data_143e2c7b8 = result
return result
