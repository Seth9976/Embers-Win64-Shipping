// 函数: sub_14227d2a0
// 地址: 0x14227d2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rcx = *(arg1 + 0x60)
int64_t* rcx_1

if (rcx == 0)
    rcx_1 = nullptr
else
    rcx_1 = (*(*rcx + 0x30))(rcx)

int32_t var_f0 = 0
int64_t rax_4 = *rcx_1
int64_t* r12 = nullptr
int64_t* var_c8 = nullptr
int32_t rsi = 0
int32_t var_bc = 0
void* result_2 = (*(rax_4 + 0xa8))(rcx_1, &var_f0, 0)
void* r13 = nullptr
void* result_1 = result_2
int32_t r14 = 0
void* var_d8 = nullptr
int32_t var_f8 = 0
int32_t var_cc = 0

if (var_f0 u> 0)
    do
        int64_t* rbx_1 = *(result_2 + (zx.q(r14) << 3))
        int64_t* r15_1 = nullptr
        
        if ((*(*rbx_1 + 0x20))(rbx_1, "PxRigidActor") != 0)
            r15_1 = rbx_1
        
        int32_t* rax_7 = r15_1[2]
        
        if (rax_7 != 0)
            int32_t* rbx_2
            
            if (*rax_7 == 1)
                rbx_2 = *(rax_7 + 8)
            
            if (*rax_7 != 1 || rbx_2 == 0)
                if (rax_7 != 0 && *rax_7 == 7)
                    void* rbx_4 = *(rax_7 + 8)
                    
                    if (rbx_4 != 0)
                        int64_t i = *(rbx_4 + 8)
                        
                        if (i != 0)
                            int64_t* rcx_9 = r12
                            void* r8_2 = &r12[sx.q(rsi)]
                            
                            if (r12 != r8_2)
                                while (*rcx_9 != i)
                                    rcx_9 = &rcx_9[1]
                                    
                                    if (rcx_9 == r8_2)
                                        goto label_14227d49c
                            
                            if (r12 == r8_2 || ((rcx_9 - r12) s>> 3).d == 0xffffffff)
                            label_14227d49c:
                                int64_t rdi_3 = sx.q(rsi)
                                rsi = (rdi_3 + 1).d
                                
                                if (rsi s> var_bc)
                                    sub_1405a4d70(&var_c8)
                                    r12 = var_c8
                                
                                r12[rdi_3] = *(rbx_4 + 8)
                            
                            void* rbx_5 = *(rbx_4 + 8)
                            int64_t rdi_4 = sx.q(*(rbx_5 + 0x10))
                            int32_t rax_14 = (rdi_4 + 1).d
                            *(rbx_5 + 0x10) = rax_14
                            
                            if (rax_14 s> *(rbx_5 + 0x14))
                                sub_1405a4d70(rbx_5 + 8)
                            
                            *(*(rbx_5 + 8) + (rdi_4 << 3)) = r15_1
            else if (*rbx_2 == 0xffffffff && sub_140d3e110(&rbx_2[0x3e]) != 0)
                float var_78[0x4]
                sub_142218c50(rbx_2, &var_78, 1, 0)
                float var_b8[0x4]
                sub_140d3a3a0(&var_b8, sub_140d3c6e0(&rbx_2[0x3e]))
                int64_t rbx_3 = sx.q(var_f8)
                float var_a8_1[0x4] = var_78
                int32_t rdi_1 = (rbx_3 + 1).d
                var_f8 = rdi_1
                
                if (rdi_1 s> var_cc)
                    sub_1405c4fe0(&var_d8)
                    r13 = var_d8
                    var_f8 = rdi_1
                
                int64_t rax_11 = rbx_3 << 6
                *(rax_11 + r13) = var_b8
                *(rax_11 + r13 + 0x10) = var_a8_1
                float var_68[0x4]
                *(rax_11 + r13 + 0x20) = var_68
                float var_58[0x4]
                *(rax_11 + r13 + 0x30) = var_58
        
        result_2 = result_1
        r14 += 1
    while (r14 u< var_f0)

