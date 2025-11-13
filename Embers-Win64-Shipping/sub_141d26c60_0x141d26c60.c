// 函数: sub_141d26c60
// 地址: 0x141d26c60
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
    return sub_141d1ace0(arg1 + 8, arg2, 0, zmm1)

int64_t* rcx_3 = arg2[1]
int32_t arg_10 = *(arg1 + 0x10)
int32_t* rdx_2 = *rcx_3

if (&rdx_2[1] u> rcx_3[1])
    int32_t* rdx_3 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    arg_10 = *rdx_2
    *rcx_3 += 4

int32_t rdx_4 = arg_10

if (rdx_4 s> *(arg1 + 0x14))
    sub_1405a5410(arg1 + 8, rdx_4)
    rdx_4 = arg_10

int64_t* result = sub_141897740(arg1 + 8, rdx_4, 1)
int32_t rbx = 0

if (arg_10 s> 0)
    do
        result = sub_1409ac860(arg2, (sx.q(rbx) << 4) + *(arg1 + 8), zmm1)
        rbx += 1
    while (rbx s< arg_10)

return result
