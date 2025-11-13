// 函数: sub_14283867c
// 地址: 0x14283867c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rdi = 0
int32_t i = 0
int32_t i_4
int32_t* rcx = &i_4

do
    *rcx = i
    i += 1
    rcx = &rcx[1]
while (i s< 4)

void var_7c
void* rcx_1 = &var_7c
int32_t rax_2 = 0x15
int128_t var_a8
__builtin_memcpy(&var_a8, 
    "\x05\x00\x00\x00\x06\x00\x00\x00\x07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00\x"
"0b\x00\x00\x00\x0d\x00\x00\x00\x0f\x00\x00\x00\x10\x00\x00\x00\x11\x00\x00\x00", 
    0x2c)
int64_t i_5 = 8
int64_t i_1

do
    *rcx_1 = rax_2
    rax_2 += 1
    rcx_1 += 4
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
int32_t var_30 = 0xffffffff
int32_t i_2 = 0
int32_t var_5c = 0x1e
uint128_t var_58 = (*U"!"#$&./0")[0].o
uint128_t var_48 = (*U"!"#$&./0")[4].o
int32_t var_38 = 0x3a
int32_t var_34 = 0x3b
uint128_t zmm0

if (*(arg1 + 0xd90) s> 0)
    void* rsi_1 = arg1 + 0x790
    
    do
        zmm0 = sub_142837e50(rsi_1, *(arg1 + 8), arg1)
        i_2 += 1
        int64_t rax_4 = zx.q(*rsi_1) + 1
        rsi_1 += 0x18
        int64_t* rax_5 = rax_4 << 5
        zmm0.q = fconvert.d(zmm0.d)
        zmm0.q = zmm0.q f+ *(rax_5 + arg1)
        *(rax_5 + arg1) = zmm0.q
    while (i_2 s< *(arg1 + 0xd90))

void* rcx_3 = *(*(arg1 + 8) + 0x1b0)
double zmm2

if (rcx_3 == 0)
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 6))).d f- 60f
    zmm2 = _mm_cvtps_pd(zmm0.q) f* *(arg1 + 0x718) + 6000.0
else
    zmm0.q = *(arg1 + 0x718) f/ 100.0
    uint128_t zmm1 = zx.o(*(rcx_3 + 0x1f0))
    zmm2 = (*(rcx_3 + (zx.q(*(arg1 + 6)) << 3) + 0x10) f- zmm1.q) f* zmm0.q f+ zmm1.q

*(arg1 + 0x778) = zmm2
int32_t i_3 = i_4

while (i_3 != 0xffffffff)
    sub_14283970c(arg1, i_3)
    int32_t var_b4[0x3]
    i_3 = var_b4[rdi]
    rdi += 1

*(arg1 + 0xdd8) = sub_142838e40(arg1)
__security_check_cookie(rax_1 ^ &var_d8)
return 0
