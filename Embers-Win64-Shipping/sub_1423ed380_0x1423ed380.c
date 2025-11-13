// 函数: sub_1423ed380
// 地址: 0x1423ed380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* rax_2 = data_143f5b298
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg6))
int64_t rdi = *(rax_2 + 0x50)
int32_t var_1e4 = zmm6.d
int32_t var_1e8 = _mm_cvtepi32_ps(zx.o(arg5 - 0x28)).d
void var_1e0
int64_t* rax_5 = _vfprintf_p_l(&var_1e0, u"NAMED EVENTS ENABLED", u"UnrealEngine")
int128_t zmm2 = data_14399f5e0
int32_t var_188
int32_t var_188_1 = var_188 & 0xfffffffc
int32_t var_184
int32_t var_184_1 = var_184 & 0xfffffffe
uint64_t var_1c0 = var_1e8.q
int32_t var_18c = 0x3f800000
int16_t var_140 = 0
uint128_t var_1a0 = data_14399f5c0
int64_t var_1b8 = 0
char var_1b0 = 0
int32_t var_190 = 0
int128_t var_180
__builtin_memset(&var_180, 0, 0x20)
int64_t var_1a8 = 0
uint128_t zmm0_1 = zx.o(data_143dbb1f0)
uint128_t var_150 = _mm_unpacklo_pd(zmm0_1, zmm0_1.q)
void** const var_1c8 = &data_14328aa28
char var_13e = 0
int128_t var_160 = zmm2
char var_12c = 1
int128_t var_13c = zmm2
void** var_120
sub_1423faad0(&var_120, &var_1e8, &data_143dbb1f0, &data_14399f610)
int32_t var_128 = 0x3f800000
int32_t var_124 = 0x3f800000
int128_t var_1a0_1 = data_14399f610
var_1b8:4.d = 2
var_1c8 = &data_14328aa70
int64_t var_98 = *rax_5
void* rax_7 = rax_5[1]
void* var_90 = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

int32_t var_88 = rax_5[2].d
int64_t var_80 = rdi
char var_28 = 0
var_1b8:4.d = 2
int64_t* var_1d8

if (var_1d8 != 0)
    var_1d8[1].d -= 1
    
    if (var_1d8[1].d == 1)
        (**var_1d8)(var_1d8)
        int32_t rdi_1 = *(var_1d8 + 0xc)
        *(var_1d8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_1d8 + 8))(var_1d8, zx.q(rdi_1))

int32_t var_188_2 = var_188_1 | 2
var_150.d = 0x3f800000
int128_t var_160_1 = data_14399f5e0
var_150:4.d = 0x3f800000
int32_t rbx_2 = int.d(sub_142409810(arg4, &var_1c8) f+ var_150:0xc.d)
sub_141fa61e0(&var_1c8)
__security_check_cookie(rax_1 ^ &var_208)
return zx.q(rbx_2)
