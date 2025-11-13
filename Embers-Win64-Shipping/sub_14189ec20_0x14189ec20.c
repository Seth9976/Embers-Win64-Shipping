// 函数: sub_14189ec20
// 地址: 0x14189ec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rax_2 = arg1[4]
void* rcx = &arg1[6]

if (rax_2 != 0)
    rcx = rax_2

int64_t var_c8
int64_t var_78
sub_1409f5d90(&var_c8, arg1[2](&var_78, (*(*rcx + 8))(rcx)))
int32_t var_30 = 0
int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

sub_14059ad90(&var_78, 0)
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t rcx_6 = var_78

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rax_6 = *arg1
int64_t var_118
__builtin_memset(&var_118, 0, 0x2c)
CRITICAL_SECTION* r14 = *rax_6
int32_t var_ec = 0x80
int32_t var_e8 = 0xffffffff
int32_t var_e4 = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
sub_1409f61f0(&var_118, &var_c8)
int64_t var_88
int64_t rbx_1 = var_88
void var_e0
void var_90

if (rbx_1 == 0)
    memmove(&var_e0, &var_90, (rbx_1 + 4).d)

if (var_d8 != 0)
    sub_140a74f90(var_d8)
    rbx_1 = var_88

int64_t var_88_1 = 0
int32_t var_80_1 = 0

if (r14 + 0x80 != &var_118)
    sub_1409f61f0(r14 + 0x80, &var_118)
    int64_t rsi_1 = rbx_1
    
    if (rsi_1 == 0)
        memmove(r14 + 0xb8, &var_e0, (rsi_1 + 4).d)
    
    int64_t rcx_12 = *(r14 + 0xc0)
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
        rsi_1 = rbx_1
    
    rbx_1 = 0
    *(r14 + 0xc0) = rsi_1
    int32_t var_80
    r14[5].DebugInfo.d = var_80
    int64_t var_d8_2 = 0

int32_t var_d0_2 = 0

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int128_t zmm1 = sub_14059ad90(&var_118, 0)
int64_t var_f8

if (var_f8 != 0)
    zmm1 = sub_140a74f90(var_f8)

int64_t rcx_16 = var_118

if (rcx_16 != 0)
    zmm1 = sub_140a74f90(rcx_16)

int128_t entry_zmm2
int128_t entry_zmm3
sub_1405fc0f0(r14, zmm1, entry_zmm2, entry_zmm3)
int32_t var_80_2 = 0

if (var_88_1 != 0)
    sub_140a74f90(var_88_1)

int64_t result = sub_14059ad90(&var_c8, 0)
int64_t var_a8

if (var_a8 != 0)
    result = sub_140a74f90(var_a8)

int64_t rcx_21 = var_c8

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

__security_check_cookie(rax_1 ^ &var_138)
return result
