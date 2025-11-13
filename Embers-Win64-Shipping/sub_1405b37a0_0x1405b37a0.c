// 函数: sub_1405b37a0
// 地址: 0x1405b37a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg2
void* result = sub_1405bd3f0(arg1)
void* result_2 = result

if (result != 0)
    void* rax = sub_1405bd3f0(arg1)
    char rax_1
    
    if (rax == 0)
        rax_1 = *(arg1 + 0x148)
    else
        sub_142120450(rax)
        rax_1 = 1
        *(arg1 + 0x148) = 1
    
    int32_t var_c8
    void* var_c0
    
    if (rax_1 != 0)
        int32_t r10_1 = *(arg1 + 0x28)
        int32_t rcx_2 = 0
        int32_t var_c4_1 = 1
        int32_t r8_1 = 0
        var_c8 = 0
        void* var_c0_1 = arg1 + 0x10
        int32_t var_b8_1 = 0xffffffff
        int64_t var_b4_1 = 0
        
        if (r10_1 != 0)
            void* rax_2 = *(arg1 + 0x20)
            void* r9_1 = arg1 + 0x10
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_2 = *r9_1
            
            if (rdx_2 != 0)
            label_1405b38a9:
                int32_t rax_9 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_c4_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_b4_1.d = r8_1 - rax_10 + 0x1f
                
                if (r8_1 - rax_10 + 0x1f s> r10_1)
                    var_b4_1.d = r10_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx_2)
                    r8_1 += 0x20
                    rcx_2 += 1
                    var_b4_1:4.d = r8_1
                    var_c8 = rcx_2
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                    var_b8_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_1405b38a9
                
                var_b4_1.d = r10_1
        
        int32_t rdx_4 = *(arg1 + 0x28)
        double zmm2_1[0x2] = var_b8_1.o
        var_b4_1.d = rdx_4
        double var_48_1[0x2] = zmm2_1
        int128_t var_58_1 = var_c8.o
        int32_t rsi_1 = 0xffffffff << (rdx_4 & 0x1f).b
        int32_t r8_4 = rdx_4 s>> 5
        int32_t r9_3 = rdx_4 & 0xffffffe0
        int64_t var_78_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
        int32_t var_b8_2 = rsi_1
        int128_t var_98 = arg1.o
        int128_t var_88_1 = var_58_1
        
        if (rdx_4 != r10_1)
            void* rax_14 = *(arg1 + 0x20)
            void* r11_1 = arg1 + 0x10
            
            if (rax_14 != 0)
                r11_1 = rax_14
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_8 = *(r11_1 + (sx.q(r8_4) << 2)) & rsi_1
            
            if (rdx_8 != 0)
            label_1405b3986:
                int32_t rax_20 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
                int32_t rax_21
                
                if (rax_20 == 0)
                    rax_21 = 0x20
                else
                    rax_21 = 0x1f - temp0_4
                
                var_b4_1.d = r9_3 - rax_21 + 0x1f
                
                if (r9_3 - rax_21 + 0x1f s> r10_1)
                    var_b4_1.d = r10_1
            else
                while (true)
                    int64_t rcx_6 = sx.q(r8_4)
                    r9_3 += 0x20
                    r8_4 += 1
                    
                    if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = *(r11_1 + (rcx_6 << 2) + 4)
                    var_b8_2 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_1405b3986
                
                var_b4_1.d = r10_1
        
        while (true)
            int64_t rcx_8 = sx.q(var_88_1:0xc.d)
            int32_t rax_13
            
            if (rcx_8.d != (var_b8_2.q u>> 0x20).d || var_88_1.q != arg1 + 0x10)
                rax_13.b = 0
            else
                rax_13.b = 1
            
            int64_t* rdx_9 = var_98.q
            
            if (rax_13.b == 0 || rdx_9 != arg1)
                rax_13.b = 1
            else
                rax_13.b = 0
            
            if (rax_13.b == 0)
                break
            
            int64_t rdx_10 = *rdx_9
            int64_t rcx_9 = rcx_8 * 5
            *(rdx_10 + (rcx_9 << 2) + 8)
            sub_142131b70(result_2, *(rdx_10 + (rcx_9 << 2)))
            var_88_1:8.d &= not.d(var_98:0xc.d)
            sub_14059bdd0(&var_98:8)
        
        int32_t rcx_12 = 0
        int32_t var_c4_3 = 1
        var_c8 = 0
        int32_t r10_2 = *(arg1 + 0x78)
        int32_t r8_5 = 0
        var_c0 = arg1 + 0x60
        int32_t var_b8_3 = 0xffffffff
        int64_t var_b4_2 = 0
        
        if (r10_2 != 0)
            void* rax_24 = *(arg1 + 0x70)
            void* r9_5 = arg1 + 0x60
            
            if (rax_24 != 0)
                r9_5 = rax_24
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_2 - 1)
            int32_t rdx_14 = *r9_5
            
            if (rdx_14 != 0)
            label_1405b3a89:
                int32_t rax_31 = ((rdx_14 - 1) & rdx_14) ^ rdx_14
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_31)
                int32_t var_c4_4 = rax_31
                int32_t rax_32
                
                if (rax_31 == 0)
                    rax_32 = 0x20
                else
                    rax_32 = 0x1f - temp0_5
                
                var_b4_2.d = r8_5 - rax_32 + 0x1f
                
                if (r8_5 - rax_32 + 0x1f s> r10_2)
                    var_b4_2.d = r10_2
            else
                while (true)
                    int64_t rdx_15 = sx.q(rcx_12)
                    r8_5 += 0x20
                    rcx_12 += 1
                    var_b4_2:4.d = r8_5
                    var_c8 = rcx_12
                    
                    if (rdx_15.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_14 = *(r9_5 + (rdx_15 << 2) + 4)
                    var_b8_3 = 0xffffffff
                    
                    if (rdx_14 != 0)
                        goto label_1405b3a89
                
                var_b4_2.d = r10_2
        
        int32_t rdx_16 = *(arg1 + 0x78)
        zmm2_1 = var_b8_3.o
        var_b4_2.d = rdx_16
        double var_48_2[0x2] = zmm2_1
        int128_t var_58_2 = var_c8.o
        int32_t rsi_2 = 0xffffffff << (rdx_16 & 0x1f).b
        int32_t r8_8 = rdx_16 s>> 5
        int32_t r9_7 = rdx_16 & 0xffffffe0
        int64_t var_78_2 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
        int32_t var_b8_4 = rsi_2
        var_98 = (arg1 + 0x50).o
        int128_t var_88_2 = var_58_2
        
        if (rdx_16 != r10_2)
            void* rax_36 = *(arg1 + 0x70)
            void* r11_2 = arg1 + 0x60
            
            if (rax_36 != 0)
                r11_2 = rax_36
            
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = sx.q(r10_2 - 1)
            int32_t rdx_20 = *(r11_2 + (sx.q(r8_8) << 2)) & rsi_2
            
            if (rdx_20 != 0)
            label_1405b3b66:
                int32_t rax_42 = ((rdx_20 - 1) & rdx_20) ^ rdx_20
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_42)
                int32_t r13_1
                
                if (rax_42 == 0)
                    r13_1 = 0x20
                else
                    r13_1 = 0x1f - temp0_7
                
                var_b4_2.d = r9_7 - r13_1 + 0x1f
                
                if (r9_7 - r13_1 + 0x1f s> r10_2)
                    var_b4_2.d = r10_2
            else
                while (true)
                    int64_t rcx_16 = sx.q(r8_8)
                    r9_7 += 0x20
                    r8_8 += 1
                    
                    if (rcx_16.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_20 = *(r11_2 + (rcx_16 << 2) + 4)
                    var_b8_4 = 0xffffffff
                    
                    if (rdx_20 != 0)
                        goto label_1405b3b66
                
                var_b4_2.d = r10_2
        
        while (true)
            int64_t rdx_21 = sx.q(var_88_2:0xc.d)
            int32_t rax_35
            
            if (rdx_21.d != (var_b8_4.q u>> 0x20).d || var_88_2.q != arg1 + 0x60)
                rax_35.b = 0
            else
                rax_35.b = 1
            
            int64_t rcx_18 = var_98.q
            
            if (rax_35.b == 0 || rcx_18 != arg1 + 0x50)
                rax_35.b = 1
            else
                rax_35.b = 0
            
            if (rax_35.b == 0)
                break
            
            int64_t* rdx_23 = (rdx_21 << 5) + *rcx_18
            var_c8.o = *(rdx_23 + 8)
            sub_1421321b0(result_2, *rdx_23, &var_c8)
            var_88_2:8.d &= not.d(var_98:0xc.d)
            sub_14059bdd0(&var_98:8)
        
        r13 = arg2
        *(arg1 + 0x148) = 0
    
    int64_t rax_45 = *result_2
    int64_t* var_a8 = nullptr
    int32_t var_a0_1 = 0
    int64_t var_70 = 0
    int64_t var_68_1 = 0
    (*(rax_45 + 0x310))(result_2, &var_a8, &var_70)
    void* result_1 = nullptr
    
    if (*data_143cd6030 != 0)
        result = sub_1405cc510()
        void* rbx_7 = *(result + 0x118)
        
        if (rbx_7 == 0)
            int64_t rdx_26 = *result
            (*(rdx_26 + 0x390))(result, rdx_26)
            rbx_7 = *(result + 0x118)
        
        result_1 = *(rbx_7 + 0x60)
        
        if (result_1 == 0)
            result = sub_140d30a00(rbx_7 + 0x48, 0)
            result_1 = result
            void* rax_46
            void* rcx_24
            int64_t rdx_27
            
            if (result != 0)
                rax_46 = sub_1425b3bb0()
                rcx_24 = *(result_1 + 0x10)
                rdx_27 = sx.q(*(rax_46 + 0x38))
            
            if (result == 0 || rdx_27.d s> *(rcx_24 + 0x38)
                    || *(*(rcx_24 + 0x30) + (rdx_27 << 3)) != rax_46 + 0x30)
                result_1 = nullptr
            
            *(rbx_7 + 0x60) = result_1
    
    int64_t* rdi_4 = var_a8
    void* r15_4 = &rdi_4[sx.q(var_a0_1) * 2]
    
    if (rdi_4 != r15_4)
        do
            void* result_3 = nullptr
            
            if (r13 != 0)
                int64_t rbx_8 = *rdi_4
                int64_t rdx_34
                
                if (*(arg1 + 0xb0) == *(arg1 + 0xdc))
                labelid_15:
                    rdx_34 = rbx_8
                else
                    int32_t rax_49 = sub_140b5ead0(rbx_8.d) + rbx_8:4.d
                    void* r8_11 = arg1 + 0xe0
                    void* rcx_27 = *(r8_11 + 8)
                    
                    if (rcx_27 != 0)
                        r8_11 = rcx_27
                    
                    int32_t rax_51 = *(r8_11 + (((sx.q(*(arg1 + 0xf0)) - 1) & sx.q(rax_49)) << 2))
                    
                    if (rax_51 == 0xffffffff)
                    labelid_15:
                        rdx_34 = rbx_8
                    else
                        int64_t r8_12 = *(arg1 + 0xa8)
                        int64_t rcx_28
                        
                        while (true)
                            rcx_28 = sx.q(rax_51)
                            int64_t rdx_31 = rcx_28 * 3
                            
                            if (*(r8_12 + (rdx_31 << 3)) == rbx_8)
                                break
                            
                            rax_51 = *(r8_12 + (rdx_31 << 3) + 0x10)
                            
                            if (rax_51 == 0xffffffff)
                                goto label_1405b3d69_2
                        
                        if (rax_51 == 0xffffffff)
                        label_1405b3d69:
                            rdx_34 = rbx_8
                        else
                            void* rdx_32 = r8_12 + rcx_28 * 0x18
                            
                            if (rdx_32 == 0 || rdx_32 == -8)
                            label_1405b3d69_1:
                                rdx_34 = rbx_8
                            else
                                rdx_34 = *(rdx_32 + 8)
                                
                                if (rdx_34 == 0)
                                label_1405b3d69_2:
                                    rdx_34 = rbx_8
                
                if ((*(*r13 + 0x10))(r13, rdx_34, &result_3).b != 0)
                    void* result_4 = result_3
                    
                    if (result_4 == 0)
                        if (result_1 == 0)
                            sub_140b4c620(&var_c8, rdi_4)
                            var_c0.d = *(rdi_4 + 0xc)
                            var_c0:4.b = rdi_4[1].b
                            (*(*result_2 + 0x338))(result_2, &var_c8, &result_3, 0)
                            result_4 = result_3
                        else
                            result_4 = result_1
                            result_3 = result_1
                    
                    sub_142131d00(result_2, *rdi_4, result_4)
            
            rdi_4 = &rdi_4[2]
        while (rdi_4 != r15_4)
        
        rdi_4 = var_a8
    
    int64_t rcx_33 = var_70
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
        rdi_4 = var_a8
    
    if (rdi_4 != 0)
        sub_140a74f90(rdi_4)

result.b = result_2 != 0
return result
