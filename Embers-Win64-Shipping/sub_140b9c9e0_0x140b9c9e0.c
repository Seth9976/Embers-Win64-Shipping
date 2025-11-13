// 函数: sub_140b9c9e0
// 地址: 0x140b9c9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238

while (true)
    int32_t rbx_1 = 0
    int32_t var_1e0_1 = 0
    int32_t var_218
    int32_t var_200
    int64_t* var_1d8
    int64_t var_1c8
    uint128_t var_1b8
    double zmm2[0x2]
    
    if (arg2 != 0)
        int64_t var_128
        __builtin_memset(&var_128, 0, 0x2c)
        int32_t rcx = 0
        int32_t r8_1 = 0
        int32_t var_fc_1 = 0x80
        int32_t var_f8_1 = 0xffffffff
        int32_t var_f4_1 = 0
        int64_t var_e8_1 = 0
        int32_t var_e0_1 = 0
        int32_t r11_1 = *(arg1 + 0x28)
        var_1d8 = nullptr
        int32_t var_1d0_1 = 0
        var_200 = 0
        int32_t var_1fc_1 = 1
        int32_t* var_1f8_1 = arg1 + 0x10
        int32_t var_1f0_1 = 0xffffffff
        int64_t var_1ec_1 = 0
        
        if (r11_1 != 0)
            int32_t* rax_2 = *(arg1 + 0x20)
            int32_t* r9_1 = arg1 + 0x10
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_2 = *r9_1
            
            if (rdx_2 != 0)
            label_140b9cafd:
                int32_t rax_9 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_1fc_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_1ec_1.d = r8_1 - rax_10 + 0x1f
                
                if (r8_1 - rax_10 + 0x1f s> r11_1)
                    var_1ec_1.d = r11_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx)
                    r8_1 += 0x20
                    rcx += 1
                    var_1ec_1:4.d = r8_1
                    var_200 = rcx
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = r9_1[rdx_3 + 1]
                    var_1f0_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_140b9cafd
                
                var_1ec_1.d = r11_1
        
        int32_t rdx_4 = *(arg1 + 0x28)
        zmm2 = var_1f0_1.o
        double var_170_1[0x2] = zmm2
        int32_t rbx_2 = 0xffffffff << (rdx_4.b & 0x1f)
        uint128_t var_180_1 = var_200.o
        int32_t r8_4 = rdx_4 s>> 5
        int32_t r9_3 = rdx_4 & 0xffffffe0
        int64_t var_198_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_1f0_2 = rbx_2
        var_1ec_1.d = rdx_4
        var_1b8 = arg1.o
        uint128_t var_1a8_1 = var_180_1
        
        if (rdx_4 != r11_1)
            int32_t* rax_12 = *(arg1 + 0x20)
            int32_t* r10_1 = arg1 + 0x10
            
            if (rax_12 != 0)
                r10_1 = rax_12
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_8 = r10_1[sx.q(r8_4)] & rbx_2
            
            if (rdx_8 != 0)
            label_140b9cbd3:
                int32_t rax_19 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
                int32_t rax_20
                
                if (rax_19 == 0)
                    rax_20 = 0x20
                else
                    rax_20 = 0x1f - temp0_4
                
                var_1ec_1.d = r9_3 - rax_20 + 0x1f
                
                if (r9_3 - rax_20 + 0x1f s> r11_1)
                    var_1ec_1.d = r11_1
            else
                while (true)
                    int64_t rcx_5 = sx.q(r8_4)
                    r9_3 += 0x20
                    r8_4 += 1
                    
                    if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = r10_1[rcx_5 + 1]
                    var_1f0_2 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_140b9cbd3
                
                var_1ec_1.d = r11_1
        
        while (true)
            int64_t rcx_7 = sx.q(var_1a8_1:0xc.d)
            int64_t* rax_22 = var_1b8.q
            
            if (rcx_7.d == (var_1f0_2.q u>> 0x20).d && var_1a8_1.q == arg1 + 0x10 && rax_22 == arg1)
                break
            
            void* r8_7 = *(*rax_22 + rcx_7 * 0x10)
            sub_140ba9440(r8_7 + 0x500, &var_1d8, r8_7)
            var_1a8_1:8.d &= not.d(var_1b8:0xc.d)
            sub_14059bdd0(&var_1b8:8)
        
        int64_t* r12_1 = var_1d8
        int64_t r15_1 = sx.q(var_1d0_1)
        int64_t* rsi_1 = r12_1
        void* r14_3 = &r12_1[r15_1 * 2]
        
        if (r12_1 != r14_3)
            int32_t r15_2 = var_1e0_1
            
            do
                void* rdx_11 = *rsi_1 + 0x500
                int64_t rax_26 = _mm_bsrli_si128(*rsi_1, 8).q
                int32_t temp8_1 = rax_26.d
                int64_t* rdi_2
                
                if (temp8_1 != 0)
                    int32_t rcx_14
                    
                    if (temp8_1 s>= 0)
                        rcx_14 = (rax_26 u>> 0x20).d - 3 + (rax_26 * 3).d + *(rdx_11 + 0x64)
                    else
                        rcx_14 = (rax_26 u>> 0x20).d - ((rax_26 << 1) + 2).d + *(rdx_11 + 0x60)
                    
                    rdi_2 = *(rdx_11 + 0x48) + sx.q(rcx_14) * 0x18
                else
                    rdi_2 = rdx_11 + sx.q((rax_26 u>> 0x20).d) * 0x18
                
                if (rdi_2[2].d == 0)
                    if (data_14399fa4c != 0)
                        if (*(rdi_2 + 0x14) == 0)
                            goto label_140b9cd07
                        
                        r15_2 += 1
                    else if (*(rdi_2 + 0x14) == 0)
                    label_140b9cd07:
                        int64_t var_140
                        int64_t* rax_33 = sub_140bab8d0(rsi_1, &var_140)
                        int16_t* const r9_5
                        
                        if (rax_33[1].d == 0)
                            r9_5 = &data_142d40450
                        else
                            r9_5 = *rax_33
                        
                        sub_140af98a0("Unknown", 0x3d9, 
                            Node %s has zero prerequisites, but has not been queued.", r9_5)
                        int64_t rcx_20 = var_140
                        
                        if (rcx_20 != 0)
                            sub_140a74f90(rcx_20)
                        
                        sub_140afbb40()
                
                uint128_t* rbx_5 = *rdi_2
                void* rdi_5 = &rbx_5[sx.q(rdi_2[1].d)]
                
                if (rbx_5 != rdi_5)
                    int64_t* var_158_1 = rsi_1
                    int32_t* var_160 = &var_200
                    
                    do
                        var_200.o = *rbx_5
                        int32_t var_190
                        sub_140b92700(&var_128, &var_190, &var_160, nullptr)
                        rbx_5 = &rbx_5[1]
                    while (rbx_5 != rdi_5)
                
                int32_t rcx_22 = rsi_1[1].d
                
                if (rcx_22 != 0)
                    var_1c8 = *rsi_1
                    int32_t rax_35 = *(rsi_1 + 0xc)
                    int64_t var_1c0
                    var_1c0.d = 0
                    
                    if (rax_35 != 1)
                        var_1c0.d = rcx_22
                        
                        if (rax_35 != 0)
                            var_1c0:4.d = 1
                        else
                            var_1c0:4.d = (rcx_22 s>> 0x1f) + 2
                    else
                        var_1c0:4.d = 2
                    
                    int64_t* var_148_1 = rsi_1
                    int64_t* var_150 = &var_1c8
                    int32_t var_18c
                    sub_140b92700(&var_128, &var_18c, &var_150, nullptr)
                
                rsi_1 = &rsi_1[2]
            while (rsi_1 != r14_3)
            
            r12_1 = var_1d8
            var_1e0_1 = r15_2
            r15_1 = zx.q(var_1d0_1)
        
        int32_t var_5c_1 = 0x80
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x2c)
        int64_t rcx_26 = 0
        int64_t var_98_1 = 0
        int64_t* rbx_6 = r12_1
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        int64_t var_d8
        __builtin_memset(&var_d8, 0, 0x2c)
        int32_t var_ac_1 = 0x80
        int32_t var_a8_1 = 0xffffffff
        int32_t var_a4_1 = 0
        int32_t var_90_1 = 0
        
        if (r12_1 != r14_3)
            do
                var_218.q = rbx_6
                char rax_36
                int64_t r9_7
                rax_36, r9_7 = sub_140b9d390(arg1, &var_128, &var_88, &var_d8, var_218)
                
                if (rax_36 != 0)
                    sub_140af98a0("Unknown", 0x3f4, 
                        Async loading event graph contained a cycle, see above.", r9_7)
                    sub_140afbb40()
                
                rbx_6 = &rbx_6[2]
            while (rbx_6 != r14_3)
            
            rcx_26 = var_98_1
        
        rbx_1 = var_1e0_1
        
        if (r15_1.d != rbx_1)
            var_218 = rbx_1
            sub_140af98a0("Unknown", 0x3fd, 
                No outstanding IO, no nodes in the queue, yet we still have %d 'AddedNodes' in the graph "
            "(with %d boot nodes).", zx.q(r15_1.d))
            sub_140afbb40()
            rcx_26 = var_98_1
        
        int32_t var_90_2 = 0
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t var_d0_1
        var_d0_1.d = 0
        int32_t var_a8_2 = 0xffffffff
        int32_t var_a4_2 = 0
        int64_t var_c8
        sub_14059a8e0(&var_c8, 0)
        int64_t var_b8
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
        
        int64_t rcx_31 = var_d8
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        int32_t var_40_2 = 0
        
        if (var_48_1 != 0)
            sub_140a74f90(var_48_1)
        
        int64_t var_80_1
        var_80_1.d = 0
        int32_t var_58_2 = 0xffffffff
        int32_t var_54_2 = 0
        int64_t var_78
        sub_14059a8e0(&var_78, 0)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_36 = var_88
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        int32_t var_e0_2 = 0
        
        if (var_e8_1 != 0)
            sub_140a74f90(var_e8_1)
        
        int64_t var_120_1
        var_120_1.d = 0
        int32_t var_f8_2 = 0xffffffff
        int32_t var_f4_2 = 0
        int64_t var_118
        sub_14059a8e0(&var_118, 0)
        int64_t var_108
        
        if (var_108 != 0)
            sub_140a74f90(var_108)
        
        int64_t rcx_42 = var_128
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
    
    int32_t result = *(arg1 + 8)
    
    if (result == *(arg1 + 0x34) || rbx_1 != 0)
        __security_check_cookie(rax_1 ^ &var_238)
        return result
    
    if (arg2 != 0)
        var_1d8 = nullptr
        int32_t rcx_43 = 0
        int32_t var_1d0_2 = 0
        int32_t r11_2 = *(arg1 + 0x28)
        int32_t rdi_6 = 0
        var_200 = 0
        int32_t var_1fc_3 = 1
        int32_t r8_11 = 0
        void* var_1f8_2 = arg1 + 0x10
        int32_t var_1f0_3 = 0xffffffff
        int64_t var_1ec_2 = 0
        
        if (r11_2 != 0)
            void* rax_37 = *(arg1 + 0x20)
            void* r9_9 = arg1 + 0x10
            
            if (rax_37 != 0)
                r9_9 = rax_37
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_2 - 1)
            int32_t rdx_18 = *r9_9
            
            if (rdx_18 != 0)
            label_140b9d13b:
                int32_t rax_44 = neg.d(rdx_18) & rdx_18
                uint64_t rflags_3
                int32_t temp0_6
                temp0_6, rflags_3 = _bit_scan_reverse(rax_44)
                int32_t var_1fc_4 = rax_44
                int32_t rax_45
                
                if (rax_44 == 0)
                    rax_45 = 0x20
                else
                    rax_45 = 0x1f - temp0_6
                
                var_1ec_2.d = r8_11 - rax_45 + 0x1f
                
                if (r8_11 - rax_45 + 0x1f s> r11_2)
                    var_1ec_2.d = r11_2
            else
                while (true)
                    int64_t rdx_19 = sx.q(rcx_43)
                    r8_11 += 0x20
                    rcx_43 += 1
                    var_1ec_2:4.d = r8_11
                    var_200 = rcx_43
                    
                    if (rdx_19.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_18 = *(r9_9 + (rdx_19 << 2) + 4)
                    var_1f0_3 = 0xffffffff
                    
                    if (rdx_18 != 0)
                        goto label_140b9d13b
                
                var_1ec_2.d = r11_2
        
        int32_t rdx_20 = *(arg1 + 0x28)
        zmm2 = var_1f0_3.o
        double var_170_2[0x2] = zmm2
        int32_t r14_4 = 0xffffffff << (rdx_20.b & 0x1f)
        uint128_t var_180_2 = var_200.o
        int32_t r8_14 = rdx_20 s>> 5
        int32_t r9_11 = rdx_20 & 0xffffffe0
        int64_t var_198_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_1f0_4 = r14_4
        var_1ec_2.d = rdx_20
        var_1b8 = arg1.o
        uint128_t var_1a8_2 = var_180_2
        
        if (rdx_20 != r11_2)
            void* rax_47 = *(arg1 + 0x20)
            void* r10_2 = arg1 + 0x10
            
            if (rax_47 != 0)
                r10_2 = rax_47
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_2 - 1)
            int32_t rdx_24 = *(r10_2 + (sx.q(r8_14) << 2)) & r14_4
            
            if (rdx_24 != 0)
            label_140b9d213:
                int32_t rax_54 = neg.d(rdx_24) & rdx_24
                uint64_t rflags_4
                int32_t temp0_8
                temp0_8, rflags_4 = _bit_scan_reverse(rax_54)
                int32_t r15_3
                
                if (rax_54 == 0)
                    r15_3 = 0x20
                else
                    r15_3 = 0x1f - temp0_8
                
                var_1ec_2.d = r9_11 - r15_3 + 0x1f
                
                if (r9_11 - r15_3 + 0x1f s> r11_2)
                    var_1ec_2.d = r11_2
            else
                while (true)
                    int64_t rcx_48 = sx.q(r8_14)
                    r9_11 += 0x20
                    r8_14 += 1
                    
                    if (rcx_48.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_24 = *(r10_2 + (rcx_48 << 2) + 4)
                    var_1f0_4 = 0xffffffff
                    
                    if (rdx_24 != 0)
                        goto label_140b9d213
                
                var_1ec_2.d = r11_2
        
        while (true)
            int64_t rcx_50 = sx.q(var_1a8_2:0xc.d)
            int64_t* rax_56 = var_1b8.q
            
            if (rcx_50.d == (var_1f0_4.q u>> 0x20).d && var_1a8_2.q == arg1 + 0x10
                    && rax_56 == arg1)
                break
            
            void* rbx_8 = *(*rax_56 + rcx_50 * 0x10)
            
            if (rbx_8 != 0)
                if (rdi_6 s< 5)
                    int64_t* rax_58 = sub_140b63b70(rbx_8 + 0x14, &var_200)
                    int32_t rcx_53 = rax_58[1].d
                    int32_t r8_15 = rcx_53 - 1
                    
                    if (rcx_53 == 0)
                        r8_15 = 0
                    
                    sub_140a20ba0(&var_1d8, *rax_58, r8_15)
                    int64_t rcx_55 = var_200.q
                    
                    if (rcx_55 != 0)
                        sub_140a74f90(rcx_55)
                    
                    sub_140a20ba0(&var_1d8, &data_142d7fa60, 1)
                    rdi_6 += 1
                
                var_1c8 = 0
                int64_t var_1c0_1 = 0
                sub_140ba9440(rbx_8 + 0x500, &var_1c8, rbx_8)
                int64_t rcx_58 = var_1c8
                
                if (rcx_58 != 0)
                    sub_140a74f90(rcx_58)
            
            var_1a8_2:8.d &= not.d(var_1b8:0xc.d)
            sub_14059bdd0(&var_1b8:8)
        
        int64_t* r15_4 = &data_142d40450
        
        if (var_1d0_2 != 0)
            r15_4 = var_1d8
        
        var_218.q = r15_4
        sub_140af98a0("Unknown", 0x424, 
            No outstanding IO, no nodes in the queue, yet we still have %d 'PackagesWithNodes' in the "
        "graph: %s", zx.q(*(arg1 + 8) - *(arg1 + 0x34)))
        result = sub_140afbb40()
        int64_t* rcx_60 = var_1d8
        
        if (rcx_60 != 0)
            result = sub_140a74f90(rcx_60)
        
        __security_check_cookie(rax_1 ^ &var_238)
        return result
    
    arg2 = 1
