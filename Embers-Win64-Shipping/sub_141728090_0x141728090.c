// 函数: sub_141728090
// 地址: 0x141728090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *(arg2 + 4) ^ 0x80000000
int64_t* rax = *arg1
int128_t zmm8 = *(arg2 + 8) ^ 0x80000000
int32_t var_c8 = (*arg2 ^ 0x80000000).d
int32_t var_c4 = zmm7.d
void* rcx = *rax
int32_t var_c0 = zmm8.d
int32_t r15 = *(rcx + 0x18)
uint128_t zmm14 = zx.o(*(rcx + 0x10))
int64_t* rcx_1 = arg1[1]
float var_98
float* rax_1
int512_t zmm12
rax_1, zmm12 = sub_14170d700(rcx_1, &var_98, &var_c8)
zmm12.o = zx.o(*rax_1)
int32_t rbp = rax_1[2]
float* rax_2
float zmm6_1
int32_t zmm7_1
uint128_t zmm12_1
rax_2, zmm6_1, zmm7_1, zmm12_1 = sub_14170d700(rcx_1, &var_c8, arg2)
int64_t* rbx = arg1[2]
uint128_t zmm1 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
uint128_t zmm13 = zx.o(*rax_2)
int32_t r14 = rax_2[2]
int64_t rdi = sx.q(rbx[1].d)
zmm1.d = zmm1.d f- _mm_shuffle_ps(zmm13, zmm13, 0x55).d
uint128_t zmm0
zmm0.d = r15.d f- r14
int32_t rax_3 = (rdi + 1).d
zmm1.d = zmm1.d f* zmm7_1
zmm0.d = zmm0.d f* zmm8.d
float zmm2 = (zmm14.d f- zmm13.d) * zmm6_1 f+ zmm1.d f+ zmm0.d
zmm1.d = _mm_shuffle_ps(zmm14, zmm14, 0x55).d f- _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55).d
zmm0.d = zmm14.d f- zmm12_1.d
zmm1.d = zmm1.d f* *(arg2 + 4)
zmm0.d = zmm0.d f* *arg2
zmm1.d = zmm1.d f+ zmm0.d
zmm0.d = r15.d f- rbp
zmm0.d = zmm0.d f* *(arg2 + 8)
rbx[1].d = rax_3
zmm1.d = zmm1.d f+ zmm0.d
int64_t result

if (zmm2 f< zmm1.d)
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_6 = *rbx
    int64_t rcx_7 = rdi * 3
    *(rax_6 + (rcx_7 << 2)) = zmm14.q
    *(rax_6 + (rcx_7 << 2) + 8) = r15
    int64_t* rbx_2 = arg1[3]
    int64_t rdi_2 = sx.q(rbx_2[1].d)
    int32_t rax_7 = (rdi_2 + 1).d
    rbx_2[1].d = rax_7
    
    if (rax_7 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    result = *rbx_2
    int64_t rcx_9 = rdi_2 * 3
    *(result + (rcx_9 << 2)) = zmm12_1.q
    *(result + (rcx_9 << 2) + 8) = rbp
else
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_4 = *rbx
    int64_t rcx_3 = rdi * 3
    *(rax_4 + (rcx_3 << 2)) = zmm14.q
    *(rax_4 + (rcx_3 << 2) + 8) = r15
    int64_t* rbx_1 = arg1[3]
    int64_t rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_5 = (rdi_1 + 1).d
    rbx_1[1].d = rax_5
    
    if (rax_5 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    result = *rbx_1
    int64_t rcx_5 = rdi_1 * 3
    *(result + (rcx_5 << 2)) = zmm13.q
    *(result + (rcx_5 << 2) + 8) = r14

return result
