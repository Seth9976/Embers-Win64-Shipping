// 函数: sub_142710cc0
// 地址: 0x142710cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3c6e0(arg2 + 0x34)
uint64_t result_1 = result

if (result != 0)
    arg2[6].d
    sub_1426cce30(arg1 + 0x50, result)
    char rax = sub_1426e25f0(arg1 + 0x50)
    int64_t r14_1 = 0
    char r15_1 = rax
    int64_t* r12_1
    
    if (arg2[2] == 0)
        r12_1 = nullptr
    else
        void* rax_1 = sub_14273b6f0()
        
        if (rax_1 == 0)
            r12_1 = nullptr
        else
            void* rdx_1 = arg2[2]
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
                    || rdx_1 == 0)
                r12_1 = nullptr
            else
                void* rax_4 = sub_14273b470()
                void* const rdx_2
                
                if (arg2[2] == 0)
                    rdx_2 = nullptr
                else
                    void* rax_5 = sub_14273b6f0()
                    
                    if (rax_5 == 0)
                        rdx_2 = nullptr
                    else
                        rdx_2 = arg2[2]
                        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                        
                        if (rax_6.d s> *(rdx_2 + 0x38)
                                || *(*(rdx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                            rdx_2 = nullptr
                
                if (rax_4 == 0)
                    r12_1 = nullptr
                else
                    int64_t rax_8 = sx.q(*(rax_4 + 0x38))
                    
                    if (rax_8.d s> *(rdx_2 + 0x38)
                            || *(*(rdx_2 + 0x30) + (rax_8 << 3)) != rax_4 + 0x30)
                        r12_1 = nullptr
                    else
                        int64_t* rbx_2
                        
                        if (arg2[2] == 0)
                            rbx_2 = nullptr
                        else
                            void* rax_10 = sub_14273b6f0()
                            
                            if (rax_10 == 0)
                                rbx_2 = nullptr
                            else
                                rbx_2 = arg2[2]
                                int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                                
                                if (rax_11.d s> rbx_2[7].d
                                        || *(rbx_2[6] + (rax_11 << 3)) != rax_10 + 0x30)
                                    rbx_2 = nullptr
                        
                        r12_1 = rbx_2[0x23]
                        
                        if (r12_1 == 0)
                            (*(*rbx_2 + 0x390))(rbx_2)
                            r12_1 = rbx_2[0x23]
    
    result = zx.q(*(arg1 + 0x223))
    int128_t zmm6
    int128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    uint128_t var_148
    
    if (result.b == 1)
        result = sub_1426d7f70(arg2)
        int64_t performanceCount = result
        uint64_t r15_2 = result
        
        if (result != 0)
            uint128_t var_88
            sub_14265ad90(&var_88, result, result_1, *(arg1 + 0x200))
            int32_t rcx_10 = arg2[1].d
            int64_t var_168 = 0
            int64_t var_160_1 = 0
            
            if (rcx_10 s> 0)
                sub_140775c70(&var_168, rcx_10)
                rcx_10 = arg2[1].d
            
            int64_t zmm2 = *(arg1 + 0x208)
            uint128_t zmm1_1 = *(arg1 + 0x20c)
            int64_t* rax_15
            uint128_t zmm0_1
            
            if (zmm2.d f!= zmm1_1.d)
                int64_t var_108 = 0
                zmm0_1.d = zmm1_1.d f- zmm2.d
                rax_15 = &var_108
                zmm0_1.d = zmm0_1.d f* 0.5f
                int32_t var_100_1 = zmm0_1.d
            else
                int32_t var_e0_1 = data_143dbb200
                uint64_t var_e8
                rax_15 = &var_e8
                var_e8 = data_143dbb1f8.q
            
            int32_t i = 0
            int32_t rax_16 = rax_15[1].d
            uint64_t var_178 = *rax_15
            
            if (rcx_10 s> 0)
                zmm8 = var_178:4.d
                int64_t rsi = 0
                int128_t zmm9 = var_178.d
                
                do
                    int32_t rcx_12 = *(rsi + *arg2 + 4)
                    
                    if (not(test_bit(rcx_12, 0x1e)) && rcx_12 s>= 0)
                        sub_1426df900(arg1, &var_178, arg2, i)
                        int64_t zmm4_1 = data_143dbb1f8.q
                        int32_t rcx_14 = data_143dbb200
                        zmm0_1.d = rax_16.d f+ rax_16.d
                        int64_t r14_2 = sx.q(var_160_1.d)
                        zmm1_1.d = var_178.d.d f+ zmm9.d
                        var_148:0xc.q = zmm4_1
                        zmm2.d = var_178:4.d.d f+ zmm8.d
                        var_148:8.d = rcx_14
                        int32_t var_d0_1 = zmm0_1.d
                        zmm0_1.q = zmm4_1
                        int32_t var_b4_1 = 0.d
                        int64_t var_138
                        var_138:4.d = rcx_14
                        zmm1_1 = _mm_unpacklo_ps(zmm1_1, zmm2)
                        int32_t var_98 = (var_98 & 0xfffffffc) | 4
                        int32_t rax_23 = (r14_2 + 1).d
                        var_148 = zmm0_1
                        int64_t var_a0_1 = 0
                        uint64_t var_d8_1 = zmm1_1.q
                        int64_t var_b0_1 = zmm4_1
                        var_160_1.d = rax_23
                        
                        if (rax_23 s> var_160_1:4.d)
                            sub_140775520(&var_168)
                        
                        int64_t rax_24 = var_168
                        int64_t rcx_16 = r14_2 * 9
                        *(rax_24 + (rcx_16 << 3)) = var_d8_1.o
                        *(rax_24 + (rcx_16 << 3) + 0x10) = zmm0_1
                        *(rax_24 + (rcx_16 << 3) + 0x20) = var_138:4.o
                        *(rax_24 + (rcx_16 << 3) + 0x30) = rcx_14.o
                        *(rax_24 + (rcx_16 << 3) + 0x40) = var_98.q
                    
                    i += 1
                    rsi += 8
                while (i s< arg2[1].d)
                
                zmm1_1 = *(arg1 + 0x20c)
                zmm2 = *(arg1 + 0x208)
                r15_2 = performanceCount
            
            zmm0_1 = *(arg1 + 0x210)
            zmm1_1.d = zmm1_1.d f+ zmm2.d
            int32_t var_f8 = zmm0_1.d
            int32_t var_f4_1 = zmm0_1.d
            zmm0_1 = var_88
            var_148 = zmm0_1
            zmm1_1.d = zmm1_1.d f* 0.5f
            void* rax_25 = _mm_bsrli_si128(zmm0_1, 8).q
            int32_t var_f0_1 = zmm1_1.d
            
            if (rax_25 != 0)
                *(rax_25 + 8) += 1
            
            (*(*r15_2 + 0x710))(r15_2, &var_168, &var_f8, &var_148, 0)
            int32_t rsi_1 = 0
            uint64_t* var_1c8
            result = sub_1426c5aa0(&var_1c8, arg1, arg2, 0xffffffff)
            float var_1b0
            float zmm1_2 = var_1b0
            int64_t rdi_1 = 0
            int32_t i_4
            int32_t i_1 = i_4
            uint64_t* r10_1 = var_1c8
            
            while (i_1 s< r10_1[1].d)
                if ((*(r10_1 + 0x13e) & 1) != 0)
                    break
                
                double var_1b8
                
                if (not(var_1b8 f< zx.o(0).q))
                    result = QueryPerformanceCounter(&performanceCount)
                    i_1 = i_4
                    r10_1 = var_1c8
                    
                    if (float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000
                            >= var_1b8)
                        break
                    
                    zmm1_2 = var_1b0
                
                int64_t r8_9 = var_168
                uint8_t rbx_4 = (*(r8_9 + rdi_1 + 0x40) u>> 1).b & 1
                
                if (rbx_4 != 0 && r12_1 != 0)
                    int64_t r9_4 = *r12_1
                    (*(r9_4 + 0x290))(r12_1, 
                        (sx.q(*(*r10_1 + (sx.q(i_1) << 3) + 4) * 2) s>> 1) + r10_1[3], 
                        r8_9 + sx.q(rsi_1) * 0x48 + 0x28, r9_4)
                    zmm1_2 = var_1b0
                
                int32_t var_1ac
                char var_1a6
                
                if ((var_1a6 & 2) == 0)
                    uint32_t rcx_23 = zx.d(*(arg1 + 0x4a))
                    
                    if (rcx_23 != 0 && rcx_23 != 1 && rcx_23 != 2 && rcx_23 == 3)
                        result.b = rbx_4 == rax
                    
                    double zmm0_2
                    
                    if (rcx_23 != 0 && rcx_23 != 1 && rcx_23 != 2 && rcx_23 == 3 && result.b != 0)
                        zmm0_2 = 0x3f800000
                        goto label_1427111ff
                    
                    if ((var_1a6 & 4) == 0)
                        zmm0_2 = (zx.o(0)).q
                    label_1427111ff:
                        char var_1a7
                        uint32_t rcx_26 = zx.d(var_1a7)
                        
                        if (rcx_26 == 0)
                            var_1b0 = zmm1_2 f+ zmm0_2.d
                        else if (rcx_26 == 1)
                            if (var_1ac.w == 0 || not(zmm1_2 f<= zmm0_2.d))
                                var_1b0 = zmm0_2.d
                        else if (rcx_26 == 2)
                            if (var_1ac.w == 0)
                                var_1b0 = zmm0_2.d
                            else if (not(zmm1_2 f>= zmm0_2.d))
                                var_1b0 = zmm0_2.d
                        else if (rcx_26 == 3)
                            var_1b0 = zmm1_2 f* zmm0_2.d
                        
                        var_1ac.w += 1
                    
                    var_1ac:2.w += 1
                
                result = sub_1426ec620(&var_1c8)
                r10_1 = var_1c8
                i_1 = i_4
                
                if ((*(r10_1 + 0x13e) & 1) != 0)
                    zmm1_2 = var_1b0
                else
                    i_1 += 1
                    var_1ac = 0
                    zmm1_2 = (zx.o(0)).d
                    result.b = var_1a6 & 0xfd
                    var_1b0 = 0f
                    result.b |= 1
                    i_4 = i_1
                    var_1a6 = result.b
                    
                    if (i_1 s< r10_1[1].d)
                        do
                            result = *r10_1
                            int32_t r8_12 = *(result + (sx.q(i_1) << 3) + 4)
                            
                            if (not(test_bit(r8_12, 0x1e)) && r8_12 s>= 0)
                                goto label_1427112d4
                            
                            i_1 += 1
                            i_4 = i_1
                        while (i_1 s< r10_1[1].d)
                        
                        rsi_1 += 1
                        rdi_1 += 0x48
                        continue
                
            label_1427112d4:
                rsi_1 += 1
                rdi_1 += 0x48
            
            *(r10_1 + 0x124) = i_1
            int64_t rcx_31 = var_168
            
            if (rcx_31 != 0)
                result = sub_140a74f90(rcx_31)
            
            int64_t* rbx_5 = var_88:8.q
            
            if (rbx_5 != 0)
                result = zx.q(rbx_5[1].d)
                rbx_5[1].d -= 1
                
                if (result.d == 1)
                    result = (**rbx_5)(rbx_5)
                    int32_t r14_3 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (r14_3 == 1)
                        result = (*(*rbx_5 + 8))(rbx_5, zx.q(r14_3))
    else if (result.b == 2)
        int32_t rax_31 = arg2[1].d
        int64_t var_158 = 0
        int64_t var_150_1 = 0
        uint64_t var_128 = 0
        int32_t var_120_1 = 0
        
        if (rax_31 s> 0)
            sub_1405a5130(&var_158, rax_31)
            rax_31 = arg2[1].d
        
        int32_t i_2 = 0
        
        if (rax_31 s> 0)
            do
                int32_t rcx_35 = *(r14_1 + *arg2 + 4)
                
                if (not(test_bit(rcx_35, 0x1e)) && rcx_35 s>= 0)
                    int64_t var_118
                    sub_1426df900(arg1, &var_118, arg2, i_2)
                    int64_t rsi_2 = sx.q(var_150_1.d)
                    int32_t var_110
                    var_148:8.d = var_110
                    int32_t rax_34 = (rsi_2 + 1).d
                    var_148.q = var_118
                    int64_t var_138_1 = 0
                    var_150_1.d = rax_34
                    
                    if (rax_34 s> var_150_1:4.d)
                        sub_1405a4df0(&var_158)
                    
                    int64_t rax_35 = var_158
                    int64_t rcx_38 = rsi_2 * 3
                    *(rax_35 + (rcx_38 << 3)) = var_148
                    *(rax_35 + (rcx_38 << 3) + 0x10) = var_138_1
                
                i_2 += 1
                r14_1 += 8
            while (i_2 s< arg2[1].d)
            
            r15_1 = rax
        
        sub_1426e9390(arg2[0xb], arg1 + 0x1f8, &var_158, &var_128)
        int32_t rsi_3 = 0
        uint64_t* var_1a0
        result = sub_1426c5aa0(&var_1a0, arg1, arg2, 0xffffffff)
        int64_t rdi_2 = 0
        float var_188
        float zmm1_3 = var_188
        int32_t i_5
        int32_t i_3 = i_5
        uint64_t* r10_2 = var_1a0
        
        while (i_3 s< r10_2[1].d)
            if ((*(r10_2 + 0x13e) & 1) != 0)
                break
            
            double var_190
            
            if (not(var_190 < 0.0))
                int64_t performanceCount_1
                result = QueryPerformanceCounter(&performanceCount_1)
                i_3 = i_5
                r10_2 = var_1a0
                
                if (float.d(performanceCount_1) f* data_143d796f8 f+ 0x4170000000000000 >= var_190)
                    break
                
                zmm1_3 = var_188
            
            if (rsi_3 s< 0 || rsi_3 s>= var_120_1 || *(var_128 + rdi_2) == 0)
                i_2.b = 0
            else
                i_2.b = 1
                
                if (r12_1 != 0)
                    int64_t r9_7 = *r12_1
                    (*(r9_7 + 0x290))(r12_1, 
                        (sx.q(*(*r10_2 + (sx.q(i_3) << 3) + 4) * 2) s>> 1) + r10_2[3], 
                        var_158 + sx.q(rsi_3) * 0x18, r9_7)
                    zmm1_3 = var_188
            
            int32_t var_184
            char var_17e
            
            if ((var_17e & 2) == 0)
                uint32_t rcx_45 = zx.d(*(arg1 + 0x4a))
                
                if (rcx_45 != 0 && rcx_45 != 1 && rcx_45 != 2 && rcx_45 == 3)
                    result.b = i_2.b == r15_1
                
                double zmm0_4
                
                if (rcx_45 != 0 && rcx_45 != 1 && rcx_45 != 2 && rcx_45 == 3 && result.b != 0)
                    zmm0_4 = 0x3f800000
                    goto label_142711558
                
                if ((var_17e & 4) == 0)
                    zmm0_4 = (zx.o(0)).q
                label_142711558:
                    char var_17f
                    uint32_t rcx_48 = zx.d(var_17f)
                    
                    if (rcx_48 == 0)
                        var_188 = zmm1_3 f+ zmm0_4.d
                    else if (rcx_48 == 1)
                        if (var_184.w == 0 || not(zmm1_3 f<= zmm0_4.d))
                            var_188 = zmm0_4.d
                    else if (rcx_48 == 2)
                        if (var_184.w == 0)
                            var_188 = zmm0_4.d
                        else if (not(zmm1_3 f>= zmm0_4.d))
                            var_188 = zmm0_4.d
                    else if (rcx_48 == 3)
                        var_188 = zmm1_3 f* zmm0_4.d
                    
                    var_184.w += 1
                
                var_184:2.w += 1
            
            result = sub_1426ec620(&var_1a0)
            r10_2 = var_1a0
            i_3 = i_5
            
            if ((*(r10_2 + 0x13e) & 1) != 0)
                zmm1_3 = var_188
            else
                i_3 += 1
                result.b = var_17e & 0xfd
                var_184 = 0
                result.b |= 1
                i_5 = i_3
                zmm1_3 = (zx.o(0)).d
                var_17e = result.b
                var_188 = 0f
                
                if (i_3 s< r10_2[1].d)
                    do
                        result = *r10_2
                        int32_t r8_17 = *(result + (sx.q(i_3) << 3) + 4)
                        
                        if (not(test_bit(r8_17, 0x1e)) && r8_17 s>= 0)
                            goto label_142711633
                        
                        i_3 += 1
                        i_5 = i_3
                    while (i_3 s< r10_2[1].d)
                    
                    rsi_3 += 1
                    rdi_2 += 1
                    continue
            
        label_142711633:
            rsi_3 += 1
            rdi_2 += 1
        
        *(r10_2 + 0x124) = i_3
        uint64_t rcx_53 = var_128
        
        if (rcx_53 != 0)
            result = sub_140a74f90(rcx_53)
        
        int64_t rcx_54 = var_158
        
        if (rcx_54 != 0)
            result = sub_140a74f90(rcx_54)

return result
