// 函数: sub_1414fc590
// 地址: 0x1414fc590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1260)
void var_1288
int64_t rax_1 = __security_cookie ^ &var_1288
void* rbx = *(arg1 + 0x10)
void var_1018
memcpy(&var_1018, *(rbx + 0x15b0), 0xfc0)
int32_t rdx_1 = *(arg1 + 0x18)
int32_t var_1248 = rdx_1
int64_t var_1250 = 0
int32_t rax_2 = *(arg1 + 0x1c)
int32_t var_1258 = rdx_1
int32_t var_1244 = rax_2
int32_t var_1254 = rax_2
void* var_1260 = rbx + 0x4990
sub_1422f50b0(rbx, &var_1018, &var_1258, &var_1250, rbx + 0x280)
void* rax_4 = *(arg1 + 0x140)
void* rsi = arg1 + 0x40
int32_t rdi = *(arg1 + 0x18)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c)))
void* rcx_2 = rsi

if (rax_4 != 0)
    rcx_2 = rax_4

int512_t zmm6
zmm6.o = *rcx_2
float zmm7 = *(rcx_2 + 4) f/ zmm0.d
int128_t var_11f8
__builtin_memset(&var_11f8, 0, 0x120)
uint128_t var_1098 = data_142d3f660
int64_t* rbx_1 = *(arg1 + 0x10)
sub_1413aab70(&data_143ec4c60, rbx_1[0x2a9].d, 0, &var_11f8)
void* rax_5
float zmm6_1
rax_5, zmm6_1 = sub_141096d10(rbx_1)
int128_t var_10f8
var_10f8:8.q = *rax_5
float zmm4[0x4] = *(rbx_1 + 0x2a0)
float zmm0_1[0x4] = *(rbx_1 + 0x280)
int128_t zmm2 = *(rbx_1 + 0x290)
int128_t zmm3 = *(rbx_1 + 0x2b0)
zmm4[0] = zmm4[0] f- rbx_1[0xc4].d
float zmm1 = zmm4[1] f- *(rbx_1 + 0x624)
zmm4[0] = zmm4[0]
void* rax_6 = *(rsi + 0x100)
float var_10d8[0x4] = zmm0_1
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)

if (rax_6 != 0)
    rsi = rax_6

temp0_1[0] = zmm1
int128_t var_10c8 = zmm2
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
int64_t var_10b8 = temp0_2[0].q
int128_t var_10a8 = zmm3
zmm6_1 = zmm6_1 / _mm_cvtepi32_ps(zx.o(rdi))[0]
zmm0_1 = var_10b8:4.d
zmm0_1[0] = zmm0_1[0] + zmm7
var_10b8:4.d = zmm0_1[0]
var_10b8.d = zmm6_1 + zmm4[0]
float var_1098_1[0x4] = *rsi
int32_t var_1088[0x1c]
sub_1414dff10(rbx_1, &var_1088)
int64_t* rcx_8 = data_143f0f180
(*(*rcx_8 + 0x100))(rcx_8, *(*(arg1 + 8) + 0x98), &var_1018)
int64_t* rcx_9 = data_143f0f180
(*(*rcx_9 + 0x100))(rcx_9, *(*(arg1 + 8) + 0x90), &var_11f8)
void* rcx_10 = *(arg1 + 0x10)
int32_t var_1230 = *(arg1 + 0x190)
void* var_1238 = rcx_10
temp0_2[0].q = arg1 + 0x194
void* var_1228 = arg2
void* var_1220 = arg1 + 0x18
int64_t result = sub_1414ef900(rcx_10, arg2, &var_1238, 0)
__security_check_cookie(rax_1 ^ &var_1288)
return result
