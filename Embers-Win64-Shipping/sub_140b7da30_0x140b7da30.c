// 函数: sub_140b7da30
// 地址: 0x140b7da30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140b7a720(arg1)

if (result.b != 0)
    int32_t rcx = 0
    int32_t r8_1 = 0
    void* r15_1 = arg1 + 8
    int32_t var_a8_1 = 0
    int32_t rbx_1 = *(r15_1 + 0x28)
    void* r14_1 = r15_1 + 0x10
    void* arg_20 = r15_1
    int32_t var_a4_1 = 1
    void* var_a0_1 = r14_1
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (rbx_1 != 0)
        void* rax = *(r14_1 + 0x10)
        void* r9_1 = r14_1
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_140b7db08:
            int32_t rax_7 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_a4_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_94_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> rbx_1)
                var_94_1.d = rbx_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_94_1:4.d = r8_1
                var_a8_1 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_98_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_140b7db08
            
            var_94_1.d = rbx_1
    
    int32_t rdx_4 = *(r15_1 + 0x28)
    void* var_88 = r15_1
    double zmm2_1[0x2] = var_98_1.o
    int128_t var_80_1 = var_a8_1.o
    int32_t rsi_1 = 0xffffffff << (rdx_4.b & 0x1f)
    int128_t zmm0_1 = var_88.o
    int32_t r8_4 = rdx_4 s>> 5
    int32_t r9_3 = rdx_4 & 0xffffffe0
    double var_70_1[0x2] = zmm2_1
    int64_t var_40_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    int128_t zmm1_1 = var_80_1
    var_80_1:8.d = rsi_1
    var_80_1:0xc.d = rdx_4
    int64_t* var_60_1 = zmm0_1.q
    int128_t var_50_1 = zmm1_1
    
    if (rdx_4 != rbx_1)
        void* rax_10 = *(r14_1 + 0x10)
        void* r10_1 = r14_1
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_8 = *(r10_1 + (sx.q(r8_4) << 2)) & rsi_1
        
        if (rdx_8 != 0)
        label_140b7dbd2:
            int32_t rax_17 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t r11_1
            
            if (rax_17 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_80_1:0xc.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_80_1:0xc.d = rbx_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
                var_80_1:8.d = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_140b7dbd2
            
            var_80_1:0xc.d = rbx_1
    
    uint64_t r12_2 = var_80_1:8.q u>> 0x20
    uint64_t arg_18 = r12_2
    
    while (true)
        result = sx.q(var_50_1:0xc.d)
        
        if (result.d == r12_2.d && var_50_1.q == r14_1 && var_60_1 == r15_1)
            break
        
        uint64_t rcx_7 = result * 5
        int64_t rax_19 = *var_60_1
        void* rdx_10 = *(rax_19 + (rcx_7 << 3) + 0x10)
        
        if (*(rdx_10 + 0x1e4) != 0 && *(rdx_10 + 0x118) != 0)
            int64_t* rax_20 = sub_140b1a780(&var_88, rdx_10 + 0x18)
            bool cond:3_1 = rax_20[1].d == 0
            int64_t var_d8 = 0
            var_d8 = *rax_20
            *rax_20 = 0
            int32_t rcx_10 = rax_20[1].d
            int32_t rcx_11 = *(rax_20 + 0xc)
            int32_t rcx_12
            rcx_12.b = cond:3_1
            rax_20[1] = 0
            int32_t rdx_15 = rcx_10 + 8 + rcx_12
            
            if (rdx_15 s> rcx_11)
                sub_1405947f0(&var_d8, rdx_15)
            
            sub_140a2cf70(&var_d8, u"Content", 7)
            void* rcx_15 = var_88
            
            if (rcx_15 != 0)
                rcx_15 = sub_140a74f90(rcx_15)
            
            int64_t var_b8 = var_d8
            int32_t rdx_17 = rcx_10 + sbb.d(rcx_15.d, rcx_15.d, rcx_10 != 0) + 0xe
            var_d8 = 0
            int32_t var_ac_1 = rcx_11
            int32_t var_d0_1
            var_d0_1.q = 0
            
            if (rdx_17 s> rcx_11)
                sub_1405947f0(&var_b8, rdx_17)
            
            sub_140a2cf70(&var_b8, u"Localization", 0xc)
            int64_t rcx_20 = var_d8
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            void* rax_24 = *(rax_19 + (rcx_7 << 3) + 0x10)
            int64_t* rbx_3 = *(rax_24 + 0x110)
            void* rsi_2 = &rbx_3[sx.q(*(rax_24 + 0x118)) * 3]
            
            if (rbx_3 != rsi_2)
                do
                    int64_t rax_26 = sx.q(rbx_3[2].d)
                    
                    if (rax_26.d u<= 5)
                        switch (rax_26)
                            case 1, 3
                                int32_t rax_27 = rbx_3[1].d
                                int32_t rdi_1 = rax_27 - 1
                                
                                if (rax_27 == 0)
                                    rdi_1 = 0
                                
                                int32_t rax_29
                                
                                if (rcx_10 == 0)
                                    rax_29 = rcx_10 + 2
                                
                                if (rcx_10 != 0 || rdi_1 == 0xffffffff)
                                    rax_29 = 1
                                
                                int64_t r15_2 = var_b8
                                int32_t rcx_24 = rdi_1 + rax_29
                                int64_t var_c8 = 0
                                int32_t var_bc
                                
                                if (rcx_10 != 0 || rcx_24 != 0)
                                    sub_1405a4c70(&var_c8, rcx_24 + rcx_10, 0)
                                    memcpy(var_c8, r15_2, rcx_10 * 2)
                                else
                                    var_bc = 0
                                
                                sub_140a2cf70(&var_c8, *rbx_3, rdi_1)
                                int64_t rdi_2 = sx.q(arg2[1].d)
                                int32_t rax_30 = (rdi_2 + 1).d
                                arg2[1].d = rax_30
                                
                                if (rax_30 s> *(arg2 + 0xc))
                                    sub_1405a4f90(arg2)
                                
                                int64_t* rcx_31 = (rdi_2 << 4) + *arg2
                                *rcx_31 = 0
                                *rcx_31 = var_c8
                                var_c8 = 0
                                rcx_31[1].d = rcx_10
                                *(rcx_31 + 0xc) = var_bc
                                int64_t rcx_32 = var_c8
                                int32_t var_c0_1
                                var_c0_1.q = 0
                                
                                if (rcx_32 != 0)
                                    sub_140a74f90(rcx_32)
                    
                    rbx_3 = &rbx_3[3]
                while (rbx_3 != rsi_2)
                
                r12_2 = arg_18
                r14_1 = var_a0_1
                r15_1 = arg_20
            
            int64_t rcx_33 = var_b8
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
        
        int32_t var_54
        var_50_1:8.d &= not.d(var_54)
        void var_58
        sub_14059bdd0(&var_58)

return result
