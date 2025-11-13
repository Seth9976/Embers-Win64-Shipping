// 函数: sub_142157ac0
// 地址: 0x142157ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
int32_t* r15 = arg2
char rbx = 0
int32_t arg_10 = 0
data_143f4cf60 += 1
int128_t var_c8

if ((arg2[2].b & 1) == 0)
    sub_141caa2b0(&arg1[0x297], *arg2)
    int64_t* rcx_26 = arg1[0x278]
    
    if (rcx_26 != 0)
        (*(*rcx_26 + 0x2a0))(rcx_26, *r15)
    
    int32_t var_e8_2 = 0
    int32_t r11_2 = arg1[0x273].d
    void* r8_10 = &arg1[0x270]
    int32_t var_e4_3 = 1
    int32_t rcx_27 = 0
    void* var_e0_2 = r8_10
    int32_t var_d8_4 = 0xffffffff
    int32_t var_d4_6 = 0
    int32_t var_d0_2 = 0
    
    if (r11_2 != 0)
        void* rax_42 = *(r8_10 + 0x10)
        
        if (rax_42 != 0)
            r8_10 = rax_42
        
        int32_t temp0_4
        int32_t temp1_1
        temp0_4:temp1_1 = sx.q(r11_2 - 1)
        int32_t rdx_24 = *r8_10
        int32_t var_d4_8
        
        if (rdx_24 != 0)
        label_142157f87:
            int32_t rax_49 = neg.d(rdx_24) & rdx_24
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_49)
            int32_t var_e4_4 = rax_49
            int32_t r10_2
            
            if (rax_49 == 0)
                r10_2 = 0x20
            else
                r10_2 = 0x1f - temp0_5
            
            int32_t var_d4_7 = rcx_27 - r10_2 + 0x1f
            
            if (rcx_27 - r10_2 + 0x1f s> r11_2)
                var_d4_8 = r11_2
        else
            while (true)
                int64_t rdx_25 = sx.q(rdi.d)
                rcx_27 += 0x20
                rdi = zx.q(rdi.d + 1)
                int32_t var_d0_3 = rcx_27
                var_e8_2 = rdi.d
                
                if (rdx_25.d s>= (temp1_1 + (temp0_4 & 0x1f)) s>> 5)
                    break
                
                rdx_24 = *(r8_10 + (rdx_25 << 2) + 4)
                int32_t var_d8_5 = 0xffffffff
                
                if (rdx_24 != 0)
                    goto label_142157f87
            
            var_d4_8 = r11_2
    
    void* var_60_1 = &arg1[0x26e]
    int128_t zmm0 = var_e8_2.o
    int128_t var_70_2 = 0xffffffff
    int16_t var_90_1 = 0
    void* rax_51 = zmm0.q
    int128_t var_b8_2 = zmm0
    var_c8 = (&arg1[0x26e]).o
    zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_a8_1 = zmm0
    
    if (0 s< *(rax_51 + 0x18))
        int32_t i = var_b8_2:0xc.d
        
        do
            int64_t* rbx_8 = *(*var_c8.q + sx.q(i) * 0x18 + 8)
            void* rcx_30 = rbx_8[0xe]
            
            if (rcx_30 != 0 && *(sub_140d21d80(sub_141dc9840(rcx_30)) + 0x18) == *r15)
                int64_t rdx_28
                rdx_28.b = 2
                (*(*rbx_8 + 0x278))(rbx_8, rdx_28)
            
            var_b8_2:8.d &= not.d(var_c8:0xc.d)
            sub_14059bdd0(&var_c8:8)
            i = var_b8_2:0xc.d
        while (i s< *(var_b8_2.q + 0x18))
        
        if (var_90_1.b != 0 && var_90_1:1.b != 0)
            sub_140bd9620(&arg1[0x26e], arg1[0x26f].d - *(arg1 + 0x13a4), 1)
