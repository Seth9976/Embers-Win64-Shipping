// 函数: sub_141cb6cc0
// 地址: 0x141cb6cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
void* result = __security_cookie ^ &var_1d8
void* result_1 = result
void* r14 = arg1

if (*(arg1 + 0x440) == 0)
    void* r12_1 = arg1 + 0x3a0
    void* var_1a0 = r12_1
    sub_1405af100(r12_1, arg1 + 0x350)
    int64_t r15_1 = 0
    int32_t var_5c_1 = 0x80
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_54_1 = 0
    void* var_48_1 = nullptr
    int32_t var_40_1 = 0
    int64_t* var_198 = nullptr
    void* var_190 = nullptr
    int32_t var_58_1 = 0xffffffff
    int32_t var_188_1 = 0xffffffff
    sub_140d3cc80(sub_140bdf2e0(), &var_198, 1, 0x10, 0)
    int32_t rdx_3 = var_190.d
    int64_t* r8_2 = var_198
    int32_t rcx_2 = var_188_1 + 1
    int32_t var_188_2 = rcx_2
    uint64_t rax_2
    
    if (rcx_2 s< rdx_3)
        while (r8_2[sx.q(rcx_2)] == 0)
            rax_2 = zx.q(rcx_2 + 1)
            var_188_2 = rax_2.d
            rcx_2 = rax_2.d
            
            if (rax_2.d s>= rdx_3)
                break
    
    int32_t var_1a8
    void* var_168
    void var_154
    int32_t var_138
    int64_t* var_130
    int32_t var_128
    int64_t* var_120
    
    while (true)
        if (rcx_2 s< 0 || rcx_2 s>= rdx_3)
            rax_2.b = 0
        else
            rax_2.b = 1
        
        if (rax_2.b == 0)
            break
        
        void* r13_1 = r8_2[sx.q(rcx_2)]
        
        if ((*(r13_1 + 0xcc) & 0x82000000) == 0)
            void* rax_4 = *(r13_1 + 0x40)
            int64_t rdi_1 = *(r13_1 + 0x18)
            int64_t* var_170
            
            if (rax_4 == 0)
                int64_t var_140_1 = 0
                int32_t var_d8
                sub_1405b3620(r12_1, &var_d8)
                int64_t* var_d0
                *var_d0 = rdi_1
                var_d0[1] = var_140_1
                var_d0[2].d = 0xffffffff
                void var_110
                sub_1405b8300(r12_1, &var_110, (rdi_1 u>> 0x20).d + sub_140b5ead0(rdi_1.d), var_d0, 
                    var_d8, nullptr)
            else
                int64_t* rax_5 = *(rax_4 + 0x18)
                int64_t* var_150 = rax_5
                var_170 = rax_5
                int32_t r15_3 = sub_140b5ead0(rax_5.d) + var_170:4.d
                int64_t* r14_3
                
                if (*(r14 + 0x3f8) == *(r14 + 0x424))
                label_141cb6ea3:
                    var_170 = &var_150
                    int32_t var_108
                    sub_1413ce8c0(r14 + 0x3f0, &var_108)
                    int64_t* var_100
                    sub_141c8ec70(&var_170, var_100)
                    var_100[0xb].d = 0xffffffff
                    int32_t var_158
                    sub_141c9baf0(r14 + 0x3f0, &var_158, r15_3, var_100, var_108, nullptr)
                    r14_3 = sx.q(var_158) * 0x60 + *(r14 + 0x3f0)
                else
                    void* rcx_4 = *(r14 + 0x430)
                    void* r8_3 = r14 + 0x428
                    
                    if (rcx_4 != 0)
                        r8_3 = rcx_4
                    
                    int32_t rax_9 = *(r8_3 + (((sx.q(*(r14 + 0x438)) - 1) & sx.q(r15_3)) << 2))
                    
                    if (rax_9 == 0xffffffff)
                        goto label_141cb6ea3
                    
                    while (true)
                        r14_3 = sx.q(rax_9) * 0x60 + *(r14 + 0x3f0)
                        
                        if (*r14_3 == var_150)
                            break
                        
                        rax_9 = r14_3[0xb].d
                        
                        if (rax_9 == 0xffffffff)
                            goto label_141cb6ea3
                    
                    if (rax_9 == 0xffffffff || r14_3 == 0)
                        goto label_141cb6ea3
                
                int32_t var_f8
                sub_14090a150(&r14_3[1], &var_f8)
                int64_t* var_f0
                *var_f0 = rdi_1
                var_f0[1].d = 0xffffffff
                r15_1 = 0
                void var_118
                sub_1407ec830(&r14_3[1], &var_118, (rdi_1 u>> 0x20).d + sub_140b5ead0(rdi_1.d), 
                    var_f0, var_f8, nullptr)
                int32_t var_e8
                sub_1405b3620(r12_1, &var_e8)
                int64_t* var_e0
                *var_e0 = rdi_1
                var_e0[1] = var_150
                var_e0[2].d = 0xffffffff
                void var_114
                sub_1405b8300(r12_1, &var_114, (rdi_1 u>> 0x20).d + sub_140b5ead0(rdi_1.d), var_e0, 
                    var_e8, nullptr)
                r14 = arg1
            
            int32_t i = 0
            
            if (*(r13_1 + 0x1e0) s> 0)
                do
                    void* rax_21 = *(*(r13_1 + 0x1d8) + r15_1)
                    
                    if (rax_21 != 0)
                        int64_t* rax_22 = *(rax_21 + 0x18)
                        var_170 = rax_22
                        int64_t* var_148 = rax_22
                        int32_t r14_7 = sub_140b5ead0(rax_22.d) + var_148:4.d
                        int64_t* rdx_23
                        
                        if (*(r14 + 0x3f8) == *(r14 + 0x424))
                        label_141cb70a3:
                            var_148 = &var_170
                            int32_t var_c8
                            sub_1413ce8c0(r14 + 0x3f0, &var_c8)
                            int64_t* var_c0
                            sub_141c8ec70(&var_148, var_c0)
                            var_c0[0xb].d = 0xffffffff
                            sub_141c9baf0(r14 + 0x3f0, &var_1a8, r14_7, var_c0, var_c8, nullptr)
                            rdx_23 = sx.q(var_1a8) * 0x60 + *(r14 + 0x3f0)
                        else
                            void* rcx_19 = *(r14 + 0x430)
                            void* r8_8 = r14 + 0x428
                            
                            if (rcx_19 != 0)
                                r8_8 = rcx_19
                            
                            int32_t rax_26 =
                                *(r8_8 + (((sx.q(*(r14 + 0x438)) - 1) & sx.q(r14_7)) << 2))
                            
                            if (rax_26 == 0xffffffff)
                                goto label_141cb70a3
                            
                            while (true)
                                rdx_23 = sx.q(rax_26) * 0x60 + *(r14 + 0x3f0)
                                
                                if (*rdx_23 == var_170)
                                    break
                                
                                rax_26 = rdx_23[0xb].d
                                
                                if (rax_26 == 0xffffffff)
                                    goto label_141cb70a3
                            
                            if (rax_26 == 0xffffffff || rdx_23 == 0)
                                goto label_141cb70a3
                        
                        sub_14090a150(&rdx_23[1], &var_138)
                        *var_130 = rdi_1
                        var_130[1].d = 0xffffffff
                        sub_1407ec830(&rdx_23[1], &var_168, 
                            (rdi_1 u>> 0x20).d + sub_140b5ead0(rdi_1.d), var_130, var_138, nullptr)
                    
                    r14 = arg1
                    i += 1
                    r15_1 += 0x10
                while (i s< *(r13_1 + 0x1e0))
                
                r15_1 = 0
            
            sub_14090a150(&var_88, &var_128)
            *var_120 = rdi_1
            var_120[1].d = 0xffffffff
            sub_1407ec830(&var_88, &var_154, (rdi_1 u>> 0x20).d + sub_140b5ead0(rdi_1.d), var_120, 
                var_128, nullptr)
            rcx_2 = var_188_2
            rdx_3 = var_190.d
            r8_2 = var_198
            r14 = arg1
            r12_1 = var_1a0
        
        rax_2 = zx.q(rcx_2 + 1)
        var_188_2 = rax_2.d
        rcx_2 = rax_2.d
        
        if (rax_2.d s< rdx_3)
            while (r8_2[sx.q(rcx_2)] == 0)
                rax_2 = zx.q(rcx_2 + 1)
                var_188_2 = rax_2.d
                rcx_2 = rax_2.d
                
                if (rax_2.d s>= rdx_3)
                    break
    
    if (r8_2 != 0)
        sub_140a74f90(r8_2)
    
    int32_t rbx_13 = *(r12_1 + 0x28)
    void* r9_10 = r12_1 + 0x10
    var_198:4.d = 1
    int32_t rcx_31 = 0
    var_198.d = 0
    int32_t r10_1 = 0
    var_190 = r9_10
    int32_t r8_12 = 0
    int32_t var_188_3 = 0xffffffff
    int64_t var_184_1 = 0
    
    if (rbx_13 != 0)
        void* rax_33 = *(r9_10 + 0x10)
        r10_1 = rbx_13
        
        if (rax_33 != 0)
            r9_10 = rax_33
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_13 - 1)
        int32_t rdx_35 = *r9_10
        
        if (rdx_35 != 0)
        label_141cb72ac:
            int32_t rax_40 = ((rdx_35 - 1) & rdx_35) ^ rdx_35
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_40)
            var_198:4.d = rax_40
            int32_t rax_41
            
            if (rax_40 == 0)
                rax_41 = 0x20
            else
                rax_41 = 0x1f - temp0_2
            
            int32_t rax_42 = r8_12 - rax_41 + 0x1f
            
            if (rax_42 s> rbx_13)
                rax_42 = rbx_13
            
            r10_1 = rax_42
            var_184_1.d = rax_42
        else
            while (true)
                int64_t rdx_36 = sx.q(rcx_31)
                r8_12 += 0x20
                rcx_31 += 1
                var_184_1:4.d = r8_12
                var_198.d = rcx_31
                
                if (rdx_36.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_184_1.d = rbx_13
                    break
                
                rdx_35 = *(r9_10 + (rdx_36 << 2) + 4)
                var_188_3 = 0xffffffff
                
                if (rdx_35 != 0)
                    goto label_141cb72ac
    
    double zmm2_1[0x2] = var_188_3.o
    int128_t var_b0_1 = var_198.o
    double var_a0_1[0x2] = zmm2_1
    int64_t var_178_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    var_198.o = r12_1.o
    var_188_3.o = var_b0_1
    int64_t var_80
    
    if (r10_1 s< rbx_13)
        int32_t i_2
        int32_t i_1 = i_2
        
        do
            int64_t* rdi_2 = var_198
            void** rsi_8 = sx.q(i_1) * 0x18
            void* rbx_15 = *(rsi_8 + *rdi_2)
            var_1a0 = rbx_15
            
            if (var_80.d == var_54_1)
            label_141cb73c5:
                void* rax_51 = *(rsi_8 + *rdi_2 + 8)
                var_168 = rax_51
                int32_t rcx_40
                rcx_40.b = sub_140b5b8a0(rax_51.d, 0) == 0
                
                if ((var_168:4.d != 0 | rcx_40.b) != 0)
                    void* rax_53 = var_168
                    var_1a0 = rax_53
                    int32_t r15_5 = sub_140b5ead0(rax_53.d) + var_1a0:4.d
                    int64_t* rsi_11
                    
                    if (*(r14 + 0x3f8) == *(r14 + 0x424))
                    label_141cb7475:
                        var_1a0 = &var_168
                        sub_1413ce8c0(r14 + 0x3f0, &var_128)
                        sub_141c8ec70(&var_1a0, var_120)
                        var_120[0xb].d = 0xffffffff
                        sub_141c9baf0(r14 + 0x3f0, &var_1a8, r15_5, var_120, var_128, nullptr)
                        rsi_11 = sx.q(var_1a8) * 0x60 + *(r14 + 0x3f0)
                    else
                        void* rcx_42 = *(r14 + 0x430)
                        void* r8_14 = r14 + 0x428
                        
                        if (rcx_42 != 0)
                            r8_14 = rcx_42
                        
                        int32_t rax_57 =
                            *(r8_14 + (((sx.q(*(r14 + 0x438)) - 1) & sx.q(r15_5)) << 2))
                        
                        if (rax_57 == 0xffffffff)
                            goto label_141cb7475
                        
                        while (true)
                            rsi_11 = sx.q(rax_57) * 0x60 + *(r14 + 0x3f0)
                            
                            if (*rsi_11 == var_168)
                                break
                            
                            rax_57 = rsi_11[0xb].d
                            
                            if (rax_57 == 0xffffffff)
                                goto label_141cb7475
                        
                        if (rax_57 == 0xffffffff || rsi_11 == 0)
                            goto label_141cb7475
                    
                    sub_14090a150(&rsi_11[1], &var_138)
                    *var_130 = rbx_15
                    var_130[1].d = 0xffffffff
                    sub_1407ec830(&rsi_11[1], &var_154, 
                        (rbx_15 u>> 0x20).d + sub_140b5ead0(rbx_15.d), var_130, var_138, nullptr)
                    r14 = arg1
            else
                void var_50
                void* rcx_37 = &var_50
                int64_t rdx_38 = sx.q(var_40_1 - 1) & sx.q(sub_140b5ead0(rbx_15.d) + var_1a0:4.d)
                
                if (var_48_1 != 0)
                    rcx_37 = var_48_1
                
                int32_t rax_49 = *(rcx_37 + (rdx_38 << 2))
                
                if (rax_49 == 0xffffffff)
                    goto label_141cb73c5
                
                int64_t rdx_39 = var_88
                
                while (true)
                    int64_t rcx_39 = sx.q(rax_49) * 2
                    
                    if (*(rdx_39 + (rcx_39 << 3)) == rbx_15)
                        break
                    
                    rax_49 = *(rdx_39 + (rcx_39 << 3) + 8)
                    
                    if (rax_49 == 0xffffffff)
                        goto label_141cb73c5
                
                if (rax_49 == 0xffffffff)
                    goto label_141cb73c5
            
            var_184_1:4.d &= not.d(var_190:4.d)
            sub_14059bdd0(&var_190)
            i_1 = i_2
        while (i_1 s< *(var_188_3.q + 0x18))
    
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    bool cond:2_1 = var_80:4.d == 0
    var_80.d = 0
    
    if (not(cond:2_1))
        sub_1405a5410(&var_88, 0)
    
    int32_t var_58_2 = 0xffffffff
    int32_t var_54_2 = 0
    int64_t var_78
    result = sub_14059a8e0(&var_78, 0)
    int64_t var_68
    
    if (var_68 != 0)
        result = sub_140a74f90(var_68)
    
    int64_t rcx_55 = var_88
    
    if (rcx_55 != 0)
        result = sub_140a74f90(rcx_55)

__security_check_cookie(result_1 ^ &var_1d8)
return result
