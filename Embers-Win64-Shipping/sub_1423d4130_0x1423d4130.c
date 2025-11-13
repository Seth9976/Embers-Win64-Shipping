// 函数: sub_1423d4130
// 地址: 0x1423d4130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx_1

for (int64_t* i = arg1[0x187]; i != &i[sx.q(arg1[0x188].d)]; i = &i[1])
    rbx_1 = *i
    
    if (*(rbx_1 + 0x278) == arg2)
        goto label_1423d418f

rbx_1 = sub_1423d6f90(data_143f5b298, 0)
label_1423d418f:
int64_t result = (*(*arg1 + 0x480))(arg1, rbx_1)
*(rbx_1 + 0x1a0) = arg3
return result
