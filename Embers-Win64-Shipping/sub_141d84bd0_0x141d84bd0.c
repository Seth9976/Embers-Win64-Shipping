// 函数: sub_141d84bd0
// 地址: 0x141d84bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* var_78 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_68
__builtin_memset(&var_68, 0, 0x2c)
int32_t var_3c = 0x80
int32_t var_38 = 0xffffffff
int32_t var_34 = 0
int64_t var_28 = 0
int32_t var_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* r8_4 = &var_68
void* rdx_4 = var_78

if (rax_4 != 0)
    r8_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_5 != 0
*(arg2 + 0x20) = rbx + rax_5
sub_141d7dd90(arg1, rdx_4, r8_4, arg4, arg3)
void* result = sub_1405ae080(&var_68)
__security_check_cookie(rax_1 ^ &var_98)
return result
