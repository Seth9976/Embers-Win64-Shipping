// 函数: sub_1413cee60
// 地址: 0x1413cee60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t r10 = arg2[1].d
int64_t* r12 = arg2
void* rsi = arg1

if (r10 s> 0)
    int64_t rbx
    int64_t var_20_1 = rbx
    int32_t i_2 = 0
    
    if (*(arg1 + 8) s>= 3)
        int32_t i = 0
        int32_t r14_1 = 0x155
        int32_t i_3 = 0
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(data_1439c7a24)).d f* 0.333333343f
        zmm1.d = zmm1.d f- 0.5f
        int32_t rax_1 = int.d(zmm1.d) s>> 1
        
        if (rax_1 s<= 0x155)
            r14_1 = rax_1
        
        int32_t var_120
        
        if (r10 s> 0)
            int64_t r13_1 = 0
            
            do
                int32_t r10_1 = *(arg1 + 0x1128)
                void* r9 = arg1 + 0x1110
                rbx.b = 0
                int32_t var_114_1 = 1
                void* var_110_1 = r9
                int32_t rcx = 0
                int32_t var_118_1 = 0
                int32_t r8 = 0
                int32_t var_108_1 = 0xffffffff
                int64_t var_104_1 = 0
                
                if (r10_1 != 0)
                    void* rax_2 = *(r9 + 0x10)
                    
                    if (rax_2 != 0)
                        r9 = rax_2
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r10_1 - 1)
                    int32_t rdx_2 = *r9
                    
                    if (rdx_2 != 0)
                    label_1413cef8c:
                        int32_t rax_9 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                        int32_t var_114_2 = rax_9
                        var_120 = temp0_2
                        int32_t rax_10
                        
                        if (rax_9 == 0)
                            rax_10 = 0x20
                        else
                            rax_10 = 0x1f - temp0_2
                        
                        var_104_1.d = r8 - rax_10 + 0x1f
                        
                        if (r8 - rax_10 + 0x1f s> r10_1)
                            var_104_1.d = r10_1
                    else
                        while (true)
                            int64_t rdx_3 = sx.q(rcx)
                            r8 += 0x20
                            rcx += 1
                            var_104_1:4.d = r8
                            var_118_1 = rcx
                            
                            if (rdx_3.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
                            int32_t var_108_2 = 0xffffffff
                            
                            if (rdx_2 != 0)
                                goto label_1413cef8c
                        
                        var_104_1.d = r10_1
                
                void* rcx_2 = arg1 + 0x1100
                void* var_c8_1 = rcx_2
                uint128_t var_c0 = var_118_1.o
                int64_t var_b0_1 = 0xffffffff
                
                if (0 s< r10_1)
                    int32_t rdx_4 = 0
                    
                    while (true)
                        rbx = zx.q(rbx.b)
                        
                        if (*(*rcx_2 + (sx.q(rdx_4) << 3)) == *(*r12 + r13_1))
                            rbx = 1
                        
                        var_b0_1.d &= not.d(var_c0:4.d)
                        sub_14059bdd0(&var_c0)
                        rdx_4 = var_b0_1:4.d
                        
                        if (rdx_4 s>= *(var_c0:8.q + 0x18))
                            break
                        
                        rcx_2 = var_c8_1
                    
                    i = i_3
                
                if (0 s>= r10_1 || rbx.b == 0)
                    rbx = zx.q(*(rsi + 0x1108))
                    int32_t rcx_5 = *(rsi + 0x1134)
                    
                    if (rbx.d - rcx_5 s< r14_1)
                        int64_t* r12_1 = *r12
                        
                        if (rcx_5 == 0)
                            int32_t rax_20 = (rbx + 1).d
                            *(arg1 + 0x1108) = rax_20
                            
                            if (rax_20 s> *(arg1 + 0x110c))
                                sub_1405a4d70(arg1 + 0x1100)
                            
                            int32_t rsi_1 = *(arg1 + 0x1128)
                            void* rdi_1 = arg1 + 0x1110
                            sub_1405a4980(rdi_1, rsi_1 + 1)
                            *(rdi_1 + 0x18) += 1
                            void* rax_21 = *(rdi_1 + 0x10)
                            
                            if (rax_21 != 0)
                                rdi_1 = rax_21
                            
                            int32_t rax_22 = rsi_1
                            
                            if (rsi_1 s< 0)
                                rax_22 = rsi_1 + 0x1f
                            
                            int64_t rdx_9 = sx.q(rax_22 s>> 5)
                            rsi = arg1
                            *(rdi_1 + (rdx_9 << 2)) &= not.d(1 << (rsi_1.b & 0x1f))
                            i = i_3
                        else
                            rbx = sx.q(*(arg1 + 0x1130))
                            int64_t r8_2 = *(arg1 + 0x1100)
                            int64_t rdx_6 = sx.q(*(r8_2 + (rbx << 3) + 4))
                            *(arg1 + 0x1130) = rdx_6.d
                            *(arg1 + 0x1134) = rcx_5 - 1
                            
                            if (rcx_5 != 1)
                                *(r8_2 + (rdx_6 << 3)) = 0xffffffff
                        
                        void* rax_26 = *(arg1 + 0x1120)
                        void* r9_1 = arg1 + 0x1110
                        
                        if (rax_26 != 0)
                            r9_1 = rax_26
                        
                        int32_t rax_27 = rbx.d
                        
                        if (rbx.d s< 0)
                            rax_27 = (rbx + 0x1f).d
                        
                        int64_t r8_3 = sx.q(rax_27 s>> 5)
                        *(r9_1 + (r8_3 << 2)) |= 1 << (rbx.b & 0x1f)
                        r12 = arg2
                        *(*(arg1 + 0x1100) + (sx.q(rbx.d) << 3)) = *(r12_1 + r13_1)
                
                i += 1
                r13_1 += 8
                i_3 = i
            while (i s< r12[1].d)
        
        int32_t rax_32 = *(rsi + 0x1108) - *(rsi + 0x1134)
        
        if (*(rsi + 0x1138) s> 0)
            rax_32 = int.d(powf(1.5f, 
                _mm_cvtepi32_ps(zx.o(int.d(logf(_mm_cvtepi32_ps(zx.o(rax_32)).d) * 2.46630335f)
                    + 1)).d))
        
        if (rax_32 s<= r14_1)
            r14_1 = rax_32
        
        uint32_t rax_35 = sub_141f3cd00()
        uint64_t rbx_1 = zx.q(rax_35)
        
        if (r14_1 != *(rsi + 0x1138) || rax_35 != *(rsi + 0x106c))
            i.b = 1
        else
            i.b = 0
        
        int64_t rcx_12
        int64_t rsi_3
        
        if (data_143f0f21c != 0)
            rsi_3 = data_143ec9428
            
            if (data_143de5480 == 0)
                rcx_12 = 0
            else
                rcx_12.b = GetCurrentThreadId() != data_143de5470
        
        if (data_143f0f21c == 0 || *(rsi_3 + (rcx_12 << 2)) == 0)
            rax_35.b = 0
        else
            rax_35.b = 1
        
        void* rsi_4
        
        if (rax_35.b == 0)
            rsi_4 = arg1
        label_1413cf306:
            
            if (i.b == 0)
                goto label_1413cf2d9
            
            *(rsi_4 + 0x1138) = r14_1
            int32_t var_d0_1 = r14_1
            int32_t var_cc_1 = rbx_1.d
            
            if (sub_140a80f40() != 0)
            label_1413cf357:
                *(rsi_4 + 0x1068) = r14_1
                *(rsi_4 + 0x106c) = rbx_1.d
                
                if (*(rsi_4 + 0x1060) == 0xffffffff)
                    (*(*(rsi_4 + 0x1058) + 0x28))()
                else
                    sub_1419ba620(rsi_4 + 0x1058)
            else
                if (data_143f138f4 == 0)
                    if (data_143de5480 == 0)
                        goto label_1413cf357
                    
                    uint32_t rax_40
                    rax_40.b = GetCurrentThreadId() == data_143de5470
                    
                    if (rax_40.b != 0)
                        goto label_1413cf357
                
                void var_60
                int64_t* rax_42 = sub_1413dd6a0(&var_60, nullptr, 0xff)
                *(*rax_42 + 0x10) = rsi_4.o
                void* rcx_21 = *rax_42
                int32_t r8_6 = rax_42[2].d
                int64_t* rdx_14 = rax_42[1]
                void* rbx_2 = *(rcx_21 + 0x28)
                i_3.q = rbx_2
                int32_t* rdi_3 = rbx_2 + 0x48
                
                if (rbx_2 != 0)
                    *rdi_3 += 1
                    rbx_2 = i_3.q
                
                sub_1405e48c0(rcx_21, rdx_14, r8_6, 1)
                
                if (rbx_2 != 0)
                    int32_t r13_3 = *rdi_3
                    *rdi_3 -= 1
                    
                    if (r13_3 == 1)
                        sub_140a2f6e0(i_3.q)
            
            result = sub_1414020c0(rsi_4, arg3, arg4)
        else
            if (i.b != 0)
                rsi_4 = arg1
                
                if (rbx_1.d != *(rsi_4 + 0x106c))
                    goto label_1413cf306
                
                *(rsi_4 + 0x1138) = r14_1
                int32_t var_130_1
                var_130_1.q = rsi_4
                int32_t var_128_1 = r14_1
                int32_t var_124_1 = rbx_1.d
                
                if (sub_140a80f40() != 0)
                    sub_1413f64e0(rsi_4 + 0x1030, zx.q(r14_1), zx.q(rbx_1.d))
                else if (data_143f138f4 != 0)
                label_1413cf27d:
                    void var_78
                    int64_t* rax_38 = sub_1413dc980(&var_78, nullptr, 0xff)
                    *(*rax_38 + 0x10) = var_130_1.o
                    void* rcx_15 = *rax_38
                    int32_t r8_4 = rax_38[2].d
                    int64_t* rdx_12 = rax_38[1]
                    rbx_1 = *(rcx_15 + 0x28)
                    var_130_1.q = rbx_1
                    int32_t* rdi_2 = rbx_1 + 0x48
                    
                    if (rbx_1 != 0)
                        *rdi_2 += 1
                        rbx_1 = var_130_1.q
                    
                    sub_1405e48c0(rcx_15, rdx_12, r8_4, 1)
                    
                    if (rbx_1 != 0)
                        int32_t r13_2 = *rdi_2
                        *rdi_2 -= 1
                        
                        if (r13_2 == 1)
                            sub_140a2f6e0(var_130_1.q)
                else if (data_143de5480 == 0)
                    sub_1413f64e0(rsi_4 + 0x1030, zx.q(r14_1), zx.q(rbx_1.d))
                else
                    uint32_t rax_37
                    rax_37.b = GetCurrentThreadId() == data_143de5470
                    
                    if (rax_37.b == 0)
                        goto label_1413cf27d
                    
                    sub_1413f64e0(rsi_4 + 0x1030, zx.q(r14_1), zx.q(rbx_1.d))
                
                goto label_1413cf2d9
            
        label_1413cf2d9:
            int32_t r14_3
            
            if (arg4 == 0)
                r14_3 = 0
            else
                r14_3 = r12[1].d
            
            int512_t zmm1_1
            result, zmm1_1 = sub_1413d1970(r14_3, arg3)
            int32_t i_1 = 0
            
            if (r12[1].d s> 0)
                int64_t r13_4 = 0
                int32_t rdx_19 = r14_3 s/ 5
                void* r9_5 = arg1 + 0x1110
                int32_t var_130_2 = rdx_19
                var_120.q = r9_5
                
                do
                    void* rsi_5 = *(*r12 + r13_4)
                    
                    if (r14_3 s> 0x14)
                        int32_t rcx_25 = 1
                        
                        if (rdx_19 s>= 1)
                            rcx_25 = rdx_19
                        
                        if (mods.dp.d(sx.q(i_1), rcx_25) == 0)
                            sub_140b29c50(data_143ddb418, i_1, r14_3)
                            r9_5 = var_120.q
                    
                    int32_t r10_2 = *(r9_5 + 0x18)
                    rbx_1.b = 0
                    void* var_f0_1 = r9_5
                    int32_t rcx_27 = 0
                    int32_t var_f8_1 = 0
                    int32_t var_f4_1 = 1
                    int32_t r8_9 = 0
                    int32_t var_e8_1 = 0xffffffff
                    int64_t var_e4_1 = 0
                    
                    if (r10_2 != 0)
                        void* rax_49 = *(r9_5 + 0x10)
                        
                        if (rax_49 != 0)
                            r9_5 = rax_49
                        
                        int32_t temp12_1
                        int32_t temp13_1
                        temp12_1:temp13_1 = sx.q(r10_2 - 1)
                        int32_t rdx_25 = *r9_5
                        
                        if (rdx_25 != 0)
                        label_1413cf4eb:
                            int32_t rax_56 = neg.d(rdx_25) & rdx_25
                            uint64_t rflags_2
                            int32_t temp0_8
                            temp0_8, rflags_2 = _bit_scan_reverse(rax_56)
                            int32_t var_f4_2 = rax_56
                            int32_t rax_57
                            
                            if (rax_56 == 0)
                                rax_57 = 0x20
                            else
                                rax_57 = 0x1f - temp0_8
                            
                            var_e4_1.d = r8_9 - rax_57 + 0x1f
                            
                            if (r8_9 - rax_57 + 0x1f s> r10_2)
                                var_e4_1.d = r10_2
                        else
                            while (true)
                                int64_t rdx_26 = sx.q(rcx_27)
                                r8_9 += 0x20
                                rcx_27 += 1
                                var_e4_1:4.d = r8_9
                                var_f8_1 = rcx_27
                                
                                if (rdx_26.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_25 = *(r9_5 + (rdx_26 << 2) + 4)
                                int32_t var_e8_2 = 0xffffffff
                                
                                if (rdx_25 != 0)
                                    goto label_1413cf4eb
                            
                            var_e4_1.d = r10_2
                    
                    zmm1_1.o = 0xffffffff
                    void* rdx_27 = rsi + 0x1100
                    void* var_a0_1 = rdx_27
                    result = nullptr
                    int128_t var_98 = var_f8_1.o
                    int64_t var_88_1 = 0xffffffff
                    
                    if (0 s< r10_2)
                        int32_t rcx_29 = 0
                        
                        while (true)
                            rbx_1 = zx.q(rbx_1.b)
                            
                            if (*(*rdx_27 + (sx.q(rcx_29) << 3)) == rsi_5)
                                rbx_1 = 1
                            
                            var_88_1.d &= not.d(var_98:4.d)
                            sub_14059bdd0(&var_98)
                            result = var_98:8.q
                            rcx_29 = var_88_1:4.d
                            
                            if (rcx_29 s>= result[3].d)
                                break
                            
                            rdx_27 = var_a0_1
                        
                        r12 = arg2
                        
                        if (rbx_1.b != 0)
                            result, zmm1_1 = sub_1413d34d0(arg1, rsi_5)
                    
                    r9_5 = var_120.q
                    i_1 += 1
                    rdx_19 = var_130_2
                    r13_4 += 8
                while (i_1 s< r12[1].d)
            
            if (r14_3 s> 0x14)
                result = sub_140b137c0(data_143ddb418)
    
    if (r12[1].d s> 0)
        int64_t* rbx_3 = nullptr
        
        do
            result = *r12
            int64_t* rcx_34 = *(rbx_3 + result)
            rcx_34[0x47].b = 0
            
            if (rcx_34[0x46] != 0)
                result = (*(*rcx_34 + 0x2d8))()
            
            i_2 += 1
            rbx_3 = &rbx_3[1]
        while (i_2 s< r12[1].d)

return result
