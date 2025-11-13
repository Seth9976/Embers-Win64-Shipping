// 函数: sub_1409b2cf0
// 地址: 0x1409b2cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a8
sub_141cd9030(*(arg1 + 0x28), &var_a8)
float zmm6[0x4] = var_a8
int32_t rdi = 0
int32_t var_94
float zmm0[0x4] = var_94
int32_t var_9c
float zmm3[0x4] = var_9c
float var_a0
zmm0[0] = zmm0[0] - var_a0
int32_t var_a4
int64_t zmm5 = var_a4
zmm3[0] = zmm3[0] - zmm6[0]
int32_t var_98
int64_t zmm2
zmm2.d = var_98.d f- zmm5.d
zmm0[0] = zmm0[0] * 0.5f
zmm3[0] = zmm3[0] * 0.5f
float var_b0 = zmm0[0]
zmm2.d = zmm2.d f* 0.5f
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm3, zmm2)).q
*(arg2 + 0x14) = var_b0
zmm6[0] = zmm6[0] f+ *(arg2 + 0xc)
zmm5.d = zmm5.d f+ arg2[2].d
float zmm4 = var_a0 f+ *(arg2 + 0x14)
arg2[3].d = 0
*arg2 = (_mm_unpacklo_ps(zmm6, zmm5)).q
arg2[1].d = zmm4
void* arg_8
sub_14090aa40(*(arg1 + 0x28) + 0x150, &arg_8, data_143f35cc8)
void* r15 = *(arg1 + 0x28)
int32_t rcx_3 = 0
int32_t r10 = *(r15 + 0x28)
void* r8_1 = r15 + 0x10
int32_t var_d8 = 0
int32_t var_d4 = 1
void* var_d0 = r8_1
int32_t var_c8 = 0xffffffff
int32_t var_c4 = 0
int32_t var_c0 = 0

if (r10 != 0)
    void* rax_2 = *(r8_1 + 0x10)
    
    if (rax_2 != 0)
        r8_1 = rax_2
    
    int32_t temp0_2
    int32_t temp1_1
    temp0_2:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r8_1
    int32_t var_c4_2
    
    if (rdx_4 != 0)
    label_1409b2e36:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_d4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_3
        
        int32_t var_c4_1 = rcx_3 - rax_10 + 0x1f
        
        if (rcx_3 - rax_10 + 0x1f s> r10)
            var_c4_2 = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rdi)
            rcx_3 += 0x20
            rdi += 1
            int32_t var_c0_1 = rcx_3
            var_d8 = rdi
            
            if (rdx_5.d s>= (temp1_1 + (temp0_2 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r8_1 + (rdx_5 << 2) + 4)
            int32_t var_c8_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1409b2e36
        
        var_c4_2 = r10

int32_t rdx_7 = *(r15 + 0x28)
int32_t rdi_1 = *(r15 + 0x28)
int128_t var_48 = 0xffffffff
float var_58[0x4] = var_d8.o
int32_t r12 = 0xffffffff << (rdx_7.b & 0x1f)
int32_t r8_3 = rdx_7 s>> 5
int32_t r9_1 = rdx_7 & 0xffffffe0
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_c8_2 = r12
int32_t var_c4_3 = rdx_7
float var_88[0x4] = r15.o

if (rdx_7 != rdi_1)
    void* rax_12 = *(r15 + 0x20)
    void* r10_1 = r15 + 0x10
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi_1 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    int32_t var_c4_5
    
    if (rdx_11 != 0)
    label_1409b2f02:
        int32_t rax_19 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_5
        temp0_5, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rbx_1
        
        if (rax_19 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_5
        
        int32_t var_c4_4 = r9_1 - rbx_1 + 0x1f
        
        if (r9_1 - rbx_1 + 0x1f s> rdi_1)
            var_c4_5 = rdi_1
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_3)
            r9_1 += 0x20
            r8_3 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_8 << 2) + 4)
            var_c8_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_1409b2f02
        
        var_c4_5 = rdi_1

void* rbx_2 = arg_8

while (true)
    float rcx_10 = var_58[3]
    int64_t rdx_12 = var_58[0].q
    
    if (rcx_10 == (var_c8_2.q u>> 0x20).d && rdx_12 == r15 + 0x10 && var_88[0].q == r15)
        return arg2
    
    float rax_21 = data_143a1c6b4
    
    if (rcx_10 s< *(rdx_12 + 0x18))
        rax_21 = rcx_10
    
    int64_t rdx_13 = sx.q(rax_21) * 3
    int64_t rcx_12 = **(rbx_2 + 0x18)
    var_58[2] &= not.d(var_88[3])
    zmm0 = *(rcx_12 + (rdx_13 << 2) + 8)
    zmm0[0] = zmm0[0] f- arg2[1].d
    float zmm1[0x4] = *(rcx_12 + (rdx_13 << 2))
    zmm2.d = (*(rcx_12 + (rdx_13 << 2) + 4)).d f- *(arg2 + 4)
    zmm1[0] = zmm1[0] f- *arg2
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm2.d = zmm2.d f* zmm2.d
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm2.d = zmm2.d f+ zmm1[0]
    zmm2.d = zmm2.d f+ zmm0[0]
    arg2[3].d = __maxss_xmmss_memss(_mm_sqrt_ss(0, zmm2.d)[0], arg2[3].d)[0]
    sub_14059bdd0(&var_88[2])
