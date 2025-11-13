// 函数: sub_14052eea0
// 地址: 0x14052eea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = data_142d3f670
int512_t zmm2
zmm2.o = 0x3f99999a
int512_t zmm3
zmm3.o = 0x3f800000
int512_t zmm1
zmm1.o = 0x3dcccccd
int128_t var_cc
__builtin_memcpy(&var_cc, 
    "\x66\x66\xc6\x3f\x00\x00\x40\x3f\x66\x66\xa6\x3f\x9a\x99\x59\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x20)
char var_110 = 0
float var_d8[0x4]
var_d8[0] = 0x3f800000
int128_t var_bc
uint128_t zmm7 = zx.o(var_bc:4.q)
int128_t zmm12 = data_14399f5c0
float var_118[0x4]
float temp0[0x4] = _mm_shuffle_ps(var_118, var_118, 0x93)
temp0[0] = 0x3f99999a
float temp0_1[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xd2)
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0x39)
temp0_1[0] = 0x3f6e147b
temp0_2[0] = 0x402b2fed
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
temp0_3[0] = 0x3da3d70a
int128_t zmm6 = var_cc
temp0_4[0] = 0x3dcccccd
uint128_t temp0_5 = _mm_bsrli_si128(zmm4, 0xc)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
var_bc:0xc.d = temp0_5.d
sub_1417500c0(&data_143a2fdc0)
void* rax = data_143a2fdc0
__builtin_memcpy(rax, 
    "\xc5\x1b\x69\x3f\x61\x32\xad\x3e\x5f\x29\x8b\x3e\x00\x00\x80\x3f\x00\x00\x80\x3f\x94\x32\xb6\x3d\x"
"99\xa6\x93\x3d\x00\x00\x80\x3f", 
    0x20)
*(rax + 0x20) = temp0_6
__builtin_memcpy(rax + 0x30, 
    "\x8f\xc2\xf5\x3e\x85\xeb\xd1\x3e\x29\x5c\x8f\x3e\x00\x00\x80\x3f\x00\x00\x80\x3f\xa4\x70\xbd\x3e\x"
"9a\x99\x99\x3e\x00\x00\x80\x3f", 
    0x20)
*(rax + 0x50) = zmm12
*(rax + 0x60) = temp0_7
*(rax + 0x70) = zmm6
uint128_t zmm0
zmm0.q = zmm7.q
*(rax + 0x80) = zmm0
*(rax + 0x90) = 0
data_143a2fdb0 = &data_143316fc8

if (sub_140a80f40() == 0)
    sub_141997e80(&data_143a2fdb0, zmm1, zmm2, zmm3)
else
    (*(data_143a2fdb0 + 0x28))(&data_143a2fdb0, zmm1, zmm2, zmm3)

return atexit(sub_142d0b870) __tailcall
