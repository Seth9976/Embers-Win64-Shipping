// 函数: sub_142400540
// 地址: 0x142400540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10 = *(*arg1 + 0xd0)
int64_t r14

if (arg4 u<= 0x14 || arg3 != arg4 - 1)
    r14.b = 0
else
    r14.b = 1

int64_t* rdi = &arg2[2]
int16_t* const r15 = &data_142d40450
int16_t* const rcx

if (arg2[3].d == 0)
    rcx = &data_142d40450
else
    rcx = *rdi

int32_t rax_3 = sub_140a54510(rcx, &data_142e5cee4)
void* rcx_1 = *arg1
int32_t rax_4 = arg2[4].d
int32_t arg_20 = rax_4
bool arg_18 = rax_3 == 0
int32_t r12 = 0
int32_t rcx_2 = *(*(rcx_1 + 0x118) + 0x68)
int32_t arg_8 = rcx_2

if (arg3 == arg_10)
    int32_t zmm0 = *arg1[3]
    void* rax_7 = arg1[1]
    *(rax_7 + 0x38) = *arg1[2]
    *(rax_7 + 0x3c) = zmm0
    void var_bc
    sub_140acc920(&var_bc, &data_143a304cc)
    int64_t* rcx_4 = arg1[1]
    (*(*rcx_4 + 0x20))(rcx_4, &var_bc)
    *(arg1[1] + 0x14) = 0
    int64_t* rcx_5 = arg1[1]
    int64_t r8 = *rcx_5
    void* rsi_1 = *(*arg1[4] + 0x260)
    int32_t* rdx_3 = arg1[7]
    int32_t* rax_12 = arg1[6]
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(*arg1[5]))
    int512_t zmm3
    zmm3.o = *rdx_3
    zmm2.d = zmm2.d f+ *rax_12
    (*(r8 + 8))(rcx_5, rsi_1, zmm2, zmm3)
    
    if (*(rsi_1 + 0xa0) == 1)
        sub_14240e030(rsi_1, 0)
    
    rax_4 = data_143a304c4
    rcx_2 = arg_8
    arg_20 = rax_4

char var_c8

if (arg_18 != 0)
    var_c8 = rax_4.b
    arg_20 = rcx_2
    arg_8 = rax_4

void var_c4
sub_1424232b0(*arg1[4], *arg1[8], arg2, &arg_18, &var_c4, *arg1[9], var_c8)
uint128_t zmm2_1
zmm2_1.d = arg_18.d.d f/ *arg1[0xa]
arg_18.d = zmm2_1.d

if (r14.b != 0)
    zmm2_1.d = zmm2_1.d f* 0.5f
    r12 = int.d(_mm_min_ss(*arg1[2] * 0.5f f- zmm2_1.d, *arg1[0xb] + 6f))

void var_ac
sub_140acc920(&var_ac, &arg_20)
int64_t* rcx_10 = arg1[0xc]
(*(*rcx_10 + 0x20))(rcx_10, &var_ac, zmm2_1)
int16_t* const rcx_11

if (rdi[1].d == 0)
    rcx_11 = &data_142d40450
else
    rcx_11 = *rdi

int64_t* rdx_9 = arg2

if (sub_140a54510(rcx_11, &data_142e5cee4) == 0)
    rdx_9 = rdi

void var_88
int64_t* rax_20 = sub_140aae420(&var_88, rdx_9)
void* r8_2 = arg1[0xc]
int64_t rdx_10 = *(r8_2 + 0x130)
*(r8_2 + 0x130) = *rax_20
*rax_20 = rdx_10
int64_t rdx_11 = *(r8_2 + 0x138)
*(r8_2 + 0x138) = rax_20[1]
rax_20[1] = rdx_11
*(r8_2 + 0x140) = rax_20[2].d
int64_t* var_80

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t rax_24 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (rax_24 == 1)
            (*(*var_80 + 8))(var_80, 1)

int64_t* r10 = arg1[0xc]
int64_t r9_1 = *r10
int512_t zmm3_1
zmm3_1.o = *arg1[7]
void* rsi_3 = *(*arg1[4] + 0x260)
zmm2_1.d = _mm_cvtepi32_ps(zx.o(*arg1[5] + r12)).d f+ *arg1[6]
(*(r9_1 + 8))(r10, rsi_3, zmm2_1, zmm3_1)

if (*(rsi_3 + 0xa0) == 1)
    sub_14240e030(rsi_3, 0)

int16_t* const rcx_20

if (rdi[1].d == 0)
    rcx_20 = &data_142d40450
else
    rcx_20 = *rdi

int64_t* r8_4 = rdi

if (sub_140a54510(rcx_20, &data_142e5cee4) == 0)
    r8_4 = arg2

void var_c0
int512_t zmm3_2
float zmm6
zmm3_2, zmm6 = sub_1424232b0(*arg1[4], *arg1[8], r8_4, &arg_10, &var_c0, *arg1[9])
float zmm2_2 = arg_10
uint128_t zmm1_2
zmm1_2.d = _mm_cvtepi32_ps(zx.o(*arg1[5])).d f+ *arg1[6]
zmm1_2.d = zmm1_2.d f+ zmm6
zmm6 = zmm1_2.d + *arg1[0xb]
zmm2_2 = zmm2_2 / *arg1[0xa] + zmm6 f- _mm_cvtepi32_ps(zx.o(*(*arg1[4] + 0x40))).d

if (not(zmm2_2 <= 0f))
    zmm1_2.d = zmm1_2.d f+ arg_18.d
    _mm_max_ss(zmm6 - zmm2_2, zmm1_2.d)

void var_9c
sub_140acc920(&var_9c, &arg_8)
int64_t* rcx_25 = arg1[0xc]
(*(*rcx_25 + 0x20))(rcx_25, &var_9c, zmm2_2)

if (rdi[1].d != 0)
    r15 = *rdi

if (sub_140a54510(r15, &data_142e5cee4) == 0)
    rdi = arg2

void var_70
int64_t* rax_39 = sub_140aae420(&var_70, rdi)
void* r8_5 = arg1[0xc]
int64_t rdx_20 = *(r8_5 + 0x130)
*(r8_5 + 0x130) = *rax_39
*rax_39 = rdx_20
int64_t rdx_21 = *(r8_5 + 0x138)
*(r8_5 + 0x138) = rax_39[1]
rax_39[1] = rdx_21
*(r8_5 + 0x140) = rax_39[2].d
int64_t* var_68

if (var_68 != 0)
    var_68[1].d -= 1
    
    if (var_68[1].d == 1)
        (**var_68)(var_68)
        int32_t r14_1 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (r14_1 == 1)
            (*(*var_68 + 8))(var_68, zx.q(r14_1))

int64_t* rcx_32 = arg1[0xc]
int64_t r8_6 = *rcx_32
void* rdi_2 = *(*arg1[4] + 0x260)
zmm3_2.o = *arg1[7]
(*(r8_6 + 8))(rcx_32, rdi_2, r8_6, zmm3_2)

if (*(rdi_2 + 0xa0) == 1)
    sub_14240e030(rdi_2, 0)

int32_t* rcx_34 = arg1[7]
float* result = arg1[3]
*rcx_34 = *rcx_34 - *result
return result
