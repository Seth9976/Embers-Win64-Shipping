// 函数: sub_1425e9da0
// 地址: 0x1425e9da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
*arg3 = 0
arg2[1]
uint32_t var_120 = zx.d(arg2[3])
uint32_t var_128 = zx.d(arg2[2])
char var_118[0x100]
sub_1425f2950(&var_118, "%d,%d,%d,%d", zx.q(*arg2))
*arg1 = 0
int64_t rcx_2 = -1

do
    rcx_2 += 1
while (var_118[rcx_2] != 0)

int64_t rax_3 = CoTaskMemAlloc(rcx_2 + 1)

if (rax_3 != 0)
    char (* rcx_4)[0x100] = &var_118
    char i
    
    do
        i = *rcx_4
        *(rax_3 - &var_118 + rcx_4) = i
        rcx_4 = &(*rcx_4)[1]
    while (i != 0)

*arg1 = rax_3
__security_check_cookie(rax_1 ^ &var_148)
return arg1
