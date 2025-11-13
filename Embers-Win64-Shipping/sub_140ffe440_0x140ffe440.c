// 函数: sub_140ffe440
// 地址: 0x140ffe440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 == 0)
label_140ffe472:
    
    if (sub_140a80f40() != 0)
        return sub_140ffa7c0(arg1, arg3, arg4) __tailcall
else
    char rax_1 = sub_140a80f10()
    
    if (rax_1 != 0)
        return sub_140ffa7c0(arg1, arg3, arg4) __tailcall
    
    if (data_143f01c92 == rax_1)
        goto label_140ffe472

char var_14 = arg5
void*** rcx_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* var_20 = arg3
void* rax_5 = &rcx_4[5]

if (rax_5 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x30)
    rcx_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_4[5]

data_143f02bac += 1
data_143f02bc8 = rax_5
*data_143f02ba0 = rcx_4
data_143f02ba0 = &rcx_4[1]
rcx_4[1] = 0
*(rcx_4 + 0x10) = arg1.o
*rcx_4 = &data_142efae38
rcx_4[4] = arg4.q
return &data_142efae38
