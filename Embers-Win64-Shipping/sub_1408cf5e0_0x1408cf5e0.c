// 函数: sub_1408cf5e0
// 地址: 0x1408cf5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3[4]
void* r12 = arg3[1]
uint64_t result

if (rbx != 0)
    result = rbx[0x23]
    
    if (result != 0)
    label_1408cf63b:
        arg1[0x15] = result
        void* const rdx
        
        if (arg3[4] == 0)
            rdx = nullptr
        else
            void* rax_1 = sub_1408d3a80()
            
            if (rax_1 == 0)
                rdx = nullptr
            else
                rdx = arg3[4]
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                    rdx = nullptr
        
        result.b = (*(rdx + 0xcc) u>> 7).b & 1
        arg1[0x16].b = result.b
    else
        (*(*rbx + 0x390))(rbx)
        result = rbx[0x23]
        
        if (result != 0)
            goto label_1408cf63b

char result_1 = 0

if (r12 == 0 || arg1[0x15] == 0)
    result.b = 1
else
    void var_88
    int128_t* rax_5 = sub_1423120c0(r12, &var_88)
    int64_t* rcx_3 = arg1[0x15]
    float zmm0_1[0x4] = *(rax_5 + 0xc)
    int64_t zmm2 = rax_5[1].d
    zmm0_1[0] = zmm0_1[0] + zmm0_1[0]
    float zmm1_1 = *(rax_5 + 0x14)
    zmm2.d = zmm2.d f+ zmm2.d
    arg1[0x23] = arg4
    arg1[0x24] = (_mm_unpacklo_ps(zmm0_1, zmm2)).q
    arg1[0x25].d = zmm1_1 + zmm1_1
    void* rax_7 = sub_1408d4cd0(rcx_3)
    arg1[0x21] = rax_7
    int64_t rdi_1 = sx.q(arg1[0xc].d)
    int32_t i_1 = *(rax_7 + 0x48)
    int32_t rax_8 = rdi_1.d + i_1
    arg1[0xc].d = rax_8
    
    if (rax_8 s> *(arg1 + 0x64))
        sub_140775640(&arg1[0xb])
    
    char* r8_3 = rdi_1 * 0xa0 + arg1[0xb]
    
    if (i_1 != 0)
        void* rdx_3 = &r8_3[0x2c]
        int32_t i
        
        do
            *r8_3 = 0
            int64_t* rcx_5 = rdx_3 + 4
            *(rdx_3 - 0x2b) = 0
            r8_3 = &r8_3[0xa0]
            *(rdx_3 - 0x28) = 0
            *(rdx_3 - 0x24) = 0xffffffff
            *(rdx_3 - 0x1b) = 0xff
            __builtin_memset(rdx_3 - 0x14, 0, 0x18)
            *(rdx_3 + 0x14) = 0
            *(rdx_3 + 0x1c) = 0
            *(rdx_3 + 0x20) = 0x80
            int64_t* rax_9 = *(rdx_3 + 0x14)
            
            if (rax_9 != 0)
                rcx_5 = rax_9
            
            *rcx_5 = 0
            rcx_5[1] = 0
            void* rcx_6 = rdx_3 + 0x24
            *(rdx_3 + 0x34) = 0
            *(rdx_3 + 0x3c) = 0
            *(rdx_3 + 0x40) = 0x80
            void* rax_10 = *(rdx_3 + 0x34)
            
            if (rax_10 != 0)
                rcx_6 = rax_10
            
            *rcx_6 = 0
            *(rcx_6 + 8) = 0
            void* rcx_7 = rdx_3 + 0x44
            *(rdx_3 + 0x54) = 0
            *(rdx_3 + 0x5c) = 0
            *(rdx_3 + 0x60) = 0x80
            void* rax_11 = *(rdx_3 + 0x54)
            rdx_3 += 0xa0
            
            if (rax_11 != 0)
                rcx_7 = rax_11
            
            *rcx_7 = 0
            *(rcx_7 + 8) = 0
            *(rdx_3 - 0x3c) = 0
            *(rdx_3 - 0x34) = 0
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rax_13 = (*(*arg1 + 0x150))(arg1)
    int64_t* rax_14 = sub_142427eb0(&var_88)
    void* rax_16
    int128_t zmm6_1
    int128_t zmm7_1
    int128_t zmm8_1
    float zmm10_1[0x4]
    rax_16, zmm6_1, zmm7_1, zmm8_1, zmm10_1 =
        sub_1420efae0(rax_13, sub_142452380(), nullptr, nullptr, rax_14)
    arg1[0x22] = rax_16
    *(rax_16 + 0x59) |= 0x10
    int32_t var_138
    sub_140865c40(&data_143984e60, &var_138, rax_13)
    int64_t rax_17 = sx.q(var_138)
    void* rcx_11
    
    if (rax_17.d != 0xffffffff)
        rcx_11 = data_143984e60 + rax_17 * 0x18
    
    int64_t rax_19
    
    if (rax_17.d == 0xffffffff || rcx_11 == 0)
        rax_19 = 0
    else
        rax_19 = *(rcx_11 + 8)
    
    arg1[0x20] = arg2
    arg1[0x1f] = rax_19
    *(arg1 + 0x12c) = 0
    char* rdi_3 = arg3[5]
    void* r15_3 = &rdi_3[sx.q(arg3[6].d) * 0x30]
    
    if (rdi_3 == r15_3)
    label_1408cf991:
        char* rax_25 = arg1[0x23]
        
        if (*rax_25 != 0)
            int32_t rcx_16 = *(rax_25 + 8)
            int32_t r15_4 = 0
            int128_t var_58_1 = zmm8_1
            var_138 = rcx_16
            zmm8_1.d = float.s(zx.q(arg5))
            zmm8_1.d = zmm8_1.d f+ zmm8_1.d
            zmm8_1.d = zmm8_1.d f* arg1[0x25].d
            
            if (rcx_16 != 0)
                int32_t var_e4_1 = 0
                int512_t zmm6_3
                int512_t zmm7_3
                
                do
                    int16_t* var_130 = nullptr
                    float zmm1_2 = zmm8_1.d f+ arg1[0x25].d
                    int32_t var_128_1 = 0
                    float zmm0_2 = float.s(zx.q(r15_4)) f* arg1[0x24].d
                    sub_140a20c40(&var_130, r15_4)
                    uint64_t var_100 = *(r12 + 0x18)
                    int16_t* var_f8
                    int32_t rcx_19 = sub_140b63b70(&var_100, &var_f8)
                    int32_t var_f0
                    int32_t var_118_1 = var_f0
                    int16_t* var_120 = var_f8
                    int32_t rdx_12 = var_f0 + sbb.d(rcx_19, rcx_19, var_f0 != 0) + 0x10
                    var_f8 = nullptr
                    var_f0.q = 0
                    int32_t var_ec
                    
                    if (rdx_12 s> var_ec)
                        sub_1405947f0(&var_120, rdx_12)
                    
                    sub_140a20ba0(&var_120, u"_BlendComponent", 0xf)
                    int32_t rax_32 = var_118_1
                    int16_t* rdi_4 = var_120
                    var_120 = nullptr
                    var_118_1.q = 0
                    int32_t rax_33
                    int16_t* rbx_5
                    
                    if (rax_32 s> 1)
                        int32_t rbx_7
                        
                        if (var_128_1 == 0)
                            rbx_7 = 0
                        else
                            rbx_7 = var_128_1 - 1
                        
                        int32_t rcx_24
                        
                        if (rax_32 != 0 || rbx_7 == 0)
                            rcx_24 = 0
                        else
                            rcx_24 = rax_32 + 1
                        
                        int16_t* var_110 = rdi_4
                        int32_t rdx_14 = rax_32 + rbx_7 + rcx_24
                        rdi_4 = nullptr
                        int32_t var_104_1 = var_ec
                        
                        if (rdx_14 s> var_ec)
                            sub_1405947f0(&var_110, rdx_14)
                        
                        sub_140a20ba0(&var_110, var_130, rbx_7)
                        rbx_5 = var_110
                        rax_33 = rax_32
                        var_110 = nullptr
                        int32_t var_108_1
                        var_108_1.q = 0
                    else
                        rbx_5 = var_130
                        rax_33 = var_128_1
                        var_130 = nullptr
                        int64_t var_128_2 = 0
                    
                    int16_t* rdx_16 = &data_142d40450
                    
                    if (rax_33 != 0)
                        rdx_16 = rbx_5
                    
                    uint64_t var_a8
                    sub_140b58260(&var_a8, rdx_16, 1)
                    
                    if (rbx_5 != 0)
                        sub_140a74f90(rbx_5)
                    
                    if (rdi_4 != 0)
                        sub_140a74f90(rdi_4)
                    
                    int16_t* rcx_30 = var_f8
                    
                    if (rcx_30 != 0)
                        sub_140a74f90(rcx_30)
                    
                    int16_t* rcx_31 = var_130
                    
                    if (rcx_31 != 0)
                        sub_140a74f90(rcx_31)
                    
                    uint64_t rbx_8 = var_a8
                    void* rdi_5 = arg1[0x22]
                    var_100 = rbx_8
                    char rax_34 = sub_140b5b8a0(rbx_8.d, 0)
                    int32_t rcx_32
                    rcx_32.b = var_100:4.d == 0
                    
                    if ((rcx_32.b & rax_34) != 0)
                        sub_140d19010(rdi_5, 
                            NewObject with empty name can't be used to create default subobjects (inside "
                        "of UObject derived class constructor) as it produces incon")
                    
                    int32_t var_160
                    var_160.q = 0
                    int64_t* rax_36
                    float zmm7_2[0x4]
                    float zmm8_2[0x4]
                    float zmm9_1[0x4]
                    rax_36, zmm7_2, zmm8_2, zmm9_1 =
                        sub_140d2dfc0(sub_142591550(), rdi_5, rbx_8, 0, 0, 0, 0, 0, 0)
                    int64_t* rdi_6 = rax_36
                    sub_141ef1390(rax_36)
                    float var_c0_2 = zmm1_2
                    int32_t rcx_37 = rdi_6[0x26].d
                    uint64_t var_c8 = zmm0_2.q
                    uint128_t zmm0_3 = zx.o(rdi_6[0x25])
                    char rax_37
                    
                    if (zmm0_3.d f!= rdi_6[0x36].d || zmm0_3.q:4.d.d f!= *(rdi_6 + 0x1b4)
                            || rcx_37.d f!= rdi_6[0x37].d)
                        rax_37 = 1
                    else
                        rax_37 = 0
                    
                    if (rax_37 != 0)
                        zmm7_2 = data_143cebcf0
                        uint128_t zmm4_1 = zx.o(rdi_6[0x25])
                        int32_t rax_38 = rdi_6[0x26].d
                        float zmm5_1[0x4] = data_143cebd00
                        float temp0_3[0x4] =
                            _mm_unpacklo_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), 0)
                        float temp0_5[0x4] =
                            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, rax_38[0].q), temp0_3[0].q)
                        float zmm2_1[0x4] = data_143cebd10
                        zmm4_1 = _mm_div_ps(temp0_5, zmm7_2)
                        zmm0_3 = _mm_and_ps(zmm4_1, zmm5_1)
                        zmm5_1 = _mm_and_ps(zmm5_1, zmm7_2)
                        float temp0_9[0x4] = _mm_cmpeq_ps(zmm2_1, zmm0_3, 2)
                        float temp0_11[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm4_1))
                        float temp0_13[0x4] =
                            _mm_mul_ps(_mm_and_ps(temp0_11 ^ zmm4_1, temp0_9) ^ temp0_11, zmm7_2)
                        float temp0_17[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_1), 
                            _mm_min_ps(_mm_sub_ps(temp0_5, temp0_13), zmm5_1))
                        float temp0_18[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_17, 2)
                        float temp0_19[0x4] = _mm_add_ps(temp0_17, zmm7_2)
                        float zmm3_1[0x4] = _mm_and_ps(temp0_18, temp0_19 ^ temp0_17) ^ temp0_19
                        zmm2_1 = _mm_and_ps(_mm_cmpeq_ps(data_143cebce0, zmm3_1, 1), 
                            _mm_sub_ps(zmm3_1, zmm7_2) ^ zmm3_1) ^ zmm3_1
                        int32_t var_d0_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
                        rdi_6[0x36] =
                            (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
                        rdi_6[0x37].d = var_d0_2
                        float (* rax_40)[0x4]
                        rax_40, zmm7_2, zmm8_2 = sub_140ade170(&rdi_6[0x36], &var_88)
                        *(rdi_6 + 0x1a0) = *rax_40
                    
                    var_160.b = 0
                    uint128_t var_98 = *(rdi_6 + 0x1a0)
                    int64_t r8_14
                    r8_14, zmm6_3, zmm7_3, zmm8_1, zmm10_1 = sub_141f48240(rdi_6, &var_c8, &var_98, 
                        0, zmm7_2, zmm8_2, zmm9_1, zmm10_1, 0, 0)
                    r8_14.b = 1
                    (*(*rdi_6 + 0x8a8))(rdi_6, r12, r8_14)
                    sub_141f49a80(rdi_6, 0, 1)
                    void* rdx_21 = arg1[0x20]
                    sub_1423bc410(&rdi_6[6], rdx_21, rdx_21 + 0x58)
                    int64_t** rax_42 = j_sub_140a82f30(0x28)
                    int64_t** rbx_9 = rax_42
                    
                    if (rax_42 == 0)
                        rbx_9 = nullptr
                    else
                        __builtin_memset(rbx_9, 0, 0x25)
                    
                    void* const rdx_22
                    
                    if (arg3[2] == 0)
                        rdx_22 = nullptr
                    else
                        void* rax_43 = sub_1408d4090()
                        
                        if (rax_43 == 0)
                            rdx_22 = nullptr
                        else
                            rdx_22 = arg3[2]
                            int64_t rax_44 = sx.q(*(rax_43 + 0x38))
                            
                            if (rax_44.d s> *(rdx_22 + 0x38)
                                    || *(*(rdx_22 + 0x30) + (rax_44 << 3)) != rax_43 + 0x30)
                                rdx_22 = nullptr
                    
                    *rbx_9 = rdi_6
                    
                    if (rdx_22 != 0)
                        sub_141f476a0(rdi_6, rdx_22)
                        void* rax_46 = sub_141f3b9f0(*rbx_9)
                        void* const rdi_7 = rax_46
                        void* rax_47
                        void* rcx_46
                        int64_t rdx_23
                        
                        if (rax_46 != 0)
                            rax_47 = sub_1408d4090()
                            rcx_46 = *(rdi_7 + 0x10)
                            rdx_23 = sx.q(*(rax_47 + 0x38))
                        
                        if (rax_46 == 0 || rdx_23.d s> *(rcx_46 + 0x38)
                                || *(*(rcx_46 + 0x30) + (rdx_23 << 3)) != rax_47 + 0x30)
                            rdi_7 = nullptr
                        
                        rbx_9[1] = rdi_7
                        rdi_6 = *rbx_9
                    
                    (*(*rdi_6 + 0x340))(rdi_6, 0)
                    sub_141f70b70(*rbx_9, 0)
                    *(*rbx_9 + 0x5a4) = 0
                    int64_t rdi_8 = sx.q(arg1[0xe].d)
                    int32_t rax_51 = (rdi_8 + 1).d
                    arg1[0xe].d = rax_51
                    
                    if (rax_51 s> *(arg1 + 0x74))
                        sub_1405a4d70(&arg1[0xd])
                    
                    r15_4 += 1
                    *(arg1[0xd] + (rdi_8 << 3)) = rbx_9
                while (r15_4 u< var_138)
                
                zmm7_3.o = zmm7_1
                zmm6_3.o = zmm6_1
    else
        int64_t result_2
        
        do
            void* rcx_12 = arg1[0x21]
            int32_t rdx_7 = 0
            char r9 = *rdi_3
            
            if (*(rcx_12 + 0x48) s<= 0)
            label_1408cf8d0:
                rdx_7 = -1
            else
                int64_t* rax_22 = *(rcx_12 + 0x40) + 8
                
                while (*rax_22 != zx.q(r9))
                    rdx_7 += 1
                    rax_22 = &rax_22[2]
                    
                    if (rdx_7 s>= *(rcx_12 + 0x48))
                        goto label_1408cf8d0
            
            void* rcx_13 = arg1[0xb]
            void* r8_8 = sx.q(arg1[0xc].d) * 0xa0 + rcx_13
            
            if (rcx_13 != r8_8)
                do
                    if (*(rcx_13 + 0x11) == r9)
                        result_2.b = 1
                        result_1 = 1
                        goto label_1408cf970
                    
                    rcx_13 += 0xa0
                while (rcx_13 != r8_8)
                
                rcx_13 = arg1[0xb]
            
            void* rbx_4 = sx.q(rdx_7) * 0xa0 + rcx_13
            *(rbx_4 + 0x11) = r9
            zmm6_1, zmm7_1, zmm8_1, zmm10_1 = sub_1408d08a0(arg1, rbx_4, rdi_3, r12, arg3, arg5)
            result_2 = zx.q(*(rbx_4 + 1))
            
            if (result_2.b != 0)
                if (arg1[0x12].d != 0)
                    result_2 = zx.q(result_1)
                else
                    result_2.b = 1
                    result_1 = 1
            else if (*(rbx_4 + 0x28) == 0 || (result_2.b != 0 && arg1[0x12].d == 0))
                result_2.b = 1
                result_1 = 1
            else
                result_2 = zx.q(result_1)
            
        label_1408cf970:
            rdi_3 = &rdi_3[0x30]
        while (rdi_3 != r15_3)
        
        if (result_2.b == 0)
            goto label_1408cf991
        
        sub_1408ce3b0(&arg1[0xb], 0)
    
    result = zx.q(result_1)

result.b = result.b == 0
return result
