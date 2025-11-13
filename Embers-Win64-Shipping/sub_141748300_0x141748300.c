// 函数: sub_141748300
// 地址: 0x141748300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x18))

if (rax.d == 0)
    return 0x7f7fffff

int32_t rdx = 0
int32_t r8 = 0
float zmm7[0x4] = 0xff7fffff
int64_t rdi = 0
int64_t result
float zmm1
int64_t zmm3

if (rax s>= 4)
    void* rax_1 = *(arg1 + 0x10)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    void* rbp_1 = rax_1 + 8
    float zmm8[0x4] = *arg2
    void* rbx_1 = rax_1 + 0x2c
    float zmm9[0x4] = *(arg2 + 4)
    int64_t i_3 = ((rax - 4) u>> 2) + 1
    int128_t zmm10 = *(arg2 + 8)
    rdi = i_3 << 2
    int64_t i
    
    do
        int32_t rax_2 = r8 + 1
        zmm9[0] = zmm9[0] f- *(rbp_1 - 4)
        result.d = zmm8[0].q.d f- *(rbp_1 - 8)
        zmm1 = zmm10.d f- *rbp_1
        int32_t rcx = r8
        zmm3.d = zmm8[0].q.d f- *(rbp_1 + 0x10)
        zmm9[0] = zmm9[0] f* *(rbx_1 - 0x1c)
        result.d = result.d f* *(rbp_1 + 4)
        zmm1 = zmm1 f* *(rbx_1 - 0x18)
        zmm3.d = zmm3.d f* *(rbx_1 - 8)
        zmm9[0] = zmm9[0] f+ result.d
        zmm8[0] = zmm8[0] f- *(rbp_1 + 0x28)
        result.d = zmm9[0].q.d f- *(rbx_1 - 0x10)
        zmm9[0] = zmm9[0] + zmm1
        zmm1 = zmm10.d f- *(rbx_1 - 0xc)
        zmm8[0] = zmm8[0] f* *(rbx_1 + 0x10)
        result.d = result.d f* *(rbx_1 - 4)
        zmm1 = zmm1 f* *rbx_1
        zmm3.d = zmm3.d f+ result.d
        result.d = zmm9[0].q.d f- *(rbx_1 + 8)
        
        if (zmm9[0] <= zmm7[0])
            rcx = rdx
        
        float temp0_1[0x4] = _mm_max_ss(zmm9[0], zmm7[0])
        zmm8[0] = zmm8[0] f- *(rbp_1 + 0x40)
        zmm3.d = zmm3.d f+ zmm1
        result.d = result.d f* *(rbx_1 + 0x14)
        zmm1 = zmm10.d f- *(rbx_1 + 0xc)
        zmm8[0] = zmm8[0] f* *(rbx_1 + 0x28)
        zmm8[0] = zmm8[0] f+ result.d
        bool cond:1_1 = zmm3.d f<= temp0_1[0]
        zmm1 = zmm1 f* *(rbx_1 + 0x18)
        float temp0_2 = _mm_max_ss(zmm3.d, temp0_1[0])
        
        if (cond:1_1)
            rax_2 = rcx
        
        result.d = zmm9[0].q.d f- *(rbx_1 + 0x20)
        zmm8[0] = zmm8[0] + zmm1
        int32_t rcx_1 = r8 + 2
        result.d = result.d f* *(rbx_1 + 0x2c)
        zmm1 = (zmm10.d f- *(rbx_1 + 0x24)) f* *(rbx_1 + 0x30)
        bool cond:2_1 = zmm8[0] <= temp0_2
        zmm8[0] = zmm8[0] f+ result.d
        float temp0_3 = _mm_max_ss(temp0_2, zmm8[0])
        
        if (cond:2_1)
            rcx_1 = rax_2
        
        int32_t rax_3 = r8 + 3
        zmm8[0] = zmm8[0] + zmm1
        result = zmm8[0].q
        zmm7 = _mm_max_ss(zmm8[0], temp0_3)
        
        if (result.d f<= temp0_3)
            rax_3 = rcx_1
        
        r8 += 4
        rbp_1 += 0x60
        rbx_1 += 0x60
        rdx = rax_3
        i = i_3
        i_3 -= 1
    while (i != 1)

if (rdi s< rax)
    zmm3 = *arg2
    int64_t i_2 = rax - rdi
    float zmm4[0x4] = *(arg2 + 4)
    float zmm5 = *(arg2 + 8)
    void* r10_3 = *(arg1 + 0x10) + rdi * 0x18
    void* rax_5 = r10_3 + 0x14
    int64_t i_1
    
    do
        zmm4[0] = zmm4[0] f- *(rax_5 - 0x10)
        result.d = zmm3.d f- *r10_3
        int32_t rcx_3 = r8
        zmm1 = zmm5 f- *(rax_5 - 0xc)
        zmm4[0] = zmm4[0] f* *(rax_5 - 4)
        result.d = result.d f* *(rax_5 - 8)
        zmm1 = zmm1 f* *rax_5
        zmm4[0] = zmm4[0] f+ result.d
        zmm4[0] = zmm4[0] + zmm1
        bool cond:3_1 = zmm4[0] <= zmm7[0]
        float temp0_5[0x4] = _mm_max_ss(zmm4[0], zmm7[0])
        
        if (cond:3_1)
            rcx_3 = rdx
        
        r8 += 1
        r10_3 += 0x18
        rax_5 += 0x18
        rdx = rcx_3
        zmm7 = temp0_5
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int64_t rcx_4 = *(arg1 + 0x10)
int64_t rdx_1 = sx.q(rdx) * 3
*arg3 = *(rcx_4 + (rdx_1 << 3) + 0xc)
arg3[1].d = *(rcx_4 + (rdx_1 << 3) + 0x14)
result.d = (*(arg2 + 4)).d f- *(rcx_4 + (rdx_1 << 3) + 4)
zmm1 = *arg2 f- *(rcx_4 + (rdx_1 << 3))
float zmm2[0x4] = *(arg2 + 8)
zmm2[0] = zmm2[0] f- *(rcx_4 + (rdx_1 << 3) + 8)
result.d = result.d f* *(rcx_4 + (rdx_1 << 3) + 0x10)
zmm1 = zmm1 f* *(rcx_4 + (rdx_1 << 3) + 0xc)
zmm2[0] = zmm2[0] f* *(rcx_4 + (rdx_1 << 3) + 0x14)
result.d = result.d f+ zmm1
result.d = result.d f+ zmm2[0]
return result
