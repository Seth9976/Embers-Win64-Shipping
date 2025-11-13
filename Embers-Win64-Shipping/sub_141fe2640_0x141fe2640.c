// 函数: sub_141fe2640
// 地址: 0x141fe2640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t var_4c = 0x80
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int32_t var_44 = 0
int64_t var_38 = 0
int32_t var_30 = 0
int32_t var_48 = 0xffffffff
void var_b0
void var_90
sub_140b2f3e0(&var_b0, sub_141fe1450(arg1, &var_90))
int64_t var_d8 = 0
int32_t var_d0 = 0
sub_1405947f0(&var_d8, 0xc)
int32_t rax_3 = var_d0 + 0xc
var_d0 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_d8)

UnDecorator::getReferenceType(var_d8, u"ContextHash", 0x18)
int64_t* var_c0 = &var_d8
void* var_b8 = &var_b0
void var_c8
sub_141d73530(&var_78, &var_c8, &var_c0, nullptr)
int64_t rcx_5 = var_d8

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t var_a0

if (var_a0 != 0)
    sub_140a74f90(var_a0)

int16_t* rdx_4

if (arg1[5].d == 0)
    rdx_4 = &data_142d40450
else
    rdx_4 = arg1[4]

sub_140b3b600(arg2, rdx_4, &var_78)
int32_t var_30_1 = 0

if (var_38 != 0)
    sub_140a74f90(var_38)

sub_1407464c0(&var_78)
__security_check_cookie(rax_1 ^ &var_f8)
return arg2
