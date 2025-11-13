// 函数: sub_14267bd90
// 地址: 0x14267bd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint64_t* rbx_1 = arg4
int32_t rax_2 = (*(*arg1 + 0x38))()
int32_t rax_3 = (*(*arg1 + 0x40))(arg1)
uint64_t rdi_2 = zx.q(rax_3 * rax_2)
int64_t var_98 = 0
int64_t var_90_1 = 0
int32_t temp0_1 = rdi_2.d

if (temp0_1 s> 0)
    var_90_1.d = rdi_2.d
    sub_1405a4cf0(&var_98)
else if (temp0_1 s< 0 && rdi_2.d != 0)
    var_90_1.d = rdi_2.d
    sub_1405dac90(&var_98)

(*(*arg1 + 0x28))(arg1, var_98, zx.q((rdi_2 << 2).d))
int32_t rcx_4 = arg3[1].d
int32_t r15_1 = rax_3 - 1
int32_t rbp_3 = rcx_4 s/ 3
int32_t rdi_3 = rdi_2.d + rcx_4 + (rdi_2 << 1).d
int32_t var_b8_1 = rbp_3

if (rdi_3 s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, rdi_3)

uint32_t rdx_4 = rbx_1[1].d + (rax_2 - 1) * r15_1 * 6

if (rdx_4 s> *(rbx_1 + 0xc))
    sub_1405dadb0(rbx_1, rdx_4)

uint128_t* r8_1 = arg2
int32_t rax_8 = rax_2
int64_t var_a8_1 = 0
int32_t var_a0_1 = 0
float zmm0[0x4] = r8_1[2]
float zmm1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm1[0] = zmm1[0] * zmm0[0]
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
zmm1[0] = zmm1[0] * zmm0[0]
zmm1[0] - 0f
rdx_4.b = zmm1[0] < 0f
int32_t r12_2 = 0
char arg_8 = rdx_4.b

if (rax_8 s> 0)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    
    do
        int32_t r14_4 = 0
        
        if (rax_3 s> 0)
            zmm9 = _mm_cvtepi32_ps(zx.o(r12_2))
            
            do
                int64_t rcx_8 = var_98
                int32_t rax_9 = r14_4
                float zmm5_1[0x4] = _mm_cvtepi32_ps(zx.o(r14_4))
                
                if (rdx_4.b == 0)
                    rax_9 = r15_1
                
                uint128_t zmm4_1 = *r8_1
                uint128_t zmm3 = _mm_unpacklo_ps(zmm9, 0)
                uint128_t zmm2 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                zmm1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                bool cond:5_1 = arg5[6].b == 0
                zmm5_1 = __mulps_xmmps_memps(
                    _mm_unpacklo_ps(
                        _mm_unpacklo_ps(zmm5_1, 
                            _mm_cvtepi32_ps(zx.o(sx.d(
                                *(rcx_8 + (sx.q(rax_9 * rax_3 + r12_2) << 2)))))[0].q), 
                        zmm3.q), 
                    r8_1[2])
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm2)
                zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm1), zmm0)
                zmm3 = _mm_add_ps(zmm3, zmm3)
                zmm4_1 = _mm_mul_ps(zmm4_1, zmm3)
                zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm1)
                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
                zmm6 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm0, zmm2)), zmm4_1), r8_1[1])
                var_a8_1.d = zmm6[0]
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                var_a8_1:4.d = zmm7[0]
                float var_a0_2 = zmm8[0]
                
                if (cond:5_1)
                    zmm1 = zx.o(var_a8_1)
                    *(arg5 + 0xc) = zmm1.q
                    *arg5 = zmm1.q
                    arg5[5] = var_a0_2
                    arg5[2] = var_a0_2
                    arg5[6].b = 1
                else
                    zmm1 = arg5[1]
                    zmm0 = __minss_xmmss_memss(zmm6[0], *arg5)
                    zmm1 = _mm_min_ss(zmm1[0], zmm7[0])
                    *arg5 = zmm0[0]
                    zmm0 = arg5[2]
                    arg5[1] = zmm1[0]
                    zmm0 = _mm_min_ss(zmm0[0], zmm8[0])
                    zmm1 = __maxss_xmmss_memss(zmm6[0], arg5[3])
                    arg5[2] = zmm0[0]
                    zmm0 = __maxss_xmmss_memss(zmm7[0], arg5[4])
                    arg5[3] = zmm1[0]
                    zmm1 = _mm_max_ss(arg5[5][0], zmm8[0])
                    arg5[4] = zmm0[0]
                    arg5[5] = zmm1[0]
                
                int64_t rbp_4 = sx.q(arg3[1].d)
                int32_t rax_14 = (rbp_4 + 1).d
                arg3[1].d = rax_14
                
                if (rax_14 s> *(arg3 + 0xc))
                    sub_1406105e0(arg3)
                
                *(*arg3 + (rbp_4 << 2)) = zmm6[0]
                int64_t rbp_5 = sx.q(arg3[1].d)
                int32_t rax_16 = (rbp_5 + 1).d
                arg3[1].d = rax_16
                
                if (rax_16 s> *(arg3 + 0xc))
                    sub_1406105e0(arg3)
                
                *(*arg3 + (rbp_5 << 2)) = zmm7[0]
                int64_t rbp_6 = sx.q(arg3[1].d)
                int32_t rax_18 = (rbp_6 + 1).d
                arg3[1].d = rax_18
                
                if (rax_18 s> *(arg3 + 0xc))
                    sub_1406105e0(arg3)
                
                r14_4 += 1
                r8_1 = arg2
                r15_1 -= 1
                *(*arg3 + (rbp_6 << 2)) = zmm8[0]
            while (r14_4 s< rax_3)
            
            rax_8 = rax_2
            r15_1 = rax_3 - 1
        
        r12_2 += 1
    while (r12_2 s< rax_8)
    
    rbx_1 = arg4
    rbp_3 = var_b8_1
    rdx_4 = zx.d(arg_8)

