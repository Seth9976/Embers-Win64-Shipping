// 函数: sub_1407abae0
// 地址: 0x1407abae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int32_t* r12 = arg3
*arg4 = 0
bool rdx = sub_140b5b8a0(*(arg1 + 0x38), 0) == 0
bool rax

if ((*(arg1 + 0x3c) != 0 | rdx) == 0 || *(arg1 + 0x40) == 0)
    rax = false
else
    rax = true

int64_t* rdi_4
int128_t var_88
int128_t var_50

if (rax == 0 || arg5 == 0)
    void* rax_39 = *(arg1 + 0x60)
    
    if (rax_39 == 0)
        void* rbx_4 = *(arg1 + 0x30)
        
        if (rbx_4 != 0)
            void* rax_40 = sub_142590e60()
            void* rdx_16 = *(rbx_4 + 0x10)
            int64_t rax_41 = sx.q(*(rax_40 + 0x38))
            void* rax_43
            
            if (rax_41.d s> *(rdx_16 + 0x38)
                    || *(*(rdx_16 + 0x30) + (rax_41 << 3)) != rax_40 + 0x30)
                int64_t* rbx_5 = *(arg1 + 0x30)
                int64_t rax_44 = sub_142591550()
                int64_t r8_10 = *rbx_5
                rax_43 = (*(r8_10 + 0x610))(rbx_5, rax_44, r8_10)
            else
                rax_43 = *(rbx_4 + 0x230)
            
            if (rax_43 == 0)
                sub_140d3a3a0(r12, *(*(arg1 + 0x30) + 0x130))
            else
                result = *(rax_43 + 0x430)
                *arg4 = rax_43
            
        labelid_4:
            rdi_4 = arg4
        else if (arg2 == 0)
        labelid_4:
            rdi_4 = arg4
        else
            void* rbx_6 = *(arg2 + 0xc0)
            void* rax_45
            int64_t rax_46
            void* rdx_20
            
            if (rbx_6 != 0)
                rax_45 = sub_142591550()
                rdx_20 = *(rbx_6 + 0x10)
                rax_46 = sx.q(*(rax_45 + 0x38))
            
            if (rbx_6 == 0 || rax_46.d s> *(rdx_20 + 0x38)
                    || *(*(rdx_20 + 0x30) + (rax_46 << 3)) != rax_45 + 0x30)
                void* rax_49 = sub_140d226f0(arg2, sub_142591550())
                
                if (rax_49 == 0)
                    void* rax_50 = sub_141f3ba40(arg2)
                    
                    if (rax_50 == 0)
                    labelid_63:
                        rdi_4 = arg4
                    else
                        int32_t var_a4_3 = 1
                        int32_t r11_2 = *(rax_50 + 0x1c8)
                        void* var_a0_2 = rax_50 + 0x1b0
                        int32_t rcx_22 = 0
                        int32_t var_a8_2 = 0
                        int32_t r8_12 = 0
                        int32_t var_98_4 = 0xffffffff
                        int64_t var_94_2 = 0
                        
                        if (r11_2 != 0)
                            void* rax_51 = *(rax_50 + 0x1c0)
                            void* r9_4 = rax_50 + 0x1b0
                            
                            if (rax_51 != 0)
                                r9_4 = rax_51
                            
                            int32_t temp0_4
                            int32_t temp1_1
                            temp0_4:temp1_1 = sx.q(r11_2 - 1)
                            int32_t rdx_24 = *r9_4
                            
                            if (rdx_24 != 0)
                            label_1407abfe9:
                                int32_t rax_58 = ((rdx_24 - 1) & rdx_24) ^ rdx_24
                                uint64_t rflags_3
                                int32_t temp0_5
                                temp0_5, rflags_3 = _bit_scan_reverse(rax_58)
                                int32_t var_a4_4 = rax_58
                                int32_t rax_59
                                
                                if (rax_58 == 0)
                                    rax_59 = 0x20
                                else
                                    rax_59 = 0x1f - temp0_5
                                
                                var_94_2.d = r8_12 - rax_59 + 0x1f
                                
                                if (r8_12 - rax_59 + 0x1f s> r11_2)
                                    var_94_2.d = r11_2
                            else
                                while (true)
                                    int64_t rdx_25 = sx.q(rcx_22)
                                    r8_12 += 0x20
                                    rcx_22 += 1
                                    var_94_2:4.d = r8_12
                                    var_a8_2 = rcx_22
                                    
                                    if (rdx_25.d s>= (temp1_1 + (temp0_4 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_24 = *(r9_4 + (rdx_25 << 2) + 4)
                                    int32_t var_98_5 = 0xffffffff
                                    
                                    if (rdx_24 != 0)
                                        goto label_1407abfe9
                                
                                var_94_2.d = r11_2
                        
                        int32_t rdx_26 = *(rax_50 + 0x1c8)
                        var_94_2.d = rdx_26
                        int128_t var_48_2 = 0xffffffff
                        int128_t var_58_2 = var_a8_2.o
                        int32_t r15_2 = 0xffffffff << (rdx_26 & 0x1f).b
                        int32_t r8_15 = rdx_26 s>> 5
                        int32_t r9_6 = rdx_26 & 0xffffffe0
                        int64_t var_68_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                        int32_t var_98_6 = r15_2
                        var_88 = (rax_50 + 0x1a0).o
                        int128_t var_78_2 = var_50
                        
                        if (rdx_26 != r11_2)
                            void* rax_63 = *(rax_50 + 0x1c0)
                            void* rbx_7 = rax_50 + 0x1b0
                            
                            if (rax_63 != 0)
                                rbx_7 = rax_63
                            
                            int32_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(r11_2 - 1)
                            int32_t rdx_30 = *(rbx_7 + (sx.q(r8_15) << 2)) & r15_2
                            
                            if (rdx_30 != 0)
                            label_1407ac0c5:
                                int32_t rax_69 = ((rdx_30 - 1) & rdx_30) ^ rdx_30
                                uint64_t rflags_4
                                int32_t temp0_7
                                temp0_7, rflags_4 = _bit_scan_reverse(rax_69)
                                int32_t r10_2
                                
                                if (rax_69 == 0)
                                    r10_2 = 0x20
                                else
                                    r10_2 = 0x1f - temp0_7
                                
                                var_94_2.d = r9_6 - r10_2 + 0x1f
                                
                                if (r9_6 - r10_2 + 0x1f s> r11_2)
                                    var_94_2.d = r11_2
                            else
                                while (true)
                                    int64_t rcx_26 = sx.q(r8_15)
                                    r9_6 += 0x20
                                    r8_15 += 1
                                    
                                    if (rcx_26.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_30 = *(rbx_7 + (rcx_26 << 2) + 4)
                                    var_98_6 = 0xffffffff
                                    
                                    if (rdx_30 != 0)
                                        goto label_1407ac0c5
                                
                                var_94_2.d = r11_2
                        
                        while (true)
                            int64_t rdx_31 = sx.q(var_78_2:0xc.d)
                            int32_t rax_62
                            
                            if (rdx_31.d != (var_98_6.q u>> 0x20).d || var_78_2.q != rax_50 + 0x1b0)
                                rax_62.b = 0
                            else
                                rax_62.b = 1
                            
                            int64_t* rcx_28 = var_88.q
                            
                            if (rax_62.b == 0 || rcx_28 != rax_50 + 0x1a0)
                                rax_62.b = 1
                            else
                                rax_62.b = 0
                            
                            if (rax_62.b == 0)
                                r12 = arg3
                                goto label_1407ac185_1
                            
                            void* rbx_8 = *(*rcx_28 + rdx_31 * 0x10)
                            
                            if (rbx_8 != 0)
                                void* rax_72 = sub_142591550()
                                void* rdx_32 = *(rbx_8 + 0x10)
                                int64_t rax_73 = sx.q(*(rax_72 + 0x38))
                                
                                if (rax_73.d s<= *(rdx_32 + 0x38)
                                        && *(*(rdx_32 + 0x30) + (rax_73 << 3)) == rax_72 + 0x30)
                                    int64_t result_2 = *(rbx_8 + 0x430)
                                    
                                    if (result_2 != 0)
                                        rdi_4 = arg4
                                        result = result_2
                                        r12 = arg3
                                        *rdi_4 = rbx_8
                                        break
                            
                            var_78_2:8.d &= not.d(var_88:0xc.d)
                            sub_14059bdd0(&var_88:8)
                else
                    *arg4 = rax_49
                    result = *(rax_49 + 0x430)
                label_1407ac185:
                    rdi_4 = arg4
            else
                *arg4 = rbx_6
                result = *(rbx_6 + 0x430)
            label_1407ac185_1:
                rdi_4 = arg4
            
            if (sub_140d3e110(r12) == 0)
                sub_140d3a3a0(r12, arg2)
    else
        result = *(rax_39 + 0x430)
        *arg4 = rax_39
    labelid_4:
        rdi_4 = arg4
else
    void* rax_2 = sub_1407afb20(arg5 + 8, sub_140761ad0(arg2) + 0x150, arg1 + 0x38)
    
    if (rax_2 == 0)
    labelid_4:
        rdi_4 = arg4
    else
        *(arg5 + 0x50) = rax_2
        void* rax_3 = sub_142591550()
        void* rdx_2 = *(rax_2 + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            void* rax_6 = sub_142590e60()
            void* rdx_3 = *(rax_2 + 0x10)
            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
            
            if (rax_7.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                void* rax_10 = sub_142452380()
                void* rdx_4 = *(rax_2 + 0x10)
                int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                
                if (rax_11.d s> *(rdx_4 + 0x38)
                    || *(*(rdx_4 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                labelid_4:
                    rdi_4 = arg4
                else
                    int32_t var_a4_1 = 1
                    int32_t r11_1 = *(rax_2 + 0x1c8)
                    void* var_a0_1 = rax_2 + 0x1b0
                    int32_t rcx_6 = 0
                    int32_t var_a8_1 = 0
                    int32_t r8_4 = 0
                    int32_t var_98_1 = 0xffffffff
                    int64_t var_94_1 = 0
                    
                    if (r11_1 != 0)
                        void* rax_13 = *(rax_2 + 0x1c0)
                        void* r9 = rax_2 + 0x1b0
                        
                        if (rax_13 != 0)
                            r9 = rax_13
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(r11_1 - 1)
                        int32_t rdx_7 = *r9
                        
                        if (rdx_7 != 0)
                        label_1407abca9:
                            int32_t rax_20 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
                            uint64_t rflags_1
                            int32_t temp0_1
                            temp0_1, rflags_1 = _bit_scan_reverse(rax_20)
                            int32_t var_a4_2 = rax_20
                            int32_t rax_21
                            
                            if (rax_20 == 0)
                                rax_21 = 0x20
                            else
                                rax_21 = 0x1f - temp0_1
                            
                            var_94_1.d = r8_4 - rax_21 + 0x1f
                            
                            if (r8_4 - rax_21 + 0x1f s> r11_1)
                                var_94_1.d = r11_1
                        else
                            while (true)
                                int64_t rdx_8 = sx.q(rcx_6)
                                r8_4 += 0x20
                                rcx_6 += 1
                                var_94_1:4.d = r8_4
                                var_a8_1 = rcx_6
                                
                                if (rdx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_7 = *(r9 + (rdx_8 << 2) + 4)
                                int32_t var_98_2 = 0xffffffff
                                
                                if (rdx_7 != 0)
                                    goto label_1407abca9
                            
                            var_94_1.d = r11_1
                    
                    int32_t rdx_9 = *(rax_2 + 0x1c8)
                    var_94_1.d = rdx_9
                    int128_t var_48_1 = 0xffffffff
                    int128_t var_58_1 = var_a8_1.o
                    int32_t r12_1 = 0xffffffff << (rdx_9 & 0x1f).b
                    int32_t r8_7 = rdx_9 s>> 5
                    int32_t r9_2 = rdx_9 & 0xffffffe0
                    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                    int32_t var_98_3 = r12_1
                    var_88 = (rax_2 + 0x1a0).o
                    int128_t var_78_1 = var_50
                    
                    if (rdx_9 != r11_1)
                        void* rax_25 = *(rax_2 + 0x1c0)
                        void* rbx_2 = rax_2 + 0x1b0
                        
                        if (rax_25 != 0)
                            rbx_2 = rax_25
                        
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(r11_1 - 1)
                        int32_t rdx_13 = *(rbx_2 + (sx.q(r8_7) << 2)) & r12_1
                        
                        if (rdx_13 != 0)
                        label_1407abd85:
                            int32_t rax_31 = ((rdx_13 - 1) & rdx_13) ^ rdx_13
                            uint64_t rflags_2
                            int32_t temp0_3
                            temp0_3, rflags_2 = _bit_scan_reverse(rax_31)
                            int32_t r10_1
                            
                            if (rax_31 == 0)
                                r10_1 = 0x20
                            else
                                r10_1 = 0x1f - temp0_3
                            
                            var_94_1.d = r9_2 - r10_1 + 0x1f
                            
                            if (r9_2 - r10_1 + 0x1f s> r11_1)
                                var_94_1.d = r11_1
                        else
                            while (true)
                                int64_t rcx_10 = sx.q(r8_7)
                                r9_2 += 0x20
                                r8_7 += 1
                                
                                if (rcx_10.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_13 = *(rbx_2 + (rcx_10 << 2) + 4)
                                var_98_3 = 0xffffffff
                                
                                if (rdx_13 != 0)
                                    goto label_1407abd85
                            
                            var_94_1.d = r11_1
                    
                    while (true)
                        int64_t rdx_14 = sx.q(var_78_1:0xc.d)
                        int32_t rax_24
                        
                        if (rdx_14.d != (var_98_3.q u>> 0x20).d || var_78_1.q != rax_2 + 0x1b0)
                            rax_24.b = 0
                        else
                            rax_24.b = 1
                        
                        int64_t* rcx_12 = var_88.q
                        
                        if (rax_24.b == 0 || rcx_12 != rax_2 + 0x1a0)
                            rax_24.b = 1
                        else
                            rax_24.b = 0
                        
                        if (rax_24.b == 0)
                            r12 = arg3
                            goto label_1407ac1a6_1
                        
                        void* rbx_3 = *(*rcx_12 + rdx_14 * 0x10)
                        
                        if (rbx_3 != 0)
                            void* rax_34 = sub_142591550()
                            void* rdx_15 = *(rbx_3 + 0x10)
                            int64_t rax_35 = sx.q(*(rax_34 + 0x38))
                            
                            if (rax_35.d s<= *(rdx_15 + 0x38)
                                    && *(*(rdx_15 + 0x30) + (rax_35 << 3)) == rax_34 + 0x30)
                                int64_t result_1 = *(rbx_3 + 0x430)
                                
                                if (result_1 != 0)
                                    rdi_4 = arg4
                                    result = result_1
                                    r12 = arg3
                                    *rdi_4 = rbx_3
                                    break
                        
                        var_78_1:8.d &= not.d(var_88:0xc.d)
                        sub_14059bdd0(&var_88:8)
            else
                void* rax_9 = *(rax_2 + 0x230)
                *arg4 = rax_9
                result = *(rax_9 + 0x430)
            label_1407ac1a6:
                rdi_4 = arg4
        else
            *arg4 = rax_2
            result = *(rax_2 + 0x430)
        label_1407ac1a6_1:
            rdi_4 = arg4
void* rdx_34 = *rdi_4

if (rdx_34 != 0)
    sub_140d3a3a0(r12, rdx_34)

return result
