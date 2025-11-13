// 函数: sub_140a97030
// 地址: 0x140a97030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
sub_140596d10(&arg1[2], &arg2[2])
int16_t* const rax_3 = &data_142d40450
int16_t* const rcx_1

if (arg2[3].d == 0)
    rcx_1 = &data_142d40450
else
    rcx_1 = arg2[2]

if (*arg2 == rcx_1)
    if (arg1[3].d != 0)
        rax_3 = arg1[2]
    
    *arg1 = rax_3

return arg1
