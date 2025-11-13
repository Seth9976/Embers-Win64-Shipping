// 函数: sub_141bcc030
// 地址: 0x141bcc030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = sub_140f6be50(arg1)
int64_t* r13 = arg1[0xdc]

if (r13 == 0 || r13[1].d s<= 0)
    __builtin_memset(arg2, 0, 0x19)
    return arg2

int128_t zmm0_1
int512_t zmm6
zmm0_1, zmm6 = sub_140f75d80(arg1, zmm0)
zmm6.o = zmm0_1
int32_t zmm0_2
int64_t zmm6_1
zmm0_2, zmm6_1 = sub_140f76110(arg1, zmm0_1.d)
void var_c0
sub_140f66450(&var_c0, arg1[0x9b].d, zmm0_2, zmm6_1.d)
void var_d0
sub_140f66410(&var_d0, arg1[0x9b].d, arg3)
int32_t rdi = r13[1].d
int32_t arg_8 = rdi
int32_t rax_1 = (*(*arg1 + 0x268))(arg1)
double zmm2_1 = arg1[0x7d]
zmm6_1 = (zx.o(0)).q
int32_t temp1 = mods.dp.d(sx.q(rdi), rax_1)
uint64_t zmm7 = _mm_cvtepi32_pd(zx.q(rax_1)).q

if (temp1 != 0)
    rdi += rax_1 - temp1

int32_t var_cc
int32_t var_bc
double zmm1_1
double zmm8[0x2]

if (zmm2_1 >= 0.0)
    double zmm0_3[0x2] = var_cc
    zmm0_3[0].d = zmm0_3[0].d f/ var_bc
    zmm8 = _mm_cvtepi32_pd(zx.o(rdi)[0])
    zmm1_1 = _mm_cvtps_pd(zmm0_3[0]).q f* zmm7
    zmm8[0] = zmm8[0] - zmm1_1
    zmm8 = _mm_min_sd(zmm8[0], zmm2_1)
else
    zmm8 = zx.o(0)

int128_t zmm12 = arg3[2]
void var_e0
sub_140f66400(&var_e0, arg1[0x9b].d)
zmm8[0] = zmm8[0] f/ zmm7
int128_t zmm9 = _mm_cvtpd_ps(zmm8)
zmm1_1.d = zmm9.q.d f+ zmm9.d
zmm1_1.d = zmm1_1.d f- 0.5f
int32_t rax_7 = (int.d(zmm1_1.d) s>> 1) * rax_1

if (rax_7 s<= 0)
    rax_7 = 0

sub_140780c40(&arg1[0xb8], &arg1[0xb5])
arg1[0xb6].d = 0

if (*(arg1 + 0x5b4) != 0)
    sub_1405c5570(&arg1[0xb5], 0)

int64_t* r15
r15.b = 0
zmm7 = 0x3f800000
void* rdi_1
rdi_1.b = 1
int32_t rbp
rbp.b = 0
zmm2_1 = var_cc
char r12 = 1
int32_t rbx_1 = rax_7

while (rbx_1 s< arg_8)
    r15 = *r13 + (sx.q(rbx_1) << 3)
    int32_t var_dc
    
    if (rdi_1.b != 0)
        rdi_1.b = 0
        double zmm0_4 = zmm7
        
        if (r12 != 0)
            r12 = 0
            zmm0_4 = zmm9.q
            truncf(zmm0_4.d)
            zmm2_1 = var_cc
            zmm1_1.d = zmm9.q.d f- zmm0_4.d
            zmm0_4.d = zmm7.d f- zmm1_1.d
        
        zmm1_1.d = zmm0_4.d f* var_bc
        zmm1_1.d = zmm1_1.d f+ var_dc
        var_dc = zmm1_1.d
        
        if (not(zmm1_1.d f<= zmm2_1.d))
            zmm1_1.d = zmm1_1.d f- zmm2_1.d
            zmm1_1.d = zmm1_1.d f/ var_bc
            zmm0_4.d = zmm7.d f- zmm1_1.d
            _mm_max_ss(zmm0_4.d, 0)
    
    zmm6_1, zmm7 = sub_141ba9d70(arg1, r15, rbx_1, rax_7, zmm12.d)
    int32_t var_d8
    int32_t var_b8
    zmm1_1.d = var_d8.d f+ var_b8
    var_d8 = zmm1_1.d
    r15.b = rbx_1 s>= arg_8 - 1
    zmm1_1.d = zmm1_1.d f+ var_b8
    int32_t var_c8
    
    if (not(zmm1_1.d f<= var_c8))
        var_d8 = 0
        rdi_1.b = 1
    
    zmm2_1 = var_cc
    
    if (rbx_1 s>= arg_8 - 1 || rdi_1.b != 0)
        zmm1_1.d = zmm2_1.d f+ 0.00100000005f
        rbp.b = var_dc.d f> zmm1_1.d
    
    rbx_1 += 1
    
    if (rbp.b != 0)
        break

sub_141bcb4a0(&arg1[0xa0])
sub_141bf6360(&arg1[0xa0])
float zmm1_2[0x4] = zx.o(0)
zmm1_2[0] = fconvert.s(zmm6_1)
int32_t rcx_15 = int.d(zmm1_2[0])

if (rcx_15 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_15)).d f== zmm1_2[0]))
    zmm1_2 = _mm_cvtepi32_ps(zx.o(rcx_15
        + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1_2, zmm1_2[0].q)) & 1) ^ 1)))

zmm1_2[0] = zmm1_2[0] f* var_bc
int32_t rax_12

if (r15.b == 0 || rbp.b != 0)
    rax_12.b = 0
else
    rax_12.b = 1

uint128_t zmm0_5 = _mm_cvtps_pd(zmm1_2[0].q)
arg2[3].b = rax_12.b
*arg2 = zmm8.q
arg2[2] = zmm6_1
arg2[1] = zmm0_5.q
return arg2
