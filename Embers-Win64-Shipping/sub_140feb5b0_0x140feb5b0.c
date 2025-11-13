// 函数: sub_140feb5b0
// 地址: 0x140feb5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 == 0)
label_140feb5d7:
    
    if (sub_140a80f40() != 0)
        *(arg1 + 0x18)
        jump(*(**(*(arg1 + 0x10) + 0x150) + 0xe0))
else
    char rax_1 = sub_140a80f10()
    
    if (rax_1 != 0)
        *(arg1 + 0x18)
        jump(*(**(*(arg1 + 0x10) + 0x150) + 0xe0))
    
    if (data_143f01c92 == rax_1)
        goto label_140feb5d7

int64_t* rbx_1 = *(arg1 + 0x18)

if (rbx_1 != 0)
    (*(*rbx_1 + 8))(rbx_1)

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
*rcx_3 = &data_142efad98
rcx_3[2] = rbx_1
return &data_142efad98
