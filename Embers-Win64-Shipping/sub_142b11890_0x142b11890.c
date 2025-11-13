// 函数: sub_142b11890
// 地址: 0x142b11890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int32_t rcx = *(arg1 + 0x6c)
int32_t r8_1 = rcx - arg2

if (r8_1 s<= 0xfbff)
    int64_t rax_3 = (*(*arg1 + 0x70))(arg1, zx.q(r8_1))
    __security_check_cookie(rax_1 ^ &var_38)
    return rax_3

int16_t var_18
int32_t rdi

if (r8_1 s> 0x3feffff)
    rdi = 2
    var_18 = 0xffff
    int16_t var_16_1 = (r8_1 s>> 0x10).w
else
    rdi = 1
    var_18 = (r8_1 s>> 0x10).w - 0x400

int32_t rsi = rcx + rdi + 1
(&var_18)[zx.q(rdi)] = r8_1.w

if (sub_142b11270(arg1, rsi) != 0)
    int32_t rax_11 = arg1[0xd].d - rsi
    *(arg1 + 0x6c) = rsi
    sub_142a8bca0(arg1[0xc] + (sx.q(rax_11) << 1), &var_18, rdi + 1)

uint64_t rax_13 = zx.q(*(arg1 + 0x6c))
__security_check_cookie(rax_1 ^ &var_38)
return rax_13
