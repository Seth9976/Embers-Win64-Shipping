// 函数: sub_1419d2010
// 地址: 0x1419d2010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
sub_1419d29a0()
void** i = data_143f1da60
int64_t var_68
__builtin_memset(&var_68, 0, 0x2c)
int64_t rcx = 0
int64_t var_78 = 0
int32_t var_3c = 0x80
int32_t var_38 = 0xffffffff
int32_t var_34 = 0
int64_t var_28 = 0
int32_t var_20 = 0
data_143f1da50 = 1
data_143f1d984 = 1
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x2c)
int32_t var_8c = 0x80
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t var_70 = 0

if (i != 0)
    do
        int64_t var_c0 = *(i[2] + 8)
        void var_c8
        sub_1407d1800(&var_b8, &var_c8, &var_c0, nullptr)
        i = *i
    while (i != 0)
    
    rcx = var_78

data_143f1d994 = 1
int32_t var_70_1 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t var_b0
var_b0.d = 0
int32_t var_88_1 = 0xffffffff
int32_t var_84_1 = 0
int64_t var_a8
sub_14059a8e0(&var_a8, 0)
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t rcx_6 = var_b8

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (var_28 != 0)
    sub_140a74f90(var_28)

void* result = sub_14094b8e0(&var_68)
__security_check_cookie(rax_1 ^ &var_e8)
return result
