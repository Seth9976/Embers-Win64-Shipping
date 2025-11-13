// 函数: sub_1417804d0
// 地址: 0x1417804d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x80)
int64_t* r15 = nullptr
int64_t r10 = sx.q(arg4)
void* rdx = nullptr
float (* r13_1)[0x4] = r10 * 0x1a0 + *(arg1 + 0x180)
int64_t r10_1 = r10 << 4
int32_t* rbx_2 = r10 * 0xc0 + *(arg1 + 0x60)
void* rax = *(r10_1 + r8)

if (*(rax + 0xc) u>= 2)
    rdx = rax

void* const rax_2 = nullptr
int64_t* r14 = *((zx.q((sbb.q(arg1, arg1, rdx != 0)).d) & 8) + r10_1 + r8)

if (rdx == 0)
    rax_2 = 8

int64_t* arg_10 = r14
int64_t* r12 = *(rax_2 + r10_1 + r8)
int64_t var_d8
sub_14175dbf0(&var_d8, r14)
float var_88[0x4]
sub_14175df90(&var_88, r14)
int64_t var_c8
sub_14175dbf0(&var_c8, r12)
uint128_t var_78
sub_14175df90(&var_78, r12)
char r8_1 = *(r12 + 0xc)
void* r9 = &data_1439b8e08
int64_t* r10_2 = nullptr

if (r8_1 u>= 1)
    r10_2 = r12

int64_t* rbp

if (r10_2 == 0)
    rbp = &data_1439b8e08
else
    int64_t* rcx_7 = nullptr
    
    if (r8_1 u>= 1)
        rcx_7 = r12
    
    rbp = *(*rcx_7 + 0x1d0) + sx.q(rcx_7[1].d) * 0xc

int64_t* rsi

if (r10_2 == 0)
    rsi = &data_1439b8e08
else
    int64_t* rcx_9 = nullptr
    
    if (r8_1 u>= 1)
        rcx_9 = r12
    
    rsi = *(*rcx_9 + 0x1b8) + sx.q(rcx_9[1].d) * 0xc

char r10_3 = *(r14 + 0xc)
int64_t* r8_2 = nullptr

if (r10_3 u>= 1)
    r8_2 = r14

int64_t* r11

if (r8_2 == 0)
    r11 = &data_1439b8e08
else
    int64_t* rcx_11 = nullptr
    
    if (r10_3 u>= 1)
        rcx_11 = r14
    
    r11 = *(*rcx_11 + 0x1d0) + sx.q(rcx_11[1].d) * 0xc

if (r8_2 != 0)
    int64_t* rcx_13 = nullptr
    
    if (r10_3 u>= 1)
        rcx_13 = r14
    
    r9 = *(*rcx_13 + 0x1b8) + sx.q(rcx_13[1].d) * 0xc

uint128_t zmm1 = var_78
float zmm2_1[0x4] = var_88
r13_1[0xc][0].q = var_d8
uint128_t zmm0 = zx.o(var_c8)
int32_t var_d0
(*r13_1)[0x32] = var_d0
float zmm3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
*(r13_1 + 0xcc) = zmm0.q
int32_t var_c0
(*r13_1)[0x35] = var_c0
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm3[0] = zmm3[0] f* zmm0.d
r13_1[0xe] = zmm2_1
r13_1[0xf] = zmm1
zmm0.d = (*r13_1)[0x3a].d f* (*r13_1)[0x3e]
zmm2_1[0] = zmm2_1[0] f* zmm1.d
zmm1.d = (*r13_1)[0x3b].d f* (*r13_1)[0x3f]
zmm3[0] = zmm3[0] + zmm2_1[0]
zmm3[0] = zmm3[0] f+ zmm0.d
zmm3[0] = zmm3[0] f+ zmm1.d

if (zmm3[0] < 0f)
    zmm0 = 0xbf800000
else
    zmm0 = 0x3f800000

r13_1[0xf] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), r13_1[0xf])
r13_1[0x10][0].q = *r9
(*r13_1)[0x42] = *(r9 + 8)
*(r13_1 + 0x10c) = *rsi
(*r13_1)[0x45] = rsi[1].d
*(r13_1 + 0x118) = *r11
r13_1[0x12][0] = r11[1].d
*(r13_1 + 0x124) = *rbp
(*r13_1)[0x4b] = rbp[1].d
int64_t* rax_19
int32_t zmm2_2[0x8]
int128_t zmm6_1
rax_19, zmm2_2, zmm6_1 = sub_141781940(r13_1)
*arg2 = 0
int32_t arg_20 = 0

