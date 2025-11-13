// 函数: sub_1425da290
// 地址: 0x1425da290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg2[4]
void* var_100 = r12
void* r15 = arg3
int64_t* rbx = arg2
sub_141d43680(arg3 + 0xe8)
void* result = rbx[9]

if (result == 0)
    return result

int64_t* rcx_1 = *(result + 0x40)
char r8 = 0
char arg_20 = 0
int64_t* var_108_1 = rcx_1
void* rax_1 = &rcx_1[sx.q(*(result + 0x48))]

if (rcx_1 != rax_1)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    
    do
        void* r13_2 = *rcx_1
        void* var_118_1 = r13_2
        int32_t r14_1 = -1
        int32_t rcx_2
        rcx_2.b = sub_140b5b8a0(*(r13_2 + 0x80), 0) == 0
        int32_t var_158
        
        if ((*(r13_2 + 0x84) != 0 | rcx_2.b) != 0)
            int64_t rbx_1 = *(r13_2 + 0x80)
            var_158.q = rbx_1
            void* const rcx_6
            
            if (*(r12 + 0x220) == *(r12 + 0x24c))
            label_1425da402:
                rcx_6 = nullptr
            else
                int32_t var_154
                int32_t rax_5 = sub_140b5ead0(rbx_1.d) + var_154
                void* r8_1 = r12 + 0x250
                void* rcx_4 = *(r8_1 + 8)
                
                if (rcx_4 != 0)
                    r8_1 = rcx_4
                
                int32_t rax_7 = *(r8_1 + (((sx.q(*(r12 + 0x260)) - 1) & sx.q(rax_5)) << 2))
                
                if (rax_7 == 0xffffffff)
                label_1425da402_1:
                    rcx_6 = nullptr
                else
                    int64_t r8_2 = *(r12 + 0x218)
                    
                    while (true)
                        int64_t rdx_3 = sx.q(rax_7) * 5
                        rcx_6 = r8_2 + (rdx_3 << 2)
                        
                        if (*(r8_2 + (rdx_3 << 2)) == rbx_1)
                            break
                        
                        rax_7 = *(rcx_6 + 0xc)
                        
                        if (rax_7 == 0xffffffff)
                            goto label_1425da402_2
                    
                    if (rax_7 == 0xffffffff)
                    label_1425da402_2:
                        rcx_6 = nullptr
            
            rbx = arg2
            void* rax_8 = rcx_6 + 8
            
            if (rcx_6 == 0)
                rax_8 = nullptr
            
            if (rax_8 != 0)
                r14_1 = *rax_8
        
        var_158 = 0xffffffff
        
        if (r14_1 != 0xffffffff)
            var_158 = sub_140664c50(&rbx[0x1d], r13_2 + 0x80)
        
        void* rbx_2 = *(r13_2 + 0x28)
        void* r14_4 = (sx.q(*(r13_2 + 0x30)) << 6) + rbx_2
        
        if (rbx_2 != r14_4)
            arg_20 = 1
            
            do
                int64_t rsi_1 = sx.q(*(arg3 + 0xf0))
                int32_t r15_1 = *(rbx_2 + 0x38)
                uint64_t var_148_1 = *(rbx_2 + 0x30)
                int32_t rax_10 = (rsi_1 + 1).d
                int32_t var_14c_1 = (*(rbx_2 + 0x3c)).d
                *(arg3 + 0xf0) = rax_10
                
                if (rax_10 s> *(arg3 + 0xf4))
                    sub_1405c4d20(arg3 + 0xe8)
                
                int64_t rax_11 = *(arg3 + 0xe8)
                int64_t rcx_9 = rsi_1 * 5
                rbx_2 += 0x40
                *(rax_11 + (rcx_9 << 2)) = var_158.o
                *(rax_11 + (rcx_9 << 2) + 0x10) = r15_1
            while (rbx_2 != r14_4)
            
            r13_2 = var_118_1
            r15 = arg3
        
        void* r14_5 = *(r13_2 + 0x48)
        void* r12_3 = sx.q(*(r13_2 + 0x50)) * 0x50 + r14_5
        uint128_t zmm0_1
        
        if (r14_5 != r12_3)
            void* r15_2 = r14_5 + 0x38
            arg_20 = 1
            
            do
                int64_t var_f8 = 0
                int32_t var_f0_1 = 0x3f800000
                float var_e8
                int32_t zmm9_1 = sub_140adf300(r15_2 + 4, &var_e8, &var_f8)
                uint128_t zmm5_1 = *(r15_2 - 8)
                float zmm1_1[0x4] = zmm5_1
                uint128_t zmm3_1 = *r15_2
                int64_t zmm4_1 = *(r15_2 - 4)
                int64_t rsi_2 = sx.q(*(arg3 + 0xf0))
                int64_t zmm2_1 = zmm4_1
                zmm6 = var_e8
                zmm0_1.d = (*(r15_2 + 0x14)).d f* zmm9_1
                int32_t rax_13 = (rsi_2 + 1).d
                zmm6[0] = zmm6[0] f* zmm0_1.d
                int32_t var_e4
                zmm7.d = var_e4.d f* zmm0_1.d
                zmm5_1.d = zmm5_1.d f+ zmm6[0]
                int32_t var_e0
                zmm8.d = var_e0.d f* zmm0_1.d
                zmm1_1[0] = zmm1_1[0] - zmm6[0]
                zmm4_1.d = zmm4_1.d f+ zmm7.d
                zmm0_1.d = zmm3_1.d f- zmm8.d
                zmm2_1.d = zmm2_1.d f- zmm7.d
                zmm3_1.d = zmm3_1.d f+ zmm8.d
                int32_t var_a8_1 = zmm0_1.d
                uint64_t var_130_1 = (_mm_unpacklo_ps(zmm5_1, zmm4_1)).q
                zmm0_1 = *(r15_2 + 0x10)
                int32_t var_14c_2 = zmm0_1.d
                int32_t var_134_1 = zmm0_1.d
                int32_t var_9c_1 = zmm3_1.d
                int64_t var_148_2 = (_mm_unpacklo_ps(zmm1_1, zmm2_1)).q
                *(arg3 + 0xf0) = rax_13
                
                if (rax_13 s> *(arg3 + 0xf4))
                    sub_1405c4d20(arg3 + 0xe8)
                
                int64_t rax_14 = *(arg3 + 0xe8)
                int64_t rcx_12 = rsi_2 * 5
                *(rax_14 + (rcx_12 << 2)) = var_158.o
                *(rax_14 + (rcx_12 << 2) + 0x10) = var_a8_1
                int64_t rsi_3 = sx.q(*(arg3 + 0xf0))
                int32_t rax_15 = (rsi_3 + 1).d
                *(arg3 + 0xf0) = rax_15
                
                if (rax_15 s> *(arg3 + 0xf4))
                    sub_1405c4d20(arg3 + 0xe8)
                
                int64_t rax_16 = *(arg3 + 0xe8)
                int64_t rcx_14 = rsi_3 * 5
                *(rax_16 + (rcx_14 << 2)) = var_158.o
                *(rax_16 + (rcx_14 << 2) + 0x10) = var_9c_1
                int64_t rsi_4 = sx.q(*(r15 + 0x100))
                int32_t rcx_15 = *(arg3 + 0xf0)
                int32_t var_11c_1 = rcx_15 - 1
                int32_t rax_20 = (rsi_4 + 1).d
                *(r15 + 0x100) = rax_20
                
                if (rax_20 s> *(r15 + 0x104))
                    sub_1405a4d70(r15 + 0xf8)
                
                r14_5 += 0x50
                r15_2 += 0x50
                *(*(r15 + 0xf8) + (rsi_4 << 3)) = (rcx_15 - 2).q
            while (r14_5 != r12_3)
            
            r13_2 = var_118_1
        
        void* rsi_5 = *(r13_2 + 0x68)
        void* r12_5 = sx.q(*(r13_2 + 0x70)) * 0x58 + rsi_5
        
        if (rsi_5 != r12_5)
            void* r15_3 = rsi_5 + 0x38
            arg_20 = 1
            
            do
                int64_t var_d8 = 0
                int32_t var_d0_1 = 0x3f800000
                float var_c8
                int32_t zmm9_2 = sub_140adf300(r15_3 + 4, &var_c8, &var_d8)
                uint128_t zmm5_2 = *(r15_3 - 8)
                float zmm3_2 = *r15_3
                int64_t zmm4_2 = *(r15_3 - 4)
                zmm6 = var_c8
                int64_t r14_6 = sx.q(*(arg3 + 0xf0))
                zmm0_1.d = (*(r15_3 + 0x18)).d f* zmm9_2
                int32_t rax_24 = (r14_6 + 1).d
                zmm6[0] = zmm6[0] f* zmm0_1.d
                int32_t var_c4
                zmm7.d = var_c4.d f* zmm0_1.d
                int32_t var_c0
                zmm8.d = var_c0.d f* zmm0_1.d
                zmm6[0] = zmm6[0] f+ zmm5_2.d
                int64_t zmm2_2
                zmm2_2.d = zmm7.q.d f+ zmm4_2.d
                zmm5_2.d = zmm5_2.d f- zmm6[0]
                zmm0_1.d = zmm8.d f+ zmm3_2
                zmm4_2.d = zmm4_2.d f- zmm7.d
                int64_t var_130_2 = (_mm_unpacklo_ps(zmm6, zmm2_2)).q
                float zmm1_2[0x4] = *(r15_3 + 0x14)
                int32_t var_90_1 = zmm0_1.d
                uint64_t var_148_3 = (_mm_unpacklo_ps(zmm5_2, zmm4_2)).q
                int32_t var_134_2 = (*(r15_3 + 0x10)).d
                float var_14c_3 = zmm1_2[0]
                *(arg3 + 0xf0) = rax_24
                
                if (rax_24 s> *(arg3 + 0xf4))
                    sub_1405c4d20(arg3 + 0xe8)
                
                int64_t rax_25 = *(arg3 + 0xe8)
                int64_t rcx_20 = r14_6 * 5
                *(rax_25 + (rcx_20 << 2)) = var_158.o
                *(rax_25 + (rcx_20 << 2) + 0x10) = var_90_1
                int64_t r14_7 = sx.q(*(arg3 + 0xf0))
                int32_t rax_26 = (r14_7 + 1).d
                *(arg3 + 0xf0) = rax_26
                
                if (rax_26 s> *(arg3 + 0xf4))
                    sub_1405c4d20(arg3 + 0xe8)
                
                int64_t rax_27 = *(arg3 + 0xe8)
                int64_t rcx_22 = r14_7 * 5
                *(rax_27 + (rcx_22 << 2)) = var_158.o
                *(rax_27 + (rcx_22 << 2) + 0x10) = zmm3_2 f- zmm8.d
                int64_t r14_8 = sx.q(*(arg3 + 0x100))
                int32_t rcx_23 = *(arg3 + 0xf0)
                int32_t var_10c_1 = rcx_23 - 1
                int32_t rax_31 = (r14_8 + 1).d
                *(arg3 + 0x100) = rax_31
                
                if (rax_31 s> *(arg3 + 0x104))
                    sub_1405a4d70(arg3 + 0xf8)
                
                rsi_5 += 0x58
                r15_3 += 0x58
                *(*(arg3 + 0xf8) + (r14_8 << 3)) = (rcx_23 - 2).q
            while (rsi_5 != r12_5)
        
        r15 = arg3
        rcx_1 = &var_108_1[1]
        r12 = var_100
        rbx = arg2
        var_108_1 = rcx_1
    while (rcx_1 != rax_1)
    
    r8 = arg_20

*(r15 + 0x128) |= r8
return (*(*rbx + 0x278))(rbx, r12)
