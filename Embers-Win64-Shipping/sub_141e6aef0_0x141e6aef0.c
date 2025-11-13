// 函数: sub_141e6aef0
// 地址: 0x141e6aef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a94b8)
(*(*arg2 + 0x140))(arg2, arg1)
int32_t rax_2
int512_t zmm1
rax_2, zmm1 = sub_140b4e7c0(arg2, &data_1439a94b8)

if (rax_2 s< 5)
    int64_t* rcx_3 = arg2[1]
    int16_t* rdx_1 = *rcx_3
    int16_t arg_8
    
    if (&rdx_1[1] u> rcx_3[1])
        int16_t* rdx_2 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_2, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_2, 2)
    else
        arg_8 = *rdx_1
        *rcx_3 += 2

int32_t result
int512_t zmm1_1
result, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a94b8)

if (result s< 0xa)
    int64_t var_18 = 0
    int64_t var_10_1 = 0
    sub_1409ac860(arg2, &var_18, zmm1_1)

result.b = 1
return result
