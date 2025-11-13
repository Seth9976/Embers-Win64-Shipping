// 函数: sub_1409a55d0
// 地址: 0x1409a55d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void* r10 = *arg1
void var_e8
void* r11 = &var_e8
int64_t* r15 = arg3
void* var_1c0 = &var_e8
void* rcx_1 = *(*(r10 + 0x40) + (sx.q(arg2) << 3) - 8)
int32_t var_1b0 = *(r10 + 4)
void* rax_4 = nullptr
void* var_1b8 = rcx_1
void* rsi = *(rcx_1 + 8)
void* rdx = *(rcx_1 + 0x10)
void* rbx = rsi
void* var_158 = rbx
int32_t r14_1 = *(rsi + 0x14) * 2
void* var_150 = rdx
void* var_f8 = &var_e8
int32_t var_f0 = r14_1
int32_t var_ec = 0x20
void* var_68 = nullptr

if (r14_1 u> 0x20)
    rax_4 = j_sub_140a82f30(zx.q(r14_1) << 2)
    rcx_1 = var_1b8
    r11 = rax_4
    var_68 = rax_4
    var_1c0 = rax_4
    var_f8 = rax_4
    int32_t var_ec_1 = r14_1

int32_t i = 0

if (*(rsi + 8) s> 0)
    int32_t* rdx_1 = nullptr
    int64_t r10_1 = 0
    int32_t r13_1 = 0
    int64_t r12_1 = 0
    void* r8 = nullptr
    int64_t var_1a0_1 = 0
    void* var_180_1
    __builtin_memset(&var_180_1, 0, 0x18)
    int32_t var_1c8_1 = 0
    
    do
        int64_t r9 = sx.q(*(r8 + *(rcx_1 + 0xf0)))
        int64_t var_178_1
        int32_t* var_170_1
        
        if (r9.d != 0xffffffff)
            void* rdx_2 = *(rsi + 0x150)
            int32_t var_144_1 = r9.d
            void* var_130_1 = r11
            int64_t r10_2 = sx.q(*(rdx_2 + r12_1))
            int32_t* rdx_3 = *(rsi + 0x108)
            int32_t var_1c4_1 = r10_2.d
            int64_t r8_1 = *(rsi + 0x168) + (sx.q(*(rdx_2 + r12_1 + 4)) << 2)
            int32_t i_1 = i
            int32_t r13_2 = *(rdx_3 + r12_1)
            void* r12_2 = r11 + (r10_2 << 2)
            int64_t rdx_4 = sx.q(var_1c8_1)
            void* r8_2 = *(rsi + 0x120) + (sx.q(*(rdx_3 + r12_1 + 4)) << 2)
            void* var_128_1 = r12_2
            int32_t var_1ac
            int32_t* var_138 = &var_1ac
            int64_t var_120_1 = 0
            int32_t var_118_1 = 0
            char var_114_1 = 0
            int32_t var_140_1 = *(*(rbx + 0x150) + (rdx_4 << 2))
            int32_t var_13c_1 = *(*(rbx + 0x108) + (rdx_4 << 2))
            float zmm6_1[0x4] = sub_140996b60(&var_1b0, &var_158, &var_138, 
                zx.d(*(*(rsi + 0x1b0) + var_1a0_1)) u>> 7 & 0xf, 
                zx.d(*(*(rdx + 0x1b0) + (r9 << 1))) u>> 7 & 0xf)
            int64_t r8_4 = r9 * 3
            int64_t rcx_12 = *arg4
            int32_t var_108_1 = 0
            *(rcx_12 + (r8_4 << 2)) = (_mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)).q
            *(rcx_12 + (r8_4 << 2) + 8) = 0
            float zmm1_1
            float zmm2_1
            float zmm3_1[0x4]
            
            if (var_118_1 s> 0)
                void* r10_3 = r8_2
                uint32_t r11_1 = 0
                uint64_t rax_13 = 0
                
                if (r13_2 s>= 4)
                    void* r9_5 = r12_2 - r10_3
                    void* r10_4 = r10_3 + 4
                    uint64_t rax_17 = zx.q(((r13_2 - 4) u>> 2) + 1)
                    uint64_t j_4 = zx.q(rax_17.d)
                    r11_1 = (rax_17 << 2).d
                    uint64_t j
                    
                    do
                        int64_t rdx_7 = *arg4
                        zmm3_1 = *(r9_5 + r10_4 - 4)
                        int64_t rax_20 = sx.q(*(*(var_1b8 + 0xa8) + (sx.q(*(r10_4 - 4)) << 2))) * 3
                        zmm3_1[0] = zmm3_1[0] f* *(rdx_7 + (rax_20 << 2))
                        zmm1_1 = *(rdx_7 + (rax_20 << 2) + 4)
                        zmm2_1 = *(rdx_7 + (rax_20 << 2) + 8)
                        zmm3_1[0] = zmm3_1[0] f+ *(rdx_7 + (r8_4 << 2))
                        zmm1_1 = zmm1_1 * zmm3_1[0]
                        zmm2_1 = zmm2_1 * zmm3_1[0]
                        *(rdx_7 + (r8_4 << 2)) = zmm3_1[0]
                        *(rdx_7 + (r8_4 << 2) + 4) = zmm1_1 f+ *(rdx_7 + (r8_4 << 2) + 4)
                        *(rdx_7 + (r8_4 << 2) + 8) = zmm2_1 f+ *(rdx_7 + (r8_4 << 2) + 8)
                        int64_t rdx_8 = *arg4
                        zmm3_1 = *(r9_5 + r10_4)
                        int64_t rax_22 = sx.q(*(*(var_1b8 + 0xa8) + (sx.q(*r10_4) << 2))) * 3
                        zmm3_1[0] = zmm3_1[0] f* *(rdx_8 + (rax_22 << 2))
                        zmm1_1 = *(rdx_8 + (rax_22 << 2) + 4)
                        zmm2_1 = *(rdx_8 + (rax_22 << 2) + 8)
                        zmm3_1[0] = zmm3_1[0] f+ *(rdx_8 + (r8_4 << 2))
                        zmm1_1 = zmm1_1 * zmm3_1[0]
                        zmm2_1 = zmm2_1 * zmm3_1[0]
                        *(rdx_8 + (r8_4 << 2)) = zmm3_1[0]
                        *(rdx_8 + (r8_4 << 2) + 4) = zmm1_1 f+ *(rdx_8 + (r8_4 << 2) + 4)
                        *(rdx_8 + (r8_4 << 2) + 8) = zmm2_1 f+ *(rdx_8 + (r8_4 << 2) + 8)
                        int64_t rdx_9 = *arg4
                        zmm3_1 = *(r10_4 + r9_5 + 4)
                        int64_t rax_24 = sx.q(*(*(var_1b8 + 0xa8) + (sx.q(*(r10_4 + 4)) << 2))) * 3
                        zmm3_1[0] = zmm3_1[0] f* *(rdx_9 + (rax_24 << 2))
                        zmm1_1 = *(rdx_9 + (rax_24 << 2) + 4)
                        zmm2_1 = *(rdx_9 + (rax_24 << 2) + 8)
                        zmm3_1[0] = zmm3_1[0] f+ *(rdx_9 + (r8_4 << 2))
                        zmm1_1 = zmm1_1 * zmm3_1[0]
                        zmm2_1 = zmm2_1 * zmm3_1[0]
                        *(rdx_9 + (r8_4 << 2)) = zmm3_1[0]
                        *(rdx_9 + (r8_4 << 2) + 4) = zmm1_1 f+ *(rdx_9 + (r8_4 << 2) + 4)
                        *(rdx_9 + (r8_4 << 2) + 8) = zmm2_1 f+ *(rdx_9 + (r8_4 << 2) + 8)
                        int64_t rdx_10 = *arg4
                        zmm3_1 = *(r10_4 + r9_5 + 8)
                        int64_t rcx_19 = sx.q(*(r10_4 + 8))
                        r10_4 += 0x10
                        int64_t rax_26 = sx.q(*(*(var_1b8 + 0xa8) + (rcx_19 << 2))) * 3
                        zmm3_1[0] = zmm3_1[0] f* *(rdx_10 + (rax_26 << 2))
                        zmm1_1 = *(rdx_10 + (rax_26 << 2) + 4) * zmm3_1[0]
                        zmm2_1 = *(rdx_10 + (rax_26 << 2) + 8) * zmm3_1[0]
                        zmm3_1[0] = zmm3_1[0] f+ *(rdx_10 + (r8_4 << 2))
                        *(rdx_10 + (r8_4 << 2)) = zmm3_1[0]
                        *(rdx_10 + (r8_4 << 2) + 4) = zmm1_1 f+ *(rdx_10 + (r8_4 << 2) + 4)
                        *(rdx_10 + (r8_4 << 2) + 8) = zmm2_1 f+ *(rdx_10 + (r8_4 << 2) + 8)
                        j = j_4
                        j_4 -= 1
                    while (j != 1)
                    r15 = arg3
                    r10_3 = r8_2
                    rax_13 = rax_17 << 2
                
                if (r11_1 s< r13_2)
                    int128_t* r9_6 = r10_3 + (rax_13 << 2)
                    uint64_t j_5 = zx.q(r13_2 - r11_1)
                    uint64_t j_1
                    
                    do
                        int64_t rdx_11 = *arg4
                        zmm3_1 = *(r9_6 + r12_2 - r10_3)
                        int64_t rcx_21 = sx.q(*r9_6)
                        r9_6 += 4
                        int64_t rax_28 = sx.q(*(*(var_1b8 + 0xa8) + (rcx_21 << 2))) * 3
                        zmm1_1 = *(rdx_11 + (rax_28 << 2) + 4)
                        zmm2_1 = *(rdx_11 + (rax_28 << 2) + 8)
                        zmm3_1[0] = zmm3_1[0] f* *(rdx_11 + (rax_28 << 2))
                        zmm2_1 = zmm2_1 * zmm3_1[0]
                        zmm1_1 = zmm1_1 * zmm3_1[0] f+ *(rdx_11 + (r8_4 << 2) + 4)
                        zmm3_1[0] = zmm3_1[0] f+ *(rdx_11 + (r8_4 << 2))
                        zmm2_1 = zmm2_1 f+ *(rdx_11 + (r8_4 << 2) + 8)
                        *(rdx_11 + (r8_4 << 2) + 4) = zmm1_1
                        *(rdx_11 + (r8_4 << 2)) = zmm3_1[0]
                        *(rdx_11 + (r8_4 << 2) + 8) = zmm2_1
                        j_1 = j_5
                        j_5 -= 1
                    while (j_1 != 1)
                    r15 = arg3
            
            if (var_120_1:4.d s> 0)
                uint32_t rax_29 = 0
                uint64_t rcx_23 = 0
                
                if (var_1c4_1 s>= 4)
                    void* r9_7 = var_1c0 + 4
                    void* r10_6 = r8_1 - var_1c0
                    uint64_t rax_32 = zx.q(((var_1c4_1 - 4) u>> 2) + 1)
                    uint64_t j_7 = zx.q(rax_32.d)
                    uint64_t rcx_24 = j_7 << 2
                    uint64_t j_2
                    
                    do
                        int64_t rdx_12 = *(rsi + 0x78)
                        int64_t rcx_25 = sx.q(*(r10_6 + r9_7 - 4) * 2)
                        int32_t rax_36 = *(rdx_12 + (rcx_25 << 2))
                        
                        if (rax_36 == i)
                            rax_36 = *(rdx_12 + (rcx_25 << 2) + 4)
                        
                        int64_t rdx_13 = *arg4
                        zmm3_1 = *(r9_7 - 4)
                        int64_t rcx_26 = sx.q(rax_36) * 3
                        int64_t rax_38 = *r15
                        zmm3_1[0] = zmm3_1[0] f* *(rax_38 + (rcx_26 << 2))
                        zmm1_1 = *(rax_38 + (rcx_26 << 2) + 4)
                        zmm2_1 = *(rax_38 + (rcx_26 << 2) + 8)
                        zmm3_1[0] = zmm3_1[0] f+ *(rdx_13 + (r8_4 << 2))
                        zmm1_1 = zmm1_1 * zmm3_1[0]
                        zmm2_1 = zmm2_1 * zmm3_1[0]
                        *(rdx_13 + (r8_4 << 2)) = zmm3_1[0]
                        *(rdx_13 + (r8_4 << 2) + 4) = zmm1_1 f+ *(rdx_13 + (r8_4 << 2) + 4)
                        *(rdx_13 + (r8_4 << 2) + 8) = zmm2_1 f+ *(rdx_13 + (r8_4 << 2) + 8)
                        int64_t rdx_14 = *(rsi + 0x78)
                        int64_t rcx_27 = sx.q(*(r10_6 + r9_7) * 2)
                        int32_t rax_41 = *(rdx_14 + (rcx_27 << 2))
                        
                        if (rax_41 == i)
                            rax_41 = *(rdx_14 + (rcx_27 << 2) + 4)
                        
                        int64_t rdx_15 = *arg4
                        zmm3_1 = *r9_7
                        int64_t rcx_28 = sx.q(rax_41) * 3
                        int64_t rax_43 = *r15
                        zmm3_1[0] = zmm3_1[0] f* *(rax_43 + (rcx_28 << 2))
                        zmm1_1 = *(rax_43 + (rcx_28 << 2) + 4)
                        zmm2_1 = *(rax_43 + (rcx_28 << 2) + 8)
                        zmm3_1[0] = zmm3_1[0] f+ *(rdx_15 + (r8_4 << 2))
                        zmm1_1 = zmm1_1 * zmm3_1[0]
                        zmm2_1 = zmm2_1 * zmm3_1[0]
                        *(rdx_15 + (r8_4 << 2)) = zmm3_1[0]
                        *(rdx_15 + (r8_4 << 2) + 4) = zmm1_1 f+ *(rdx_15 + (r8_4 << 2) + 4)
                        *(rdx_15 + (r8_4 << 2) + 8) = zmm2_1 f+ *(rdx_15 + (r8_4 << 2) + 8)
                        int64_t rdx_16 = *(rsi + 0x78)
                        int64_t rcx_29 = sx.q(*(r10_6 + r9_7 + 4) * 2)
                        int32_t rax_46 = *(rdx_16 + (rcx_29 << 2))
                        
                        if (rax_46 == i)
                            rax_46 = *(rdx_16 + (rcx_29 << 2) + 4)
                        
                        int64_t rdx_17 = *arg4
                        zmm3_1 = *(r9_7 + 4)
                        int64_t rcx_30 = sx.q(rax_46) * 3
                        int64_t rax_48 = *r15
                        zmm3_1[0] = zmm3_1[0] f* *(rax_48 + (rcx_30 << 2))
                        zmm1_1 = *(rax_48 + (rcx_30 << 2) + 4)
                        zmm2_1 = *(rax_48 + (rcx_30 << 2) + 8)
                        zmm3_1[0] = zmm3_1[0] f+ *(rdx_17 + (r8_4 << 2))
                        zmm1_1 = zmm1_1 * zmm3_1[0]
                        zmm2_1 = zmm2_1 * zmm3_1[0]
                        *(rdx_17 + (r8_4 << 2)) = zmm3_1[0]
                        *(rdx_17 + (r8_4 << 2) + 4) = zmm1_1 f+ *(rdx_17 + (r8_4 << 2) + 4)
                        *(rdx_17 + (r8_4 << 2) + 8) = zmm2_1 f+ *(rdx_17 + (r8_4 << 2) + 8)
                        int64_t rdx_18 = *(rsi + 0x78)
                        int64_t rcx_31 = sx.q(*(r10_6 + r9_7 + 8) * 2)
                        int32_t rax_51 = *(rdx_18 + (rcx_31 << 2))
                        
                        if (rax_51 == i)
                            rax_51 = *(rdx_18 + (rcx_31 << 2) + 4)
                        
                        zmm3_1 = *(r9_7 + 8)
                        r9_7 += 0x10
                        int64_t rdx_19 = *arg4
                        int64_t rcx_32 = sx.q(rax_51) * 3
                        int64_t rax_53 = *r15
                        zmm3_1[0] = zmm3_1[0] f* *(rax_53 + (rcx_32 << 2))
                        zmm1_1 = *(rax_53 + (rcx_32 << 2) + 4) * zmm3_1[0]
                        zmm2_1 = *(rax_53 + (rcx_32 << 2) + 8) * zmm3_1[0]
                        zmm3_1[0] = zmm3_1[0] f+ *(rdx_19 + (r8_4 << 2))
                        *(rdx_19 + (r8_4 << 2)) = zmm3_1[0]
                        *(rdx_19 + (r8_4 << 2) + 4) = zmm1_1 f+ *(rdx_19 + (r8_4 << 2) + 4)
                        *(rdx_19 + (r8_4 << 2) + 8) = zmm2_1 f+ *(rdx_19 + (r8_4 << 2) + 8)
                        j_2 = j_7
                        j_7 -= 1
                    while (j_2 != 1)
                    rax_29 = (rax_32 << 2).d
                    rcx_23 = rcx_24
                
                if (rax_29 s< var_1c4_1)
                    void* r9_9 = (rcx_23 << 2) + var_1c0
                    uint64_t j_6 = zx.q(var_1c4_1 - rax_29)
                    uint64_t j_3
                    
                    do
                        int64_t rdx_20 = *(rsi + 0x78)
                        int64_t rcx_33 = sx.q(*(r9_9 + r8_1 - var_1c0) * 2)
                        int32_t rax_56 = *(rdx_20 + (rcx_33 << 2))
                        
                        if (rax_56 == i)
                            rax_56 = *(rdx_20 + (rcx_33 << 2) + 4)
                        
                        zmm3_1 = *r9_9
                        r9_9 += 4
                        int64_t rdx_21 = *arg4
                        int64_t rcx_34 = sx.q(rax_56) * 3
                        int64_t rax_58 = *r15
                        zmm1_1 = *(rax_58 + (rcx_34 << 2) + 4)
                        zmm2_1 = *(rax_58 + (rcx_34 << 2) + 8)
                        zmm3_1[0] = zmm3_1[0] f* *(rax_58 + (rcx_34 << 2))
                        zmm2_1 = zmm2_1 * zmm3_1[0]
                        zmm1_1 = zmm1_1 * zmm3_1[0] f+ *(rdx_21 + (r8_4 << 2) + 4)
                        zmm3_1[0] = zmm3_1[0] f+ *(rdx_21 + (r8_4 << 2))
                        zmm2_1 = zmm2_1 f+ *(rdx_21 + (r8_4 << 2) + 8)
                        *(rdx_21 + (r8_4 << 2) + 4) = zmm1_1
                        *(rdx_21 + (r8_4 << 2)) = zmm3_1[0]
                        *(rdx_21 + (r8_4 << 2) + 8) = zmm2_1
                        j_3 = j_6
                        j_6 -= 1
                    while (j_3 != 1)
            
            int64_t rcx_35 = *arg4
            int64_t rax_59 = *r15
            float zmm0_1[0x4] = var_1ac
            rdx_1 = var_170_1
            rbx = var_158
            r12_1 = var_178_1
            r10_1 = var_1a0_1
            r13_1 = var_1c8_1
            zmm2_1 = *(rdx_1 + rax_59 + 4) * zmm0_1[0]
            zmm1_1 = *(rdx_1 + rax_59 + 8) * zmm0_1[0]
            zmm0_1[0] = zmm0_1[0] f* *(rdx_1 + rax_59)
            zmm2_1 = zmm2_1 f+ *(rcx_35 + (r8_4 << 2) + 4)
            zmm1_1 = zmm1_1 f+ *(rcx_35 + (r8_4 << 2) + 8)
            zmm0_1[0] = zmm0_1[0] f+ *(rcx_35 + (r8_4 << 2))
            *(rcx_35 + (r8_4 << 2) + 4) = zmm2_1
            *(rcx_35 + (r8_4 << 2) + 8) = zmm1_1
            *(rcx_35 + (r8_4 << 2)) = zmm0_1[0]
            r11 = var_f8
            rcx_1 = var_1b8
            r8 = var_180_1
            var_1c0 = r11
        
        r13_1 += 2
        r8 += 4
        r12_1 += 8
        var_1c8_1 = r13_1
        r10_1 += 2
        var_180_1 = r8
        rdx_1 = &rdx_1[3]
        var_178_1 = r12_1
        i += 1
        var_1a0_1 = r10_1
        var_170_1 = rdx_1
    while (i s< *(rsi + 8))
    
    rax_4 = var_68

int64_t result = j_sub_140a74f90(rax_4)
__security_check_cookie(rax_1 ^ &var_1f8)
return result
