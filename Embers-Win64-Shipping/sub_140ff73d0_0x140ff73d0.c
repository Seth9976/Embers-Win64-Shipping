// 函数: sub_140ff73d0
// 地址: 0x140ff73d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 == 0)
label_140ff73ee:
    
    if (sub_140a80f40() != 0)
        sub_140fe76a0()
        return sub_140fed2a0(&data_143e2c0c8) __tailcall
else
    char rax_1 = sub_140a80f10()
    
    if (rax_1 != 0)
        sub_140fe76a0()
        return sub_140fed2a0(&data_143e2c0c8) __tailcall
    
    if (data_143f01c92 == rax_1)
        goto label_140ff73ee

void*** rcx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_3[3]

if (rax_4 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x20)
    rcx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_3[3]

data_143f02bac += 1
data_143f02bc8 = rax_4
*data_143f02ba0 = rcx_3
data_143f02ba0 = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142efad88
return &data_142efad88
