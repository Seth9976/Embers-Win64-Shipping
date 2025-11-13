// 函数: sub_140a18ed0
// 地址: 0x140a18ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
char var_228[0x1ff]
char (* rax_2)[0x1ff] = &var_228
void* const r8 = &data_142e4d950
int64_t i_5 = 4
int16_t var_238 = 1
char var_236 = 1
int64_t i_4 = 4
int128_t zmm0
int128_t zmm1
int64_t i

do
    rax_2 = &(*rax_2)[0x80]
    zmm0 = *r8
    zmm1 = *(r8 + 0x10)
    r8 += 0x80
    *(rax_2 - 0x80) = zmm0
    zmm0 = *(r8 - 0x60)
    *(rax_2 - 0x70) = zmm1
    zmm1 = *(r8 - 0x50)
    *(rax_2 - 0x60) = zmm0
    zmm0 = *(r8 - 0x40)
    *(rax_2 - 0x50) = zmm1
    zmm1 = *(r8 - 0x30)
    *(rax_2 - 0x40) = zmm0
    zmm0 = *(r8 - 0x20)
    *(rax_2 - 0x30) = zmm1
    zmm1 = *(r8 - 0x10)
    *(rax_2 - 0x20) = zmm0
    *(rax_2 - 0x10) = zmm1
    i = i_4
    i_4 -= 1
while (i != 1)
int64_t rsi = sx.q(arg1[1].d)

if (rsi.d s< 3)
    arg1[1].d = 3
    
    if (*(arg1 + 0xc) s< 3)
        sub_1405daba0(arg1)
    
    memset(rsi + *arg1, 0, sx.q(3 - rsi.d))
else if (rsi.d s> 3 && (rsi - 3).d != 0)
    arg1[1].d = 3
    sub_1405dac10(arg1)

int64_t rsi_1 = sx.q(arg2[1].d)

if (rsi_1.d s< 0x200)
    arg2[1].d = 0x200
    
    if (*(arg2 + 0xc) s< 0x200)
        sub_1405daba0(arg2)
    
    memset(rsi_1 + *arg2, 0, sx.q(0x200 - rsi_1.d))
else if (rsi_1.d s> 0x200 && (rsi_1 - 0x200).d != 0)
    arg2[1].d = 0x200
    sub_1405dac10(arg2)

uint64_t rdx_2 = 0
int32_t i_1 = 0
int64_t r8_3 = 0

do
    i_1 += 3
    char rax_5 = *(&var_238 + r8_3)
    r8_3 += 3
    *(r8_3 + *arg1 - 3) = rax_5
    void var_23a
    *(*arg1 + r8_3 - 2) = *(&var_23a + r8_3)
    void var_239
    *(*arg1 + r8_3 - 1) = *(&var_239 + r8_3)
while (i_1 u< 3)

uint64_t result = *arg2
void var_29

if ((result u> &var_29 || result + 0x1ff u< &var_228) && (result u> arg2 || result + 0x1ff u< arg2))
    char (* rcx_13)[0x1ff] = &var_228
    int64_t i_2
    
    do
        result += 0x80
        zmm0 = *rcx_13
        zmm1 = *(rcx_13 + 0x10)
        rcx_13 = &(*rcx_13)[0x80]
        *(result - 0x80) = zmm0
        zmm0 = *(rcx_13 - 0x60)
        *(result - 0x70) = zmm1
        zmm1 = *(rcx_13 - 0x50)
        *(result - 0x60) = zmm0
        zmm0 = *(rcx_13 - 0x40)
        *(result - 0x50) = zmm1
        zmm1 = *(rcx_13 - 0x30)
        *(result - 0x40) = zmm0
        zmm0 = *(rcx_13 - 0x20)
        *(result - 0x30) = zmm1
        zmm1 = *(rcx_13 - 0x10)
        *(result - 0x20) = zmm0
        *(result - 0x10) = zmm1
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    
    do
        rdx_2 = zx.q(rdx_2.d + 1)
    while (rdx_2.d u< 0x200)
else
    for (int32_t i_3 = 0; i_3 u< 0x200; )
        result = zx.q(var_228[rdx_2])
        rdx_2 += 1
        i_3 += 1
        *(rdx_2 + *arg2 - 1) = result.b

__security_check_cookie(rax_1 ^ &var_258)
return result
