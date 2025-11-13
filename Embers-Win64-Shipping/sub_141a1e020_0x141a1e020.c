// 函数: sub_141a1e020
// 地址: 0x141a1e020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x60)
int32_t rsi = rcx

if (*(arg1 + 0x68) == 0)
    rsi = rcx - 1

uint128_t zmm7

if (rcx s> 1)
    int32_t arg_8
    uint128_t zmm0_1
    int32_t zmm6_1
    zmm0_1, zmm6_1 = sub_141a1ec80(arg1 + 0x58, arg2, 0, &arg_8)
    int32_t rbx_1 = 1
    zmm7 = zmm0_1
    
    if (rsi s> 1)
        int32_t var_28_1 = zmm6_1
        
        do
            uint128_t zmm0_2
            int32_t zmm6_2
            zmm0_2, zmm6_2, zmm7 = sub_141a1ec80(arg1 + 0x58, arg2, rbx_1, &arg_8)
            
            if (not(arg_8 f>= zmm6_2))
                zmm7 = zmm0_2
            
            rbx_1 += 1
        while (rbx_1 s< rsi)
else if (rcx != 1)
    zmm7 = zx.o(0)
else
    zmm7 = **(arg1 + 0x58)

*arg3 = zmm7.d
void var_48
uint64_t* rax_2 = sub_141a1d730(arg1 + 0x58, &var_48, zmm7, &data_143dbb1f8)
*arg4 = *rax_2
arg4[1].d = rax_2[1].d
int64_t* rax_4 = sub_141a1da60(arg1 + 0x58, &var_48, *arg3, &data_143dbb1f8)
*arg5 = *rax_4
int32_t result = rax_4[1].d
arg5[1].d = result
return result
