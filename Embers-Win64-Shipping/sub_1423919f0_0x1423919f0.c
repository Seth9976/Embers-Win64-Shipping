// 函数: sub_1423919f0
// 地址: 0x1423919f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void var_1a8
memset(&var_1a8, 0, 0x88)
int32_t var_1a0 = 0x3f800000
TEB* gsbase

if (data_143f59c80 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f59c80)
    
    if (data_143f59c80 == 0xffffffff)
        sub_140b58170(&data_143f59c78, "FStaticMeshStaticLightingMesh_IntersectLightRay", 1)
        _Init_thread_footer(&data_143f59c80)

void var_1d8
void var_a8
sub_141eb54c0(&var_a8, data_143f59c78, &var_1d8, 1, nullptr)
int64_t* rcx_3 = *(arg1 + 0xd8)
int32_t var_1c0 = arg4[1].d
int32_t var_1b0 = arg3[1].d
int64_t rax_6 = *rcx_3
uint64_t var_1c8 = *arg4
void* var_1e8_1 = &var_a8
uint64_t var_1b8 = *arg3
char rax_7 = (*(rax_6 + 0x828))(rcx_3, &var_1a8, &var_1b8, &var_1c8, var_1e8_1)
int64_t var_118

if (rax_7 == 0)
    var_118 = 0
    int32_t var_110_1 = 0
    int64_t var_f4_1 = 0
    int32_t var_ec_1 = 0x3f800000
else
    int32_t var_198
    var_118.d = var_198.d
    int32_t var_194
    var_118:4.d = var_194.d
    int32_t var_190
    int32_t var_110 = var_190.d
    int32_t var_180
    int64_t var_f4
    var_f4.d = var_180.d
    int32_t var_17c
    var_f4:4.d = var_17c.d
    int32_t var_178
    int32_t var_ec = var_178.d

*arg2 &= 0xfffffffe
*(arg2 + 4) = var_118.o
*arg2 |= zx.d(rax_7) & 1
int128_t var_108
*(arg2 + 0x14) = var_108
uint128_t var_f8
*(arg2 + 0x24) = var_f8
int128_t var_e8
*(arg2 + 0x34) = var_e8
uint128_t var_d8
*(arg2 + 0x44) = var_d8
int128_t var_c8
*(arg2 + 0x54) = var_c8
uint128_t var_b8
*(arg2 + 0x64) = var_b8
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_208)
return arg2
