// 函数: _chdir
// 地址: 0x14120eef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
float zmm0[0x4] = data_142d3f660
int512_t zmm1
zmm1.o = zmm0
float var_e8[0x4] = zmm0
int128_t var_c8
__builtin_memcpy(&var_c8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x80\x3f", 
    0x80)
int32_t rcx = data_1439c7a08
float temp0[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
int32_t var_150 = 0
int32_t var_130 = 0
char* var_168 = nullptr
int32_t var_170 = 0
int64_t var_138
char* var_178 = &var_138
int128_t var_48
__builtin_memset(&var_48, 0, 0x30)
var_138 = temp0.q
uint64_t var_128[0x8]
sub_141226f00(rcx, &var_128, nullptr, nullptr, var_178, var_170, var_168)
int128_t* rax_2 = *(arg1 + 0x20)

if (rax_2 == 0)
    rax_2 = sub_140a82f30(0x110, zx.q((&rax_2[1]).d))
    *(arg1 + 0x20) = rax_2

uint64_t (* rcx_1)[0x8] = &var_128
void* i_1 = 2
void* i

do
    rax_2 = &rax_2[8]
    int128_t zmm0_1 = *rcx_1
    int128_t zmm1_1 = *(rcx_1 + 0x10)
    rcx_1 = &rcx_1[2]
    rax_2[-8] = zmm0_1
    zmm0_1 = *(rcx_1 - 0x60)
    rax_2[-7] = zmm1_1
    zmm1_1 = *(rcx_1 - 0x50)
    rax_2[-6] = zmm0_1
    zmm0_1 = rcx_1[-1][0].o
    rax_2[-5] = zmm1_1
    zmm1_1 = *(rcx_1 - 0x30)
    rax_2[-4] = zmm0_1
    zmm0_1 = *(rcx_1 - 0x20)
    rax_2[-3] = zmm1_1
    zmm1_1 = *(rcx_1 - 0x10)
    rax_2[-2] = zmm0_1
    rax_2[-1] = zmm1_1
    i = i_1
    i_1 -= 1
while (i != 1)
*rax_2 = *rcx_1
int64_t* result = sub_1405d16e0(arg1 + 0x18, i_1)
int64_t r8 = *(arg1 + 0x20)

if (r8 != 0)
    int64_t* rcx_3 = data_143f0f180
    var_178.d = *(arg1 + 0x10)
    void* var_148
    (*(*rcx_3 + 0xf8))(rcx_3, &var_148, r8, &data_143e823a0, var_178, 1)
    void* rax_4 = var_148
    void* var_158 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    sub_1405d1550(&var_148)
    sub_1405d1600(arg1 + 0x18, &var_158)
    result = sub_1405d1550(&var_158)

__security_check_cookie(rax_1 ^ &var_198)
return result