int64_t* r14_1 = r12
int64_t rsi_1 = 0
void* result = &r12[sx.q(rsi)]
result_1 = result
uint64_t r15_5 = (result - r12 + 7) u>> 3

if (r12 u> result)
    r15_5 = 0

if (r15_5 != 0)
    do
        int64_t* rbx_6 = *r14_1
        (*(*rbx_6 + 8))(rbx_6, &rbx_6[1])
        int32_t rdx_7 = rbx_6[2].d
        rbx_6[2].d = 0
        
        if (*(rbx_6 + 0x14) != rdx_7)
            sub_1405c5570(&rbx_6[1], rdx_7)
        
        r14_1 = &r14_1[1]
        rsi_1 += 1
    while (rsi_1 != r15_5)
    
    result = result_1

int64_t rbx_7 = 0
uint64_t rsi_5 = (result - r12 + 7) u>> 3

if (r12 u> result)
    rsi_5 = 0

int64_t* rdi_5 = r12

if (rsi_5 != 0)
    do
        int64_t* rcx_16 = *rdi_5
        result = (*(*rcx_16 + 0x10))(rcx_16)
        rbx_7 += 1
        rdi_5 = &rdi_5[1]
    while (rbx_7 != rsi_5)

void* rsi_8 = (sx.q(var_f8) << 6) + r13

if (r13 != rsi_8)
    int128_t* rbx_8 = r13 + 0x10
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    
    do
        int64_t* rax_19 = sub_140d3c6e0(&rbx_8[-1])
        
        if (rax_19 != 0)
            float zmm5_1[0x4] = rbx_8[1]
            uint32_t zmm4_1[0x4] = data_143f525c0
            float temp0_1[0x4] = __subps_xmmps_memps(zmm5_1, *(rax_19 + 0x1d0))
            int64_t* rdi_6 = rax_19[0x14]
            float temp0_2[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, _mm_and_ps(temp0_1, zmm4_1), 1)) != 0)
            label_14227d666:
                float zmm2[0x4] = *(rax_19 + 0x1d0)
                int64_t rax_23 = *rax_19
                char var_108_1 = 0
                zmm5_1[0] = zmm5_1[0] - zmm2[0]
                int32_t var_110_1 = 2
                int64_t var_118_1 = 0
                float temp0_14[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                float temp0_15[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
                result_1.d = zmm5_1[0]
                float temp0_16[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                temp0_14[0] = temp0_14[0] - temp0_16[0]
                float temp0_17[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float zmm0[0x4] = *rbx_8
                temp0_15[0] = temp0_15[0] - temp0_17[0]
                var_d8.o = zmm0
                result_1:4.d = temp0_14[0]
                float var_e0_1 = temp0_15[0]
                (*(rax_23 + 0x470))(rax_19, &result_1, &var_d8, 0, var_118_1, var_110_1, var_108_1)
            else
                zmm6 = *rbx_8
                float zmm3[0x4] = *(rax_19 + 0x1c0)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
                        _mm_and_ps(_mm_sub_ps(zmm6, zmm3), zmm4_1), 1)) != 0 && _mm_movemask_ps(
                        _mm_cmpeq_ps(temp0_2, _mm_and_ps(_mm_add_ps(zmm3, zmm6), zmm4_1), 1)) != 0)
                    goto label_14227d666
            
            if (rdi_6 != 0)
                int32_t rax_24 = *(rdi_6 + 0xc)
                void* const rax_28
                
                if (rax_24 s>= data_143e1d9b4)
                    rax_28 = nullptr
                else
                    uint32_t rdx_9 = zx.d(rax_24.w)
                    
                    if (rax_24 s< 0)
                        rax_24 += 0xffff
                        rdx_9 -= 0x10000
                    
                    rax_28 = *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3)) + sx.q(rdx_9) * 0x18
                
                if (((*(rax_28 + 8) u>> 0x1d).b & 1) == 0)
                    (*(*rdi_6 + 0x448))(rdi_6)
        
        rbx_8 = &rbx_8[4]
        result = &rbx_8[-1]
    while (result != rsi_8)
    
    r12 = var_c8

if (r13 != 0)
    result = sub_140a74f90(r13)

if (r12 != 0)
    result = sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_138)
return result
