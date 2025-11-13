// 函数: sub_142244020
// 地址: 0x142244020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t* var_200 = arg5
int32_t* var_1a0 = arg4
bool rax_2

if (arg1 != 0)
    rax_2 = std::operator!=<char,struct std::char_traits<char> >(&arg1[0x80])

uint64_t result
int128_t var_88

if (arg1 == 0 || rax_2 != 0)
    int64_t var_1f8_2 = 0
    int32_t var_1f0_1 = 0
    float temp0_3[0x4] =
        __maxss_xmmss_memss(__maxss_xmmss_memss((*(arg3 + 4))[0], *arg3)[0], arg3[1].d)
    void*** rax_27 = j_sub_140a82f30(0x20)
    int64_t* r14 = nullptr
    void*** rbx_4 = rax_27
    
    if (rax_27 == 0)
        rbx_4 = nullptr
    else
        sub_1417048d0(rax_27, 3, 0)
        rbx_4[2] = var_1f8_2
        rbx_4[3].d = var_1f0_1
        *(rbx_4 + 0x1c) = temp0_3[0]
        *rbx_4 = &data_142fc46f0
    
    sub_1417354d0(&var_200)
    var_200[5] = rbx_4
    int128_t zmm1 = data_143dbb0d0
    int64_t* rcx_28 = var_200
    var_88 = data_143dbb0c0
    int128_t var_68_1 = data_143dbb0e0
    int128_t var_78_1 = zmm1
    float zmm6_1[0x4] = sub_14175b310(rcx_28, &var_88)
    int64_t* rax_29 = var_200
    zmm6_1[0] = zmm6_1[0] * 0.400000006f
    rax_29[4] = 0
    int64_t* rax_30 = var_200
    zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
    *(rax_30 + 0x89) = 0
    int32_t* rax_31 = var_1a0
    float temp0_4[0x4] = _mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)
    float var_1f0_2 = zmm6_1[0]
    *rax_31 = 0x3f800000
    *arg5 = temp0_4.q
    arg5[1].d = var_1f0_2
    float zmm1_4[0x4] = data_143dbb0d0
    int128_t zmm2_1 = data_143dbb0e0
    *arg6 = data_143dbb0c0
    arg6[1] = zmm1_4
    arg6[2] = zmm2_1
    int64_t rdi_4 = sx.q(arg8[1].d)
    int32_t rax_33 = (rdi_4 + 1).d
    arg8[1].d = rax_33
    
    if (rax_33 s> *(arg8 + 0xc))
        sub_1405a4d70(arg8)
    
    *(*arg8 + (rdi_4 << 3)) = var_200
    int64_t* rcx_31 = *arg7
    var_200 = nullptr
    *arg7 = rbx_4
    
    if (rcx_31 != 0)
        (**rcx_31)(rcx_31, 1)
        r14 = var_200
    
    if (r14 != 0)
        sub_141706330(r14)
        j_sub_140a74f90(r14)
    
    result.b = 1
