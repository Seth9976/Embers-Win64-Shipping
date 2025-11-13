// 函数: sub_1425e9e60
// 地址: 0x1425e9e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
*arg3 = 0
arg2[1]
int32_t var_120 = arg2[3]
int32_t var_128 = arg2[2]
char var_118[0x100]
sub_1425f2950(&var_118, "%d,%d,%d,%d", zx.q(*arg2))
*arg1 = 0
int64_t rcx_1 = -1

do
    rcx_1 += 1
while (var_118[rcx_1] != 0)

int64_t rax_4 = CoTaskMemAlloc(rcx_1 + 1)

if (rax_4 != 0)
    char (* rcx_3)[0x100] = &var_118
    char i
    
    do
        i = *rcx_3
        *(rax_4 - &var_118 + rcx_3) = i
        rcx_3 = &(*rcx_3)[1]
    while (i != 0)

*arg1 = rax_4
__security_check_cookie(rax_1 ^ &var_148)
return arg1
