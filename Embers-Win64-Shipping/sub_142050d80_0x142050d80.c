// 函数: sub_142050d80
// 地址: 0x142050d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
float zmm6[0x4]
int128_t zmm7
float zmm8[0x4]
int128_t zmm9

if (arg1[0xa0].d s> 0)
    void* rcx = arg1[0x9d]
    
    if (rcx != 0 && *(rcx + 0x38) != 0)
        zmm6, zmm7, zmm8, zmm9 = sub_1420a6fb0(rcx, &arg1[0x9f], arg2.d)
        sub_141ee8490(arg1)

uint64_t result

if (arg1[0x94].d s<= 0)
label_142051534:
    int64_t* rax_41 = j_sub_140a82f30(0x10)
    int64_t* r15_5 = rax_41
    
    if (rax_41 == 0)
        r15_5 = nullptr
    else
        *rax_41 = 0
        rax_41[1] = 0
    
    void*** rax_42 = j_sub_140a82f30(0x18)
    void*** rbx_9 = rax_42
    
    if (rax_42 == 0)
        rbx_9 = nullptr
    else
        rax_42[1].d = 1
        *(rax_42 + 0xc) = 1
        *rbx_9 = &data_142ee2130
        rbx_9[2] = r15_5
    
    int64_t* var_1b0 = r15_5
    void*** var_1a8 = rbx_9
    
    if (&arg1[0xa8] != &var_1b0)
        arg1[0xa8] = r15_5
        var_1b0 = nullptr
        sub_1405aeff0(&arg1[0xa9], &var_1a8)
        rbx_9 = var_1a8
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t r14_2 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (r14_2 == 1)
                (*rbx_9)[1](rbx_9, zx.q(r14_2))
    
    arg1[0xac] = 0
    *(arg1 + 0x5dc) = 0
    arg1[0x9b].d = 0
    
    if (*(arg1 + 0x4dc) != 0)
        sub_1405dadb0(&arg1[0x9a], 0)
    
    arg1[0xab].d = 0
    
    if (*(arg1 + 0x55c) != 0)
        sub_1405dadb0(&arg1[0xaa], 0)
    
    uint128_t zmm0_3 = zx.o(0)
    int32_t var_100_1 = 0
    *(arg1 + 0x5bc) = zmm0_3
    *(arg1 + 0x5cc) = (_mm_unpacklo_ps(zmm0_3, zx.o(0).q)).q
    *(arg1 + 0x5d4) = 0
    arg1[0xb5].d = 0
    
    if (*(arg1 + 0x5ac) != 0)
        sub_1413f6f70(&arg1[0xb4], 0)
    
    *(arg1 + 0x574) = data_143dbb1f8.q
    result = zx.q(data_143dbb200)
    *(arg1 + 0x57c) = result.d
    arg1[0xad] = *(arg1 + 0x574)
    arg1[0xae].d = result.d
    arg1[0xb0].b = 0
    arg1[0xbc].b &= 0xfd