if (arg5 s> 0)
    do
        int32_t rsi_1 = 0
        int32_t rbp_1 = 0
        
        if (rbx_2[4] != 0 || rbx_2[5] != 0 || rbx_2[6] != 0)
            rax_19.b = 1
        else
            rax_19.b = 0
        
        if (rbx_2[8] != 0 || rbx_2[9] != 0 || rbx_2[0xa] != 0)
            r14.b = 1
        else
            r14.b = 0
        
        if (rax_19.b != 0)
            zmm2_2[0].o = zmm6_1
            void var_68
            rax_19, r8_2, zmm2_2, zmm6_1 = sub_14176b960(r13_1, &var_68, zmm2_2, arg1 + 8, rbx_2)
            rsi_1 = *rax_19
            rbp_1 = *(rax_19 + 4)
        
        if (r14.b != 0)
            zmm2_2[0].o = zmm6_1
            void var_60
            rax_19, r8_2, zmm2_2, zmm6_1 =
                sub_14176e2d0(r13_1, &var_60, r8_2, arg1 + 8, zmm2_2, rbx_2)
            rsi_1 += *rax_19
            rbp_1 += *(rax_19 + 4)
        
        *(arg2 + 4) += rbp_1
        r14 = nullptr
        *arg2 += rsi_1
        int32_t rbp_2 = 0
        
        if (rbx_2[0x1a].b != 0 || *(rbx_2 + 0x69) != 0 || *(rbx_2 + 0x6a) != 0
                || *(rbx_2 + 0x6b) != 0 || rbx_2[0x1b].b != 0 || *(rbx_2 + 0x6d) != 0)
            rax_19.b = 1
        else
            rax_19.b = 0
        
        if (*(rbx_2 + 0xaa) != 0 || *(rbx_2 + 0xab) != 0 || rbx_2[0x2b].b != 0
                || *(rbx_2 + 0xad) != 0 || rbx_2[0x2a].b != 0 || *(rbx_2 + 0xa9) != 0)
            rsi_1.b = 1
        else
            rsi_1.b = 0
        
        if (rax_19.b != 0)
            zmm2_2[0].o = zmm6_1
            void var_58
            int32_t* rax_20
            rax_20, r8_2, zmm2_2, zmm6_1 = sub_14176be70(r13_1, &var_58, zmm2_2, arg1 + 8, rbx_2)
            rbp_2 = *rax_20
            r14 = zx.q(rax_20[1])
        
        if (rsi_1.b != 0)
            int32_t* var_f8_4 = rbx_2
            zmm2_2[0].o = zmm6_1
            void var_50
            int32_t* rax_21
            rax_21, r8_2, zmm2_2, zmm6_1 = sub_14176eb80(r13_1, &var_50, r8_2, arg1 + 8, zmm2_2)
            rbp_2 += *rax_21
            r14 = zx.q(r14.d + rax_21[1])
        
        *arg2 += rbp_2
        *(arg2 + 4) += r14.d
        
        if (*arg2 == 0 && data_1439b8de8 != 0)
            break
        
        rax_19 = zx.q(arg_20 + 1)
        arg_20 = rax_19.d
    while (rax_19.d s< arg5)
    
    r14 = arg_10

int64_t* rdx_13 = nullptr
zmm2_2[0].o = zmm6_1

if (*(r14 + 0xc) u>= 2)
    rdx_13 = r14

int64_t r8_3
int512_t zmm2_3
int128_t zmm6_2
r8_3, zmm2_3, zmm6_2 =
    sub_141781fc0(arg1, rdx_13, r8_2, &var_d8, &var_88, &r13_1[0xc], &r13_1[0xe], 1)
zmm2_3.o = zmm6_2

if (*(r12 + 0xc) u>= 2)
    r15 = r12

sub_141781fc0(arg1, r15, r8_3, &var_c8, &var_78, &(*r13_1)[0x33], &r13_1[0xf], 1)
return arg2
