// 函数: sub_14185b830
// 地址: 0x14185b830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
CRITICAL_SECTION* r14 = *arg1
int64_t var_d8
sub_14185f3f0(&var_d8, arg2)
int64_t var_98

if (r14 + 0x80 != &var_d8)
    sub_140780e10(r14 + 0x80, &var_d8)
    void var_a0
    
    if (var_98 == 0)
        memmove(r14 + 0xb8, &var_a0, 4)
    int64_t rcx_3 = *(r14 + 0xc0)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *(r14 + 0xc0) = var_98
    int32_t var_90
    r14[5].DebugInfo.d = var_90
    int32_t var_90_1 = 0
    var_98 = 0

void var_88

if (r14 + 0xd0 != &var_88)
    sub_140780e10(r14 + 0xd0, &var_88)
    int64_t var_48
    void var_50
    
    if (var_48 == 0)
        memmove(r14 + 0x108, &var_50, (var_48 + 4).d)
    int64_t rcx_6 = *(r14 + 0x110)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *(r14 + 0x110) = var_48
    int32_t var_40
    r14[7].DebugInfo.d = var_40
    int32_t var_40_1 = 0
    int64_t var_48_1 = 0

int128_t zmm1 = sub_140f23e90(&var_88)
int32_t var_90_2 = 0

if (var_98 != 0)
    zmm1 = sub_140a74f90(var_98)

int32_t var_d0 = 0
int32_t var_cc

if (var_cc != 0)
    sub_140638cc0(&var_d8, 0)

int32_t var_a8 = 0xffffffff
int32_t var_a4 = 0
void var_c8
sub_14059a8e0(&var_c8, 0)
int64_t var_b8

if (var_b8 != 0)
    zmm1 = sub_140a74f90(var_b8)

int64_t rcx_12 = var_d8

if (rcx_12 != 0)
    zmm1 = sub_140a74f90(rcx_12)

int64_t result = sub_1405fc0f0(r14, zmm1, arg3, arg4)
__security_check_cookie(rax_1 ^ &var_f8)
return result
