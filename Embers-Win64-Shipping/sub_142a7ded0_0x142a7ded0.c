// 函数: sub_142a7ded0
// 地址: 0x142a7ded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_48 = -2
arg1[3] = 0
arg1[4].d = 0
arg1[6] = arg1 + 0x3d
arg1[7].d = 0x28
*(arg1 + 0x3c) = 0
arg1[0xd].d = 0
*(arg1 + 0x3d) = 0
arg1[0xe] = arg1 + 0x7d
arg1[0xf].d = 0x28
*(arg1 + 0x7c) = 0
arg1[0x15].d = 0
*(arg1 + 0x7d) = 0
arg1[0x16] = arg1 + 0xbd
arg1[0x17].d = 0x28
*(arg1 + 0xbc) = 0
arg1[0x1d].d = 0
*(arg1 + 0xbd) = 0

if (arg2 != 0)
    *arg1 = arg2
else
    *arg1 = sub_142a4b740()

uint128_t var_38

if (arg3 != 0)
    void var_28
    var_38 = *sub_142a85330(&var_28, arg3)
    char* rdx
    rdx.b = 0x5c
    int64_t* rax_5 = sub_142a8cb30(&arg1[0x16], rdx.b, arg7)
    uint128_t zmm1 = var_38
    sub_142a8cbd0(rax_5, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg7)

char* rax_6 = strrchr(arg4, 0x5c)
void* rcx_4 = arg4

if (rax_6 != 0)
    rcx_4 = &rax_6[1]

arg1[2] = rcx_4
int64_t rax_7 = -1

do
    rax_7 += 1
while (*(rcx_4 + rax_7) != 0)

arg1[5].d = rax_7.d
int64_t rax_8

if (rcx_4 != arg4)
    sub_142a8cbd0(&arg1[6], arg4, rcx_4.d - arg4.d, arg7)
    rax_8 = arg1[6]
else
    rax_8 = *arg1

arg1[1] = rax_8
char* rdx_3 = arg5

if (rdx_3 == 0)
    rdx_3 = &data_1434cce10

sub_142a85330(&var_38, rdx_3)
*(arg1 + 0x18) = var_38
arg1[0x1e].b = arg6
return arg1
