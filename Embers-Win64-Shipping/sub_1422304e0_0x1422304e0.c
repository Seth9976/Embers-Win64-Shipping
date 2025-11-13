// 函数: sub_1422304e0
// 地址: 0x1422304e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = arg3
void* r14 = arg1
int64_t var_b0
int64_t* rax
uint32_t zmm6[0x4]
rax, zmm6 = sub_140d21e10(*(arg1 + 0x20), &var_b0, 0)
void* r12 = nullptr

if (arg2 + 0x70 != rax)
    int64_t rcx_1 = *(arg2 + 0x70)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg2 + 0x70) = *rax
    *rax = 0
    *(arg2 + 0x78) = rax[1].d
    *(arg2 + 0x7c) = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_3 = var_b0

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*(arg2 + 0x82) = 0
int64_t* rax_3 = sub_142565030()
void* rax_4 = rax_3[0x23]

if (rax_4 == 0)
    int64_t rdx_1 = *rax_3
    (*(rdx_1 + 0x390))(rax_3, rdx_1)
    rax_4 = rax_3[0x23]

char rcx_5 = *(r14 + 0x8c)
char rax_5 = *(rax_4 + 0xad)

if (rcx_5 != 0)
    rax_5 = rcx_5

if (rax_5 == 3 || *(r14 + 0x60) s<= 0)
    *(arg2 + 0x80) = 0
else
    int32_t i_1 = 0
    *(arg2 + 0x80) = *(r14 + 0x89) u>> 4 & 1
    *(arg2 + 0x81) = *(r14 + 0x89) u>> 6 & 1
    
    if (*(r14 + 0x60) s> 0)
        int64_t r15_1 = 0
        uint32_t var_58_1[0x4] = zmm6
        uint32_t zmm7[0x4]
        uint32_t var_68_1[0x4] = zmm7
        uint32_t zmm8[0x4]
        uint32_t var_78_1[0x4] = zmm8
        uint32_t zmm10[0x4] = data_142d3f760
        int32_t arg_20 = 0x7f800000
        int32_t i
        
        do
            int64_t* rdi_1 = nullptr
            int64_t rax_8 = *(r14 + 0x58)
            int64_t* rbx_2 = nullptr
            int64_t j_2 = sx.q(*(rax_8 + r15_1 + 0x38))
            
            if ((*(r14 + 0x89) & 0x10) != 0)
                int64_t rdi_2 = sx.q(*(arg2 + 0x58))
                int32_t rax_9 = (rdi_2 + 1).d
                *(arg2 + 0x58) = rax_9
                
                if (rax_9 s> *(arg2 + 0x5c))
                    sub_1405a4f90(arg2 + 0x50)
                
                int64_t* rax_12 = (rdi_2 << 4) + *(arg2 + 0x50)
                *rax_12 = 0
                rax_12[1] = 0
                rdi_1 = (sx.q(*(arg2 + 0x58) - 1) << 4) + *(arg2 + 0x50)
                int32_t rax_15 = rdi_1[1].d + j_2.d
                rdi_1[1].d = rax_15
                
                if (rax_15 s> *(rdi_1 + 0xc))
                    sub_140638a00(rdi_1)
            
            if ((*(r14 + 0x89) & 0x40) != 0)
                int64_t rbx_3 = sx.q(*(arg2 + 0x68))
                int32_t rax_16 = (rbx_3 + 1).d
                *(arg2 + 0x68) = rax_16
                
                if (rax_16 s> *(arg2 + 0x6c))
                    sub_1405a4f90(arg2 + 0x60)
                
                int64_t* rax_19 = (rbx_3 << 4) + *(arg2 + 0x60)
                *rax_19 = 0
                rax_19[1] = 0
                rbx_2 = (sx.q(*(arg2 + 0x68) - 1) << 4) + *(arg2 + 0x60)
                int32_t rax_22 = rbx_2[1].d + j_2.d
                rbx_2[1].d = rax_22
                
                if (rax_22 s> *(rbx_2 + 0xc))
                    sub_140638a00(rbx_2)
            
            uint32_t zmm4_1[0x4] = *(rax_8 + r15_1 + 0x70)
            zmm6 = *(rax_8 + r15_1 + 0x80)
            zmm7 = *(rax_8 + r15_1 + 0x90)
            uint32_t rax_24
            rax_24.b = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(zmm4_1, zmm10), zmm10, 0)) == 0
            uint32_t zmm0_1[0x4]
            uint32_t zmm1_1[0x4]
            
            if (rax_24.b == 0)
            label_1422307e1:
                zmm4_1 = data_143dbb0c0
                zmm6 = data_143dbb0d0
                zmm7 = data_143dbb0e0
            else
                arg_20 = 0x7f800000
                uint32_t rax_25
                rax_25.b = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(zmm6, data_142d3f760), data_142d3f760, 0)) == 0
                
                if (rax_25.b == 0)
                    goto label_1422307e1
                
                arg_20 = 0x7f800000
                uint32_t rax_26
                rax_26.b = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(zmm7, data_142d3f760), data_142d3f760, 0)) == 0
                
                if (rax_26.b == 0)
                    goto label_1422307e1
                
                zmm1_1 = _mm_mul_ps(zmm4_1, zmm4_1)
                zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                zmm1_1 = _mm_sub_ps(data_143f51330, zmm0_1)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(data_143f51380, 
                        __andps_xmmxud_memxud(zmm1_1, data_143f51390), 1)) != 0)
                    goto label_1422307e1
            
            int64_t j_1 = j_2
            
            if (j_2.d s> 0)
                zmm8 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                uint32_t zmm5_1[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                int64_t rdx_6 = 0
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                int64_t j
                
                do
                    float (* rax_28)[0x4] = *(rax_8 + r15_1 + 0x30)
                    uint32_t zmm2_1[0x4] = _mm_mul_ps(zmm7, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rax_28 + rdx_6), (*(rax_28 + rdx_6 + 8))[0].q), 
                            _mm_unpacklo_ps(*(rax_28 + rdx_6 + 4), zx.o(0)[0].q)[0].q))
                    float temp0_26[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), zmm4_1)
                    float temp0_30[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_26, zmm5_1), zmm0_1)
                    float temp0_31[0x4] = _mm_add_ps(temp0_30, temp0_30)
                    zmm0_1 = _mm_shuffle_ps(temp0_31, temp0_31, 0xd2)
                    float temp0_34[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xc9), zmm4_1)
                    zmm1_1 = _mm_mul_ps(temp0_31, zmm8)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm5_1)
                    zmm1_1 = _mm_add_ps(zmm1_1, zmm2_1)
                    zmm1_1 = _mm_add_ps(zmm6, _mm_add_ps(_mm_sub_ps(zmm0_1, temp0_34), zmm1_1))
                    uint32_t var_c0_1 = zmm1_1[0]
                    zmm2_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    float temp0_42[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                    uint32_t var_bc_1 = zmm2_1[0]
                    float var_b8_1 = temp0_42[0]
                    
                    if (rdi_1 != 0)
                        int64_t* rcx_10 = *rdi_1
                        *(rcx_10 + rdx_6) = var_c0_1.q
                        *(rcx_10 + rdx_6 + 8) = var_b8_1
                    
                    if (rbx_2 != 0)
                        int64_t* rcx_11 = *rbx_2
                        zmm1_1[0] = zmm1_1[0] f* -1f
                        float var_a8_1 = temp0_42[0]
                        *(rcx_11 + rdx_6) = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0].q)).q
                        *(rcx_11 + rdx_6 + 8) = var_a8_1
                    
                    rdx_6 += 0xc
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                r14 = arg1
            
            rbp = arg3
            *(arg2 + 0x49) = rbp
            void* rax_31 = sub_1425ab060()
            void* rdx_7 = *(*(r14 + 0x20) + 0x10)
            int64_t rax_32 = sx.q(*(rax_31 + 0x38))
            
            if (rax_32.d s> *(rdx_7 + 0x38) || *(*(rdx_7 + 0x30) + (rax_32 << 3)) != rax_31 + 0x30)
                *(arg2 + 0x82) = 0
            else
                *(arg2 + 0x82) = 1
                *(arg2 + 0x49) |= 1
            
            r15_1 += 0xb0
            i = i_1 + 1
            i_1 = i
        while (i s< *(r14 + 0x60))

