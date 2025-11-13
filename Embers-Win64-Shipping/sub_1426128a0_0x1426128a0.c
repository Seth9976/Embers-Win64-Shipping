// 函数: sub_1426128a0
// 地址: 0x1426128a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi_2 = (zx.q(arg3) << 5) + *(arg2 + 0x10)
int32_t rdx = *(arg2 + 0x90)

if (rdx == 0xffffffff)
    int64_t var_10_1 = 0
    int32_t rax_1 = *(arg2 + 0x88)
    var_10_1.d = rdx
    *(arg2 + 0x90) = rax_1
    sub_142616170(arg2 + 0x80, rax_1 + 1)
    *(*(arg2 + 0x80) + sx.q(*(arg2 + 0x88)) * 0x10 - 0x10) = 0.o
    rdx = *(arg2 + 0x90)

int64_t* r9_2 = (sx.q(rdx) << 4) + *(arg2 + 0x80)
*(arg2 + 0x90) = r9_2[1].d
int32_t rcx_3 = *(*(arg2 + 8) + 0x20)
int32_t r11 = rcx_3 + rdx

if (r11 u< rcx_3)
    r9_2 = (zx.q(r11) << 4) + *(arg2 + 0x20)

int64_t r10

if (arg4 != 0)
    char r8 = (*(arg1 + 0xa0)).b
    int64_t rax_5
    int64_t rdx_2
    rdx_2:rax_5 = muls.dp.q(0x2e8ba2e8ba2e8ba3, arg4 - *(arg1 + 0x90))
    int64_t rdx_3 = rdx_2 s>> 5
    r10 = zx.q((rdx_3 u>> 0x3f).d + rdx_3.d) << r8 | zx.q(*arg4) << ((*(arg1 + 0x9c)).b + r8)
else
    r10 = 0

*r9_2 = zx.q(arg5) | r10
*(r9_2 + 0xc) = arg7
*(r9_2 + 0xd) = arg6
*(r9_2 + 0xe) = 0
int32_t result = *rsi_2
r9_2[1].d = result
*rsi_2 = r11
return result
