// 函数: sub_142258160
// 地址: 0x142258160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = *(arg1 + 0x18)
int128_t* r10 = *(arg1 + 0x10)
void* rbx = *(arg1 + 8)
int32_t r12 = *(arg1 + 0x28)
int128_t zmm0 = *r9
int128_t zmm6 = zx.o(0)
int32_t rax = *(arg1 + 0x20)
int128_t zmm8 = *r10
int32_t var_e4 = *(arg1 + 0x24)
int32_t var_e0 = *(rbx + 0x98)
int128_t* rax_3 = r9
uint64_t i_2 = zx.q(arg3)
int32_t var_dc = i_2.d

if (*(r10 + 0xc) s>= *(r9 + 0xc))
    rax_3 = r10

int32_t rcx = *(rax_3 + 0xc)

if (rcx == 0)
    zmm8.d = zmm8.d f+ zmm0.d
    zmm8.d = zmm8.d f* 0.5f
else if (rcx == 1)
    zmm8 = _mm_min_ss(zmm8.d, zmm0.d)
else if (rcx == 2)
    zmm8.d = zmm8.d f* zmm0.d
else if (rcx == 3)
    zmm8 = _mm_max_ss(zmm8.d, zmm0.d)
else
    zmm8 = zx.o(0)

zmm0 = *(r9 + 4)
int128_t zmm7 = *(r10 + 4)

if (rcx == 0)
    zmm7.d = zmm7.d f+ zmm0.d
    zmm7.d = zmm7.d f* 0.5f
else if (rcx == 1)
    zmm7 = _mm_min_ss(zmm7.d, zmm0.d)
else if (rcx == 2)
    zmm7.d = zmm7.d f* zmm0.d
else if (rcx == 3)
    zmm7 = _mm_max_ss(zmm7.d, zmm0.d)
else
    zmm7 = zx.o(0)

zmm0 = *(r9 + 8)
int128_t zmm1 = *(r10 + 8)

if (rcx == 0)
    zmm6.d = zmm1.d f+ zmm0.d
    zmm6.d = zmm6.d f* 0.5f
else if (rcx == 1)
    zmm6 = _mm_min_ss(zmm1.d, zmm0.d)
else if (rcx == 2)
    zmm6.d = zmm1.d f* zmm0.d
else if (rcx == 3)
    zmm6 = _mm_max_ss(zmm1.d, zmm0.d)

if (i_2.d != 0)
    void* rbx_1 = arg2 + 0x18
    uint64_t i_1 = i_2
    int128_t zmm9
    int128_t var_68_1 = zmm9
    int128_t zmm10
    int128_t var_78_1 = zmm10
    int128_t zmm11
    int128_t var_88_1 = zmm11
    int128_t zmm12
    int128_t var_98_1 = zmm12
    int128_t zmm13
    int128_t var_a8_1 = zmm13
    int128_t zmm14
    int128_t var_b8_1 = zmm14
    int128_t zmm15
    int128_t var_c8_1 = zmm15
    uint64_t i
    
    do
        void* rdi_1 = *(arg1 + 8)
        zmm9 = *(rbx_1 - 0x18)
        zmm10 = *(rbx_1 - 0x14)
        zmm11 = *(rbx_1 - 0x10)
        int64_t rsi_1 = sx.q(*(rdi_1 + 0x98))
        zmm12 = *(rbx_1 - 0xc)
        zmm13 = *(rbx_1 - 8)
        zmm14 = *(rbx_1 - 4)
        zmm15 = *rbx_1
        int32_t rax_4 = (rsi_1 + 1).d
        int16_t r14_1 = *(rbx_1 + 0x1a)
        int32_t r15_1 = *(rbx_1 + 0x1c)
        *(rdi_1 + 0x98) = rax_4
        
        if (rax_4 s> *(rdi_1 + 0x9c))
            sub_1405c4fe0(rdi_1 + 0x90)
        
        rbx_1 += 0x40
        int32_t* rax_7 = (rsi_1 << 6) + *(rdi_1 + 0x90)
        *rax_7 = zmm9.d
        rax_7[1] = zmm10.d
        rax_7[2] = zmm11.d
        rax_7[3] = zmm12.d
        rax_7[4] = zmm13.d
        rax_7[5] = zmm14.d
        rax_7[6] = zmm15.d
        *(rax_7 + 0x1c) = 0x7f7fffff
        *(rax_7 + 0x24) = 0
        rax_7[0xb] = zmm8.d
        rax_7[0xe] = zmm7.d
        rax_7[0xf] = zmm6.d
        rax_7[0xc].b = 0
        *(rax_7 + 0x32) = r14_1
        rax_7[0xd] = r15_1
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 8)

int64_t rdi_2 = sx.q(*(rbx + 0x160))
int32_t rax_8 = (rdi_2 + 1).d
*(rbx + 0x160) = rax_8

if (rax_8 s> *(rbx + 0x164))
    sub_1405c4d20(rbx + 0x158)

int64_t result = *(rbx + 0x158)
int64_t rcx_7 = rdi_2 * 5
*(result + (rcx_7 << 2)) = rax.o
*(result + (rcx_7 << 2) + 0x10) = r12
result.b = 1
return result
