// 函数: sub_141f845f0
// 地址: 0x141f845f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int64_t rdi
rdi.b = 0
char var_14 = 0
int32_t* rcx = *arg1
int32_t var_18

if (rcx[sx.q(arg2) * 2 + 1].b != 0)
    rdi.b = 1
    char var_14_1 = 1
    var_18 = rcx[sx.q(arg2) * 2]
    rcx[sx.q(arg2) * 2 + 1].b = 0

int32_t rcx_1 = arg1[1].d
int32_t rax_5 = rcx_1 - arg2

if (rax_5 != 1)
    int64_t r9_1 = *arg1
    memmove(r9_1 + (sx.q(arg2) << 3), r9_1 + (sx.q(arg2 + 1) << 3), (rax_5 - 1) << 3)
    rcx_1 = arg1[1].d

int32_t result = rcx_1 - 1
arg1[1].d = result

if (rdi.b != 0)
    result = sub_141f96690(&arg1[2], &var_18)

__security_check_cookie(rax_1 ^ &var_38)
return result
