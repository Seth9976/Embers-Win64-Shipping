// 函数: sub_142139bd0
// 地址: 0x142139bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a93f8)
(*(*arg1 + 0x1d8))(arg1, &data_1439a94d8)

if ((arg1[5].b & 1) != 0)
    int32_t rax_2
    rax_2, arg3 = sub_140b4e7c0(arg1, &data_1439a93f8)
    
    if (rax_2 s< 0x17)
        int64_t* rax_3
        int512_t zmm1
        rax_3, zmm1 = sub_14213aa80(arg1, arg2, arg3)
        int64_t* rdx_1 = rax_3[1]
        int32_t* rax_4 = *rdx_1
        
        if (&rax_4[1] u<= rdx_1[1])
            arg2[2].d = *rax_4
            int64_t* rax_5 = rax_3[1]
            *rax_5 += 4
            arg2[5].b = 0
            return arg1
        
        if ((*(rax_3 + 0x29) & 0x20) != 0)
            sub_140b54070(rax_3, &arg2[2], zmm1)
            arg2[5].b = 0
            return arg1
        
        (*(*rax_3 + 0x150))(rax_3, &arg2[2], 4)
        arg2[5].b = 0
        return arg1

int32_t rax_10

if ((arg1[5].b & 1) != 0)
    rax_10, arg3 = sub_140b4e7c0(arg1, &data_1439a94d8)

if ((arg1[5].b & 1) == 0 || rax_10 s>= 6)
    int64_t* rax_14
    int512_t zmm1_2
    rax_14, zmm1_2 = sub_14213aa80(arg1, arg2, arg3)
    int64_t* rdx_8 = rax_14[1]
    int32_t* rax_15 = *rdx_8
    
    if (&rax_15[1] u<= rdx_8[1])
        arg2[2].d = *rax_15
        int64_t* rcx_16 = rax_14[1]
        *rcx_16 += 4
    else if ((*(rax_14 + 0x29) & 0x20) != 0)
        sub_140b54070(rax_14, &arg2[2], zmm1_2)
    else
        (*(*rax_14 + 0x150))(rax_14, &arg2[2], 4)
    
    int64_t* rax_17 = sub_14090ad70(rax_14, &arg2[3], zmm1_2)
    int64_t* rdx_11 = rax_17[1]
    int32_t* rax_18 = *rdx_11
    
    if (&rax_18[1] u> rdx_11[1])
        int32_t rax_20
        rax_20.b = arg2[5].b != 0
        int32_t arg_8 = rax_20
        (*(*rax_17 + 0x150))(rax_17, &arg_8, 4)
        arg2[5].b = arg_8 != 0
    else
        void* rcx_19
        rcx_19.b = *rax_18 != 0
        arg2[5].b = rcx_19.b
        int64_t* rax_19 = rax_17[1]
        *rax_19 += 4
else
    int64_t* rax_11
    int512_t zmm1_1
    rax_11, zmm1_1 = sub_14213aa80(arg1, arg2, arg3)
    int64_t* rdx_4 = rax_11[1]
    int32_t* rax_12 = *rdx_4
    
    if (&rax_12[1] u<= rdx_4[1])
        arg2[2].d = *rax_12
        int64_t* rcx_10 = rax_11[1]
        *rcx_10 += 4
    else if ((*(rax_11 + 0x29) & 0x20) != 0)
        sub_140b54070(rax_11, &arg2[2], zmm1_1)
    else
        (*(*rax_11 + 0x150))(rax_11, &arg2[2], 4)
    
    sub_14090ad70(rax_11, &arg2[3], zmm1_1)
    arg2[5].b = 0

return arg1
