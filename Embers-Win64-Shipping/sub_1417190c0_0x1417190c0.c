// 函数: sub_1417190c0
// 地址: 0x1417190c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = *(arg2 + 8)
int128_t zmm7 = zmm2 ^ 0x80000000
int128_t zmm10 = *arg2
int128_t zmm15 = *(arg2 + 4)
int128_t* rcx = **arg1
float var_d8 = (zmm10 ^ 0x80000000).d
int128_t zmm6 = zmm15 ^ 0x80000000
int32_t var_d4 = zmm6.d
int32_t var_d0 = zmm7.d
int128_t zmm9

if (zmm10.d f>= 0f)
    zmm9 = *(rcx + 0xc)
else
    zmm9 = *rcx

int128_t zmm13

if (zmm15.d f>= 0f)
    zmm13 = rcx[1].d
else
    zmm13 = *(rcx + 4)

int32_t var_e4 = zmm13.d
int128_t zmm12

if (zmm2.d f>= 0f)
    zmm12 = *(rcx + 0x14)
else
    zmm12 = *(rcx + 8)

int128_t zmm11

if (zmm10.d f<= -0f)
    zmm11 = *(rcx + 0xc)
else
    zmm11 = *rcx

int128_t zmm8

if (zmm6.d f>= 0f)
    zmm8 = rcx[1].d
else
    zmm8 = *(rcx + 4)

int32_t var_f4 = zmm8.d
int128_t zmm14

if (zmm7.d f>= 0f)
    zmm14 = *(rcx + 0x14)
else
    zmm14 = *(rcx + 8)

int64_t* rcx_1 = arg1[1]
float var_c8
float* rax_1 = sub_141716230(rcx_1, &var_c8, &var_d8)
int64_t zmm0_1 = *rax_1
float rbp = rax_1[2]
float* rax_2
uint128_t zmm6_1
float zmm7_1
float zmm8_1
float zmm9_1
float zmm10_1
float zmm11_1
float zmm12_1
float zmm13_1
float zmm14_1
float zmm15_1
rax_2, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
    sub_141716230(rcx_1, &var_d8, arg2)
int64_t* rbx = arg1[2]
uint128_t zmm1 = zx.o(*rax_2)
float r14 = rax_2[2]
zmm12_1 = (zmm12_1 - rbp) f* *(arg2 + 8)
int64_t rdi = sx.q(rbx[1].d)
zmm8_1 = zmm8_1 f- _mm_shuffle_ps(zmm1, zmm1, 0x55).d
int32_t rax_3 = (rdi + 1).d
rbx[1].d = rax_3
zmm8_1 = zmm8_1 f* zmm6_1.d
zmm6_1 = zx.o(zmm0_1)
bool cond:6 = zmm8_1 - (zmm11_1 f- zmm1.d) * zmm10_1 + (zmm14_1 - r14) * zmm7_1
    < (zmm9_1 f- zmm6_1.d) * zmm10_1
    + (zmm13_1 f- _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55).d) * zmm15_1 + zmm12_1
int64_t result

if (cond:6)
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_7 = *rbx
    int64_t rdx_6 = rdi * 3
    *(rcx_7 + (rdx_6 << 2)) = zmm9.d.q
    *(rcx_7 + (rdx_6 << 2) + 8) = zmm12.d
    int64_t* rbx_2 = arg1[3]
    int64_t rdi_2 = sx.q(rbx_2[1].d)
    int32_t rax_7 = (rdi_2 + 1).d
    rbx_2[1].d = rax_7
    
    if (rax_7 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    result = *rbx_2
    int64_t rcx_9 = rdi_2 * 3
    *(result + (rcx_9 << 2)) = zmm6_1.q
    *(result + (rcx_9 << 2) + 8) = rbp
else
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_3 = *rbx
    int64_t rdx_3 = rdi * 3
    *(rcx_3 + (rdx_3 << 2)) = zmm11.d.q
    *(rcx_3 + (rdx_3 << 2) + 8) = zmm14.d
    int64_t* rbx_1 = arg1[3]
    int64_t rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_5 = (rdi_1 + 1).d
    rbx_1[1].d = rax_5
    
    if (rax_5 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    result = *rbx_1
    int64_t rcx_5 = rdi_1 * 3
    *(result + (rcx_5 << 2)) = zmm1.q
    *(result + (rcx_5 << 2) + 8) = r14

return result
