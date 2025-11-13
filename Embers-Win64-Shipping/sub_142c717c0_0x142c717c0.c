// 函数: sub_142c717c0
// 地址: 0x142c717c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint32_t r10 = zx.d(arg1[1])
uint64_t r9 = zx.q(*arg1)
uint32_t var_38 = zx.d(arg1[3])
uint32_t var_40 = zx.d(arg1[2])
char var_28[0x10]
var_28[0] = 0
uint32_t var_48 = r10
sub_142c564b0(&var_28, 0x10, "%d.%d.%d.%d", r9, arg4)
int64_t rax_3 = -1

do
    rax_3 += 1
while (var_28[rax_3] != 0)

int64_t result

if (rax_3 == 0 || rax_3 u>= arg3)
    *_errno() = 0x1c
    result = 0
else
    char (* rcx_1)[0x10] = &var_28
    char i
    
    do
        i = *rcx_1
        *(arg2 - &var_28 + rcx_1) = i
        rcx_1 = &(*rcx_1)[1]
    while (i != 0)
    result = arg2

__security_check_cookie(rax_1 ^ &var_68)
return result
