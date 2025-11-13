// 函数: sub_1425ad0b0
// 地址: 0x1425ad0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t var_3c = 0x80
int64_t var_68
__builtin_memset(&var_68, 0, 0x2c)
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

int64_t rax_3 = *(arg2 + 0x20)
int32_t var_20_1 = 0
int64_t rcx_1
rcx_1.b = rax_3 != 0
*(arg2 + 0x20) = rcx_1 + rax_3

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t var_60
var_60.d = 0
int32_t var_38_1 = 0xffffffff
int32_t var_34_1 = 0
int64_t var_58
void* result = sub_14059a8e0(&var_58, 0)
int64_t var_48

if (var_48 != 0)
    result = sub_140a74f90(var_48)

int64_t rcx_7 = var_68

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_88)
return result
