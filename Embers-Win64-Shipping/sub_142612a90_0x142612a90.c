// 函数: sub_142612a90
// 地址: 0x142612a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t* r12 = arg5
int64_t* r15 = arg1
int64_t* var_318 = r12
*arg8 = 0
char rax_5

if (arg2 != 0)
    rax_5 = sub_1426126b0(*arg1, arg2)

uint64_t result

if (arg2 == 0 || rax_5 == 0)
    result = 0x80000008
else
    void* rdi_1 = r15[0xc]
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int32_t result_1 = 0x40000000
    memset(*(rdi_1 + 8), 0xff, sx.q(*(rdi_1 + 0x1c)) * 2)
    *(rdi_1 + 0x24) = 0
    void* i_15 = sub_14260fcd0(r15[0xc], arg2)
    int128_t* r10_1 = arg4
    *(i_15 + 0xc) = 0
    *(i_15 + 0x18) = arg2
    *(i_15 + 0x14) = 0x80000000
    float zmm6[0x4] = *arg3
    float zmm7[0x4] = *(arg3 + 8)
    float zmm1[0x4] = *(r10_1 + 8)
    int128_t zmm2
    zmm2.d = (*r10_1).d f- zmm6[0]
    int128_t zmm11 = *(arg3 + 4)
    zmm1[0] = zmm1[0] - zmm7[0]
    float zmm0_1 = *(r10_1 + 4) f- zmm11.d
    void* i_14 = i_15
    int32_t rax_6 = 1
    float var_358_1 = 3.40282347e+38f
    int128_t zmm12 = zmm2
    float var_360_1 = zmm6[0]
    float zmm13[0x4] = zmm1
    zmm2.d = zmm2.d f* zmm2.d
    int64_t r13_1 = 1
    void* i_9 = nullptr
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm12.d = zmm12.d f* 0.5f
    zmm13[0] = zmm13[0] * 0.5f
    float var_354_1 = zmm7[0]
    zmm12.d = zmm12.d f+ zmm6[0]
    zmm13[0] = zmm13[0] + zmm7[0]
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm0_1 * zmm0_1 f+ zmm2.d + zmm1[0])
    temp0_1[0] = temp0_1[0] * 0.5f
    temp0_1[0] = temp0_1[0] + 0.00100000005f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    void* i_7
    
    while (true)
        void* i_11 = i_14
        int32_t var_35c_1 = rax_6 - 1
        void var_260
        
        if (rax_6 - 1 s> 0)
            __builtin_memcpy(&i_14, &var_260, sx.q(rax_6 - 1) << 3)
        int64_t r8_2 = *(i_11 + 0x18)
        r13_1 -= 1
        void* rdi_2 = *r15
        int64_t var_338_1 = r13_1
        int64_t r9 = 0
        char rsi_1 = (*(rdi_2 + 0xa0)).b
        int32_t* r14_2 =
            (((1 << (*(rdi_2 + 0x9c)).b) - 1) & zx.q((r8_2 u>> rsi_1).d)) * 0xb0 + *(rdi_2 + 0x90)
        int32_t* var_378_1 = r14_2
        int32_t* rcx_10 = ((zx.q((1 << rsi_1).d - 1) & zx.q(r8_2.d)) << 5) + *(r14_2 + 0x10)
        int32_t* var_340_1 = rcx_10
        uint64_t rbp_1 = zx.q(*(rcx_10 + 0x1e))
        uint64_t rbx_1 = zx.q(rbp_1.d)
        void var_2f0
        
        if (rbp_1 u>= 4)
            int64_t rdi_3 = *(r14_2 + 0x18)
            void* r8_3 = rcx_10 + 6
            int64_t i_6 = ((rbp_1 - 4) u>> 2) + 1
            void* rdx_4 = &var_2f0
            r9 = i_6 << 2
            int64_t i
            
            do
                uint64_t rax_12 = zx.q(*(r8_3 - 2))
                rdx_4 += 0x30
                r8_3 += 8
                uint64_t rcx_11 = rax_12 * 3
                *(rdx_4 - 0x38) = *(rdi_3 + (rcx_11 << 2))
                *(rdx_4 - 0x34) = *(rdi_3 + (rcx_11 << 2) + 4)
                *(rdx_4 - 0x30) = *(rdi_3 + (rcx_11 << 2) + 8)
                uint64_t rcx_12 = zx.q(*(r8_3 - 8)) * 3
                *(rdx_4 - 0x2c) = *(rdi_3 + (rcx_12 << 2))
                *(rdx_4 - 0x28) = *(rdi_3 + (rcx_12 << 2) + 4)
                *(rdx_4 - 0x24) = *(rdi_3 + (rcx_12 << 2) + 8)
                uint64_t rcx_13 = zx.q(*(r8_3 - 6)) * 3
                *(rdx_4 - 0x20) = *(rdi_3 + (rcx_13 << 2))
                *(rdx_4 - 0x1c) = *(rdi_3 + (rcx_13 << 2) + 4)
                *(rdx_4 - 0x18) = *(rdi_3 + (rcx_13 << 2) + 8)
                uint64_t rcx_14 = zx.q(*(r8_3 - 4)) * 3
                *(rdx_4 - 0x14) = *(rdi_3 + (rcx_14 << 2))
                *(rdx_4 - 0x10) = *(rdi_3 + (rcx_14 << 2) + 4)
                *(rdx_4 - 0xc) = *(rdi_3 + (rcx_14 << 2) + 8)
                i = i_6
                i_6 -= 1
            while (i != 1)
            rcx_10 = var_340_1
        
        if (r9 s< rbx_1)
            int64_t rdi_4 = *(r14_2 + 0x18)
            int64_t i_8 = rbx_1 - r9
            void* rdx_5 = &var_2f0 + r9 * 0xc
            void* rsi_5 = rcx_10 + ((r9 + 2) << 1)
            int64_t i_1
            
            do
                uint64_t rax_29 = zx.q(*rsi_5)
                rdx_5 += 0xc
                rsi_5 += 2
                uint64_t rcx_15 = rax_29 * 3
                *(rdx_5 - 0x14) = *(rdi_4 + (rcx_15 << 2))
                *(rdx_5 - 0x10) = *(rdi_4 + (rcx_15 << 2) + 4)
                *(rdx_5 - 0xc) = *(rdi_4 + (rcx_15 << 2) + 8)
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
        
        void var_2f8
        
        if (sub_142609450(r10_1, &var_2f8, rbp_1.d) != 0)
            i_7 = i_11
            zmm6 = *arg4
            zmm11 = *(arg4 + 4)
            zmm7 = *(arg4 + 8)
            break
        
        int32_t i_5 = 0
        int32_t i_12 = (rbp_1 - 1).d
        int32_t i_13 = i_12
        
        if (rbp_1.d != 0)
            void* r8_6 = nullptr
            void* var_368_1 = nullptr
            void* var_328_1 = nullptr
            void* rcx_17 = (rbp_1 << 1) + -fffffffffffffffe
            void* var_380_1 = rbp_1 * 0xc + -0xfffffffffffffff4
            void* rbx_2 = rbp_1 * 0xc + -0xfffffffffffffff4
            int32_t i_2
            
            do
                int32_t r13_2 = 0
                int64_t r15_1 = 0
                int16_t rax_37 = *(rcx_17 + var_340_1 + 0x10)
                int64_t var_2a8[0x8]
                
                if (rax_37 s< 0)
                    int32_t j = *var_340_1
                    
                    if (j == 0xffffffff)
                        goto label_142612fd7
                    
                    do
                        int32_t rcx_18 = *(*(r14_2 + 8) + 0x20)
                        int64_t* rbx_5
                        
                        if (j u>= rcx_18)
                            rbx_5 = (sx.q(j - rcx_18) << 4) + *(r14_2 + 0x80)
                        else
                            rbx_5 = (zx.q(j) << 4) + *(r14_2 + 0x20)
                        
                        j = rbx_5[1].d
                        
                        if (zx.d(*(rbx_5 + 0xc)) == i_12)
                            int64_t r10_2 = *rbx_5
                            
                            if (r10_2 != 0)
                                void* rdi_6 = *arg1
                                char rsi_6 = (*(rdi_6 + 0xa0)).b
                                void* r14_4 = (((1 << (*(rdi_6 + 0x9c)).b) - 1)
                                    & zx.q((r10_2 u>> rsi_6).d)) * 0xb0 + *(rdi_6 + 0x90)
                                void* r9_3 = ((zx.q((1 << rsi_6).d - 1) & zx.q(r10_2.d)) << 5)
                                    + *(r14_4 + 0x10)
                                
                                if (r12[0x43].b != 0)
                                    if ((*(*r12 + 8))(r12, r10_2, r14_4, r9_3, i_13, var_380_1, 
                                            var_378_1, arg1, var_368_1, var_360_1, var_358_1, i_5, 
                                            arg4, var_340_1, var_338_1, i_11, var_328_1, i_9, 
                                            var_318, arg7, arg6, arg8) == 0)
                                        r14_2 = var_378_1
                                        i_12 = i_13
                                    else
                                    label_14261307b:
                                        void* rsi_7 = *(r14_4 + 8)
                                        int64_t* rdi_8 = arg1[1]
                                        int32_t rcx_23 = *(rsi_7 + 0x3c)
                                        int32_t rax_56 = ((1 << (*(*arg1 + 0xa0)).b).d - 1) & *rbx_5
                                        int32_t rdx_12 = rax_56 - rcx_23
                                        
                                        if (rdi_8 == 0 || rax_56 s< rcx_23
                                            || rdx_12 s>= *(rsi_7 + 0x34))
                                        label_1426130d1:
                                            i_12 = i_13
                                            r14_2 = var_378_1
                                            
                                            if (r15_1 s< 8)
                                                r13_2 += 1
                                                var_2a8[r15_1] = *rbx_5
                                                r15_1 += 1
                                        else
                                            int32_t rdx_14 =
                                                *(*(r14_4 + 0x48) + sx.q(rdx_12) * 0x28 + 0x20)
                                            
                                            if (rdx_14 == 0)
                                                goto label_1426130d1
                                            
                                            if ((*(*rdi_8 + 8))(rdi_8, rdx_14) != 0)
                                                goto label_1426130d1
                                            
                                            r14_2 = var_378_1
                                            i_12 = i_13
                                else
                                    int16_t rax_47 = *(r9_3 + 0x1c)
                                    
                                    if ((r12[0x42].w & rax_47) == 0
                                            || (*(r12 + 0x212) & rax_47) != 0)
                                        r14_2 = var_378_1
                                        i_12 = i_13
                                    else
                                        uint64_t rax_49 = zx.q(*(r9_3 + 0x1f)) & 0x3f
                                        
                                        if (not(3.40282347e+38f f<= *(r12 + (rax_49 << 2) + 8))
                                                && 3.40282347e+38f f>
                                                *(r12 + (rax_49 << 2) + 0x108))
                                            goto label_14261307b
                                        
                                        r14_2 = var_378_1
                                        i_12 = i_13
                    while (j != 0xffffffff)
                    
                    if (r13_2 != 0)
                        goto label_142613229
                    
                    goto label_142612fcd
                
                if (rax_37 == 0)
                    goto label_142612fd7
                
                void** r13_3 = arg1
                uint32_t r14_5 = zx.d(rax_37)
                int64_t rbx_8
                
                if (var_378_1 != 0)
                    void* rdi_9 = *r13_3
                    char rsi_8 = (*(rdi_9 + 0xa0)).b
                    int64_t rax_62
                    int64_t rdx_15
                    rdx_15:rax_62 = muls.dp.q(0x2e8ba2e8ba2e8ba3, var_378_1 - *(rdi_9 + 0x90))
                    int64_t rdx_16 = rdx_15 s>> 5
                    rbx_8 = zx.q((rdx_16 u>> 0x3f).d + rdx_16.d) << rsi_8
                        | zx.q(*var_378_1) << ((*(rdi_9 + 0x9c)).b + rsi_8)
                else
                    rbx_8 = 0
                
                uint64_t r9_4 = zx.q(r14_5 - 1)
                int64_t rbx_14 = rbx_8 | r9_4
                void* r9_6 = (r9_4 << 5) + *(var_378_1 + 0x10)
                
                if (r12[0x43].b == 0)
                    int16_t rax_65 = *(r9_6 + 0x1c)
                    
                    if ((r12[0x42].w & rax_65) == 0 || (*(r12 + 0x212) & rax_65) != 0)
                        goto label_142612fd2
                    
                    uint64_t rax_67 = zx.q(*(r9_6 + 0x1f)) & 0x3f
                    
                    if (3.40282347e+38f f<= *(r12 + (rax_67 << 2) + 8)
                            || 3.40282347e+38f f<= *(r12 + (rax_67 << 2) + 0x108))
                        goto label_142612fd2
                    
                    goto label_1426131de
                
                float zmm0_2
                float zmm3_1[0x4]
                float zmm5_1
                
                if ((*(*r12 + 8))(r12, rbx_14, var_378_1, r9_6, i_13, var_380_1, var_378_1, arg1, 
                    var_368_1, var_360_1, var_358_1, i_5, arg4, var_340_1, var_338_1, i_11, 
                    var_328_1, i_9, var_318, arg7, arg6, arg8) == 0)
                label_142612fcd:
                    r8_6 = var_368_1
                label_142612fd2:
                    rbx_2 = var_380_1
                label_142612fd7:
                    zmm5_1 = *(&var_2f8 + rbx_2)
                    zmm3_1 = *(&var_2f8 + r8_6)
                    zmm6 = *(&var_2f0 + rbx_2)
                    zmm3_1[0] = zmm3_1[0] - zmm5_1
                    float zmm4_1[0x4] = *(&var_2f0 + r8_6)
                    zmm4_1[0] = zmm4_1[0] - zmm6[0]
                    zmm7 = *(arg4 + 8)
                    zmm8 = *arg4
                    zmm0_2 = zmm4_1[0] * zmm4_1[0]
                    zmm7[0] = zmm7[0] - zmm6[0]
                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                    zmm3_1[0] = zmm3_1[0] + zmm0_2
                    zmm7[0] = zmm7[0] * zmm4_1[0]
                    bool cond:1_1 = zmm3_1[0] <= 0f
                    zmm7[0] = zmm7[0] + (zmm8.d - zmm5_1) * zmm3_1[0]
                    
                    if (not(cond:1_1))
                        zmm7[0] = zmm7[0] / zmm3_1[0]
                    
                    if (zmm7[0] >= 0f)
                        zmm1 = _mm_min_ss(zmm7[0], 0x3f800000)
                    else
                        zmm1 = zx.o(0)
                    
                    r15 = arg1
                    zmm3_1[0] = zmm3_1[0] * zmm1[0]
                    zmm4_1[0] = zmm4_1[0] * zmm1[0]
                    zmm3_1[0] = zmm3_1[0] + zmm5_1
                    zmm4_1[0] = zmm4_1[0] + zmm6[0]
                    zmm0_2 = zmm3_1[0] f- zmm8.d
                    zmm4_1[0] = zmm4_1[0] - zmm7[0]
                    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                    zmm4_1[0] = zmm4_1[0] + zmm0_2 * zmm0_2
                    
                    if (zmm4_1[0] >= var_358_1)
                        zmm6 = var_360_1
                        zmm7 = var_354_1
                    else
                        void var_2f4
                        zmm0_2 = *(&var_2f4 + rbx_2)
                        zmm6 = zmm3_1
                        zmm7 = zmm4_1
                        zmm11.d = (*(&var_2f4 + r8_6)).d f- zmm0_2
                        var_360_1 = zmm3_1[0]
                        var_354_1 = zmm4_1[0]
                        var_358_1 = zmm4_1[0]
                        i_9 = i_11
                        zmm11.d = zmm11.d f* zmm1[0]
                        zmm11.d = zmm11.d f+ zmm0_2
                else
                label_1426131de:
                    void* rdx_20 = *(var_378_1 + 8)
                    int64_t* rcx_30 = r13_3[1]
                    int32_t rax_70 = *(rdx_20 + 0x3c)
                    int32_t rbp_4 = r14_5 - 1 - rax_70
                    
                    if (rcx_30 != 0 && r14_5 s> rax_70 && rbp_4 s< *(rdx_20 + 0x34)
                            && *(*(var_378_1 + 0x48) + sx.q(rbp_4) * 0x28 + 0x20) != 0
                            && (*(*rcx_30 + 8))() == 0)
                        goto label_142612fcd
                    
                    var_2a8[0] = rbx_14
                    r13_2 = 1
                label_142613229:
                    r15 = arg1
                    int64_t j_1 = 0
                    
                    if (r13_2 s<= 0)
                        r8_6 = var_368_1
                    else
                        int64_t r12_1 = var_338_1
                        
                        do
                            void* rax_75 = sub_14260fcd0(r15[0xc], var_2a8[j_1])
                            r8_6 = var_368_1
                            
                            if (rax_75 != 0)
                                int32_t rdx_24 = *(rax_75 + 0x14)
                                
                                if (rdx_24 s>= 0)
                                    zmm3_1 = *(&var_2f8 + r8_6)
                                    float zmm2_1[0x4] = *(&var_2f0 + r8_6)
                                    zmm5_1 = *(&var_2f8 + var_380_1)
                                    zmm6 = *(&var_2f0 + var_380_1)
                                    zmm3_1[0] = zmm3_1[0] - zmm5_1
                                    zmm2_1[0] = zmm2_1[0] - zmm6[0]
                                    zmm13[0] = zmm13[0] - zmm6[0]
                                    zmm0_2 = zmm3_1[0] * zmm3_1[0]
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm13[0] = zmm13[0] * zmm2_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm0_2
                                    bool cond:2_1 = zmm2_1[0] <= 0f
                                    zmm13[0] = zmm13[0] + (zmm12.d - zmm5_1) * zmm3_1[0]
                                    
                                    if (not(cond:2_1))
                                        zmm13[0] = zmm13[0] / zmm2_1[0]
                                    
                                    if (zmm13[0] >= 0f)
                                        zmm1 = _mm_min_ss(zmm13[0], 0x3f800000)
                                    else
                                        zmm1 = zx.o(0)
                                    
                                    zmm2_1[0] = zmm2_1[0] * zmm1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm6[0]
                                    zmm3_1[0] = zmm3_1[0] + zmm5_1
                                    zmm2_1[0] = zmm2_1[0] - zmm13[0]
                                    zmm3_1[0] = zmm3_1[0] f- zmm12.d
                                    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm3_1[0]
                                    
                                    if (not(zmm2_1[0] > temp0_1[0]) && r12_1 s< 0x30)
                                        int64_t* rax_77 = r15[0xc]
                                        var_35c_1 += 1
                                        (&i_14)[r12_1] = rax_75
                                        *(rax_75 + 0x14) = (rdx_24 & 0xc0000000)
                                            | ((((i_11 - *rax_77) s>> 5).d + 1) & 0x3fffffff)
                                            | 0x80000000
                                        r12_1 += 1
                            
                            j_1 += 1
                        while (j_1 s< sx.q(r13_2))
                        
                        zmm6 = var_360_1
                        var_338_1 = r12_1
                        r12 = var_318
                rbx_2 = r8_6
                r8_6 += 0xc
                i_12 = i_5
                r14_2 = var_378_1
                i_2 = i_5 + 1
                rcx_17 = var_328_1
                i_13 = i_12
                var_380_1 = rbx_2
                i_5 = i_2
                var_328_1 += 2
                var_368_1 = r8_6
            while (i_2 s< zx.d(*(var_340_1 + 0x1e)))
            r13_1 = var_338_1
        
        rax_6 = var_35c_1
        r10_1 = arg4
        
        if (r13_1 == 0)
            i_7 = i_9
            break
    
    int32_t rbp_5 = 0
    
    if (i_7 != 0)
        void* const i_10 = nullptr
        void* const i_3
        
        do
            int32_t rdi_12 = *(i_7 + 0x14)
            int32_t rax_81 = rdi_12 & 0x3fffffff
            
            if (rax_81 != 0)
                i_3 = (zx.q(rax_81 - 1) << 5) + *r15[0xc]
            else
                i_3 = nullptr
            
            int32_t rcx_38
            
            if (i_10 != 0)
                rcx_38 = ((i_10 - *r15[0xc]) s>> 5).d + 1
            else
                rcx_38 = 0
            
            i_10 = i_7
            *(i_7 + 0x14) = ((rdi_12 ^ rcx_38) & 0x3fffffff) ^ rdi_12
            i_7 = i_3
        while (i_3 != 0)
        int64_t rdx_30 = 0
        int64_t* rax_91
        uint64_t i_4
        
        do
            rbp_5 += 1
            *(arg7 + (rdx_30 << 3)) = *(i_10 + 0x18)
            rdx_30 += 1
            
            if (rdx_30 s>= sx.q(arg9))
                result_1 = 0x40000010
                break
            
            int32_t rax_90 = *(i_10 + 0x14) & 0x3fffffff
            
            if (rax_90 == 0)
                break
            
            rax_91 = r15[0xc]
            i_4 = zx.q(rax_90 - 1) << 5
            i_10 = i_4 + *rax_91
        while (i_4 != neg.q(*rax_91))
    
    *arg6 = zmm6[0]
    arg6[1] = zmm11.d
    arg6[2] = zmm7[0]
    result = zx.q(result_1)
    *arg8 = rbp_5

__security_check_cookie(rax_1 ^ &var_3a8)
return result
