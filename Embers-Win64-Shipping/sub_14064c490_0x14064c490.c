// 函数: sub_14064c490
// 地址: 0x14064c490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = 0
int64_t var_70 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_78
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

void var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void* rax_4 = *(arg2 + 0x38)
void* rbp = &var_98
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rbp = rax_4

void var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_6 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_6[4]
    sub_140d30490(arg2, &var_88, r8_6)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_6 = *(arg2 + 0x38)
void* r10 = &var_88

if (rax_6 != 0)
    r10 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
char r8_5 = 0
*(arg2 + 0x20) = rdi + rax_7
void* i = *rsi
int64_t result = sx.q(rsi[1].d)
uint128_t zmm6 = data_143dbb1f8
uint128_t zmm5 = data_143dbb1fc
uint128_t zmm7 = zmm6
int128_t zmm4 = data_143dbb200
uint128_t zmm8 = zmm5
int128_t zmm9 = zmm4
uint128_t zmm0_1
int128_t zmm1
uint128_t zmm2

for (void* r9 = i + result * 0xc; i != r9; i += 0xc)
    if (r8_5 == 0)
        zmm0_1 = zx.o(*i)
        r8_5 = 1
        result = zx.q(*(i + 8))
        zmm6 = zmm0_1
        zmm7 = zmm6
        zmm5 = zmm0_1.q:4.d
        zmm8 = zmm5
        zmm4 = result.d
        zmm9 = zmm4
    else
        zmm2 = *i
        
        if (not(zmm7.d f<= zmm2.d))
            zmm7 = zmm2
        
        zmm0_1 = *(i + 4)
        
        if (not(zmm8.d f<= zmm0_1.d))
            zmm8 = zmm0_1
        
        zmm1 = *(i + 8)
        
        if (not(zmm9.d f<= zmm1.d))
            zmm9 = zmm1
        
        if (not(zmm6.d f>= zmm2.d))
            zmm6 = zmm2
        
        if (not(zmm5.d f>= zmm0_1.d))
            zmm5 = zmm0_1
        
        if (not(zmm4.d f>= zmm1.d))
            zmm4 = zmm1

zmm0_1.d = zmm6.d f+ zmm7.d
zmm2.d = zmm5.d f+ zmm8.d
zmm1.d = zmm4.d f+ zmm9.d
zmm6.d = zmm6.d f- zmm7.d
zmm5.d = zmm5.d f- zmm8.d
zmm4.d = zmm4.d f- zmm9.d
zmm0_1.d = zmm0_1.d f* 0.5f
zmm2.d = zmm2.d f* 0.5f
*rbp = zmm0_1.d
zmm1.d = zmm1.d f* 0.5f
*(rbp + 4) = zmm2.d
zmm6.d = zmm6.d f* 0.5f
*(rbp + 8) = zmm1.d
zmm5.d = zmm5.d f* 0.5f
*r10 = zmm6.d
zmm4.d = zmm4.d f* 0.5f
*(r10 + 4) = zmm5.d
*(r10 + 8) = zmm4.d
int64_t rcx_4 = var_78

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