else
    void* rax_3 = sub_140d3c6e0(&arg1[0x80])
    *var_1a0 = sub_142216b90(arg1)
    int64_t* rax_5 = sub_142216b10(arg1, &var_1a0)
    int32_t rcx_4 = rax_5[1].d
    int64_t* rax_6 = var_200
    *rax_6 = *rax_5
    rax_6[1].d = rcx_4
    int128_t* rax_7 = sub_1422178d0(arg1, &var_88)
    char result_1 = 0
    int128_t zmm1_1 = rax_7[1]
    int128_t zmm0_3 = rax_7[2]
    *arg6 = *rax_7
    arg6[1] = zmm1_1
    arg6[2] = zmm0_3
    int64_t var_1d8
    __builtin_memset(&var_1d8, 0, 0x33)
    int512_t zmm1_2 = sub_1422119d0(arg1, &var_1d8)
    void var_208
    int16_t* rbx
    rbx.b = *sub_142230430(sub_140d3c6e0(&arg1[0x80]), &var_208, zmm1_2) == 3
    int16_t var_1a8
    sub_1422119a0(&var_1a8, sub_142216be0(arg1), rbx.b)
    uint32_t zmm2[0x4] = data_143f515b0
    float zmm0_4[0x4] = zmm2
    uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm2, data_143f515c0)
    zmm1_2.o = zx.o(0)
    zmm0_4[0].q = zx.o(0) u>> 0x40
    zmm1_2.o = _mm_shuffle_ps(zx.o(0), zmm0_4, 0xc4)
    zmm0_4 = var_1d8.o
    int64_t var_184
    __builtin_memset(&var_184, 0, 0x33)
    int128_t var_128_1 = zmm1_2.o
    int128_t var_f8_1 = zmm1_2.o
    int64_t var_1c8
    zmm1_2.o = var_1c8.o
    int64_t var_138_1 = 0
    int32_t var_130_1 = 0
    int128_t var_118_1 = zx.o(0)
    uint32_t var_108_1[0x4] = temp0
    int128_t var_e8_1 = zx.o(0)
    uint32_t var_d8_1[0x4] = temp0
    int64_t var_c0_1 = 0
    int32_t var_b8_1 = 0
    uint8_t var_188 = *(rax_3 + 0x89) u>> 3 & 1
    var_184.o = zmm0_4
    int16_t var_154
    var_154.d = var_1a8.d
    int64_t var_1b8
    int64_t var_164
    var_164.o = var_1b8.o
    int64_t var_174
    var_174.o = zmm1_2.o
    char* rax_13 = sub_142230430(rax_3, &var_208, zmm1_2)
    zmm1_2.o = data_143dbb0d0
    uint64_t var_14c_1 = *arg3
    uint128_t var_128_2 = data_143dbb0c0
    uint32_t var_150_1 = zx.d(*rax_13)
    uint128_t var_108_2 = data_143dbb0e0
    int32_t var_144_1 = arg3[1].d
    int128_t var_118_2 = zmm1_2.o
    int128_t* rax_15 = sub_142218ad0(arg1, &var_88, 1, 0)
    int128_t var_f8_2 = *rax_15
    int128_t var_e8_2 = rax_15[1]
    int128_t var_d8_2 = rax_15[2]
    void* var_c8_1 = rax_3 + 0x28
    int32_t var_1f0 = *(rax_3 + 0xd8)
    int128_t zmm0_6 = (*(rax_3 + 0xd0)).o
    void** var_1e8 = nullptr
    int32_t i_4 = 0
    var_c0_1.o = zmm0_6
    void* var_a0_1 = nullptr
    int32_t i_5 = 0
    int32_t var_94_1 = 1
    void var_a8
    float zmm14[0x4]
    sub_14222ce80(&var_188, &var_1e8, &var_a8, zmm14)
    void* rcx_15
    
    if (i_4 != 0)
        if (i_4 != 1)
            void*** rax_21 = j_sub_140a82f30(0x40)
            void*** rax_22
            
            if (rax_21 == 0)
                rax_22 = nullptr
            else
                rax_22 = sub_141704910(rax_21, &var_1e8)
            
            int64_t* rcx_17 = *arg7
            *arg7 = rax_22
            
            if (rcx_17 != 0)
                (**rcx_17)(rcx_17, 1)
        else
            void** rcx_16 = var_1e8
            
            if (arg7 != rcx_16)
                int64_t* r8_3 = *arg7
                *arg7 = *rcx_16
                *rcx_16 = nullptr
                
                if (r8_3 != 0)
                    (**r8_3)(r8_3, 1)
        
        rcx_15 = var_a0_1
        void* rbx_1 = &var_a8
        
        if (rcx_15 != 0)
            rbx_1 = rcx_15
        
        void* r15_1 = rbx_1 + (sx.q(i_5) << 3)
        
        if (rbx_1 != r15_1)
            do
                int64_t rdi_2 = sx.q(arg8[1].d)
                int32_t rax_24 = (rdi_2 + 1).d
                arg8[1].d = rax_24
                
                if (rax_24 s> *(arg8 + 0xc))
                    sub_1405a4d70(arg8)
                
                *(*arg8 + (rdi_2 << 3)) = *rbx_1
                *rbx_1 = 0
                rbx_1 += 8
            while (rbx_1 != r15_1)
            
            rcx_15 = var_a0_1
        
        result_1 = 1
    else
        rcx_15 = var_a0_1
    
    int32_t i_2 = i_5
    void* rdi_3 = &var_a8
    
    if (rcx_15 != 0)
        rdi_3 = rcx_15
    
    if (i_2 != 0)
        int32_t i
        
        do
            void* rbx_2 = *rdi_3
            
            if (rbx_2 != 0)
                sub_141706330(rbx_2)
                j_sub_140a74f90(rbx_2)
            
            rdi_3 += 8
            i = i_2
            i_2 -= 1
        while (i != 1)
        rcx_15 = var_a0_1
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int32_t i_3 = i_4
    void** rbx_3 = var_1e8
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t* rcx_23 = *rbx_3
            
            if (rcx_23 != 0)
                (**rcx_23)(rcx_23, 1)
            
            rbx_3 = &rbx_3[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    void** rcx_24 = var_1e8
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_228)
return result
