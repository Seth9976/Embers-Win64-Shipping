// 函数: sub_140ffacc0
// 地址: 0x140ffacc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 == 0)
label_140ffacf2:
    
    if (sub_140a80f40() != 0)
        goto label_140ffad11
else
    char rax_1 = sub_140a80f10()
    
    if (rax_1 != 0)
    label_140ffad11:
        char var_30 = arg7
        int32_t var_38 = arg6
        return sub_140ffaad0(arg1, arg3, arg4, zx.q(arg5))
    
    if (data_143f01c92 == rax_1)
        goto label_140ffacf2

int32_t var_14 = arg5
void*** rcx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
int32_t var_10 = arg6
char var_c = arg7
void* rax_9 = &rcx_3[6]
void* var_20 = arg3

if (rax_9 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x38)
    rcx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_3[6]

data_143f02bac += 1
data_143f02bc8 = rax_9
*data_143f02ba0 = rcx_3
data_143f02ba0 = &rcx_3[1]
rcx_3[1] = 0
*(rcx_3 + 0x10) = arg1.o
*rcx_3 = &data_142efae78
*(rcx_3 + 0x20) = arg4.o
return &data_142efae78
