// 函数: sub_14172bd00
// 地址: 0x14172bd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = *(arg2 + 4)
int128_t zmm3 = *(arg2 + 8)
int128_t zmm6 = zmm2 ^ 0x80000000
int128_t zmm7 = zmm3 ^ 0x80000000
int128_t zmm12 = *arg2
int64_t* rax = *arg1
int32_t var_d8 = (zmm12 ^ 0x80000000).d
void* rcx = *rax
int32_t var_d4 = zmm6.d
int32_t var_d0 = zmm7.d
int128_t zmm13

if (zmm12.d f>= 0f)
    zmm13 = *(rcx + 0x1c)
else
    zmm13 = *(rcx + 0x10)

int128_t zmm9

if (zmm2.d f>= 0f)
    zmm9 = *(rcx + 0x20)
else
    zmm9 = *(rcx + 0x14)

int32_t var_e4 = zmm9.d
int128_t zmm11

if (zmm3.d f>= 0f)
    zmm11 = *(rcx + 0x24)
else
    zmm11 = *(rcx + 0x18)

int128_t zmm10

if (zmm12.d f<= -0f)
    zmm10 = *(rcx + 0x1c)
else
    zmm10 = *(rcx + 0x10)

int128_t zmm8

if (zmm6.d f>= 0f)
    zmm8 = *(rcx + 0x20)
else
    zmm8 = *(rcx + 0x14)

int32_t var_f4 = zmm8.d
int128_t zmm14

if (zmm7.d f>= 0f)
    zmm14 = *(rcx + 0x24)
else
    zmm14 = *(rcx + 0x18)

int32_t var_f0 = zmm14.d
float var_c8
int64_t* rax_1 = sub_14170bf60(arg1[1], &var_c8, &var_d8)
uint128_t zmm15 = zx.o(*rax_1)
float rbp = rax_1[1].d
float* rax_2
float zmm6_1
int32_t zmm7_1
float zmm8_1
float zmm9_1
float zmm10_1
float zmm11_1
float zmm12_1
float zmm13_1
rax_2, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1 =
    sub_14170bf60(arg1[1], &var_d8, arg2)
int64_t* rbx = arg1[2]
uint128_t zmm1 = zx.o(*rax_2)
int32_t r14 = rax_2[2]
zmm13_1 = (zmm13_1 f- zmm15.d) f* *arg2
zmm11_1 = (zmm11_1 - rbp) f* *(arg2 + 8)
zmm14.d = zmm14.d f- r14
zmm8_1 = zmm8_1 f- _mm_shuffle_ps(zmm1, zmm1, 0x55).d
zmm14.d = zmm14.d f* zmm7_1
zmm9_1 = (zmm9_1 f- _mm_shuffle_ps(zmm15, zmm15, 0x55).d) f* *(arg2 + 4)
int64_t rdi_1 = sx.q(rbx[1].d)
int32_t rax_3 = (rdi_1 + 1).d
rbx[1].d = rax_3
int64_t result

if (zmm8_1 * zmm6_1 - (zmm10_1 f- zmm1.d) * zmm12_1 f+ zmm14.d < zmm9_1 + zmm13_1 + zmm11_1)
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_8 = *rbx
    int64_t rdx_6 = rdi_1 * 3
    *(rcx_8 + (rdx_6 << 2)) = zmm13.d.q
    *(rcx_8 + (rdx_6 << 2) + 8) = zmm11.d
    int64_t* rbx_2 = arg1[3]
    int64_t rdi_3 = sx.q(rbx_2[1].d)
    int32_t rax_7 = (rdi_3 + 1).d
    rbx_2[1].d = rax_7
    
    if (rax_7 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    result = *rbx_2
    int64_t rcx_10 = rdi_3 * 3
    *(result + (rcx_10 << 2)) = zmm15.q
    *(result + (rcx_10 << 2) + 8) = rbp
else
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_4 = *rbx
    int64_t rdx_3 = rdi_1 * 3
    *(rcx_4 + (rdx_3 << 2)) = zmm10.d.q
    *(rcx_4 + (rdx_3 << 2) + 8) = var_f0
    int64_t* rbx_1 = arg1[3]
    int64_t rdi_2 = sx.q(rbx_1[1].d)
    int32_t rax_5 = (rdi_2 + 1).d
    rbx_1[1].d = rax_5
    
    if (rax_5 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    result = *rbx_1
    int64_t rcx_6 = rdi_2 * 3
    *(result + (rcx_6 << 2)) = zmm1.q
    *(result + (rcx_6 << 2) + 8) = r14

return result
