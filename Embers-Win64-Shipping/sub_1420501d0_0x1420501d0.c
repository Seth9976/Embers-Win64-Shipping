// 函数: sub_1420501d0
// 地址: 0x1420501d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7
float zmm8[0x4]

if (arg1[0xa0].d s> 0)
    void* rcx = arg1[0x9d]
    
    if (rcx != 0 && *(rcx + 0x38) != 0)
        arg3, zmm7, zmm8 = sub_1420a6fb0(rcx, &arg1[0x9f], arg2)
        sub_141ee8490(arg1)

sub_14209fb70(&arg1[0x9f])
int64_t result
int64_t var_1f8
int64_t* var_1f0

if (arg1[0x94].d s<= 0)
label_1420509b9:
    int64_t rax_49 = j_sub_140a82f30(0x10)
    int64_t r14_1 = rax_49
    
    if (rax_49 == 0)
        r14_1 = 0
    else
        *rax_49 = 0
        *(rax_49 + 8) = 0
    
    int64_t* rax_50 = j_sub_140a82f30(0x18)
    int64_t* rbx_7 = rax_50
    
    if (rax_50 == 0)
        rbx_7 = nullptr
    else
        rax_50[1].d = 1
        *(rax_50 + 0xc) = 1
        *rbx_7 = &data_142ee2130
        rbx_7[2] = r14_1
    
    var_1f8 = r14_1
    var_1f0 = rbx_7
    
    if (&arg1[0xa8] != &var_1f8)
        arg1[0xa8] = r14_1
        var_1f8 = 0
        sub_1405aeff0(&arg1[0xa9], &var_1f0)
        rbx_7 = var_1f0
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t r12_2 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (r12_2 == 1)
                (*(*rbx_7 + 8))(rbx_7, zx.q(r12_2))
    
    arg1[0xac] = 0
    *(arg1 + 0x5dc) = 0
    arg1[0x9b].d = 0
    
    if (*(arg1 + 0x4dc) != 0)
        sub_1405dadb0(&arg1[0x9a], 0)
    
    arg1[0xab].d = 0
    
    if (*(arg1 + 0x55c) != 0)
        sub_1405dadb0(&arg1[0xaa], 0)
    
    arg1[0xb5].d = 0
    
    if (*(arg1 + 0x5ac) != 0)
        sub_1413f6f70(&arg1[0xb4], 0)
    
    *(arg1 + 0x574) = data_143dbb1f8.q
    int32_t rax_54 = data_143dbb200
    *(arg1 + 0x57c) = rax_54
    arg1[0xad] = *(arg1 + 0x574)
    arg1[0xae].d = rax_54
    arg1[0xb0].b = 0
    *(arg1 + 0x5bc) = zx.o(0)
    int32_t var_b0_1 = 0
    result = 0
    *(arg1 + 0x5cc) = _mm_unpacklo_ps(zx.o(0), 0).q
    *(arg1 + 0x5d4) = 0
