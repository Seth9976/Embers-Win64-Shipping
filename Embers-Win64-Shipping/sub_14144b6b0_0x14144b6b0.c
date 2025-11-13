// 函数: sub_14144b6b0
// 地址: 0x14144b6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rbx = *(arg2 + 0x18)
void** rax_3 = (*(*rbx + 8))(rbx)
int64_t var_88 = 0
int32_t var_80 = 0
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x18)
int32_t var_7c = 1
int64_t var_60 = 0
int32_t var_58 = 0
int32_t var_54 = 1
int128_t var_50
__builtin_memset(&var_50, 0, 0x20)
sub_1408c8cf0(&var_a8, *rax_3)
sub_1408c8cf0(&var_a8:8, *rax_3)
int32_t rdx_2 = 0
int64_t var_f8 = 1
int32_t var_c4 = 0
int16_t var_c0 = 0
char var_ae = 0
int64_t var_f0 = 0
int32_t var_e8 = 0
int32_t var_dc = 0
int32_t var_d8 = 1
int16_t var_d4 = 0
int16_t var_d0 = 1
int64_t var_cc = 0
int16_t var_b0 = 1
void* rcx_3 = *rax_3
void var_100

if (rcx_3 == 0)
    int32_t* rax_8 = (*(*rbx + 0x18))(rbx, &var_100)
    rdx_2 = var_c4
    int32_t var_e4_1 = *rax_8
    int32_t var_e0_1 = rax_8[1]
    int16_t var_d2_1 = 1
else
    int32_t var_e4 = *(rcx_3 + 0x60)
    int32_t var_e0 = *(rcx_3 + 0x64)
    var_cc.d = *(*rax_3 + 0x3c)
    int16_t var_d2 = *(*rax_3 + 0x34)

wchar16 const* const var_b8 = u"ViewFamilyTarget"
int64_t rbx_1 = *(*(*rbx + 0x10))(rbx, &var_100)
sub_1405d1550(&var_100)

if (rbx_1 != 0)
    int32_t var_c4_2 = rdx_2 | 1 | 0x10000

int64_t* var_108 = nullptr
sub_14199c8a0(&data_1439c9260, &var_f8, &var_108, &var_a8)
void*** result = sub_1410fccd0(arg1, &var_108, u"ViewFamilyTarget", 0)
int64_t* rcx_12 = var_108

if (rcx_12 != 0)
    int64_t rdx_8 = *rcx_12
    (*(rdx_8 + 0x38))(rcx_12, rdx_8)

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
__security_check_cookie(rax_1 ^ &var_128)
return result
