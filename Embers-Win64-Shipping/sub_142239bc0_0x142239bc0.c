// 函数: sub_142239bc0
// 地址: 0x142239bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
int32_t rax = arg2[1].d
arg1[1].d = rax
int64_t zmm0 = *arg1
arg1[2] = arg3
*(arg1 + 0x44) = arg4
int64_t var_28 = zmm0
int32_t var_20 = rax
sub_142253250(&var_28, arg1 + 0x1c, &arg1[3], &arg1[4])
float zmm4[0x4] = *(arg1[2] + 0x20)
uint32_t temp0[0x4] = _mm_and_ps(zmm4, 0x7fffffff)
float zmm3[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
bool cond:0 = temp0[0] f> 9.99999975e-05f
float zmm2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)

if (not(cond:0) && not(_mm_and_ps(zmm3, 0x7fffffff)[0] f> 9.99999975e-05f)
        && not(_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999975e-05f))
    zmm4 = 0x3dcccccd
    zmm3 = 0x3dcccccd
    zmm2 = 0x3dcccccd

zmm3 = _mm_and_ps(zmm3, 0x7fffffff)
zmm4 = _mm_and_ps(zmm4, 0x7fffffff)
zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
uint32_t zmm0_1[0x4] = _mm_min_ss(_mm_min_ss(zmm3[0], zmm4[0])[0], zmm2[0])

if (not(zmm0_1[0] f> 9.99999994e-09f))
    zmm0_1 = 0x3dcccccd

zmm0_1[0] = zmm0_1[0] f* arg1[3].d
int32_t rax_1 = arg1[1].d
float zmm1 = zmm3[0] f* *(arg1 + 0x24)
arg1[3].d = zmm0_1[0]
zmm0_1 = zmm4
zmm0_1[0] = zmm0_1[0] f* arg1[4].d
*(arg1 + 0x24) = zmm1
arg1[4].d = zmm0_1[0]
zmm0_1 = zmm2
zmm0_1[0] = zmm0_1[0] f* arg1[5].d
arg1[5].d = zmm0_1[0]
*(arg1 + 0x2c) = *arg1
*(arg1 + 0x34) = rax_1
zmm4[0] = zmm4[0] f* *(arg1 + 0x2c)
zmm3[0] = zmm3[0] f* arg1[6].d
zmm2[0] = zmm2[0] f* *(arg1 + 0x34)
*(arg1 + 0x2c) = zmm4[0]
arg1[6].d = zmm3[0]
*(arg1 + 0x34) = zmm2[0]
int64_t rsi = data_143f51360
int64_t rcx_2
int64_t rdi

if (data_143de5480 == 0)
    rdi = 0
    rcx_2 = 0
else
    rdi = 0
    rcx_2.b = GetCurrentThreadId() != data_143de5470

arg1[7].d = *(rsi + (rcx_2 << 2))
int64_t rsi_1 = data_143f51378

if (data_143de5480 != 0)
    rdi.b = GetCurrentThreadId() != data_143de5470

arg1[8].d = *(rsi_1 + (rdi << 2))
zmm0_1 = arg1[7].d

if (not(zmm0_1[0] f>= 0f))
    int64_t* rax_6 = sub_142565030()
    void* rax_7 = rax_6[0x23]
    
    if (rax_7 == 0)
        int64_t rdx_1 = *rax_6
        (*(rdx_1 + 0x390))(rax_6, rdx_1)
        rax_7 = rax_6[0x23]
    
    zmm0_1 = *(rax_7 + 0xa0)

arg1[7].d = zmm0_1[0]
zmm0_1 = arg1[8].d

if (not(zmm0_1[0] f>= 0f))
    int64_t* rax_8 = sub_142565030()
    void* rax_9 = rax_8[0x23]
    
    if (rax_9 == 0)
        int64_t rdx_2 = *rax_8
        (*(rdx_2 + 0x390))(rax_8, rdx_2)
        rax_9 = rax_8[0x23]
    
    zmm0_1 = *(rax_9 + 0xa8)

arg1[8].d = zmm0_1[0]
int64_t* rax_10 = sub_142565030()
void* rax_11 = rax_10[0x23]

if (rax_11 == 0)
    int64_t rdx_3 = *rax_10
    (*(rdx_3 + 0x390))(rax_10, rdx_3)
    rax_11 = rax_10[0x23]

*(arg1 + 0x3c) = *(rax_11 + 0xa4)
return arg1
