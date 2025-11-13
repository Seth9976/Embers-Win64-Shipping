// 函数: sub_141260060
// 地址: 0x141260060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void var_168
sub_141385550(&var_168, arg2, arg3)
void var_1b0
void var_138
sub_1412ff950(&var_1b0, arg2, &var_138, arg3)
int128_t var_1c8
int64_t* var_1a8
int128_t var_188
void*** var_178
int128_t zmm0

if (arg4 != 0 || arg5 == arg4)
    int32_t var_1d8_1 = 1
    var_1c8 = var_188
    zmm0 = *sub_14138da70(&var_178, var_1a8, &var_1c8, arg4, var_1d8_1)
    var_188 = zmm0
else
    zmm0 = var_188

void* rcx_4 = *arg3

if ((*(rcx_4 + 0x2c) & 0x30000) == 0x30000)
    var_1c8 = zmm0
    void**** rax_5 = sub_141306f90(&var_178, var_1a8, &var_1c8)
    rcx_4 = *arg3
    var_188 = *rax_5

int32_t var_7c = 1
int64_t* var_1b8 = nullptr
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x18)
int64_t var_88 = 0
int32_t var_80 = 0
int64_t var_60 = 0
int32_t var_58 = 0
int128_t var_50
__builtin_memset(&var_50, 0, 0x20)
int32_t var_54 = 1
int64_t* rcx_5 = *(rcx_4 + 0x18)
sub_1408c8cf0(&var_a8, *(*(*rcx_5 + 8))(rcx_5))
int64_t* rcx_7 = *(*arg3 + 0x18)
void** rax_10 = (*(*rcx_7 + 8))(rcx_7)
sub_1408c8cf0(&var_a8:8, *rax_10)
int64_t var_f8 = 1
wchar16 const* const var_b8 = u"UnknownTexture"
void* rax_11 = *arg3
int64_t var_f0
__builtin_memset(&var_f0, 0, 0x18)
int64_t var_d8 = 1
int16_t var_d0 = 1
int64_t var_cc = 0
int32_t var_c4 = 0
int16_t var_c0 = 0
int16_t var_b0 = 1
char var_ae = 0
int64_t* rcx_9 = *(rax_11 + 0x18)
int32_t* rax_13 = (*(*rcx_9 + 0x18))(rcx_9, &var_1c8)
int64_t var_e8
var_e8:4.d = *rax_13
int32_t var_c4_1 = var_c4 | 9
int64_t var_e0
var_e0.d = rax_13[1]
var_cc.d = 2
var_d8:6.w = 1
sub_14199c8a0(&data_1439c9260, &var_f8, &var_1b8, &var_a8)
void* rax_15 = sub_14139d290(&var_188)
int64_t* rcx_12 = var_1b8
int64_t* rbx_1 = *(rax_15 + 0x50)
*(rax_15 + 0x50) = rcx_12

if (rcx_12 != 0)
    (*(*rcx_12 + 0x30))()

if (rbx_1 != 0)
    (*(*rbx_1 + 0x38))(rbx_1)

int128_t* rax_18 = sub_14139d290(&var_188)
var_1c8.q = 0
var_1c8:8.q = 1
*rax_18 = var_f8.o
rax_18[1].d = var_e8.d
*(rax_18 + 0x14) = var_e8:4.d
*(rax_18 + 0x18) = var_e0.d
*(rax_18 + 0x1c) = var_e0:4.d
rax_18[2].d = var_d8.d
*(rax_18 + 0x24) = var_d8:4.b
*(rax_18 + 0x25) = var_d8:5.b
*(rax_18 + 0x26) = var_d8:6.w
*(rax_18 + 0x28) = var_d0
*(rax_18 + 0x2c) = var_cc.d
rax_18[3].d = var_cc:4.d
*(rax_18 + 0x34) = var_c4_1
*(rax_18 + 0x38) = var_c0.b
*(rax_18 + 0x39) = var_c0:1.b
rax_18[4].q = var_b8
*(rax_18 + 0x48) = var_b0.b
*(rax_18 + 0x49) = var_b0:1.b
*(rax_18 + 0x4a) = var_ae
int64_t rbx_2 = var_188.q
sub_1405a4d70(&var_1c8)
*var_1c8.q = rbx_2
sub_1413a1370(&var_168, &var_1c8)
int64_t rcx_22 = var_1c8.q

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int128_t var_40
sub_1405ec8a0(&var_40:8)
sub_1405d1550(&var_40)
sub_1405ec8a0(&var_50:8)
sub_1405ec8a0(&var_50)
void var_78
sub_14117b380(&var_78)
void var_90
sub_14117b570(&var_90)
int64_t var_98
sub_1405d1550(&var_98)
sub_1405d1550(&var_a8:8)
sub_1405d1550(&var_a8)
int64_t* rcx_32 = var_1b8

if (rcx_32 != 0)
    (*(*rcx_32 + 0x38))(rcx_32)

int64_t result = sub_141386800(&var_168)
__security_check_cookie(rax_1 ^ &var_1f8)
return result
