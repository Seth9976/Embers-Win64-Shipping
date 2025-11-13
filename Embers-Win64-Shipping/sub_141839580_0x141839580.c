// 函数: sub_141839580
// 地址: 0x141839580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
void var_368
sub_140b2f110(&var_368)
int64_t var_388
__builtin_memset(&var_388, 0, 0x14)
sub_140b4ad80(&var_368, arg2 + 8, 4)
int16_t* const rdx_1

if (*(arg2 + 0x18) == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *(arg2 + 0x10)

void var_b8
sub_140685ed0(&var_b8, rdx_1)
int16_t* const rdx_2

if (*(arg2 + 0x28) == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *(arg2 + 0x20)

void var_158
sub_140685ed0(&var_158, rdx_2)
int16_t* const rdx_3

if (*(arg2 + 0x38) == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *(arg2 + 0x30)

void var_1f8
sub_140685ed0(&var_1f8, rdx_3)
int16_t* const rdx_4

if (*(arg2 + 0x48) == 0)
    rdx_4 = &data_142d40450
else
    rdx_4 = *(arg2 + 0x40)

void var_298
sub_140685ed0(&var_298, rdx_4)
void* var_30
int32_t var_28
sub_140b4ad80(&var_368, var_30, sx.q(var_28))
void* var_d0
int32_t var_c8
sub_140b4ad80(&var_368, var_d0, sx.q(var_c8))
void* var_170
int32_t var_168
sub_140b4ad80(&var_368, var_170, sx.q(var_168))
void* var_210
int32_t var_208
sub_140b4ad80(&var_368, var_210, sx.q(var_208))
sub_140b39010(&var_368)
sub_140b3da80(&var_368, &var_388)
sub_140aef380(arg1, &var_388, 0x14)
sub_140a306e0(arg1, &data_142e5c1c0, &data_142d404b0, 0)
sub_140a306e0(arg1, &data_142d5a024, &data_142d99650, 0)
sub_140a306e0(arg1, &data_142e1462c, &data_142d40450, 0)
int64_t var_218

if (var_218 != 0)
    sub_140a74f90(var_218)

int64_t var_178

if (var_178 != 0)
    sub_140a74f90(var_178)

int64_t var_d8

if (var_d8 != 0)
    sub_140a74f90(var_d8)

int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

sub_140b30ae0(&var_368)
__security_check_cookie(rax_1 ^ &var_3a8)
return arg1
