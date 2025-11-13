// 函数: sub_1417c5820
// 地址: 0x1417c5820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x140))(arg2, arg1 + 8)
int64_t* r8 = arg2[1]
int32_t* rcx_1 = *r8

if (&rcx_1[1] u<= r8[1])
    *(arg1 + 0x10) = *rcx_1
    int64_t* rax_3 = arg2[1]
    *rax_3 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x10, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x10, 4)

sub_1408d9160(arg2, arg1 + 0x14, arg3)
int64_t* rcx_4 = arg2[1]
int32_t* r8_1 = *rcx_4

if (&r8_1[1] u<= rcx_4[1])
    *(arg1 + 0x20) = *r8_1
    int64_t* rax_7 = arg2[1]
    *rax_7 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x20, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x20, 4)

int64_t* rcx_6 = arg2[1]
int32_t* r8_2 = *rcx_6

if (&r8_2[1] u<= rcx_6[1])
    *(arg1 + 0x24) = *r8_2
    int64_t* rax_11 = arg2[1]
    *rax_11 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x24, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x24, 4)

int64_t* rcx_8 = arg2[1]
char arg_8 = *(arg1 + 0x28)
char* rdx_5 = *rcx_8

if (&rdx_5[1] u> rcx_8[1])
    (*(*arg2 + 0x150))(arg2, &arg_8, 1)
    uint32_t rax_18 = zx.d(arg_8)
    *(arg1 + 0x28) = rax_18
    return rax_18

arg_8 = *rdx_5
*rcx_8 += 1
uint32_t rax_16 = zx.d(arg_8)
*(arg1 + 0x28) = rax_16
return rax_16