int32_t rax_20 = rax_2 - 1
int32_t r12_3 = 0

if (rax_20 s> 0)
    do
        int32_t rdi_5 = 0
        
        if (r15_1 s> 0)
            int32_t rcx_13 = rax_3 - 2
            int32_t var_b0_1 = rcx_13
            
            do
                int32_t rax_21 = rdi_5
                
                if (rdx_4.b == 0)
                    rax_21 = rcx_13
                
                if ((*(var_98 + (sx.q(rax_21 * rax_3 + r12_3) << 2) + 2) & 0x7f) != 0x7f)
                    int32_t rcx_18 = r12_3 * rax_3 + rdi_5
                    int32_t r14_7 = (r12_3 + 1) * rax_3 + rdi_5
                    char temp3_1 = rdx_4.b
                    int32_t r15_2 = r14_7
                    int32_t rax_25 = rcx_18 + rbp_3
                    int64_t rbp_7 = sx.q(rbx_1[1].d)
                    int32_t rsi_2 = rcx_18 + 1
                    
                    if (temp3_1 == 0)
                        r15_2 = rsi_2
                    
                    if (temp3_1 == 0)
                        rsi_2 = r14_7
                    
                    int32_t rax_26 = (rbp_7 + 1).d
                    rbx_1[1].d = rax_26
                    
                    if (rax_26 s> *(rbx_1 + 0xc))
                        sub_1405a4cf0(rbx_1)
                    
                    *(*rbx_1 + (rbp_7 << 2)) = rax_25
                    int64_t rbp_8 = sx.q(rbx_1[1].d)
                    int32_t r14_8 = r14_7 + var_b8_1 + 1
                    int32_t rax_30 = (rbp_8 + 1).d
                    rbx_1[1].d = rax_30
                    
                    if (rax_30 s> *(rbx_1 + 0xc))
                        sub_1405a4cf0(rbx_1)
                    
                    *(*rbx_1 + (rbp_8 << 2)) = r14_8
                    int64_t rbp_9 = sx.q(rbx_1[1].d)
                    int32_t rax_32 = (rbp_9 + 1).d
                    rbx_1[1].d = rax_32
                    
                    if (rax_32 s> *(rbx_1 + 0xc))
                        sub_1405a4cf0(rbx_1)
                    
                    *(*rbx_1 + (rbp_9 << 2)) = r15_2 + var_b8_1
                    int64_t rbp_10 = sx.q(rbx_1[1].d)
                    int32_t rax_34 = (rbp_10 + 1).d
                    rbx_1[1].d = rax_34
                    
                    if (rax_34 s> *(rbx_1 + 0xc))
                        sub_1405a4cf0(rbx_1)
                    
                    *(*rbx_1 + (rbp_10 << 2)) = rax_25
                    rbp_3 = var_b8_1
                    int64_t rsi_3 = sx.q(rbx_1[1].d)
                    int32_t rax_36 = (rsi_3 + 1).d
                    rbx_1[1].d = rax_36
                    
                    if (rax_36 s> *(rbx_1 + 0xc))
                        sub_1405a4cf0(rbx_1)
                    
                    *(*rbx_1 + (rsi_3 << 2)) = rsi_2 + rbp_3
                    int64_t rsi_4 = sx.q(rbx_1[1].d)
                    int32_t rax_38 = (rsi_4 + 1).d
                    rbx_1[1].d = rax_38
                    
                    if (rax_38 s> *(rbx_1 + 0xc))
                        sub_1405a4cf0(rbx_1)
                    
                    r15_1 = rax_3 - 1
                    rdx_4 = zx.d(arg_8)
                    *(*rbx_1 + (rsi_4 << 2)) = r14_8
                
                rdi_5 += 1
                rcx_13 = var_b0_1 - 1
                var_b0_1 = rcx_13
            while (rdi_5 s< r15_1)
            
            rax_20 = rax_2 - 1
        
        r12_3 += 1
    while (r12_3 s< rax_20)

int64_t rax = var_98

if (rax != 0)
    sub_140a74f90(rax)
