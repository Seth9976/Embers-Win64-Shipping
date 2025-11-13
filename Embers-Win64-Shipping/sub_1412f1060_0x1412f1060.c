// 函数: sub_1412f1060
// 地址: 0x1412f1060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t var_94
__builtin_memset(&var_94, 0, 0x43)
void* rcx = arg2[8]
int128_t var_f0
__builtin_memset(&var_f0, 0, 0x30)
int128_t var_a8 = zx.o(0)
int16_t var_50 = 0
sub_140fdc870(rcx, &var_f0)
int64_t var_c0 = data_14395da00
int64_t var_b8 = data_14395da18
int64_t var_b0 = data_14395d9e8
int32_t var_98 = 0
void* var_118
sub_1419a2ec0(arg2[0xc], &var_118, &data_143ed5e80, 0)
void* var_100
sub_1419a2ec0(arg2[0xc], &var_100, &data_143eb72f0, 0)
void* r13 = var_118
void* var_110
void* r12 = var_110
var_f0.q = data_1439c9210
int64_t rax_6 = 0

if (r13 != 0)
    int64_t rdx_3 = sx.q(*(r13 + 0x10c))
    int64_t* rdi_1 = *(r12 + 0x10)
    int64_t rax_7 = rdi_1[3]
    
    if (*(rax_7 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rdi_1, rdx_3.d)
        rax_7 = rdi_1[3]
    
    rax_6 = *(rax_7 + (rdx_3 << 3))

void* rdi_2 = var_100
var_f0:8.q = rax_6
int64_t rax_8 = 0

if (rdi_2 != 0)
    int64_t rdx_4 = sx.q(*(rdi_2 + 0x10c))
    void* var_f8
    int64_t* rsi_2 = *(var_f8 + 0x10)
    int64_t rax_10 = rsi_2[3]
    
    if (*(rax_10 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(rsi_2, rdx_4.d)
        rax_10 = rsi_2[3]
    
    rax_8 = *(rax_10 + (rdx_4 << 3))

int128_t var_d0
var_d0.q = rax_8
sub_1419870b0(arg2[8], &var_f0, 2)
void* rsi_3 = arg2[8]
int64_t r14_2 = *(rsi_3 + 0x1a0)
int64_t r9_1 = *(*arg2 + 0x10)
int64_t var_108 = r14_2
sub_141080ac0(rdi_2, rsi_3, r14_2, r9_1)
int64_t* rax_11 = data_1439b67f0

if (arg2[0xb].d s>= 3)
    rax_11 = data_1439b6808

j_sub_14137eb70(rdi_2 + 0x118, rsi_3, r14_2, arg2, rax_11, 0, nullptr)
int64_t* var_138
var_138.d = 0xf
sub_1412f0490(rdi_2 + 0x210, rsi_3, &var_108, *(*arg2 + 0x1548), var_138.d)
void* rax_13 = *arg2
float zmm2 = 0.5f - _mm_max_ss(*(rax_13 + 0x1280) * 0.0199999996f, 0)
float zmm0 = *(rax_13 + 0x127c)

if (not(zmm0 > 0f))
    zmm0 = 100000000f

var_118.d = zmm0
var_110.d = zmm2 * 10f
var_118:4.d = 0x41200000
var_110:4.d = 0
var_138.d = 0
sub_1405d0e10(rsi_3, &var_108, rdi_2 + 0x212, &var_118, var_138.d)
*arg1 = r13
arg1[1] = r12
__security_check_cookie(rax_1 ^ &var_158)
return arg1
