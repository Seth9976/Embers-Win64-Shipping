// 函数: sub_1427890d0
// 地址: 0x1427890d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
sub_140d21e40(rcx, rcx, arg2)
void* rax_1 = *(*(*arg1 + 0xa0) + 0x130)
int128_t* rax_2

if (rax_1 == 0)
    rax_2 = &data_143dbb0c0
else
    rax_2 = rax_1 + 0x1c0

*(arg2 + 0x80) = *rax_2
*(arg2 + 0x90) = rax_2[1]
*(arg2 + 0xa0) = rax_2[2]
void* rax_3 = *arg1

if (*(rax_3 + 0xcc) == 0)
    arg2[0x16] = *(rax_3 + 0xd0)
    arg2[0x17].d = *(rax_3 + 0xd8)
    void* rax_5 = *arg1
    *(arg2 + 0xbc) = *(rax_5 + 0xdc)
    *(arg2 + 0xc4) = *(rax_5 + 0xe4)
    rax_3 = *arg1

arg2[0x1c].d = *(rax_3 + 0xbc)
*(arg2 + 0xe4) = *(*arg1 + 0xc4)
arg2[0x1d].d = *(*arg1 + 0xc8)
arg2[0x19].b = *(*arg1 + 0xba)
*(arg2 + 0xc9) = *(*arg1 + 0xc1)
arg2[0x1b] = *(*arg1 + 0x130)
void* rcx_6 = *(arg1[1] + 0x440)
float var_d0

if (rcx_6 != 0)
    int64_t rax_14 = *(rcx_6 + 0x40)
    int32_t var_78
    int32_t var_78_1 = var_78 & 0xfffffff0
    void* r8_1
    r8_1.b = 1
    int64_t var_b8
    __builtin_memset(&var_b8, 0, 0x3c)
    int64_t var_a8
    
    if ((*(rax_14 + 0x10))(rcx_6 + 0x40, &var_b8, r8_1) != 0)
        float zmm3[0x4] = *(arg2 + 0xa0)
        uint128_t zmm2_1
        zmm2_1.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f- 1f
        float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        zmm3[0] = zmm3[0] - 1f
        temp0_2[0] = temp0_2[0] - 1f
        zmm2_1.d = zmm2_1.d f* zmm2_1.d
        zmm3[0] = zmm3[0] * zmm3[0]
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm2_1.d = zmm2_1.d f+ zmm3[0]
        zmm2_1.d = zmm2_1.d f+ temp0_2[0]
        int64_t var_b0
        
        if (zmm2_1.d f>= 9.99999994e-09f)
            int32_t rax_22 = var_b0.d
            
            if (rax_22 != arg2[5].d)
                sub_1417502a0(&arg2[2], rax_22)
                rax_22 = var_b0.d
            
            int32_t i = 0
            
            if (rax_22 s> 0)
                int64_t rdx_7 = 0
                
                do
                    zmm2_1 = *(arg2 + 0xa0)
                    rdx_7 += 0xc
                    int64_t rax_23 = var_b8
                    uint128_t zmm0 = zmm2_1
                    int64_t rcx_15 = arg2[7]
                    float temp0_4[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                    i += 1
                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                    temp0_4[0] = temp0_4[0] f* *(rax_23 + rdx_7 - 8)
                    zmm0.d = zmm0.d f* *(rax_23 + rdx_7 - 0xc)
                    zmm2_1.d = zmm2_1.d f* *(rax_23 + rdx_7 - 4)
                    *(rcx_15 + rdx_7 - 0xc) = (_mm_unpacklo_ps(zmm0, temp0_4[0].q)).q
                    var_d0 = zmm2_1.d
                    *(rcx_15 + rdx_7 - 4) = var_d0
                while (i s< var_b0.d)
        else
            int32_t rcx_8 = var_b0.d
            int64_t var_40 = var_b8
            int32_t rax_18 = 0
            
            if (rcx_8 != 0)
                rax_18 = rcx_8
            
            int64_t var_60_1 = 0
            int64_t var_58_1 = 0
            void** const var_68 = &data_142fc4250
            var_b8 = 0
            int64_t var_b0_1 = 0
            void** const var_48 = &data_142fc4220
            char var_30_1 = 0
            sub_14172eb30(&var_68, &var_48)
            
            if (&arg2[7] != &var_40)
                int64_t rcx_10 = arg2[7]
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                arg2[7] = var_40
                arg2[8].d = rcx_8
                *(arg2 + 0x44) = var_b0:4.d
                int32_t var_38_1
                var_38_1.q = 0
                var_40 = 0
            
            sub_1417502a0(&arg2[2], rax_18)
            int64_t rcx_12 = var_40
            var_68 = &data_142fc4250
            var_48 = &data_142fc4220
            int32_t var_50_2 = 0
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            var_68 = &data_142fc4068
            
            if (var_60_1 != 0)
                sub_140a74f90(var_60_1)
        
        if (&arg2[0xa] != &var_a8)
            int64_t rcx_16 = arg2[0xa]
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            arg2[0xa] = var_a8
            int64_t var_a0
            arg2[0xb].d = var_a0.d
            *(arg2 + 0x5c) = var_a0:4.d
            int64_t var_a0_1 = 0
            var_a8 = 0
        
        int64_t* rcx_17 = arg1[1]
        (*(*rcx_17 + 0x4e0))(rcx_17, 2, zmm2_1)
        *(arg2 + 0xca) = *(*arg1 + 0xb8)
    
    int32_t i_3
    int32_t i_2 = i_3
    int64_t* var_88
    int64_t* rdi_3 = var_88
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_19 = *rdi_3
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            rdi_3 = &rdi_3[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rdi_3 = var_88
    
    if (rdi_3 != 0)
        sub_140a74f90(rdi_3)
    
    int64_t var_98
    
    if (var_98 != 0)
        sub_140a74f90(var_98)
    
    int64_t rcx_22 = var_a8
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int64_t rcx_23 = var_b8
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)

float var_d8
float var_d4
float var_c8
float var_c4
float var_c0

if (*(*arg1 + 0xc1) == 5)
    sub_141f633e0(arg1[1], &var_d8, &var_c8)
    bool cond:0_1 = var_c8 - var_d8 < 9.99999975e-05f
    *(arg2 + 0xc9) = 3
    
    if (cond:0_1 || var_c4 - var_d4 < 9.99999975e-05f || not(var_c0 - var_d0 >= 9.99999975e-05f))
        *(arg2 + 0xc9) = 4

uint64_t rax_34 = zx.q(*(arg2 + 0xc9))
float zmm4[0x4]

if (rax_34.b == 0)
    sub_141f633e0(arg1[1], &var_c8, &var_d8)
    void* rax_31 = *arg1
    float zmm3_2[0x4] = *(arg2 + 0xa0)
    zmm4 = var_d8
    zmm4[0] = zmm4[0] - var_c8
    char rcx_26 = *(rax_31 + 0xb8)
    int64_t zmm2_3
    zmm2_3.d = var_d4.d f- var_c4
    float temp0_7[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)
    zmm4[0] = zmm4[0] * zmm3_2[0]
    *(arg2 + 0xca) = rcx_26
    zmm2_3.d = zmm2_3.d f* temp0_7[0]
    float zmm1_1 = (var_d0 - var_c0) * _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa)[0]
    arg2[0xc] = (_mm_unpacklo_ps(zmm4, zmm2_3)).q
    arg2[0xd].d = zmm1_1
    return zmm1_1

