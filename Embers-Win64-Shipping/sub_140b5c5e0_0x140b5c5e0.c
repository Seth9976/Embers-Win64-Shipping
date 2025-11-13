// 函数: sub_140b5c5e0
// 地址: 0x140b5c5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_838
int64_t rax_1 = __security_cookie ^ &var_838
uint64_t rbx_1 = zx.q(*arg1) u>> 6
void var_818
void* rcx = &var_818

if ((*arg1 & 1) == 0)
    memcpy(rcx, &arg1[1], rbx_1.d)
    *(&var_818 + rbx_1) = 0
    uint64_t rax_4 = zx.q((zx.d(*arg1) u>> 6) + 1)
    int32_t i
    
    do
        i = rax_4.d
        rax_4 = zx.q(rax_4.d - 1)
        *(&var_818 + (rax_4 << 1)) = sx.w(*(&var_818 + rax_4))
    while (i != 1)
else
    uint64_t rbx_2 = rbx_1 * 2
    memcpy(rcx, &arg1[1], rbx_2.d)
    *(&var_818 + rbx_2) = 0

int64_t result = sub_140a20ba0(arg2, &var_818, zx.d(*arg1) u>> 6)
__security_check_cookie(rax_1 ^ &var_838)
return result