uint8_t rbx_6 = *(r14 + 0x89) u>> 2
*(arg2 + 0x83) = 0
rbx_6 &= 1
*(arg2 + 0x86) = 0
void* rdi_5 = *(r14 + 0x20)

if (rdi_5 != 0)
    r12 = sub_140d21950(rdi_5, sub_1424cdfc0())

int64_t* rax_36 = sub_142565030()
void* rax_37 = rax_36[0x23]

if (rax_37 == 0)
    int64_t rdx_9 = *rax_36
    (*(rdx_9 + 0x390))(rax_36, rdx_9)
    rax_37 = rax_36[0x23]

char rcx_17 = *(r14 + 0x8c)
char rax_38 = *(rax_37 + 0xad)

if (rcx_17 != 0)
    rax_38 = rcx_17

if (rax_38 != 2 && r12 != 0 && (*(*r12 + 0x18))(r12, zx.q(rbx_6)) != 0)
    char rax_42 = (*(*r12 + 0x10))(r12, arg2, zx.q(rbx_6))
    *(arg2 + 0x83) = rax_42
    
    if (rax_42 != 0)
        int32_t rax_43 = *(arg2 + 0x18)
        
        if (rax_43 == 0 || *(arg2 + 8) == 0 || *(arg2 + 0x28) s> rax_43)
            *(arg2 + 0x86) = 1
        
        char r9_1 = (*(arg2 + 0x40)).b
        char rcx_20 = rbp | 1
        
        if ((r9_1 & 2) == 0)
            rcx_20 = rbp
        
        char rcx_21 = rcx_20 | 2
        
        if ((r9_1 & 4) == 0)
            rcx_21 = rcx_20
        
        char rcx_22 = rcx_21 | 8
        
        if ((r9_1 & 8) == 0)
            rcx_22 = rcx_21
        
        *(arg2 + 0x48) = rcx_22
        *(arg2 + 0x85) = *(r14 + 0x89) u>> 7

int64_t* rax_49 = sub_142565030()
int64_t result = rax_49[0x23]

if (result == 0)
    int64_t rdx_15 = *rax_49
    (*(rdx_15 + 0x390))(rax_49, rdx_15)
    result = rax_49[0x23]

if (*(result + 0xb0) == 0 && *(r14 + 0x89) s>= 0)
    *(arg2 + 0x84) = 0
    return result

*(arg2 + 0x84) = 1
return result
