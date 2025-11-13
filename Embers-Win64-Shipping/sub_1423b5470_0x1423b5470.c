// 函数: sub_1423b5470
// 地址: 0x1423b5470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2 = 0
int32_t rax_1

if (not(arg2[0] == 3.40282347e+38f))
    rax_1 = 0

if (arg2[0] == 3.40282347e+38f || not(arg3[0] != 3.40282347e+38f))
    rax_1 = 0x80

*(arg1 + 0xb4) &= 0xffffff7f
int32_t result_1 = *(arg1 + 0x68)
int32_t result = arg5
*(arg1 + 0xb4) = ((*(arg1 + 0xb4) | rax_1) & 0xfffffdff) | zx.d(arg6) << 9

if (result s< result_1)
    if (result s<= result_1)
        result_1 = result
    
    *(arg1 + 0xa4) = result_1
    int32_t result_4
    float zmm6_1[0x4]
    result_4, zmm6_1 = sub_1423b1530(arg1, arg3, arg4[0])
    int32_t result_3 = *(arg1 + 0xa4)
    
    if (result_4 s>= result_1)
        result_1 = result_4
    
    bool cond:4_1 = (*(arg1 + 0xb4) & 0x282) != 0
    *(arg1 + 0x88) = result_1
    
    if (cond:4_1)
        result = sub_1423b1530(arg1, zmm6_1, arg4[0])
        
        if (result s>= result_3)
            result_3 = result
        
        *(arg1 + 0x8c) = result_3
    else
        zmm6_1[0] = zmm6_1[0] f* *(arg7 + 0x10)
        int32_t result_5
        float zmm6_2[0x4]
        result_5, zmm6_2 = sub_1423b1530(arg1, zmm6_1, arg4[0])
        int32_t result_6 = *(arg1 + 0x88)
        
        if (result_5 s>= result_3)
            result_3 = result_5
        
        *(arg1 + 0x8c) = result_3
        int32_t rax_5 = sub_1423b1530(arg1, zmm6_2, arg4[0])
        
        if (result_6 s>= result_3)
            result_3 = result_6
        
        result = rax_5 - result_3
        
        if (rax_5 - result_3 s>= 0)
            result_2 = result
    
    *(arg1 + 0x84) = result_2
else
    *(arg1 + 0xa4) = result_1
    *(arg1 + 0x8c) = result_1
    *(arg1 + 0x88) = result_1
    *(arg1 + 0x84) = 0

return result
