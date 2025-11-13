// 函数: sub_140ce2530
// 地址: 0x140ce2530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t var_38
int16_t var_34
int16_t arg_10
int16_t arg_20

if ((arg2[5].b & 1) == 0)
    arg5.o = *arg1
    arg5.d = arg5.d f+ arg5.d
    arg5.d = arg5.d f+ 0.5f
    int32_t rax_15 = int.d(arg5.d)
    arg5.o = (*arg1)[1]
    arg5.d = arg5.d f+ arg5.d
    arg_10 = (rax_15 s>> 1).w
    arg5.d = arg5.d f+ 0.5f
    int32_t rax_17 = int.d(arg5.d)
    arg5.o = (*arg1)[2]
    arg5.d = arg5.d f+ arg5.d
    arg_20 = (rax_17 s>> 1).w
    arg5.d = arg5.d f+ 0.5f
    int32_t rax_19 = int.d(arg5.d)
    arg5.o = (*arg1)[3]
    int64_t* rcx_7 = arg2[1]
    arg5.d = arg5.d f+ arg5.d
    var_34 = (rax_19 s>> 1).w
    arg5.d = arg5.d f+ 0.5f
    var_38 = (int.d(arg5.d) s>> 1).w
    int16_t* rdx_8 = *rcx_7
    
    if (&rdx_8[1] u> rcx_7[1])
        int16_t* rdx_9 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_9, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_9, 2)
    else
        arg_10 = *rdx_8
        *rcx_7 += 2
    
    int64_t* rcx_9 = arg2[1]
    int16_t* rdx_10 = *rcx_9
    
    if (&rdx_10[1] u> rcx_9[1])
        int16_t* rdx_11 = &arg_20
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_11, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_11, 2)
    else
        arg_20 = *rdx_10
        *rcx_9 += 2
    
    int64_t* rcx_11 = arg2[1]
    int16_t* rdx_12 = *rcx_11
    
    if (&rdx_12[1] u> rcx_11[1])
        int16_t* rdx_13 = &var_34
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_13, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_13, 2)
    else
        var_34 = *rdx_12
        *rcx_11 += 2
    
    int64_t* rcx_13 = arg2[1]
    int16_t* rdx_14 = *rcx_13
    
    if (&rdx_14[1] u> rcx_13[1])
        int16_t* rdx_15 = &var_38
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_15, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_15, 2)
    else
        var_38 = *rdx_14
        *rcx_13 += 2
else
    int64_t* rdx = arg2[1]
    int16_t* r8 = *rdx
    
    if (&r8[1] u> rdx[1])
        int16_t* rdx_1 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_1, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_1, 2)
    else
        arg_10 = *r8
        *rdx += 2
    
    int64_t* rcx_1 = arg2[1]
    int16_t* rdx_2 = *rcx_1
    
    if (&rdx_2[1] u> rcx_1[1])
        int16_t* rdx_3 = &arg_20
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_3, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_3, 2)
    else
        arg_20 = *rdx_2
        *rcx_1 += 2
    
    int64_t* rcx_3 = arg2[1]
    int16_t* rdx_4 = *rcx_3
    
    if (&rdx_4[1] u> rcx_3[1])
        int16_t* rdx_5 = &var_38
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_5, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_5, 2)
    else
        var_38 = *rdx_4
        *rcx_3 += 2
    
    int64_t* rcx_5 = arg2[1]
    int16_t* rdx_6 = *rcx_5
    
    if (&rdx_6[1] u> rcx_5[1])
        int16_t* rdx_7 = &var_34
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_7, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_7, 2)
    else
        var_34 = *rdx_6
        *rcx_5 += 2
    
    float zmm3[0x4] = zx.o(0)
    arg5.o = zx.o(0)
    zmm3[0] = float.s(sx.d(arg_10))
    int32_t zmm0 = float.s(sx.d(arg_20))
    int32_t rax_14 = sx.d(var_38)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_1[0] = zmm0
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    arg5.d = float.s(rax_14)
    int32_t zmm2 = float.s(sx.d(var_34))
    temp0_2[0] = arg5.d
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
    temp0_3[0] = zmm2
    *arg1 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
int32_t result
result.b = 1
*arg4 = 1
return result
