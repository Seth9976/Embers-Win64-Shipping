// 函数: sub_141c3f700
// 地址: 0x141c3f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
arg1[2].d = 0
int64_t rbx = sx.q(divs.dp.d(sx.q(arg2[1].d), arg3))

if (rbx.d s> *(arg1 + 0x24))
    sub_140775b10(arg1 + 0x18, rbx.d)

arg1[3].d = 0

if (rbx.d s> *(arg1 + 0x34))
    sub_140775b10(arg1 + 0x28, rbx.d)

arg1[4].d = 0

if (rbx.d s> *(arg1 + 0x44))
    sub_140775b10(arg1 + 0x38, rbx.d)

arg1[5].d = 0

if (rbx.d s> *(arg1 + 0x54))
    sub_140775b10(arg1 + 0x48, rbx.d)

arg1[6].d = 0

if (rbx.d s> *(arg1 + 0x64))
    sub_140775b10(arg1 + 0x58, rbx.d)

arg1[7].d = 0

if (rbx.d s> *(arg1 + 0x74))
    sub_140775b10(arg1 + 0x68, rbx.d)

int32_t rax_3 = arg1[2].d + rbx.d
arg1[2].d = rax_3

if (rax_3 s> *(arg1 + 0x24))
    sub_140775270(arg1 + 0x18)

int32_t rax_4 = arg1[3].d + rbx.d
arg1[3].d = rax_4

if (rax_4 s> *(arg1 + 0x34))
    sub_140775270(arg1 + 0x28)

int32_t rax_5 = arg1[4].d + rbx.d
arg1[4].d = rax_5

if (rax_5 s> *(arg1 + 0x44))
    sub_140775270(arg1 + 0x38)

int32_t rax_6 = arg1[5].d + rbx.d
arg1[5].d = rax_6

if (rax_6 s> *(arg1 + 0x54))
    sub_140775270(arg1 + 0x48)

int32_t rax_7 = arg1[6].d + rbx.d
arg1[6].d = rax_7

if (rax_7 s> *(arg1 + 0x64))
    sub_140775270(arg1 + 0x58)

int32_t rax_8 = arg1[7].d + rbx.d
arg1[7].d = rax_8

if (rax_8 s> *(arg1 + 0x74))
    sub_140775270(arg1 + 0x68)

arg4[1].d = 0

if (rbx.d s> *(arg4 + 0xc))
    sub_140775b10(arg4, rbx.d)

arg5[1].d = 0

if (rbx.d s> *(arg5 + 0xc))
    sub_140775b10(arg5, rbx.d)

int32_t rax_9 = arg4[1].d + rbx.d
arg4[1].d = rax_9

if (rax_9 s> *(arg4 + 0xc))
    sub_140775270(arg4)

int32_t rax_10 = arg5[1].d + rbx.d
arg5[1].d = rax_10

if (rax_10 s> *(arg5 + 0xc))
    sub_140775270(arg5)

if (arg3 != 1)
    if (arg3 != 2)
        uint64_t count_1 = rbx << 2
        memset(*arg4, 0, count_1)
        return memset(*arg5, 0, count_1)
    
    int32_t rcx_18 = *(arg1 + 0x24)
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(arg2[1].d)
    arg1[2].d = 0
    int32_t rax_16 = (temp9_1 - temp8_1) s>> 1
    
    if (rax_16 s> rcx_18 && rcx_18 != rax_16)
        sub_140775b10(arg1 + 0x18, rax_16)
    
    arg1[5].d = 0
    
    if (rax_16 s> *(arg1 + 0x54))
        sub_140775b10(arg1 + 0x48, rax_16)
    
    int32_t rax_17 = arg1[2].d + rax_16
    arg1[2].d = rax_17
    
    if (rax_17 s> *(arg1 + 0x24))
        sub_140775270(arg1 + 0x18)
    
    int32_t rax_18 = arg1[5].d + rax_16
    arg1[5].d = rax_18
    
    if (rax_18 s> *(arg1 + 0x54))
        sub_140775270(arg1 + 0x48)
    
    int64_t r8_2 = *(arg1 + 0x48)
    int64_t r9 = *(arg1 + 0x18)
    int128_t* rcx_23 = *arg2
    int32_t rax_20 = rax_16 * 2
    
    if (rax_20 s> 0)
        uint64_t i_3 = zx.q(((rax_20 - 1) u>> 3) + 1)
        uint64_t i
        
        do
            float zmm2[0x4] = *rcx_23
            float zmm1[0x4] = rcx_23[1]
            rcx_23 = &rcx_23[2]
            int64_t rax_21 = sx.q(rsi)
            float zmm0[0x4] = _mm_shuffle_ps(zmm2, zmm1, 0x88)
            rsi += 4
            zmm2 = _mm_shuffle_ps(zmm2, zmm1, 0xdd)
            *(r9 + (rax_21 << 2)) = zmm0
            *(r8_2 + (rax_21 << 2)) = zmm2
            i = i_3
            i_3 -= 1
        while (i != 1)
else
    int32_t count = (rbx << 2).d
    memcpy(*(arg1 + 0x18), *arg2, count)
    memcpy(*(arg1 + 0x48), *arg2, count)

sub_141c3fc30(arg1 + 0x268, arg1 + 0x18, arg1 + 0x38)
sub_141c3fc30(arg1 + 0x288, arg1 + 0x48, arg1 + 0x68)
sub_141c3f1e0(arg1 + 0x2a8, arg1 + 0x38, arg1 + 0x28)
sub_141c3f1e0(arg1 + 0x2b8, arg1 + 0x68, arg1 + 0x58)
sub_141c3fb70(arg1 + 0xe8, arg1 + 0x28, arg4)
sub_141c3fb70(arg1 + 0x1a8, arg1 + 0x58, arg5)
float zmm0_1[0x4] = *arg1
int32_t rax_22 = arg4[1].d
uint64_t rcx_30 = *arg4
float zmm1_1[0x4] = zmm0_1[0]
zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)

if (rax_22 s> 0)
    uint64_t i_4 = zx.q(((rax_22 - 1) u>> 2) + 1)
    uint64_t i_1
    
    do
        zmm0_1 = *rcx_30
        rcx_30 += 0x10
        *(rcx_30 - 0x10) = _mm_mul_ps(zmm0_1, zmm1_1)
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    zmm0_1 = *arg1

int32_t result = arg5[1].d
uint64_t rcx_31 = *arg5
zmm1_1 = zmm0_1[0]
zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)

if (result s> 0)
    uint64_t i_5 = zx.q(((result - 1) u>> 2) + 1)
    uint64_t i_2
    
    do
        zmm0_1 = *rcx_31
        rcx_31 += 0x10
        *(rcx_31 - 0x10) = _mm_mul_ps(zmm0_1, zmm1_1)
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

return result
