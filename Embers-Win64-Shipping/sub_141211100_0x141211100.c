// 函数: sub_141211100
// 地址: 0x141211100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* var_a0
__builtin_memset(&var_a0, 0, 0x11)
int64_t i_1 = 0x1b0
void** const var_a8 = &data_142f3c760
sub_140888c10(&var_a0, 0x1b0)
int64_t var_98_1
int64_t i

do
    int64_t rbx_1 = sx.q(var_98_1.d)
    int32_t rax_2 = (rbx_1 + 1).d
    var_98_1.d = rax_2
    
    if (rax_2 s> var_98_1:4.d)
        sub_140888950(&var_a0, rbx_1.d)
    
    void* rcx_2
    
    if ((var_a0.b & 1) == 0)
        rcx_2 = var_a0
    else
        rcx_2 = &var_a0 + (var_a0 s>> 1)
    
    *(rcx_2 + rbx_1 * 0x10) = zx.o(0)
    i = i_1
    i_1 -= 1
while (i != 1)
int128_t zmm0 = data_143dbb1e0
int64_t var_78
int64_t* var_b0 = &var_78
int64_t* rcx_4 = data_143f0f180
int32_t var_54 = (1 << (data_1439c7a34).b) - 1
void** const* var_70 = &var_a8
var_78 = 0
int32_t var_68 = 1
int128_t var_64 = zmm0
char var_50 = 0
int64_t var_48 = 0
int32_t var_40 = 0
void var_88
(*(*rcx_4 + 0x498))(rcx_4, &var_88, &data_143f02b98, zx.q(var_98_1.d << 4), 1, var_b0)
sub_1405d1600(arg1 + 0x10, &var_88)
sub_1405d1550(&var_88)
int64_t result = sub_140a1d5c0(&var_a0)
__security_check_cookie(rax_1 ^ &var_d8)
return result
