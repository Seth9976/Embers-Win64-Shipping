// 函数: sub_141483730
// 地址: 0x141483730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* r10 = *(arg4 + 8)
int32_t* rbx_2

if (*(r10 + 0x1ac0) == *(r10 + 0x1aec))
label_1414837f4:
    rbx_2 = nullptr
else
    void* r8 = r10 + 0x1af0
    void* rdx = *(r8 + 8)
    int64_t r9 = sx.q(*(*(arg1 + 0x5c0) + 0x28))
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_4 = *(r8 + (((sx.q(*(r10 + 0x1b00)) - 1) & r9) << 2))
    
    if (rax_4 == 0xffffffff)
    label_1414837f4_1:
        rbx_2 = nullptr
    else
        while (true)
            rbx_2 = sx.q(rax_4) * 0x290 + *(r10 + 0x1ab8)
            
            if (*rbx_2 == r9.d)
                break
            
            rax_4 = rbx_2[0xa0]
            
            if (rax_4 == 0xffffffff)
                goto label_1414837f4_2
        
        if (rax_4 == 0xffffffff)
        label_1414837f4_2:
            rbx_2 = nullptr

int64_t var_c8 = *arg3
int64_t var_b8 = arg3[1]
int32_t result = arg3[7].d
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x30)
int64_t var_9c
__builtin_memset(&var_9c, 0, 0x43)
int128_t var_b0 = zx.o(0)
int16_t var_58 = 0

