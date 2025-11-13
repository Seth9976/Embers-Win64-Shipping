// 函数: sub_141d27130
// 地址: 0x141d27130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9528)
int64_t* rdx = arg2[1]
int32_t arg_18 = 1
int32_t* r8 = *rdx

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &arg_18
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_18 = *r8
    *rdx += 4

int32_t rax_4
int512_t zmm1
rax_4, zmm1 = sub_140b4e7c0(arg2, &data_1439a9528)

if (rax_4 s>= 8)
    return sub_1409b1e20(arg1 + 8, arg2, 0, zmm1)

int64_t* rcx_3 = arg2[1]
int32_t result_1 = *(arg1 + 0x10)
int32_t* rdx_2 = *rcx_3

if (&rdx_2[1] u> rcx_3[1])
    int32_t* rdx_3 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    result_1 = *rdx_2
    *rcx_3 += 4

int32_t result = result_1

if (result s> *(arg1 + 0x14))
    sub_140638cc0(arg1 + 8, result)
    result = result_1

int32_t rcx_6 = *(arg1 + 0x10)

if (result s> rcx_6)
    *(arg1 + 0x10) = result
    
    if (result s> *(arg1 + 0x14))
        sub_140638a00(arg1 + 8)
        result = result_1
else if (result s< rcx_6 && rcx_6 != result)
    *(arg1 + 0x10) = result
    sub_140775970(arg1 + 8)
    result = result_1

int32_t rbx = 0

if (result s> 0)
    do
        result = sub_1408d9160(arg2, *(arg1 + 8) + sx.q(rbx) * 0xc, zmm1)
        rbx += 1
    while (rbx s< result_1)

return result
