// 函数: sub_1425c2340
// 地址: 0x1425c2340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t r8
int64_t var_90 = r8
void* var_88 = arg1
int64_t var_80
__builtin_memset(&var_80, 0, 0x2c)
void** const var_98 = &data_143443398
int32_t var_54 = 0x80
int32_t var_50 = 0xffffffff
int32_t var_4c = 0
int64_t var_40 = 0
int32_t var_38 = 0
int64_t var_a8
int64_t* rax_2 = sub_1425bf990(arg1, &var_a8, arg2)
int16_t* const rdx_1

if (rax_2[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax_2

int64_t* rcx = *(arg1 + 8)
(*(*rcx + 0x110))(rcx, rdx_1, &var_98)
int64_t rcx_1 = var_a8

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = *(arg1 + 8)
char rax_5 = (*(*rcx_2 + 0x110))(rcx_2, arg2, &var_98)
int32_t var_38_1 = 0

if (var_40 != 0)
    sub_140a74f90(var_40)

sub_14059ad90(&var_80, 0)
int64_t var_60

if (var_60 != 0)
    sub_140a74f90(var_60)

int64_t rcx_6 = var_80

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(rax_5)
