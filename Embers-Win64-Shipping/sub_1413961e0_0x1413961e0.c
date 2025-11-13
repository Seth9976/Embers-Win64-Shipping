// 函数: sub_1413961e0
// 地址: 0x1413961e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_e0 = 1
void* var_d8 = arg4
char var_c4 = 1
int64_t var_b0 = 0
int64_t* var_e8 = &var_d8
int32_t var_a8 = 0
int64_t var_90 = 0
int128_t var_c0 = var_e8.o
int32_t var_88 = 0
int64_t rbx = 0x4f1a08f64cae0c3d
int64_t var_78
__builtin_memset(&var_78, 0, 0x18)
int64_t zmm1 = (*(arg4 + 0x18)).q
int32_t var_c8 = 0xc
var_e8 = zmm1
int64_t var_80 = &var_e8[-0x4b6e805d4633e7f] ^ 0x4f1a08f64cae0c3d
int64_t** var_f8
sub_1419a2ec0(*(arg3 + 0x5150), &var_f8, &data_143ec5770, 0)
int64_t** rcx_3 = var_f8
int64_t* rax_2 = nullptr

if (rcx_3 != 0)
    int64_t rdx_1 = sx.q(*(rcx_3 + 0x10c))
    int32_t var_f0
    int64_t* rdi_1 = *(var_f0.q + 0x10)
    int64_t* rax_4 = rdi_1[3]
    
    if (rax_4[rdx_1] == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rax_4 = rdi_1[3]
    
    rax_2 = rax_4[rdx_1]

var_e8 = rax_2
int64_t** r9 = &var_e8
int32_t var_f0_1 = 1
var_f8 = &var_e8
int64_t i = 0
int128_t var_a0 = var_f8.o

do
    int64_t* rax_5 = *r9
    r9 = &r9[1]
    i += 1
    var_f8 = (*(rax_5 + 0x18)).q
    rbx ^= &var_f8[rbx * 8] + (rbx u>> 2) - -0x9e3779b9
while (i != 1)

int64_t var_70 = rbx
void*** result = sub_141972650(arg2, &var_c8)
void* rcx_10 = *(arg1 + 0xa0)
int128_t* rdi_2 = *(rcx_10 + 0x47e8)
void* r14_4 = &rdi_2[sx.q(*(rcx_10 + 0x47f0))]

while (rdi_2 != r14_4)
    int96_t zmm0_2 = (*rdi_2).12
    void* rax_9 = zmm0_2.q
    int64_t r13_1 = *(arg3 + 0x51e8)
    int32_t r12_1 = *(rax_9 + 0x78)
    var_f8.d = zx.d(*(rax_9 + 0x7c))
    void*** rax_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_12 = &rax_13[0xc]
    
    if (rcx_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x68)
        rax_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_12 = &rax_13[0xc]
    
    *(arg2 + 0x30) = rcx_12
    rdi_2 = &rdi_2[1]
    void** rcx_14 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rcx_14 = rax_13
    *(arg2 + 8) = &rax_13[1]
    rax_13[1] = 0
    *rax_13 = &data_142f18bf8
    *(rax_13 + 0x1c) = zmm0_2:8.d
    rax_13[4].d = var_f8.d
    rax_13[2] = r13_1
    rax_13[3].d = 0
    *(rax_13 + 0x24) = 0
    rax_13[5] = result
    __builtin_memset(&rax_13[6], 0, 0x14)
    rax_13[9] = 0
    rax_13[0xa].d = r12_1
    *(rax_13 + 0x54) = 0
    rax_13[0xb] = 0

__security_check_cookie(rax_1 ^ &var_118)
return result