else
    void* rcx_3 = arg1[0x88]
    
    if (rcx_3 == 0)
        goto label_1420509b9
    
    if (sub_142368cd0(rcx_3, 1, 0xffffffff) == 0)
        goto label_1420509b9
    
    float var_48_1[0x4] = arg3
    int128_t var_58_1 = zmm7
    float var_68_1[0x4] = zmm8
    
    if (arg1[0x98].d == 0)
        int32_t i
        
        do
            i = rand()
            arg1[0x98].d = i
        while (i == 0)
    
    int32_t rax_2 = arg1[0x94].d
    int64_t var_228 = 0
    int64_t r14 = 0
    int32_t var_220_1 = 0
    int32_t r13_1 = 0
    
    if (rax_2 s> 0)
        sub_1405c4fe0(&var_228)
        r14 = var_228
        r13_1 = rax_2
    else if (rax_2 s< 0 && rax_2 != 0)
        sub_1407c3fe0(&var_228)
        r14 = var_228
        r13_1 = rax_2
    
    int32_t r15 = arg1[0x94].d
    int32_t rdx_4 = 0
    
    if (r15 s> 0)
        int64_t rcx_6 = 0
        
        do
            int64_t rax_3 = arg1[0x93]
            rcx_6 += 0x40
            rdx_4 += 1
            *(r14 + rcx_6 - 0x40) = *(rcx_6 + rax_3 - 0x40)
            *(r14 + rcx_6 - 0x30) = *(rcx_6 + rax_3 - 0x30)
            *(r14 + rcx_6 - 0x20) = *(rcx_6 + rax_3 - 0x20)
            *(r14 + rcx_6 - 0x10) = *(rcx_6 + rax_3 - 0x10)
            r15 = arg1[0x94].d
        while (rdx_4 s< r15)
    
    void var_ac
    int128_t* rax_4 = sub_1423633d0(arg1[0x88], &var_ac)
    int64_t rbx = sx.q(arg1[0x97].d)
    char var_1e0_1 = 1
    uint64_t var_218 = 0
    arg3 = *rax_4
    float zmm4_1[0x4] = *(rax_4 + 0xc)
    uint128_t zmm1_1 = *(rax_4 + 0x14)
    int128_t zmm3 = rax_4[1].d
    zmm4_1[0] = zmm4_1[0] + arg3[0]
    float zmm2 = *(rax_4 + 8)
    float zmm0_2[0x4] = zmm1_1
    int64_t zmm5_1 = *(rax_4 + 4)
    zmm0_2[0] = zmm0_2[0] + zmm2
    int32_t arg_8 = rbx.d
    zmm7.d = zmm3.d f+ zmm5_1.d
    arg3[0] = arg3[0] - zmm4_1[0]
    zmm5_1.d = zmm5_1.d f- zmm3.d
    float var_200_1 = zmm0_2[0]
    var_1f8 = (_mm_unpacklo_ps(arg3, zmm5_1)).q
    var_1f0.d = zmm2 f- zmm1_1.d
    zmm0_2 = _mm_unpacklo_ps(zmm4_1, zmm7.q)
    float var_1e4_1 = var_200_1
    uint64_t rax_7 = arg1[0x96]
    var_1f0 = zmm0_2.q
    int32_t var_210_2 = rbx.d
    int32_t var_20c
    uint64_t arg_18
    
    if (rbx.d != 0)
        sub_140638750(&var_218, rbx.d, 0)
        uint64_t rbx_1 = var_218
        arg_18 = rbx_1
        memcpy(rbx_1, rax_7, (rbx << 2).d)
        arg_8 = var_210_2
    else
        var_20c = 0
        arg_18 = 0
    
    uint64_t var_208 = 0
    int32_t var_1fc
    uint64_t arg_10
    
    if (r13_1 != 0)
        sub_1407c35c0(&var_208, r13_1, 0)
        uint64_t rax_9 = var_208
        arg_10 = rax_9
        memcpy(rax_9, r14, r13_1 << 6)
    else
        var_1fc = 0
        arg_10 = 0
    
    int32_t rbx_2 = arg1[0x98].d
    arg3 = *(arg1 + 0x5b4)
    int32_t rax_10 = sub_1420545f0(arg1)
    int32_t rdx_10 = arg1[0x95].d
    bool var_148_1 = r15 s> 0
    int32_t var_158_1 = rax_10
    uint64_t var_120_1 = arg_10
    int32_t var_114_1 = var_1fc
    uint64_t var_110_1 = arg_18
    float var_180_1[0x4] = var_1f8.o
    int32_t var_108_1 = arg_8
    int32_t var_168_1 = var_1e0_1.d
    int32_t var_104_1 = var_20c
    float var_14c_1 = arg3[0]
    int32_t var_188 = r13_1
    int64_t var_1e8
    uint64_t var_170_1 = var_1e8
    int32_t var_150_1 = rbx_2
    int64_t var_140
    __builtin_memset(&var_140, 0, 0x20)
    int32_t var_118_1 = r13_1
    int32_t var_100_1 = rdx_10
    int64_t var_f8
    __builtin_memset(&var_f8, 0, 0x30)
    sub_14204ebe0(&var_188)
    sub_14204de80(&var_188)
    int128_t var_d8
    int64_t* rcx_16 = var_d8.q
    int512_t zmm6
    zmm6.o = var_48_1
    arg1[0xac].d = rcx_16[5].d
    *(arg1 + 0x564) = rcx_16[3].d
    arg1[0xb7].d = rcx_16[6].d
    arg1[0xb2] = data_143dbb1f8.q
    int32_t rax_19 = data_143dbb200
    arg1[0xb3].d = rax_19
    *(arg1 + 0x584) = arg1[0xb2]
    *(arg1 + 0x58c) = rax_19
    *(arg1 + 0x59c) = 0
    arg1[0xb5].d = 0
    
    if (*(arg1 + 0x5ac) != 0)
        sub_1413f6f70(&arg1[0xb4], 0)
        rcx_16 = var_d8.q
    
    uint64_t* rax_22
    
    if (rcx_16[1].d s<= 0)
        int32_t rax_23 = data_143dbb200
        uint128_t zmm0_3 = zx.o(data_143dbb1f8.q)
        int32_t var_198_1 = rax_23
        int32_t var_1a4_1 = rax_23
        uint64_t var_1ac
        rax_22 = &var_1ac
        uint64_t var_1a0_1 = zmm0_3.q
        var_1ac = zmm0_3.q
        char var_194_1 = 0
    else
        int64_t* rcx_18 = *rcx_16
        char var_1b0_1 = 1
        int32_t var_1c0_1 = rcx_18[1].d
        int32_t rax_21 = rcx_18[3].d
        uint64_t var_1c8 = *rcx_18
        int32_t var_1b4_1 = rax_21
        rax_22 = &var_1c8
        uint64_t var_1bc_1 = rcx_18[2]
    
    int64_t zmm1_2 = rax_22[2]
    int32_t rax_24 = rax_22[3].d
    *(arg1 + 0x568) = *rax_22
    arg1[0xaf] = zmm1_2
    arg1[0xb0].d = rax_24
    int64_t* rax_25 = j_sub_140a82f30(0x10)
    int64_t* r15_1 = rax_25
    
    if (rax_25 == 0)
        r15_1 = nullptr
    else
        int64_t* rdx_11 = var_d8.q
        *rax_25 = 0
        *rax_25 = *rdx_11
        *rdx_11 = 0
        rax_25[1].d = rdx_11[1].d
        *(rax_25 + 0xc) = *(rdx_11 + 0xc)
        rdx_11[1] = 0
    
    void*** rax_26 = j_sub_140a82f30(0x18)
    void*** rbx_3 = rax_26
    
    if (rax_26 == 0)
        rbx_3 = nullptr
    else
        rax_26[1].d = 1
        *(rax_26 + 0xc) = 1
        *rbx_3 = &data_142ee2130
        rbx_3[2] = r15_1
    
    int64_t* var_1d8 = r15_1
    void*** var_1d0 = rbx_3
    
    if (&arg1[0xa8] != &var_1d8)
        arg1[0xa8] = r15_1
        var_1d8 = nullptr
        sub_1405aeff0(&arg1[0xa9], &var_1d0)
        rbx_3 = var_1d0
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t r12_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (r12_1 == 1)
                (*rbx_3)[1](rbx_3, zx.q(r12_1))
        
        r14 = var_228
    
    void* rax_33 = var_d8.q
    
    if (&arg1[0x9a] != rax_33 + 0x20)
        int64_t rcx_25 = arg1[0x9a]
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        arg1[0x9a] = *(rax_33 + 0x20)
        *(rax_33 + 0x20) = 0
        arg1[0x9b].d = *(rax_33 + 0x28)
        *(arg1 + 0x4dc) = *(rax_33 + 0x2c)
        *(rax_33 + 0x28) = 0
        rax_33 = var_d8.q
    
    if (&arg1[0xaa] != rax_33 + 0x10)
        int64_t rcx_26 = arg1[0xaa]
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        arg1[0xaa] = *(rax_33 + 0x10)
        *(rax_33 + 0x10) = 0
        arg1[0xab].d = *(rax_33 + 0x18)
        *(arg1 + 0x55c) = *(rax_33 + 0x1c)
        *(rax_33 + 0x18) = 0
    
    int64_t* rbx_6 = var_d8:8.q
    var_d8:8.q = 0
    void var_90
    int128_t* rax_37 = sub_1423633d0(arg1[0x88], &var_90)
    *(arg1 + 0x5bc) = *rax_37
    *(arg1 + 0x5cc) = rax_37[1].q
    *(arg1 + 0x5d4) = *(rax_37 + 0x18)
    *(arg1 + 0x5dc) = arg1[0xac].d
    int64_t* var_238 = nullptr
    int64_t var_230_1 = 0
    sub_142085020(arg1, &var_238)
    int128_t zmm1_4 = sub_142069ab0(arg1, rbx_6)
    void* rcx_30 = arg1[0x9d]
    
    if (rcx_30 == 0)
        sub_142097c30(arg1, 0, rbx_6, 0, zmm1_4)
    else
        sub_1420a9f70(rcx_30, rbx_6, zmm1_4)
    
    int64_t* r13_3 = arg1[0x9d]
    
    if (r13_3 != &var_238)
        int32_t i_3 = r13_3[1].d
        int64_t* r15_4 = *r13_3
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                int64_t* rcx_32 = *r15_4
                
                if (rcx_32 != 0)
                    rcx_32[1].d -= 1
                    
                    if (rcx_32[1].d == 1)
                        (**rcx_32)(rcx_32, 1)
                
                r15_4 = &r15_4[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            r15_4 = *r13_3
        
        if (r15_4 != 0)
            sub_140a74f90(r15_4)
        
        *r13_3 = var_238
        var_238 = nullptr
        r13_3[1].d = var_230_1.d
        *(r13_3 + 0xc) = var_230_1:4.d
        var_230_1 = 0
    
    sub_141ee8490(arg1)
    sub_1420584f0(arg1)
    int32_t i_4 = var_230_1.d
    int64_t* rsi_1 = var_238
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            int64_t* rcx_36 = *rsi_1
            
            if (rcx_36 != 0)
                rcx_36[1].d -= 1
                
                if (rcx_36[1].d == 1)
                    (**rcx_36)(rcx_36, 1)
            
            rsi_1 = &rsi_1[1]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        rsi_1 = var_238
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_6 != 0)
        int64_t* rcx_38 = *rbx_6
        
        if (rcx_38 != 0)
            (**rcx_38)(rcx_38, 1)
        
        int64_t* rcx_39 = rbx_6[4]
        
        if (rcx_39 != 0)
            (**rcx_39)(rcx_39, 1)
        
        int64_t* rcx_40 = rbx_6[2]
        
        if (rcx_40 != 0)
            (**rcx_40)(rcx_40, 1)
        
        int64_t* rcx_41 = rbx_6[6]
        
        if (rcx_41 != 0)
            (**rcx_41)(rcx_41, 1)
        
        j_sub_140a74f90(rbx_6)
    
    result = sub_142049690(&var_188)
    
    if (r14 != 0)
        result = sub_140a74f90(r14)
arg1[0xbc].b &= 0xfd
return result
