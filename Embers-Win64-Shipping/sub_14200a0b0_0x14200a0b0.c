// 函数: sub_14200a0b0
// 地址: 0x14200a0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142009780(arg1, arg2, arg3, arg4, arg5)

if (rax == 0)
    return rax

sub_1408db650(arg2, arg1 + 0x98, arg5)
int64_t* rcx_1 = arg2[1]
int32_t* r8 = *rcx_1

if (&r8[1] u<= rcx_1[1])
    *(arg1 + 0xa4) = *r8
    int64_t* rax_3 = arg2[1]
    *rax_3 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xa4, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xa4, 4)

int64_t* rcx_3 = arg2[1]
int32_t* r8_1 = *rcx_3

if (&r8_1[1] u<= rcx_3[1])
    *(arg1 + 0xa8) = *r8_1
    int64_t* rax_7 = arg2[1]
    *rax_7 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xa8, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xa8, 4)

int64_t* rcx_5 = arg2[1]
int32_t* rdx_3 = *rcx_5

if (&rdx_3[1] u> rcx_5[1])
    int32_t rax_11
    rax_11.b = *(arg1 + 0xac) != 0
    int32_t var_18 = rax_11
    (*(*arg2 + 0x150))(arg2, &var_18, 4)
    *(arg1 + 0xac) = var_18 != 0
else
    void* rax_9
    rax_9.b = *rdx_3 != 0
    *(arg1 + 0xac) = rax_9.b
    int64_t* rax_10 = arg2[1]
    *rax_10 += 4

(*(*arg2 + 0x130))(arg2, arg1 + 0xb0)
(*(*arg2 + 0x130))(arg2, arg1 + 0xb8)
int64_t rax_16
rax_16.b = 1
*arg4 = 1
return rax_16
