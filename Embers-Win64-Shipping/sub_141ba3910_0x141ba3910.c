// 函数: sub_141ba3910
// 地址: 0x141ba3910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg1[0xc9]
int64_t rax = r12

if (arg2 != 0)
    rax = arg2

arg1[0xc9] = rax
uint128_t zmm0
zmm0.q = data_143dbb3b8 f- data_143de5880
uint128_t zmm7 = zx.o(data_14399f938)
int64_t rax_1 = *arg1
void* r15 = data_143f5e920
int64_t rbx = *(arg3 + 0x58)
float temp0[0x4] = _mm_cvtpd_ps(zmm0)
zmm7 = _mm_cvtpd_ps(zmm7)
int64_t* rax_2 = (*(rax_1 + 0x1e0))()
int64_t var_f8 = arg1[0xcf]
int32_t var_d8 = 0x3f800000
int32_t var_d4
int32_t rcx_3 = (var_d4 & 0xffffffe8) | 8
int64_t var_108 = rbx
int64_t* var_100 = rax_2
int32_t var_f0 = 0xffffffff
int64_t var_ec = 0

if (rax_2 != 0 && (*(*rax_2 + 0x240))(rax_2, rax_2) != 0)
    uint32_t rax_5
    
    if (data_143de5480 != 0)
        rax_5.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_5.b != 0)
        rcx_3 |= 0x10

float var_e4 = temp0[0]
int32_t var_d4_2 = rcx_3 | 0x12
int32_t var_e0 = zmm7.d
float var_dc = temp0[0]
void var_c8
sub_1422d9ba0(&var_c8, &var_108)
float zmm0_1[0x4] = sub_14075a020()
int32_t var_a0
int32_t var_a0_1 = var_a0 | 0x40000
void* rax_7 = (*(*arg1 + 0x1d8))(arg1, &var_c8)
void*** rax_8 = j_sub_140a82f30(0x20)
void*** rsi = rax_8
float var_118

if (rax_8 == 0)
    rsi = nullptr
else
    var_118 = zmm0_1[0]
    sub_1420d8740(rax_8, &var_c8, zmm0_1[0], 0, var_118)
    *rsi = &data_1432c1410

void*** var_40 = rsi
*(rax_7 + 0xda0) = *(rax_7 + 0x258)
*(rax_7 + 0xda4) = *(rax_7 + 0x25c)
*(rax_7 + 0xda8) = *(rax_7 + 0x260)
*(rax_7 + 0xdac) = *(rax_7 + 0x264)

if ((arg1[0xa].b & 1) != 0)
    sub_142403540(arg3, &data_14399f5e0)

sub_142403540(arg3, &arg1[0xbe])
data_14399fa50 -= 1
int64_t* rax_13 = sub_142006940()
int64_t r9 = *rax_13
(*(r9 + 0x40))(rax_13, arg3, &var_c8, r9, var_118)
int64_t* rcx_14 = *(r15 + 0x40)

if (rcx_14 != 0 && (rcx_14[0x82].d != 0 || rcx_14[0x84].d != 0))
    sub_141f124a0(rcx_14)

int64_t* rcx_15 = *(r15 + 0x50)

if (rcx_15 != 0 && (rcx_15[0x82].d != 0 || rcx_15[0x84].d != 0))
    sub_141f124a0(rcx_15)

arg1[0xc9] = r12
return sub_1422dbba0(&var_c8)
