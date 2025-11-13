// 函数: sub_141753400
// 地址: 0x141753400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int64_t* arg_8
(*(*arg1 + 0xa0))(arg1, &arg_8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int512_t zmm1 = sub_141755af0(arg1, arg2)
int64_t* rax_4 = sub_14152dda0(sub_14152dda0(arg2, &arg1[2], zmm1), arg1 + 0x1c, zmm1)
int64_t* rdx_4 = rax_4[1]
int32_t* rax_5 = *rdx_4

if (&rax_5[1] u<= rdx_4[1])
    arg1[5].d = *rax_5
    int64_t* rax_6 = rax_4[1]
    *rax_6 += 4
else if ((*(rax_4 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_4, &arg1[5], zmm1)
else
    (*(*rax_4 + 0x150))(rax_4, &arg1[5], 4)

int64_t* rcx_9 = arg2[1]
int32_t* r8 = *rcx_9

if (&r8[1] u<= rcx_9[1])
    *(arg1 + 0x2c) = *r8
    int64_t* rax_10 = arg2[1]
    *rax_10 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x2c, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x2c, 4)

if (sub_140b4e7c0(arg2, &data_1439a9538) s< 0x1e)
    int128_t var_28
    __builtin_memcpy(&var_28, 
        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
        0x18)
    sub_1417558e0(arg2, &var_28)

uint64_t result = sub_140b4e7c0(arg2, &data_1439a9538)

if (result.d s< 0x1e)
    int64_t* rcx_14 = arg2[0x12]
    (*(*rcx_14 + 0x1d8))(rcx_14, &data_1439a9528)
    int512_t zmm1_1
    result, zmm1_1 = sub_140b4e7c0(arg2[0x12], &data_1439a9528)
    
    if (result.d s>= 5)
        arg_8 = nullptr
        sub_1416f3c40(arg2, &arg_8, zmm1_1)
        result = arg2[0x12]
        
        if ((*(result + 0x28) & 1) != 0)
            int64_t* rcx_17 = arg_8
            
            if (rcx_17 != 0)
                return (**rcx_17)(rcx_17, 1)

return result
