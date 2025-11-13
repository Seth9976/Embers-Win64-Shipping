// 函数: sub_141735ac0
// 地址: 0x141735ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0

if (arg1 + 0x20 != arg1 + 0x10)
    int64_t rdi_1 = sx.q(*(arg1 + 0x18))
    int32_t r8_1 = *(arg1 + 0x2c)
    int64_t r15_1 = *(arg1 + 0x10)
    *(arg1 + 0x28) = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(arg1 + 0x20, rdi_1.d, r8_1)
        memcpy(*(arg1 + 0x20), r15_1, (rdi_1 << 3).d)
    else
        *(arg1 + 0x2c) = 0

int32_t rdx_3 = *(arg1 + 0x28)
int64_t rcx_2 = *(arg1 + 0x20)
int64_t performanceCount
int64_t* arg_18 = &performanceCount
sub_1416f47e0(rcx_2, rdx_3)
int64_t* rdi_2 = *(arg1 + 0x20)
uint64_t rsi_2 = sx.q(*(arg1 + 0x28)) << 3 u>> 3

if (rdi_2 u> &rdi_2[sx.q(*(arg1 + 0x28))])
    rsi_2 = 0

if (rsi_2 != 0)
    do
        int64_t* rcx_3 = *rdi_2
        (*(*rcx_3 + 0x18))(rcx_3, arg2)
        rbx += 1
        rdi_2 = &rdi_2[1]
    while (rbx != rsi_2)

int64_t** rbx_1 = *(arg1 + 8)
sub_140b19e60()
int64_t var_68 = (zx.o(0)).q
QueryPerformanceCounter(&performanceCount)
uint128_t zmm7 = 0x4170000000000000
int64_t* result = &var_68
double var_60 = float.d(performanceCount) f* data_143d796f8 f+ zmm7.q
QueryPerformanceCounter(&performanceCount)
void* rcx_6 = rbx_1[1]
double var_60_1 = float.d(performanceCount) f* data_143d796f8 f+ zmm7.q

if (*(rcx_6 + 0x79) != 0)
    int512_t zmm1
    int128_t zmm6_1
    zmm1, zmm6_1 = sub_141781e90(rcx_6)
    zmm1.o = zmm6_1
    int64_t rdx_4
    int512_t zmm1_1
    int128_t zmm6_2
    rdx_4, zmm1_1, zmm6_2 = sub_141781830(rbx_1[1])
    int64_t* rcx_8 = *rbx_1
    performanceCount = rbx_1[1]
    zmm1_1.o = zmm6_2
    arg_18 = &rbx_1[2]
    void arg_20
    void* var_88_1 = &arg_20
    zmm7 = sub_141748d80(rcx_8, rdx_4, &arg_18, &performanceCount)

QueryPerformanceCounter(&performanceCount)
arg2.q = float.d(performanceCount)
arg2.q = arg2.q f* data_143d796f8
arg2.q = arg2.q f+ zmm7.q
*result = arg2.q - var_60_1 f+ *result
int64_t r8_5 = data_143ef7288
int64_t var_60_2 = arg2.q

if (r8_5 == 0)
    return result

int64_t rax_7 = sx.q(data_143ef7290)
int64_t var_80_1 = (&data_1439b8da8)[rax_7]
double var_88_2 = _mm_cvtps_pd(*((rax_7 << 2) + 0x142fc4b08)) f* var_68
return sub_140b1f700(&data_1439a8bd0, u"%s - %s: %f%s", r8_5)
