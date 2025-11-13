// 函数: sub_142b11b10
// 地址: 0x142b11b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38

if (arg2 == 0)
    int64_t rax_3 = (*(*arg1 + 0x70))(arg1, zx.q(arg4))
    __security_check_cookie(rax_1 ^ &var_38)
    return rax_3

int16_t rcx_2
int32_t rdi

if (arg3 u> 0xfdffff)
    int16_t var_14_1 = arg3.w
    rcx_2 = 0x7fc0
    uint16_t var_16_2 = (arg3 u>> 0x10).w
    rdi = 3
else if (arg3 s> 0xff)
    int16_t var_16_1 = arg3.w
    rdi = 2
    rcx_2 = ((arg3 s>> 0xa).w & 0x7fc0) + 0x4040
else
    rdi = 1
    rcx_2 = (arg3.w + 1) << 6

int32_t rsi = *(arg1 + 0x6c)
int16_t var_18 = rcx_2 | arg4.w
int32_t rsi_1 = rsi + rdi

if (sub_142b11270(arg1, rsi_1) != 0)
    int32_t rax_8 = arg1[0xd].d - rsi_1
    *(arg1 + 0x6c) = rsi_1
    sub_142a8bca0(arg1[0xc] + (sx.q(rax_8) << 1), &var_18, rdi)

uint64_t rax_10 = zx.q(*(arg1 + 0x6c))
__security_check_cookie(rax_1 ^ &var_38)
return rax_10
