// 函数: sub_142712e00
// 地址: 0x142712e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = sub_14273b1a0()
arg1[1].d = 1
int32_t rax_1 = arg1[3].d

if (rax_1 s< 8)
    arg1[3].d = 8
    
    if (*(arg1 + 0x1c) s< 8)
        sub_1405daba0(&arg1[2])
else if (rax_1 s> 8 && rax_1 != 8)
    arg1[3].d = 0 + 8
    sub_1405dac10(&arg1[2])

int64_t result_1
sub_140d3a3a0(&result_1, arg2)
int64_t result = result_1
*arg1[2] = result
return result
