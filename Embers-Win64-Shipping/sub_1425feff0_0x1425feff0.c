// 函数: sub_1425feff0
// 地址: 0x1425feff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_a8[0x4]
float zmm6_1[0x4] = sub_141e62e30(arg1, &var_a8)
int32_t rcx = *(arg1 + 0x1ac)

if (((rcx u>> 1).b & 1) != 0)
    if (*(*(arg1 + 0x10) + 0x104) == 1 && (rcx.b & 4) == 0)
        *(arg1 + 0x1ac) = rcx | 4
    
    int64_t* rcx_2 = *(*(arg1 + 0x80) + 0x30)
    (*(*rcx_2 + 0x18))(rcx_2, zx.q(*(arg1 + 0x6c)), &var_a8)
    return sub_1425ff3f0(arg1, arg2, zmm6_1)

float var_88
float zmm1_1 = var_88
int32_t var_80
float zmm2_1[0x4] = var_80 ^ data_142d3f780
*arg2 = zmm6_1[0]
arg2[1] = zmm6_1[0]
arg2[2] = zmm6_1[0]
arg2[4] = zmm6_1[0]
arg2[5] = zmm6_1[0]
void* rax_5 = *(arg1 + 0x10)
float var_84
var_88 = var_84
float var_84_1 = zmm1_1
float var_80_1 = zmm2_1[0]
float zmm0_1 = zmm6_1[0] f* *(rax_5 + 0x210)
arg2[7] = 0
arg2[6] = zmm0_1
float var_2c
sub_1425fd5e0(*(*(arg1 + 0x80) + 0x7b0) + 0x20, &data_14399f678, &data_143dbb1f8, &var_88, var_2c, 
    arg2)
int32_t rcx_6 = *(*(arg1 + 0x10) + 0x100)
void* result

if ((rcx_6.b & 2) == 0)
    if (not(test_bit(rcx_6, 0xb)))
        if (data_143f70d9c == 6)
            float zmm1_2[0x4] = arg2[2]
            arg2[3] = zmm6_1[0] f* *(arg1 + 0x20)
            float zmm0_2 = *arg2
            
            if (not(zmm1_2[0] <= zmm0_2))
                *arg2 = (zmm0_2 + zmm1_2[0]) * 0.5f
            
            zmm0_2 = arg2[1]
            bool cond:0_1 = zmm1_2[0] <= zmm0_2
            zmm1_2[0] = zmm1_2[0] * 0.5f
            
            if (not(cond:0_1))
                arg2[1] = zmm0_2 * 0.5f + zmm1_2[0]
        
        result = *(arg1 + 0x10)
        zmm6_1[0] = zmm6_1[0] f* *(result + 0xe4)
        zmm6_1 = __maxss_xmmss_memss(zmm6_1[0], arg2[2])
    else
        __builtin_memset(arg2, 0, 0x20)
        result = *(arg1 + 0x10)
        zmm6_1[0] = zmm6_1[0] f* *(result + 0xe4)
    
    arg2[2] = zmm6_1[0]
else
    __builtin_memset(arg2, 0, 0x20)
    result = *(arg1 + 0x10)
    arg2[7] = *(result + 0xe8)

return result