if (rax_34.b == 1)
    sub_141f633e0(arg1[1], &var_c8, &var_d8)
    float zmm1_2[0x4] = *(arg2 + 0xa0)
    zmm4 = var_d8
    zmm4[0] = zmm4[0] - var_c8
    float zmm2_4 = (var_d4 - var_c4) * _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)[0]
    zmm4[0] = zmm4[0] * zmm1_2[0]
    float zmm3_3 = (var_d0 - var_c0) * _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)[0]
    
    if (zmm2_4 >= zmm4[0] || not(zmm2_4 < zmm3_3))
        zmm2_4 = zmm4[0]
        
        if (not(zmm3_3 >= zmm4[0]))
            zmm2_4 = zmm3_3
    
    void* rax_33 = *arg1
    *(arg2 + 0xca) = *(rax_33 + 0xb8)
    *(arg2 + 0x74) = zmm2_4 * 0.5f
    return rax_33

if (rax_34.b == 2)
    sub_141f633e0(arg1[1], &var_c8, &var_d8)
    float zmm1_3[0x4] = *(arg2 + 0xa0)
    float zmm2_5[0x4] = var_d4
    zmm2_5[0] = zmm2_5[0] - var_c4
    float zmm3_4[0x4] = var_d0
    zmm3_4[0] = zmm3_4[0] - var_c0
    float temp0_12[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 0x55)
    zmm2_5[0] = zmm2_5[0] * temp0_12[0]
    float temp0_13[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xaa)
    zmm3_4[0] = zmm3_4[0] * temp0_13[0]
    float zmm0_4[0x4] = var_d8
    zmm0_4[0] = zmm0_4[0] - var_c8
    zmm0_4[0] = zmm0_4[0] * zmm1_3[0]
    
    if (zmm2_5[0] >= zmm0_4[0] || zmm2_5[0] >= zmm3_4[0])
        zmm1_3 = zmm0_4
        
        if (not(zmm3_4[0] >= zmm0_4[0]))
            zmm1_3 = zmm3_4
    else
        zmm1_3 = zmm2_5
    
    if (zmm2_5[0] <= zmm0_4[0] || not(zmm2_5[0] > zmm3_4[0]))
        zmm2_5 = zmm0_4
        
        if (not(zmm3_4[0] <= zmm0_4[0]))
            zmm2_5 = zmm3_4
    
    rax_34 = *arg1
    zmm2_5[0] = zmm2_5[0] - zmm1_3[0]
    zmm1_3[0] = zmm1_3[0] * 0.5f
    char rcx_30 = *(rax_34 + 0xb8)
    zmm2_5[0] = zmm2_5[0] * 0.5f
    *(arg2 + 0xca) = rcx_30
    arg2[0xe].d = zmm1_3[0]
    *(arg2 + 0x6c) = zmm2_5[0]

return rax_34
