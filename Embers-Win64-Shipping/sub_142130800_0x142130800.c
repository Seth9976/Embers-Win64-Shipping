// 函数: sub_142130800
// 地址: 0x142130800
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
    int32_t arg_20 = 0
    (*(rax_3 + 0x150))(arg2, &arg_20, 4)
else
    *rcx_1 = rax_2

int64_t* rcx_3 = arg2[1]
int32_t* rdx_2 = *rcx_3
int32_t arg_18

if (&rdx_2[1] u<= rcx_3[1])
    arg_18 = *rdx_2
    int32_t rax_5
    rax_5.b = 1
    *rcx_3 += 4
    return rax_5

int32_t* rdx_3 = &arg_18

if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, rdx_3, zmm1)
    int64_t* rax_8
    rax_8.b = 1
    return rax_8

(*(*arg2 + 0x150))(arg2, rdx_3, 4)
int64_t rax_7
rax_7.b = 1
return rax_7
