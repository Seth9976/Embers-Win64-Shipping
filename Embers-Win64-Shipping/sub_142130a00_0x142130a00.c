// 函数: sub_142130a00
// 地址: 0x142130a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
int512_t zmm1
rax, zmm1 = sub_142130d30(arg2, arg1)

if (rax == 0)
    return 0

int64_t* rcx_1 = arg2[1]
int64_t rax_2 = *rcx_1 + 4

if (rax_2 u> rcx_1[1])
    int64_t rax_3 = *arg2
    int32_t arg_18 = 0
    (*(rax_3 + 0x150))(arg2, &arg_18, 4)
else
    *rcx_1 = rax_2

int64_t* rcx_3 = arg2[1]
int32_t* rdx_2 = *rcx_3
int32_t arg_20

if (&rdx_2[1] u> rcx_3[1])
    int32_t* rdx_3 = &arg_20
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    arg_20 = *rdx_2
    *rcx_3 += 4
int64_t* rcx_5 = arg2[1]
int32_t* rdx_4 = *rcx_5
int32_t arg_24

if (&rdx_4[1] u<= rcx_5[1])
    arg_24 = *rdx_4
    int32_t rax_8
    rax_8.b = 1
    *rcx_5 += 4
    return rax_8

int32_t* rdx_5 = &arg_24

if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, rdx_5, zmm1)
    int64_t* rax_11
    rax_11.b = 1
    return rax_11

(*(*arg2 + 0x150))(arg2, rdx_5, 4)
int64_t rax_10
rax_10.b = 1
return rax_10
