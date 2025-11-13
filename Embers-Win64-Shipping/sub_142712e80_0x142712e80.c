// 函数: sub_142712e80
// 地址: 0x142712e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = sub_14273b470()
arg1[1].d = 1
int32_t rax_1 = arg1[3].d

if (rax_1 s< 0x18)
    arg1[3].d = 0x18
    
    if (*(arg1 + 0x1c) s< 0x18)
        sub_1405daba0(&arg1[2])
else if (rax_1 s> 0x18 && rax_1 != 0x18)
    arg1[3].d = 0 + 0x18
    sub_1405dac10(&arg1[2])

int32_t var_20 = arg2[1].d
int128_t* result = arg1[2]
uint128_t zmm0
zmm0.q = *arg2
*result = zmm0
result[1].q = 0
return result
