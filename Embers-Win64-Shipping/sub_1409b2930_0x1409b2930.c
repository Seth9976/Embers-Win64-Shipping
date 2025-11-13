// 函数: sub_1409b2930
// 地址: 0x1409b2930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rdx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t var_54 = 0x80
int64_t var_80
__builtin_memset(&var_80, 0, 0x2c)
int32_t var_50 = 0xffffffff
int32_t var_4c = 0
sub_14090a510(&var_80, rdx_1)
int32_t rbx = arg1[1].d
arg2[1].d = 0

if (*(arg2 + 0xc) != rbx)
    sub_1405c5570(arg2, rbx)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
sub_14059a8e0(&arg2[2], rbx)
int64_t* var_c8
sub_1407453e0(&var_c8, arg1)
void* var_b8
int32_t i_1

for (int32_t i = i_1; i s< *(var_b8 + 0x18); i = i_1)
    int32_t var_3c_1 = data_143a1c6b0
    int32_t rax_4 = data_143a1c6b8
    int32_t var_44_1 = rax_4
    int32_t var_40_1 = rax_4
    int32_t var_a0
    sub_14090a150(&var_80, &var_a0)
    int64_t rsi_1 = sx.q(var_a0)
    int128_t* var_98
    *var_98 = rax_4.o
    *(var_80 + rsi_1 * 0x10) = *(*var_c8 + sx.q(i) * 0x10)
    int32_t var_90[0x4]
    int32_t* rcx_8 = *(sub_1409ca6e0(arg2, &var_90, i) + 8)
    
    if (rcx_8 != 0)
        *rcx_8 = rsi_1.d
    
    int32_t var_bc
    int32_t var_b0 = var_b0 & not.d(var_bc)
    void var_c0
    sub_14059bdd0(&var_c0)

sub_140780e10(arg1, &var_80)
int64_t var_78
var_78.d = 0
int32_t var_50_1 = 0xffffffff
int32_t var_4c_1 = 0
int64_t var_70
void* result = sub_14059a8e0(&var_70, 0)
int64_t var_60

if (var_60 != 0)
    result = sub_140a74f90(var_60)

int64_t rcx_14 = var_80

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

__security_check_cookie(rax_1 ^ &var_e8)
return result
