// 函数: sub_141b00890
// 地址: 0x141b00890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void var_68
int64_t* rax_2 = sub_141a50f10(&var_68)
int32_t r8
int32_t var_70 = r8
int64_t rbx_1 = sx.q(arg2[1].d)
int64_t rcx_1 = *rax_2
int32_t rax_3 = (rbx_1 + 1).d
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_140775520(arg2)

int64_t rax_4 = *arg2
int64_t rcx_3 = rbx_1 * 9
int128_t* rdx_1 = rax_4 + (rcx_3 << 3)
char result = *(rax_4 + (rcx_3 << 3) + 0x40)
*rdx_1 = rcx_1.o
result = (result & 0xfe) | 2 | 3
int128_t var_50
rdx_1[1] = var_50
rdx_1[4].b = result
int128_t var_40
rdx_1[2] = var_40
int128_t var_30
rdx_1[3] = var_30
__security_check_cookie(rax_1 ^ &var_98)
return result
