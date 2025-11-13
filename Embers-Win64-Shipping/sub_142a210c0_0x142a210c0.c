// 函数: sub_142a210c0
// 地址: 0x142a210c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rdx = sx.q(arg6)
uint64_t r11 = zx.q(*(*(arg1 + 0xf00) + 1))
char var_48 = *arg4
char var_40 = *arg5
char var_47 = arg4[rdx]
char var_3f = arg5[rdx]
int64_t rcx = sx.q((rdx * 2).d)
char var_46 = arg4[rcx]
char var_3e = arg5[rcx]
int64_t rcx_1 = sx.q((rdx * 3).d)
char var_45 = arg4[rcx_1]
char var_3d = arg5[rcx_1]
int64_t rcx_2 = sx.q((rdx << 2).d)
char var_44 = arg4[rcx_2]
char var_3c = arg5[rcx_2]
char* rcx_3 = sx.q((rdx * 5).d)
char var_43 = *(rcx_3 + arg4)
char var_3b = *(rcx_3 + arg5)
char* rcx_4 = sx.q((rdx * 3).d * 2)
char var_42 = *(rcx_4 + arg4)
char var_3a = *(rcx_4 + arg5)
char* rcx_5 = sx.q(rdx.d * 7)
char var_41 = *(rcx_5 + arg4)
char var_39 = *(rcx_5 + arg5)
int64_t rdi

if (r11.d != 0)
    rdi = *(r11 * 0x10 + 0x143fed288)
else
    rdi = (&data_143fed2c8)[(sx.q(*(arg1 + 0xf10)) + (sx.q(*(arg1 + 0xf14)) << 1)) * 2]

int64_t rbx = sx.q(arg9)
rdi(arg7, rbx, arg2, &var_48)
int64_t result = rdi(arg8, rbx, arg3, &var_40)
__security_check_cookie(rax_1 ^ &var_68)
return result
