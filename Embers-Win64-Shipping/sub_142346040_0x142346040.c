// 函数: sub_142346040
// 地址: 0x142346040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r14
sub_142345880(arg1, arg2, arg3, r14, arg4)
int64_t* r9 = arg2[1]
char* rcx = *r9

if (&rcx[1] u> r9[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x11, 1)
else
    *(arg1 + 0x11) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 1

int64_t* rcx_2 = arg2[1]
char* r8 = *rcx_2

if (&r8[1] u> rcx_2[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x12, 1)
else
    *(arg1 + 0x12) = *r8
    int64_t* rax_6 = arg2[1]
    *rax_6 += 1

char rcx_4 = *(arg1 + 0x11)
char result = arg1[1].b - rcx_4
*(arg1 + 0x13) = result
*(arg1 + 0x14) = result
*(arg3 + 0x3c) = rcx_4
return result
