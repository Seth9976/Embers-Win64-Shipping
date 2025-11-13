// 函数: sub_142024ce0
// 地址: 0x142024ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
void* rax_2 = sub_1423dd950()
sub_1405d9400()
int32_t var_198
int32_t var_198_1 = var_198 & 0xfffffffc
uint128_t zmm2 = zx.o(data_143dbb1f0)
int32_t var_194
int32_t var_194_1 = var_194 & 0xfffffffe
int128_t var_1b0 = data_14399f5c0
zmm2 = _mm_unpacklo_pd(zmm2, zmm2.q)
int32_t var_1a0 = 0
int128_t var_190
__builtin_memset(&var_190, 0, 0x20)
int64_t var_1c8 = 0
int128_t zmm0 = data_14399f5e0
char var_1c0 = 0
int64_t var_1b8 = 0
uint64_t var_1d0 = zmm2.q
int128_t var_170 = zmm0
void** const var_1d8 = &data_14328aa28
int128_t var_14c = zmm0
int32_t var_19c = 0x3f800000
int16_t var_150 = 0
uint128_t var_160 = zmm2
char var_14e = 0
char var_13c = 1
void** var_130
sub_1423faad0(&var_130, &data_143dbb1f0, &data_143dbb1f0, &data_14399f610)
int32_t var_138 = 0x3f800000
int32_t var_134 = 0x3f800000
int128_t var_1b0_1 = data_14399f610
var_1c8:4.d = 2
var_1d8 = &data_14328aa70
int64_t rax_3 = data_143cd6fd8
void* rax_4 = data_143cd6fe0

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int32_t var_198_2 = var_198_1 | 2
int32_t var_98 = data_143cd6fe8
int128_t var_170_1 = data_14399f5e0
void* var_90 = rax_2
char var_38 = 0
var_1c8:4.d = 2
var_160.d = 0x3f800000
var_160:4.d = 0x3f800000
void var_1f0
int64_t* rax_6 = sub_140aae420(&var_1f0, arg3)
int64_t var_a8_1 = *rax_6
*rax_6 = rax_3
int64_t var_a0_1 = rax_6[1]
rax_6[1] = rax_4
int32_t var_98_1 = rax_6[2].d
int64_t* var_1e8

if (var_1e8 != 0)
    var_1e8[1].d -= 1
    
    if (var_1e8[1].d == 1)
        (**var_1e8)(var_1e8)
        int32_t rdi_1 = *(var_1e8 + 0xc)
        *(var_1e8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_1e8 + 8))(var_1e8, zx.q(rdi_1))

float var_1f8
float var_1f4
sub_1424232b0(arg2, rax_2, arg3, &var_1f4, &var_1f8, 0, var_1f8.b)
*(arg2 + 0x34)
*(arg2 + 0x30)
sub_1424098d0(arg2, &var_1d8)
sub_141fa61e0(&var_1d8)
__security_check_cookie(rax_1 ^ &var_228)
return &data_143283728
