// 函数: sub_141f634b0
// 地址: 0x141f634b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x428)
int128_t* rcx_2

if (rax s<= 0)
    rcx_2 = &data_143f3bba0
else
    int32_t rax_1
    
    if (*(arg1 + 0x4e1) == 0 || arg2 s< rax)
        rax_1 = rax - 1
    
    if ((*(arg1 + 0x4e1) != 0 && arg2 s>= rax) || arg2 s< 0)
        rax_1 = 0
    else if (arg2 s< rax_1)
        rax_1 = arg2
    
    rcx_2 = sx.q(rax_1) * 0x50 + *(arg1 + 0x420)

void var_28
int64_t* rax_3
int128_t zmm6_1
rax_3, zmm6_1 = sub_141f635d0(arg1, &var_28, *rcx_2, arg5)
*arg3 = *rax_3
arg3[1].d = rax_3[1].d
float (* rax_5)[0x4] = sub_141f687d0(arg1, &var_28, zmm6_1, arg5)
*arg4 = *rax_5
float result = (*rax_5)[2]
arg4[1].d = result
return result
