// 函数: sub_141d84e10
// 地址: 0x141d84e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t var_68
__builtin_memset(&var_68, 0, 0x2c)
int32_t var_3c = 0x80
int32_t var_38 = 0xffffffff
int32_t var_34 = 0
int64_t var_28 = 0
int32_t var_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_68

if (rax_3 != 0)
    rdx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_4 != 0
*(arg2 + 0x20) = rbx + rax_4
sub_141d7fca0(arg1, rdx_2)
void* result = sub_1405ae080(&var_68)
__security_check_cookie(rax_1 ^ &var_88)
return result
