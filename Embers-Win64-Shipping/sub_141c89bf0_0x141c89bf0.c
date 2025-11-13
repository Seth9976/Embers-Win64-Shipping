// 函数: sub_141c89bf0
// 地址: 0x141c89bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
uint64_t result = __security_cookie ^ &var_1b8
uint64_t result_1 = result
int64_t* r15 = arg2[1]
int64_t* rcx_1

if (r15 == 0)
labelid_8:
    rcx_1 = arg2[1]
else
    result = 0
    bool z_1
    
    if (0 == r15[1].d)
        r15[1].d = 0
        z_1 = true
    else
        result = zx.q(r15[1].d)
        z_1 = false
    
    if (z_1)
    label_141c89c5a:
        rcx_1 = arg2[1]
    else
        while (true)
            bool z_2
            
            if (result.d == r15[1].d)
                r15[1].d = (result + 1).d
                z_2 = true
            else
                result = zx.q(r15[1].d)
                z_2 = false
            
            if (z_2)
                break
            
            result = 0
            bool z_3
            
            if (0 == r15[1].d)
                r15[1].d = 0
                z_3 = true
            else
                result = zx.q(r15[1].d)
                z_3 = false
            
            if (z_3)
                goto label_141c89c5a_2
        
        if (r15 == 0)
        label_141c89c5a_1:
            rcx_1 = arg2[1]
        else
            int64_t rax_2 = *arg2
            
            if (rax_2 != 0)
                int32_t r8 = 0
                void* r13_1 = arg1 + 0xb0
                int32_t r11_1 = *(r13_1 + 0x28)
                void* r15_1 = r13_1 + 0x10
                void* var_198_1 = r13_1
                int32_t rcx_7 = 0
                int32_t var_180_1 = 0
                int32_t var_17c_1 = 1
                void* var_190_1 = r15_1
                void* var_178_1 = r15_1
                int32_t var_170_1 = 0xffffffff
                int64_t var_16c_1 = 0
                
                if (r11_1 != 0)
                    void* rax_5 = *(r15_1 + 0x10)
                    void* r9_1 = r15_1
                    
                    if (rax_5 != 0)
                        r9_1 = rax_5
                    
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(r11_1 - 1)
                    int32_t rdx_3 = *r9_1
                    
                    if (rdx_3 != 0)
                    label_141c89d9b:
                        int32_t rax_12 = neg.d(rdx_3) & rdx_3
                        uint64_t rflags_1
                        int32_t temp0_4
                        temp0_4, rflags_1 = _bit_scan_reverse(rax_12)
                        int32_t var_17c_2 = rax_12
                        int32_t var_130_1 = temp0_4
                        int32_t rax_13
                        
                        if (rax_12 == 0)
                            rax_13 = 0x20
                        else
                            rax_13 = 0x1f - temp0_4
                        
                        var_16c_1.d = r8 - rax_13 + 0x1f
                        
                        if (r8 - rax_13 + 0x1f s> r11_1)
                            var_16c_1.d = r11_1
                    else
                        while (true)
                            int64_t rdx_4 = sx.q(rcx_7)
                            r8 += 0x20
                            rcx_7 += 1
                            var_16c_1:4.d = r8
                            var_180_1 = rcx_7
                            
                            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                            int32_t var_170_2 = 0xffffffff
                            
                            if (rdx_3 != 0)
                                goto label_141c89d9b
                        
                        var_16c_1.d = r11_1
                
                int32_t rdx_5 = *(r13_1 + 0x28)
                char rcx_10 = rdx_5.b & 0x1f
                void* var_158_1 = r15_1
                double var_d8_1[0x2] = var_180_1.o
                int32_t r8_3 = rdx_5 s>> 5
                int128_t var_c8_1 = 0xffffffff
                int32_t r14_2 = 0xffffffff << rcx_10
                int32_t r9_3 = rdx_5 & 0xffffffe0
                int32_t var_160_1 = r8_3
                int64_t var_e8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                int32_t var_15c_1 = 1 << rcx_10
                int32_t var_150_1 = r14_2
                int32_t var_14c_1 = rdx_5
                int32_t var_148_1 = r9_3
                double var_108[0x2] = r13_1.o
                
                if (rdx_5 != r11_1)
                    void* rax_16 = *(r15_1 + 0x10)
                    void* r10_1 = r15_1
                    
                    if (rax_16 != 0)
                        r10_1 = rax_16
                    
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(r11_1 - 1)
                    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r14_2
                    int32_t var_14c_3
                    
                    if (rdx_9 != 0)
                    label_141c89e9d:
                        int32_t rax_23 = neg.d(rdx_9) & rdx_9
                        uint64_t rflags_2
                        int32_t temp0_6
                        temp0_6, rflags_2 = _bit_scan_reverse(rax_23)
                        int32_t var_15c_2 = rax_23
                        int32_t var_12c_1 = temp0_6
                        int32_t rdi_1
                        
                        if (rax_23 == 0)
                            rdi_1 = 0x20
                        else
                            rdi_1 = 0x1f - temp0_6
                        
                        int32_t var_14c_2 = r9_3 - rdi_1 + 0x1f
                        
                        if (r9_3 - rdi_1 + 0x1f s> r11_1)
                            var_14c_3 = r11_1
                    else
                        while (true)
                            int64_t rcx_12 = sx.q(r8_3)
                            r9_3 += 0x20
                            r8_3 += 1
                            int32_t var_148_2 = r9_3
                            var_160_1 = r8_3
                            
                            if (rcx_12.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_9 = *(r10_1 + (rcx_12 << 2) + 4)
                            var_150_1 = 0xffffffff
                            
                            if (rdx_9 != 0)
                                goto label_141c89e9d
                        
                        var_14c_3 = r11_1
                
                double zmm2[0x2] = var_150_1.o
                double var_c8_2[0x2] = zmm2
                double var_d8_2[0x2] = var_160_1.o
                double var_b0_1[0x2] = r13_1.o
                uint64_t rdx_11 = zmm2[0] u>> 0x20
                int64_t var_90_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                double var_a0_1[0x2] = var_d8_2
                uint64_t var_120_1 = rdx_11
                
                while (true)
                    int64_t rcx_14 = sx.q(var_d8_1[1]:4.d)
                    double rax_25 = var_108[0]
                    
                    if (rcx_14.d == rdx_11.d && var_d8_1[0] == r15_1 && rax_25 == r13_1)
                        break
                    
                    int64_t* rdi_4 = (rcx_14 << 5) + *rax_25
                    int32_t rcx_15
                    rcx_15.b = sub_140b5b8a0(arg3.d, 0xe6) == 0
                    rcx_15.b |= arg3:4.d != 0
                    
                    if (rcx_15.b == 0 || arg3 == *rdi_4)
                        void* rax_27 = &rdi_4[1]
                        void* var_140_1 = rax_27
                        int32_t i = 0
                        
                        if (rdi_4[2].d s> 0)
                            int64_t* r15_2 = nullptr
                            
                            do
                                int64_t rax_28 = *rax_27
                                int64_t* rsi_1 = *(r15_2 + rax_28 + 8)
                                int64_t* rcx_16 = *(r15_2 + rax_28)
                                
                                if (rsi_1 != 0)
                                    rsi_1[1].d += 1
                                
                                int64_t* rax_30 = (*(*rcx_16 + 0x20))(rcx_16)
                                int64_t r12_1 = 0
                                int64_t* rdi_5 = rax_30[1]
                                
                                if (rdi_5 != 0)
                                    int32_t rax_31 = 0
                                    bool z_4
                                    
                                    if (0 == rdi_5[1].d)
                                        rdi_5[1].d = 0
                                        z_4 = true
                                    else
                                        rax_31 = rdi_5[1].d
                                        z_4 = false
                                    
                                    if (z_4)
                                    label_141c89fd4:
                                        rdi_5 = nullptr
                                    label_141c89fe1:
                                        
                                        if (rdi_5 != 0)
                                            rdi_5[1].d -= 1
                                            
                                            if (rdi_5[1].d == 1)
                                                (**rdi_5)(rdi_5)
                                                int32_t rax_35 = *(rdi_5 + 0xc)
                                                *(rdi_5 + 0xc) -= 1
                                                
                                                if (rax_35 == 1)
                                                    (*(*rdi_5 + 8))(rdi_5, 1)
                                    else
                                        while (true)
                                            bool z_5
                                            
                                            if (rax_31 == rdi_5[1].d)
                                                rdi_5[1].d = rax_31 + 1
                                                z_5 = true
                                            else
                                                rdi_5[1].d
                                                z_5 = false
                                            
                                            if (z_5)
                                                break
                                            
                                            rax_31 = 0
                                            bool z_6
                                            
                                            if (0 == rdi_5[1].d)
                                                rdi_5[1].d = 0
                                                z_6 = true
                                            else
                                                rax_31 = rdi_5[1].d
                                                z_6 = false
                                            
                                            if (z_6)
                                                goto label_141c89fd4
                                        
                                        if (rdi_5 != 0)
                                            r12_1 = *rax_30
                                            goto label_141c89fe1
                                
                                if (r12_1 == rax_2)
                                    sub_140dbb060(var_140_1, i, 1, 1)
                                    
                                    if (rsi_1 != 0)
                                        rsi_1[1].d += 1
                                    
                                    void* rdi_6 = *(arg1 + 0x148)
                                    
                                    if (*(rdi_6 + 0x1b9) != 0)
                                        int64_t performanceCount
                                        QueryPerformanceCounter(&performanceCount)
                                        void** const var_68 = &data_142d42d18
                                        int64_t (* var_88_1)() = sub_140594850
                                        void*** var_78_1 = nullptr
                                        int64_t* rax_42 = j_sub_140a82f30(0x50)
                                        int64_t* rdx_14 = rax_42
                                        
                                        if (rax_42 != 0)
                                            *rax_42 = 0
                                            rax_42[2] = var_88_1
                                            rax_42[4] = var_78_1
                                            var_78_1 = nullptr
                                            *(rax_42 + 0x30) = var_68.o
                                            double var_58[0x2]
                                            *(rax_42 + 0x40) = var_58
                                            int64_t (* rax_43)() = var_88_1
                                            
                                            if (rdx_14[2] != 0)
                                                rax_43 = nullptr
                                            
                                            var_88_1 = rax_43
                                            int32_t temp0_12 = *(rdi_6 + 0x1d0)
                                            *(rdi_6 + 0x1d0) = rdx_14
                                            int64_t** rax_45 = temp0_12
                                            int32_t temp0_13 = *rax_45
                                            *rax_45 = rdx_14
                                            rdx_14 = temp0_13
                                        
                                        if (var_88_1 != 0)
                                            void** const* rcx_26 = &var_68
                                            
                                            if (var_78_1 != 0)
                                                rcx_26 = var_78_1
                                            
                                            (*rcx_26)[2](rcx_26, rdx_14)
                                    
                                    if (rsi_1 != 0)
                                        rsi_1[1].d -= 1
                                        
                                        if (rsi_1[1].d == 1)
                                            (**rsi_1)(rsi_1)
                                            int32_t rax_50 = *(rsi_1 + 0xc)
                                            *(rsi_1 + 0xc) -= 1
                                            
                                            if (rax_50 == 1)
                                                (*(*rsi_1 + 8))(rsi_1, 1)
                                        
                                        rsi_1[1].d -= 1
                                        
                                        if (rsi_1[1].d == 1)
                                            (**rsi_1)(rsi_1)
                                            int32_t rax_54 = *(rsi_1 + 0xc)
                                            *(rsi_1 + 0xc) -= 1
                                            
                                            if (rax_54 == 1)
                                                (*(*rsi_1 + 8))(rsi_1, 1)
                                    
                                    break
                                
                                if (rsi_1 != 0)
                                    rsi_1[1].d -= 1
                                    
                                    if (rsi_1[1].d == 1)
                                        (**rsi_1)(rsi_1)
                                        int32_t rax_39 = *(rsi_1 + 0xc)
                                        *(rsi_1 + 0xc) -= 1
                                        
                                        if (rax_39 == 1)
                                            (*(*rsi_1 + 8))(rsi_1, 1)
                                
                                rax_27 = var_140_1
                                i += 1
                                r15_2 = &r15_2[2]
                            while (i s< *(rax_27 + 8))
                            
                            r15_1 = var_190_1
                        
                        r13_1 = var_198_1
                    
                    var_d8_1[1].d &= not.d(var_108[1]:4.d)
                    sub_14059bdd0(&var_108[1])
                    rdx_11 = var_120_1
                
                result = zx.q(r15[1].d)
                r15[1].d -= 1
                
                if (result.d == 1)
                    (**r15)(r15)
                    result = zx.q(*(r15 + 0xc))
                    *(r15 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*r15 + 8))(r15, 1)
                
                rcx_1 = arg2[1]
            else
                result = zx.q(r15[1].d)
                r15[1].d -= 1
                
                if (result.d == 1)
                    (**r15)(r15)
                    result = zx.q(*(r15 + 0xc))
                    *(r15 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*r15 + 8))(r15, 1)
                
            label_141c89c5a_2:
                rcx_1 = arg2[1]

if (rcx_1 != 0)
    int32_t r14_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (r14_1 == 1 && rcx_1 != 0)
        result = (*(*rcx_1 + 8))(rcx_1, zx.q(r14_1))

__security_check_cookie(result_1 ^ &var_1b8)
return result
