// 函数: sub_141ad12c0
// 地址: 0x141ad12c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141a880d0(arg1, arg3)

if (rax == 0)
    sub_141abd2c0(arg1, arg2, arg3)
else if (rax[8] != arg2)
    (*(rax[2] + 0x28))(&rax[2], arg2)

int64_t* rax_2 = sub_141a880d0(arg1, arg3)
rax_2[9].d = arg5

if (arg4[1].b != 0)
    *(rax_2 + 0x2c) = *arg4
    *(rax_2 + 0x4e) = 0

int64_t rdx_4 = sx.q(rax_2[1].d)
bool cond:0 = *(rax_2 + 0xc) == 0
*(rax_2 + 0x4d) = arg7 ^ 1
void* const rcx_5 = 0x7f8

if (cond:0)
    rcx_5 = 0x7a8

void* rcx_6 = rcx_5 + arg1
int64_t result = *(rcx_6 + 0x20)
*(result + (rdx_4 << 2)) = arg6

if (*(rax_2 + 0xc) != 0)
    int32_t zmm0_1
    zmm0_1, result = sub_141abcf00(rcx_6)
    *(arg1 + 0x710) = zmm0_1

if (arg4[1].b != 0)
    arg4[1].b = 0

return result
