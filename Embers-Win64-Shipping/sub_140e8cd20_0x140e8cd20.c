// 函数: sub_140e8cd20
// 地址: 0x140e8cd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = data_143e202b8
arg1[1] = data_143e202c0
void* rax_2 = data_143e202c8
arg1[2] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

if (arg2 == 0)
    sub_140627710(arg1, &data_143e1e008)
else
    if (arg2 == 1)
        sub_140627710(arg1, &data_143e1e038)
        return arg1
    
    if (arg2 == 2)
        sub_140627710(arg1, &data_143e1e020)
        return arg1
    
    if (arg2 == 3)
        sub_140627710(arg1, &data_143e1e050)
        return arg1
    
    if (arg2 == 4)
        sub_140627710(arg1, &data_143e1e068)

return arg1
