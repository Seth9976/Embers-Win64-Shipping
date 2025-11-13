// 函数: sub_141f7c380
// 地址: 0x141f7c380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[8].d s>= 0x1f6)
    int64_t* rax_2 = sub_1408d9160(sub_1408d9160(arg1, arg2, arg3), &arg2[3], arg3)
    int64_t* rdx_1 = rax_2[1]
    int32_t* rax_3 = *rdx_1
    
    if (&rax_3[1] u<= rdx_1[1])
        arg2[6] = *rax_3
        int64_t* rax_4 = rax_2[1]
        *rax_4 += 4
    else if ((*(rax_2 + 0x29) & 0x20) != 0)
        sub_140b54070(rax_2, &arg2[6], arg3)
    else
        (*(*rax_2 + 0x150))(rax_2, &arg2[6], 4)
else if ((arg1[5].b & 1) != 0)
    int64_t var_38
    int64_t* rax_6 = sub_1408d9160(arg1, &var_38, arg3)
    int64_t* rdx_4 = rax_6[1]
    int32_t* rax_7 = *rdx_4
    int32_t var_2c
    
    if (&rax_7[1] u> rdx_4[1])
        int32_t* rdx_5 = &var_2c
        
        if ((*(rax_6 + 0x29) & 0x20) != 0)
            sub_140b54070(rax_6, rdx_5, arg3)
        else
            (*(*rax_6 + 0x150))(rax_6, rdx_5, 4)
    else
        var_2c = *rax_7
        int64_t* rax_8 = rax_6[1]
        *rax_8 += 4
    
    arg3.o = var_2c
    int64_t zmm2 = var_38
    int64_t var_1c_1 = (_mm_unpacklo_ps(arg3.o, arg3.q)).q
    int32_t var_30
    int32_t var_20_1 = var_30
    int32_t var_30_1 = arg3.d
    float var_28[0x4]
    var_28[0].q = zmm2
    *arg2 = var_28
    int32_t var_14_1 = var_30_1
    int32_t var_10_1 = arg3.d
    *(arg2 + 0x10) = var_1c_1
    arg2[6] = var_10_1

if (arg1[8].d s>= 0x1f2)
    int64_t* rcx_7 = arg1[1]
    int32_t* r8_1 = *rcx_7
    
    if (&r8_1[1] u<= rcx_7[1])
        arg2[7] = *r8_1
        int64_t* rax_15 = arg1[1]
        *rax_15 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[7], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[7], 4)
    
    int64_t* rcx_9 = arg1[1]
    int32_t* r8_2 = *rcx_9
    
    if (&r8_2[1] u<= rcx_9[1])
        arg2[8] = *r8_2
        int64_t* rax_19 = arg1[1]
        *rax_19 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[8], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[8], 4)
else if ((arg1[5].b & 1) != 0)
    arg2[7] = 0
    arg2[8] = 0x7f7fffff

int64_t* rcx_11 = arg1[1]
int32_t* r8_3 = *rcx_11

if (&r8_3[1] u<= rcx_11[1])
    arg2[9] = *r8_3
    int64_t* rax_23 = arg1[1]
    *rax_23 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[9], arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, &arg2[9], 4)
return arg1
