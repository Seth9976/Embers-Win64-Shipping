// 函数: sub_1420aeb70
// 地址: 0x1420aeb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
*arg1
char var_428[0xff]
sscanf_s(&var_428, "#?RADIANCE\nFORMAT=32-bit_rle_rgbe\n\n-Y %d +X %d\n", zx.q(arg1[1]))
char var_329 = 0
int64_t rax_2 = -1

do
    rax_2 += 1
while (var_428[rax_2] != 0)

int64_t r9_1 = *arg3
int32_t r8_1 = 0x100

if (rax_2.d s<= 0x100)
    r8_1 = rax_2.d

(*(r9_1 + 0x150))(arg3, &var_428, sx.q(r8_1), r9_1)
int16_t* r8_3 = *arg2
int64_t result

if (arg1[2] != 0xa)
    result = sub_142075520(arg1, arg3, r8_3)
else
    result = sub_142075c40(arg1, arg3, r8_3)

__security_check_cookie(rax_1 ^ &var_448)
return result
