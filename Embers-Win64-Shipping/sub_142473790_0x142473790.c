// 函数: sub_142473790
// 地址: 0x142473790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3e8
int64_t rax_1 = __security_cookie ^ &var_3e8
void** var_3c8
sub_14234f280(&var_3c8)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_3c8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_3c8)

void*** rax_3 = *(arg2 + 0x38)
void*** rdx_2 = &var_3c8

if (rax_3 != 0)
    rdx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
*arg3 = sub_141ed8200(arg1, rdx_2)
int64_t result = sub_141c51350(&var_3c8)
__security_check_cookie(rax_1 ^ &var_3e8)
return result
