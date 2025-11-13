// 函数: sub_142a21260
// 地址: 0x142a21260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t i_1 = 0x10
uint64_t r11 = zx.q(**(arg1 + 0xf00))
void var_28
void* rax_3 = &var_28
int64_t i

do
    char rcx = *arg3
    arg3 = &arg3[sx.q(arg4)]
    *rax_3 = rcx
    rax_3 += 1
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t rax_5

if (r11.d != 0)
    rax_5 = *(r11 * 0x10 + 0x143fed280)
else
    rax_5 = (&data_143fed2c0)[(sx.q(*(arg1 + 0xf10)) + (sx.q(*(arg1 + 0xf14)) << 1)) * 2]

int64_t result = rax_5(arg5, sx.q(arg6), arg2, &var_28)
__security_check_cookie(rax_1 ^ &var_48)
return result