else
    void* rcx_2 = arg1[0x88]
    
    if (rcx_2 == 0)
        goto label_142051534
    
    if (sub_142368cd0(rcx_2, 1, 0xffffffff) == 0)
        goto label_142051534
    
    int128_t var_68_1 = zmm9
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    zmm9.q = float.d(performanceCount)
    zmm9.q = zmm9.q f* data_143d796f8
    zmm9.q = zmm9.q f+ 16777216.0
    
    if (arg1[0x98].d == 0)
        int32_t i
        
        do
            i = rand()
            arg1[0x98].d = i
        while (i == 0)
    
    int64_t i_6 = sx.q(arg1[0x94].d)
    int64_t var_200 = 0
    int32_t rbx = 0
    int32_t var_1f8_1 = 0
    int32_t var_1f4_1 = 0
    int32_t temp1_1 = i_6.d
    int32_t var_1f8_2
    
    if (temp1_1 s> 0)
        var_1f8_2 = i_6.d
        sub_1405c4fe0(&var_200)
        rbx = var_1f8_2
    else if (temp1_1 s< 0 && i_6.d != 0)
        var_1f8_2 = i_6.d
        sub_1407c3fe0(&var_200)
        rbx = var_1f8_2
    int64_t i_4 = i_6
    
    if (i_6.d s> 0)
        int64_t rdx_3 = 0
        int64_t i_1
        
        do
            int64_t rax_3 = arg1[0x93]
            rdx_3 += 0x40
            int64_t rcx_6 = var_200
            *(rdx_3 + rcx_6 - 0x40) = *(rax_3 + rdx_3 - 0x40)
            *(rdx_3 + rcx_6 - 0x30) = *(rax_3 + rdx_3 - 0x30)
            *(rdx_3 + rcx_6 - 0x20) = *(rax_3 + rdx_3 - 0x20)
            *(rdx_3 + rcx_6 - 0x10) = *(rax_3 + rdx_3 - 0x10)
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    int32_t* rax_4 = j_sub_140a82f30(0xc0)
    int32_t* rbx_1
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        int32_t rax_5 = arg1[0x94].d
        float var_38_1[0x4] = zmm6
        int128_t var_48_1 = zmm7
        float var_58_1[0x4] = zmm8
        void var_c8
        int128_t* rax_6 = sub_1423633d0(arg1[0x88], &var_c8)
        int64_t r12_1 = sx.q(arg1[0x97].d)
        int64_t r13_1 = arg1[0x96]
        char var_150_1 = 1
        zmm6 = *rax_6
        float zmm2[0x4] = *(rax_6 + 8)
        int128_t zmm5_1 = *(rax_6 + 4)
        int64_t var_1a0 = 0
        int32_t var_198_1 = r12_1.d
        zmm2[0] = zmm2[0] f+ *(rax_6 + 0x14)
        zmm6[0] = zmm6[0] f- *(rax_6 + 0xc)
        zmm6[0] = zmm6[0] f+ *(rax_6 + 0xc)
        zmm7.d = zmm5_1.d f+ rax_6[1].d
        zmm5_1.d = zmm5_1.d f- rax_6[1].d
        float var_1d8_1 = zmm2[0]
        zmm2[0] = zmm2[0] f- *(rax_6 + 0x14)
        int64_t var_168 = (_mm_unpacklo_ps(zmm6, zmm5_1.q)).q
        float zmm0_1[0x4] = _mm_unpacklo_ps(zmm6, zmm7.q)
        float var_160_1 = zmm2[0]
        int64_t var_15c_1 = zmm0_1.q
        float var_154_1 = var_1d8_1
        
        if (r12_1.d != 0)
            sub_140638750(&var_1a0, r12_1.d, 0)
            memcpy(var_1a0, r13_1, (r12_1 << 2).d)
        else
            int32_t var_194_1 = 0
        
        int64_t var_190 = 0
        int32_t var_188_1 = rbx
        
        if (rbx != 0)
            sub_1407c35c0(&var_190, rbx, 0)
            memcpy(var_190, var_200, rbx << 6)
        else
            int32_t var_184_1 = 0
        
        rbx.b = rax_5 s> 0
        int32_t rax_9 = sub_1420545f0(arg1)
        rbx_1 = sub_142047e40(rax_4, &var_190, &var_1a0, arg1[0x95].d, &var_168, rax_9, 
            (*(arg1 + 0x5b4))[0], arg1[0x98].d, rbx.b)
    
    void*** rax_11 = j_sub_140a82f30(0x18)
    
    if (rax_11 == 0)
        rax_11 = nullptr
    else
        rax_11[1].d = 1
        *rax_11 = &data_1432abe70
        *(rax_11 + 0xc) = 1
        rax_11[2] = rbx_1
    
    arg1[0xbc].b |= 1
    void*** rax_12 = sub_140a84c80(0, 0x30, 0)
    void*** var_178 = rax_12
    void*** rbx_2 = rax_12
    
    if (rax_12 != 0)
        rbx_2[1] = rbx_1
        *rbx_2 = &data_142d3fe58
        rbx_2[2] = _DeleteExceptionPtr
        rbx_2[4] = sub_140a387b0()
        *rbx_2 = &data_142d3feb0
    
    void var_f8
    int64_t* rax_14 = sub_14199c5a0(&var_f8, nullptr, 2)
    int64_t* r15_3 = *rax_14 + 0x10
    *r15_3 = 0
    r15_3[1].d = 0
    
    if (&var_178 != r15_3 && rbx_2 != 0)
        void** r8_7 = *rbx_2
        r8_7[8](rbx_2, r15_3, r8_7)
    
    r15_3[2].d = 0x8ff
    void* rcx_17 = *rax_14
    int64_t* result_1 = *(rcx_17 + 0x30)
    
    if (result_1 != 0)
        result_1[9].d += 1
        rbx_2 = var_178
    
    sub_140978a40(rcx_17, rax_14[1], rax_14[2].d, 1)
    
    if (rbx_2 != 0)
        (*rbx_2)[7](rbx_2, 0)
        void*** rax_16 = sub_140a84c80(rbx_2, 0, 0)
        var_178 = rax_16
        
        if (rax_16 != 0)
            sub_140a74f90(rax_16)
    
    void* r12_3 = &arg1[0xc0]
    int64_t rbx_3 = sx.q(*(r12_3 + 0x28))
    int32_t rax_17 = (rbx_3 + 1).d
    *(r12_3 + 0x28) = rax_17
    
    if (rax_17 s> *(r12_3 + 0x2c))
        sub_14083a490(r12_3, rbx_3.d)
    
    void* rax_18 = *(r12_3 + 0x20)
    void* rdx_14 = r12_3
    
    if (rax_18 != 0)
        rdx_14 = rax_18
    
    *(rdx_14 + (rbx_3 << 3)) = result_1
    
    if (result_1 != 0)
        result_1[9].d += 1
    
    uint32_t (* var_148_1)(int64_t* arg1, int128_t arg2 @ zmm1, int64_t arg3, void** arg4) =
        sub_14204d0a0
    int32_t var_208
    var_208.q = rbx_1
    int32_t var_140_1 = 0
    
    if (rax_11 != 0)
        rax_11[1].d += 1
        
        if (rax_11 != 0)
            rax_11[1].d += 1
    
    void*** rax_21 = sub_140a84c80(0, 0x40, 0)
    void*** var_1f0 = rax_21
    void*** r15_4 = rax_21
    
    if (rax_21 != 0)
        int128_t var_128 = var_148_1.o
        int64_t var_138 = var_208.q
        void*** var_130_1 = rax_11
        
        if (rax_11 != 0)
            rax_11[1].d += 1
            r15_4 = var_1f0
        
        sub_142047180(r15_4, arg1, &var_128, &var_138, zmm9.q)
    
    if (rax_11 != 0)
        rax_11[1].d -= 1
        
        if (rax_11[1].d == 1)
            (**rax_11)(rax_11)
            int32_t rax_25 = *(rax_11 + 0xc)
            *(rax_11 + 0xc) -= 1
            
            if (rax_25 == 1)
                (*rax_11)[1](rax_11, 1)
        
        r15_4 = var_1f0
        
        if (rax_11 != 0)
            rax_11[1].d -= 1
            
            if (rax_11[1].d == 1)
                (**rax_11)(rax_11)
                int32_t rax_29 = *(rax_11 + 0xc)
                *(rax_11 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*rax_11)[1](rax_11, 1)
            
            r15_4 = var_1f0
    
    int64_t** var_88_1 = nullptr
    int32_t var_7c_1 = 4
    int32_t i_5 = 1
    int64_t* result_2 = result_1
    
    if (result_1 != 0)
        result_1[9].d += 1
        r15_4 = var_1f0
    
    void var_e0
    int64_t* rax_32 = sub_14199c5a0(&var_e0, &result_2, 2)
    int64_t* rbx_6 = *rax_32 + 0x10
    *rbx_6 = 0
    rbx_6[1].d = 0
    
    if (&var_1f0 != rbx_6 && r15_4 != 0)
        void** r8_10 = *r15_4
        r8_10[8](r15_4, rbx_6, r8_10)
    
    rbx_6[2].d = 2
    void* rcx_29 = *rax_32
    int64_t* rbx_7 = *(rcx_29 + 0x30)
    int64_t* var_1d0_1 = rbx_7
    
    if (rbx_7 != 0)
        rbx_7[9].d += 1
        r15_4 = var_1f0
        rbx_7 = var_1d0_1
    
    sub_140978a40(rcx_29, rax_32[1], rax_32[2].d, 1)
    int64_t** rcx_30 = var_88_1
    int64_t** rdi_2 = &result_2
    int32_t i_3 = i_5
    
    if (rcx_30 != 0)
        rdi_2 = rcx_30
    
    if (i_3 != 0)
        int32_t i_2
        
        do
            int64_t* rcx_31 = *rdi_2
            
            if (rcx_31 != 0)
                rcx_31[9].d -= 1
                
                if (rcx_31[9].d == 1)
                    sub_140a2f6e0(rcx_31)
            
            rdi_2 = &rdi_2[1]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        r15_4 = var_1f0
        rbx_7 = var_1d0_1
        rcx_30 = var_88_1
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    if (r15_4 != 0)
        (*r15_4)[7](r15_4, 0)
        void*** rax_35 = sub_140a84c80(r15_4, 0, 0)
        var_1f0 = rax_35
        
        if (rax_35 != 0)
            sub_140a74f90(rax_35)
    
    int64_t rdi_3 = sx.q(*(r12_3 + 0x28))
    int32_t rax_36 = (rdi_3 + 1).d
    *(r12_3 + 0x28) = rax_36
    
    if (rax_36 s> *(r12_3 + 0x2c))
        sub_14083a490(r12_3, rdi_3.d)
    
    void* rax_37 = *(r12_3 + 0x20)
    
    if (rax_37 != 0)
        r12_3 = rax_37
    
    *(r12_3 + (rdi_3 << 3)) = rbx_7
    
    if (rbx_7 != 0)
        rbx_7[9].d += 1
        rbx_7[9].d -= 1
        
        if (rbx_7[9].d == 1)
            sub_140a2f6e0(var_1d0_1)
    
    result = result_1
    
    if (result != 0)
        int32_t rcx_37 = *(result + 0x48)
        *(result + 0x48) -= 1
        
        if (rcx_37 == 1)
            result = sub_140a2f6e0(result_1)
    
    int64_t* rbx_8 = rax_11
    
    if (rbx_8 != 0)
        result = zx.q(rbx_8[1].d)
        rbx_8[1].d -= 1
        
        if (result.d == 1)
            result = (**rbx_8)(rbx_8)
            int32_t r14_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (r14_1 == 1)
                result = (*(*rbx_8 + 8))(rbx_8, zx.q(r14_1))
    
    int64_t rcx_41 = var_200
    
    if (rcx_41 != 0)
        result = sub_140a74f90(rcx_41)

__security_check_cookie(rax_1 ^ &var_258)
return result