if (rbx_2[0x9f].b != 0)
    void* rsi_1 = &rbx_2[0x90]
    
    if (*(rsi_1 + 0x30) != 0 || *(rsi_1 + 0x28) s> 0)
        sub_140fdc870(arg2, &var_f8)
        int64_t var_c0_1 = data_14395da18
        int64_t var_b8_1 = data_1439b4ac0
        int32_t var_158_1
        int32_t var_150_1
        void* var_148
        void* var_140
        void* rax_28
        uint64_t rcx_35
        uint64_t rdx_16
        void* r9_2
        uint128_t zmm1_1
        void* var_138
        void* var_118
        void* var_110
        void* var_108
        int128_t var_d8
        
        if ((*(arg1 + 0x570) & 0x20) == 0)
            sub_1419a2ec0(*(arg5 + 0x5150), &var_140, &data_143f55f90, 0)
            void* r14_9 = var_140
            int64_t* rcx_37 = *(arg5 + 0x5150)
            var_108 = var_138
            sub_1419a2ec0(rcx_37, &var_118, &data_143ed9580, 0)
            void* r15_7 = var_118
            var_f8.q = data_1439c9210
            int64_t rax_43 = 0
            
            if (r14_9 != 0)
                int64_t rdx_19 = sx.q(*(r14_9 + 0x10c))
                int64_t* r14_10 = *(var_138 + 0x10)
                int64_t rax_44 = r14_10[3]
                
                if (*(rax_44 + (rdx_19 << 3)) == 0)
                    sub_1419ccf30(r14_10, rdx_19.d)
                    rax_44 = r14_10[3]
                
                rax_43 = *(rax_44 + (rdx_19 << 3))
            
            var_f8:8.q = rax_43
            int64_t rax_45 = 0
            
            if (r15_7 != 0)
                int64_t rdx_20 = sx.q(*(r15_7 + 0x10c))
                int64_t* r14_11 = *(var_110 + 0x10)
                int64_t rax_47 = r14_11[3]
                
                if (*(rax_47 + (rdx_20 << 3)) == 0)
                    sub_1419ccf30(r14_11, rdx_20.d)
                    rax_47 = r14_11[3]
                
                rax_45 = *(rax_47 + (rdx_20 << 3))
            
            var_d8.q = rax_45
            int32_t var_a0_3 = 0
            sub_1419870b0(arg2, &var_f8, 2)
            void*** rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_48 = &rcx_43[3]
            
            if (rax_48 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x20)
                rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_48 = &rcx_43[3]
            
            *(arg2 + 0x30) = rax_48
            int64_t* rax_49 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_49 = rcx_43
            *(arg2 + 8) = &rcx_43[1]
            rcx_43[1] = 0
            *rcx_43 = &data_142f18bb8
            rcx_43[2].d = result
            void* rbx_3 = *(rbx_2 + 0x270)
            sub_141080ac0(r15_7, arg2, *(arg2 + 0x1a0), *(arg5 + 0x10))
            int64_t rax_53 = *(rbx_3 + 0x10)
            void* r12_7 = *(arg2 + 0x1a0)
            int64_t* rbx_4 = data_14395fa10
            
            if (*(r15_7 + 0x11a) u> 0)
                uint32_t r12_8 = zx.d(*(r15_7 + 0x118))
                void*** rcx_50 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_54 = &rcx_50[5]
                
                if (rax_54 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_50 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_54 = &rcx_50[5]
                
                *(arg2 + 0x30) = rax_54
                void**** rax_55 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_55 = rcx_50
                *(arg2 + 8) = &rcx_50[1]
                rcx_50[1] = 0
                *rcx_50 = &data_142d5a070
                rcx_50[2] = r12_7
                rcx_50[3].d = r12_8
                rcx_50[4] = rax_53
            
            if (*(r15_7 + 0x11e) u> 0)
                uint32_t r15_8 = zx.d(*(r15_7 + 0x11c))
                
                if ((*(*rbx_4 + 8))(rbx_4) == 0)
                    void*** rcx_57 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_61 = &rcx_57[5]
                    
                    if (rax_61 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_57 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_61 = &rcx_57[5]
                    
                    *(arg2 + 0x30) = rax_61
                    void**** rax_62 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_62 = rcx_57
                    *(arg2 + 8) = &rcx_57[1]
                    rcx_57[1] = 0
                    *rcx_57 = &data_142d5a080
                    rcx_57[2] = r12_7
                    rcx_57[3].d = r15_8
                    rcx_57[4] = rbx_4
            
            int64_t* rcx_61 = *(rsi_1 + 0x30)
            var_140 = r14_9
            void* var_138_3 = var_108
            
            if (rcx_61 == 0)
                void* rax_66 = *(rsi_1 + 0x20)
                
                if (rax_66 != 0)
                    rsi_1 = rax_66
                
                rcx_61 = *rsi_1
            
            rax_28, r9_2 = (*(*rcx_61 + 0x10))(rcx_61)
            var_150_1 = 1
            var_158_1 = 0
        label_141483f2d:
            uint64_t rcx_62 = zx.q(*(arg1 + 0x54c))
            rdx_16 = zx.q(*(arg1 + 0x548))
            var_148:4.d = rcx_62.d
            zmm1_1.d = float.s(rcx_62)
            rcx_35 = zx.q(*(arg1 + 0x550))
        else
            int64_t* r14_1 = *(arg5 + 0x5150)
            
            if (sub_14122e130((*U"1111")[sx.q(*(arg4 + 0x3b0))]) != 0)
                sub_1419a2ec0(r14_1, &var_108, &data_143eda300, 0)
                void* r14_2 = var_108
                sub_1419a2ec0(*(arg5 + 0x5150), &var_118, &data_143ed9360, 0)
                sub_1419a2ec0(*(arg5 + 0x5150), &var_140, &data_143ed9470, 0)
                void* r12_2 = var_140
                var_f8.q = data_1439c9210
                int64_t rax_12 = 0
                void* var_100
                
                if (r14_2 != 0)
                    int64_t rdx_5 = sx.q(*(r14_2 + 0x10c))
                    int64_t* r14_3 = *(var_100 + 0x10)
                    int64_t rax_13 = r14_3[3]
                    
                    if (*(rax_13 + (rdx_5 << 3)) == 0)
                        sub_1419ccf30(r14_3, rdx_5.d)
                        rax_13 = r14_3[3]
                    
                    rax_12 = *(rax_13 + (rdx_5 << 3))
                
                void* rcx_10 = var_118
                var_f8:8.q = rax_12
                int64_t rax_14 = 0
                
                if (rcx_10 != 0)
                    int64_t rdx_6 = sx.q(*(rcx_10 + 0x10c))
                    int64_t* r14_4 = *(var_110 + 0x10)
                    int64_t rax_16 = r14_4[3]
                    
                    if (*(rax_16 + (rdx_6 << 3)) == 0)
                        sub_1419ccf30(r14_4, rdx_6.d)
                        rax_16 = r14_4[3]
                    
                    rax_14 = *(rax_16 + (rdx_6 << 3))
                
                var_d8:8.q = rax_14
                int64_t rax_17 = 0
                
                if (r12_2 != 0)
                    int64_t rdx_7 = sx.q(*(r12_2 + 0x10c))
                    int64_t* r14_5 = *(var_138 + 0x10)
                    int64_t rax_19 = r14_5[3]
                    
                    if (*(rax_19 + (rdx_7 << 3)) == 0)
                        sub_1419ccf30(r14_5, rdx_7.d)
                        rax_19 = r14_5[3]
                    
                    rax_17 = *(rax_19 + (rdx_7 << 3))
                
                var_d8.q = rax_17
                int32_t var_a0_1 = 0
                sub_1419870b0(arg2, &var_f8, 2)
                void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_20 = &rcx_16[3]
                
                if (rax_20 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_20 = &rcx_16[3]
                
                *(arg2 + 0x30) = rax_20
                int64_t* rax_21 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_21 = rcx_16
                *(arg2 + 8) = &rcx_16[1]
                rcx_16[1] = 0
                *rcx_16 = &data_142f18bb8
                rcx_16[2].d = result
                sub_14149e520(r12_2, arg2, arg5, *(rbx_2 + 0x270))
                int64_t* rcx_21 = *(rsi_1 + 0x30)
                var_140 = r14_2
                void* var_138_1 = var_100
                
                if (rcx_21 == 0)
                    void* rax_26 = *(rsi_1 + 0x20)
                    
                    if (rax_26 != 0)
                        rsi_1 = rax_26
                    
                    rcx_21 = *rsi_1
                
                rax_28, r9_2 = (*(*rcx_21 + 0x10))(rcx_21)
                var_150_1 = 1
                var_158_1 = 0
                goto label_141483f2d
            
            sub_1419a2ec0(r14_1, &var_140, &data_143eda460, 0)
            void* r12_3 = var_140
            sub_1419a2ec0(*(arg5 + 0x5150), &var_118, &data_143ed9470, 0)
            void* r13_1 = var_118
            var_f8.q = data_1439c9210
            int64_t rax_30 = 0
            
            if (r12_3 != 0)
                int64_t rdx_12 = sx.q(*(r12_3 + 0x10c))
                int64_t* r14_7 = *(var_138 + 0x10)
                int64_t rax_31 = r14_7[3]
                
                if (*(rax_31 + (rdx_12 << 3)) == 0)
                    sub_1419ccf30(r14_7, rdx_12.d)
                    rax_31 = r14_7[3]
                
                rax_30 = *(rax_31 + (rdx_12 << 3))
            
            var_f8:8.q = rax_30
            int64_t rax_32 = 0
            
            if (r13_1 != 0)
                int64_t rdx_13 = sx.q(*(r13_1 + 0x10c))
                int64_t* r14_8 = *(var_110 + 0x10)
                int64_t rax_34 = r14_8[3]
                
                if (*(rax_34 + (rdx_13 << 3)) == 0)
                    sub_1419ccf30(r14_8, rdx_13.d)
                    rax_34 = r14_8[3]
                
                rax_32 = *(rax_34 + (rdx_13 << 3))
            
            var_d8.q = rax_32
            int32_t var_a0_2 = 0
            sub_1419870b0(arg2, &var_f8, 2)
            void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_35 = &rcx_28[3]
            
            if (rax_35 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x20)
                rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_35 = &rcx_28[3]
            
            *(arg2 + 0x30) = rax_35
            int64_t* rax_36 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_36 = rcx_28
            *(arg2 + 8) = &rcx_28[1]
            rcx_28[1] = 0
            *rcx_28 = &data_142f18bb8
            rcx_28[2].d = result
            sub_14149e520(r13_1, arg2, arg5, *(rbx_2 + 0x270))
            int64_t* rcx_33 = *(rsi_1 + 0x30)
            var_140 = r12_3
            void* var_138_2 = var_138
            
            if (rcx_33 == 0)
                void* rax_40 = *(rsi_1 + 0x20)
                
                if (rax_40 != 0)
                    rsi_1 = rax_40
                
                rcx_33 = *rsi_1
            
            rax_28, r9_2 = (*(*rcx_33 + 0x10))(rcx_33)
            var_150_1 = 6
            var_158_1 = 0
            uint64_t rcx_34 = zx.q(*(arg1 + 0x54c))
            rdx_16 = zx.q(*(arg1 + 0x548))
            var_148:4.d = rcx_34.d
            zmm1_1.d = float.s(rcx_34)
            rcx_35 = zx.q(*(arg1 + 0x550))
        float zmm0_1 = float.s(rcx_35)
        var_148.d = rdx_16.d
        int512_t zmm3
        zmm3.o = zx.o(0)
        int512_t zmm2_1
        zmm2_1.o = zx.o(0)
        zmm3.d = float.s(rdx_16)
        result = sub_1413993b0(arg2, zx.o(0), zmm2_1, r9_2, zmm3, zmm1_1.d, zmm0_1, zmm0_1, zmm3.d, 
            zmm1_1.d, var_148, *(rax_28 + 0x14), &var_140, var_158_1, var_150_1)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