else
    void* rax_2 = (*(*arg1 + 0x150))()
    int64_t var_58
    int64_t* rax_3 = sub_140b63b70(r15, &var_58)
    int16_t* rdx_1
    
    if (rax_3[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *rax_3
    
    int64_t* rax_4 = sub_140d1fe00(nullptr, rdx_1)
    int64_t rcx_1 = var_58
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rax_5 = sub_140cba0e0(rax_4)
    int64_t var_48
    int64_t* rsi_1
    
    if (rax_5 != 0)
        rsi_1.b = 1
    else
        rbx = (rax_5 + 1).b
        
        if (sub_140ba1330(sub_140b63b70(&r15[2], &var_48), 0, nullptr, rbx) != 0)
            rsi_1.b = 1
        else
            rsi_1 = *(rax_2 + 0x98)
            int64_t rbx_1 = *r15
            void* r12_1 = &rsi_1[sx.q(*(rax_2 + 0xa0))]
            
            if (rsi_1 == r12_1)
            label_142157baf:
                rbx = 1
                rsi_1.b = 0
            else
                while (true)
                    void* rcx_5 = *rsi_1
                    void arg_20
                    
                    if (rcx_5 != 0 && *sub_1420e4d10(rcx_5, &arg_20) == rbx_1)
                        rbx = 1
                        break
                    
                    rsi_1 = &rsi_1[1]
                    
                    if (rsi_1 == r12_1)
                        goto label_142157baf
                
                rsi_1.b = 1
    
    char rax_10 = rsi_1.b
    
    if ((rbx & 1) != 0)
        int64_t rcx_6 = var_48
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
            rax_10 = rsi_1.b
    
    if (rax_10 != 0)
        sub_1407d1800(&arg1[0x297], &arg_10, r15, nullptr)
        int32_t rcx_8 = 0
        void* r13_3 = arg1[0xb] + 0x328
        int32_t var_e8_1 = 0
        int32_t rbx_2 = *(r13_3 + 0x28)
        int32_t var_e4_1 = 1
        int32_t r8_2 = 0
        void* var_e0_1 = r13_3 + 0x10
        int32_t var_d8_1 = 0xffffffff
        int32_t var_d4
        var_d4.q = 0
        
        if (rbx_2 != 0)
            void* rax_11 = *(r13_3 + 0x20)
            void* r9_2 = r13_3 + 0x10
            
            if (rax_11 != 0)
                r9_2 = rax_11
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rbx_2 - 1)
            int32_t rdx_7 = *r9_2
            int32_t var_d4_2
            
            if (rdx_7 != 0)
            label_142157c89:
                int32_t rax_18 = neg.d(rdx_7) & rdx_7
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_18)
                int32_t var_e4_2 = rax_18
                int32_t rax_19
                
                if (rax_18 == 0)
                    rax_19 = 0x20
                else
                    rax_19 = 0x1f - temp0_1
                
                int32_t var_d4_1 = r8_2 - rax_19 + 0x1f
                
                if (r8_2 - rax_19 + 0x1f s> rbx_2)
                    var_d4_2 = rbx_2
            else
                while (true)
                    int64_t rdx_8 = sx.q(rcx_8)
                    r8_2 += 0x20
                    rcx_8 += 1
                    int32_t var_d0_1 = r8_2
                    var_e8_1 = rcx_8
                    
                    if (rdx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_7 = *(r9_2 + (rdx_8 << 2) + 4)
                    int32_t var_d8_2 = 0xffffffff
                    
                    if (rdx_7 != 0)
                        goto label_142157c89
                
                var_d4_2 = rbx_2
        
        int32_t rdx_9 = *(r13_3 + 0x28)
        int32_t var_d4_3 = rdx_9
        int32_t r9_3 = 0xffffffff << (rdx_9.b & 0x1f)
        arg_10 = r9_3
        int32_t var_d8_3 = r9_3
        int128_t var_80_1 = var_e8_1.o
        int32_t r9_5 = rdx_9 & 0xffffffe0
        int32_t r8_5 = rdx_9 s>> 5
        int128_t var_70_1 = 0xffffffff
        int128_t var_a8
        var_a8.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_c8 = r13_3.o
        int128_t var_b8_1 = var_80_1
        
        if (rdx_9 != rbx_2)
            void* rax_21 = *(r13_3 + 0x20)
            void* r11_1 = r13_3 + 0x10
            
            if (rax_21 != 0)
                r11_1 = rax_21
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rbx_2 - 1)
            int32_t rdx_13 = *(r11_1 + (sx.q(r8_5) << 2)) & arg_10
            int32_t var_d4_5
            
            if (rdx_13 != 0)
            label_142157d62:
                int32_t rax_28 = neg.d(rdx_13) & rdx_13
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_28)
                int32_t r10_1
                
                if (rax_28 == 0)
                    r10_1 = 0x20
                else
                    r10_1 = 0x1f - temp0_3
                
                int32_t var_d4_4 = r9_5 - r10_1 + 0x1f
                
                if (r9_5 - r10_1 + 0x1f s> rbx_2)
                    var_d4_5 = rbx_2
            else
                while (true)
                    int64_t rcx_13 = sx.q(r8_5)
                    r9_5 += 0x20
                    r8_5 += 1
                    
                    if (rcx_13.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_13 = *(r11_1 + (rcx_13 << 2) + 4)
                    var_d8_3 = 0xffffffff
                    
                    if (rdx_13 != 0)
                        goto label_142157d62
                
                var_d4_5 = rbx_2
        
        while (true)
            int64_t rax_30 = sx.q(var_b8_1:0xc.d)
            int64_t* rdx_14 = var_c8.q
            
            if (rax_30.d == (var_d8_3.q u>> 0x20).d && var_b8_1.q == r13_3 + 0x10
                    && rdx_14 == r13_3)
                break
            
            void* r8_6 = *(*rdx_14 + rax_30 * 0x18 + 8)
            
            if (*(r8_6 + 0x30) == *r15)
                int64_t* rcx_16 = arg1[0x278]
                
                if (rcx_16 == 0)
                    sub_141f77ab0(&arg1[0x279], &arg_10, r8_6 + 0x1c, nullptr)
                else
                    (*(*rcx_16 + 0x278))(rcx_16, r8_6, r8_6)
            
            var_b8_1:8.d &= not.d(var_c8:0xc.d)
            sub_14059bdd0(&var_c8:8)
        
        void* r13_4 = nullptr
        
        if (rax_4 != 0)
            arg_10.q = 0
            void* rax_37 = sub_140d3b5d0(rax_4, sub_1425be5e0(), 0)
            r13_4 = rax_37
            
            if (rax_37 != 0)
                void* rax_38 = *(rax_37 + 0x30)
                
                if (rax_38 != 0)
                    void** rbx_6 = *(rax_38 + 0x98)
                    int64_t* r12_2 = *(arg1[0xb] + 0x6f0)
                    uint64_t rsi_4 = sx.q(*(rax_38 + 0xa0)) << 3 u>> 3
                    
                    if (rbx_6 u> &rbx_6[sx.q(*(rax_38 + 0xa0))])
                        rsi_4 = 0
                    
                    if (rsi_4 != 0)
                        do
                            void* rdx_18 = *rbx_6
                            
                            if (rdx_18 != 0 && (*(rdx_18 + 0x5b) & 1) != 0 && *(rdx_18 + 0xf1) == 2)
                                sub_14216de20(r12_2, rdx_18, arg1, arg1[0xb])
                            
                            rbx_6 = &rbx_6[1]
                            rdi += 1
                        while (rdi != rsi_4)
        
        int64_t* rcx_23 = arg1[0x278]
        
        if (rcx_23 != 0)
            (*(*rcx_23 + 0x298))(rcx_23, *r15, r13_4)
    else if ((r15[4].b & 2) == 0)
        sub_14213f9e0(arg1)
return sub_142157380(arg1) __tailcall
