// 函数: sub_14180c740
// 地址: 0x14180c740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int64_t rcx = *(arg1 + 0x138)
int64_t* var_110 = &var_88
int64_t var_d8
int64_t* var_118 = &var_d8
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
__builtin_memset(&var_d8, 0, 0x2c)
int32_t var_ac = 0x80
int32_t var_a8 = 0xffffffff
int32_t var_a4 = 0
int64_t var_98 = 0
int32_t var_90 = 0
char var_30 = 0
char var_e4 = 0
void*** var_f8
void var_e8
void var_38
void**** rax_3 = sub_141800880(rcx, &var_f8, &var_e8, &var_38, var_118, var_110, arg1 + 0x148)
*arg2 = *rax_3
void* rax_5 = rax_3[1]
arg2[1] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int64_t* var_f0

if (var_f0 != 0)
    var_f0[1].d -= 1
    
    if (var_f0[1].d == 1)
        (**var_f0)(var_f0)
        int32_t temp1_1 = *(var_f0 + 0xc)
        *(var_f0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_f0 + 8))(var_f0, 1)

char var_e4_1 = 0
char var_30_1 = 0
int32_t var_90_1 = 0

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t var_d0
var_d0.d = 0
int32_t var_a8_1 = 0xffffffff
int32_t var_a4_1 = 0
int64_t var_c8
sub_14059a8e0(&var_c8, 0)
int64_t var_b8

if (var_b8 != 0)
    sub_140a74f90(var_b8)

int64_t rcx_8 = var_d8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_80
var_80.d = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int64_t var_78
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_13 = var_88

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
