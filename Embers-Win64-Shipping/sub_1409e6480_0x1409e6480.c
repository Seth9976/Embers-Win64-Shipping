// 函数: sub_1409e6480
// 地址: 0x1409e6480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1

if (arg3 != 0)
    int32_t rcx_1
    uint128_t zmm0
    uint128_t zmm1
    int32_t var_138
    
    if (*(arg2 + 0x520) s<= 0)
        int64_t r12
        r12.b = 0
        void* r13_1 = *(arg2 + 0x28)
        uint128_t zmm6 = data_143dbb200
        double zmm7[0x2] = data_143dbb1fc
        uint128_t zmm8 = data_143dbb1f8
        uint128_t zmm9 = zmm8
        double zmm10[0x2] = zmm7
        uint128_t zmm11 = zmm6
        void* arg_20
        sub_14090aa40(r13_1 + 0x150, &arg_20, data_143f35cc8)
        int32_t r11_1 = *(r13_1 + 0x28)
        int32_t var_134_1 = 1
        void* var_130_1 = r13_1 + 0x10
        int32_t rcx_3 = 0
        var_138 = 0
        int32_t r8_1 = 0
        int32_t var_128_1 = 0xffffffff
        int64_t var_124_1 = 0
        
        if (r11_1 != 0)
            void* rax_2 = *(r13_1 + 0x20)
            void* r9_1 = r13_1 + 0x10
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_4 = *r9_1
            
            if (rdx_4 != 0)
            label_1409e65fb:
                int32_t rax_9 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_134_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_124_1.d = r8_1 - rax_10 + 0x1f
                
                if (r8_1 - rax_10 + 0x1f s> r11_1)
                    var_124_1.d = r11_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_3)
                    r8_1 += 0x20
                    rcx_3 += 1
                    var_124_1:4.d = r8_1
                    var_138 = rcx_3
                    
                    if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                    var_128_1 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_1409e65fb
                
                var_124_1.d = r11_1
        
        int32_t rdx_6 = *(r13_1 + 0x28)
        double zmm2[0x2] = var_128_1.o
        uint128_t var_110_1 = var_138.o
        int32_t rbx_1 = 0xffffffff << (rdx_6.b & 0x1f)
        int32_t r8_4 = rdx_6 s>> 5
        int32_t r9_3 = rdx_6 & 0xffffffe0
        double var_100_1[0x2] = zmm2
        int64_t var_d0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        zmm1 = var_110_1
        var_110_1:8.d = rbx_1
        var_110_1:0xc.d = rdx_6
        uint128_t var_f0 = r13_1.o
        uint128_t var_e0_1 = zmm1
        
        if (rdx_6 != r11_1)
            void* rax_12 = *(r13_1 + 0x20)
            void* r10_1 = r13_1 + 0x10
            
            if (rax_12 != 0)
                r10_1 = rax_12
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_10 = *(r10_1 + (sx.q(r8_4) << 2)) & rbx_1
            
            if (rdx_10 != 0)
            label_1409e66d3:
                int32_t rax_19 = neg.d(rdx_10) & rdx_10
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
                int32_t rax_20
                
                if (rax_19 == 0)
                    rax_20 = 0x20
                else
                    rax_20 = 0x1f - temp0_4
                
                var_110_1:0xc.d = r9_3 - rax_20 + 0x1f
                
                if (r9_3 - rax_20 + 0x1f s> r11_1)
                    var_110_1:0xc.d = r11_1
            else
                while (true)
                    int64_t rcx_8 = sx.q(r8_4)
                    r9_3 += 0x20
                    r8_4 += 1
                    
                    if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r10_1 + (rcx_8 << 2) + 4)
                    var_110_1:8.d = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_1409e66d3
                
                var_110_1:0xc.d = r11_1
        
        void* rbx_2 = arg_20
        
        while (true)
            int32_t rax_22 = var_e0_1:0xc.d
            int64_t rcx_10 = var_e0_1.q
            
            if (rax_22 == (var_110_1:8.q u>> 0x20).d && rcx_10 == r13_1 + 0x10 && var_f0.q == r13_1)
                break
            
            int32_t rdi_1 = data_143a1c6b4
            
            if (rax_22 s< *(rcx_10 + 0x18))
                rdi_1 = rax_22
            
            if (sub_141cdff60(*(arg2 + 0x28), rdi_1) == 0)
                int64_t rcx_12 = sx.q(rdi_1) * 3
                int64_t rdx_12 = **(rbx_2 + 0x18)
                
                if (r12.b == 0)
                    zmm0 = zx.o(*(rdx_12 + (rcx_12 << 2)))
                    r12.b = 1
                    zmm8 = zmm0
                    var_130_1 = zmm0.q
                    zmm9 = zmm8
                    zmm7 = var_128_1
                    var_124_1.d = *(rdx_12 + (rcx_12 << 2) + 8)
                    zmm10 = zmm7
                    zmm6 = var_124_1.d
                    zmm11 = zmm6
                else
                    zmm0 = *(rdx_12 + (rcx_12 << 2))
                    
                    if (not(zmm9.d f<= zmm0.d))
                        zmm9 = zmm0
                    
                    zmm2 = *(rdx_12 + (rcx_12 << 2) + 4)
                    
                    if (not(zmm10[0].d f<= zmm2[0].d))
                        zmm10 = zmm2
                    
                    zmm1 = *(rdx_12 + (rcx_12 << 2) + 8)
                    
                    if (not(zmm11.d f<= zmm1.d))
                        zmm11 = zmm1
                    
                    if (not(zmm8.d f>= zmm0.d))
                        zmm8 = zmm0
                    
                    if (not(zmm7[0].d f>= zmm2[0].d))
                        zmm7 = zmm2
                    
                    if (not(zmm6.d f>= zmm1.d))
                        zmm6 = zmm1
            
            var_e0_1:8.d &= not.d(var_f0:0xc.d)
            sub_14059bdd0(&var_f0:8)
        
        zmm8.d = zmm8.d f- zmm9.d
        int32_t r11_2 = *(r13_1 + 0x28)
        zmm7[0].d = zmm7[0].d f- zmm10[0].d
        zmm6.d = zmm6.d f- zmm11.d
        int32_t rsi_2 = 0
        void* var_118_1
        var_118_1:4.d = 1
        var_118_1.d = 0
        int32_t rcx_14 = 0
        zmm8.d = zmm8.d f* 0.5f
        var_110_1.q = r13_1 + 0x10
        zmm7[0].d = zmm7[0].d f* 0.5f
        var_110_1:8.d = 0xffffffff
        zmm6.d = zmm6.d f* 0.5f
        zmm9.d = zmm9.d f+ zmm8.d
        var_110_1:0xc.d = 0
        var_130_1:4.d = zmm8.d
        zmm10[0].d = zmm10[0].d f+ zmm7[0].d
        var_124_1.d = zmm6.d
        zmm11.d = zmm11.d f+ zmm6.d
        int32_t var_128_2 = zmm7[0].d
        zmm6 = zx.o(0)
        var_138 = zmm9.d
        int32_t var_134_3 = zmm10[0].d
        var_130_1.d = zmm11.d
        var_124_1:4.d = 0
        var_100_1[0].d = 0
        
        if (r11_2 != 0)
            void* rax_29 = *(r13_1 + 0x20)
            void* r8_5 = r13_1 + 0x10
            
            if (rax_29 != 0)
                r8_5 = rax_29
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_2 - 1)
            int32_t rdx_15 = *r8_5
            
            if (rdx_15 != 0)
            label_1409e68ff:
                int32_t rax_36 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_36)
                var_118_1:4.d = rax_36
                int32_t rax_37
                
                if (rax_36 == 0)
                    rax_37 = 0x20
                else
                    rax_37 = 0x1f - temp0_5
                
                var_110_1:0xc.d = rcx_14 - rax_37 + 0x1f
                
                if (rcx_14 - rax_37 + 0x1f s> r11_2)
                    var_110_1:0xc.d = r11_2
            else
                while (true)
                    int64_t rdx_16 = sx.q(rsi_2)
                    rcx_14 += 0x20
                    rsi_2 += 1
                    var_100_1[0].d = rcx_14
                    var_118_1.d = rsi_2
                    
                    if (rdx_16.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        var_110_1:0xc.d = r11_2
                        break
                    
                    rdx_15 = *(r8_5 + (rdx_16 << 2) + 4)
                    var_110_1:8.d = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_1409e68ff
        
        int32_t rdx_18 = *(r13_1 + 0x28)
        zmm2 = var_110_1
        double var_b0_1[0x2] = zmm2
        int32_t rsi_3 = 0xffffffff << (rdx_18.b & 0x1f)
        uint128_t var_c0_1 = var_118_1.o
        int32_t r8_7 = rdx_18 s>> 5
        int32_t r9_6 = rdx_18 & 0xffffffe0
        int64_t var_d0_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_110_1:8.d = rsi_3
        var_110_1:0xc.d = rdx_18
        var_f0 = r13_1.o
        uint128_t var_e0_2 = var_c0_1
        
        if (rdx_18 != r11_2)
            void* rax_39 = *(r13_1 + 0x20)
            void* r10_2 = r13_1 + 0x10
            
            if (rax_39 != 0)
                r10_2 = rax_39
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_2 - 1)
            int32_t rdx_22 = *(r10_2 + (sx.q(r8_7) << 2)) & rsi_3
            
            if (rdx_22 != 0)
            label_1409e69e3:
                int32_t rax_46 = neg.d(rdx_22) & rdx_22
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_46)
                int32_t r15_3
                
                if (rax_46 == 0)
                    r15_3 = 0x20
                else
                    r15_3 = 0x1f - temp0_7
                
                var_110_1:0xc.d = r9_6 - r15_3 + 0x1f
                
                if (r9_6 - r15_3 + 0x1f s> r11_2)
                    var_110_1:0xc.d = r11_2
            else
                while (true)
                    int64_t rcx_19 = sx.q(r8_7)
                    r9_6 += 0x20
                    r8_7 += 1
                    
                    if (rcx_19.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_22 = *(r10_2 + (rcx_19 << 2) + 4)
                    var_110_1:8.d = 0xffffffff
                    
                    if (rdx_22 != 0)
                        goto label_1409e69e3
                
                var_110_1:0xc.d = r11_2
        
        while (true)
            int32_t rax_48 = var_e0_2:0xc.d
            int64_t rcx_21 = var_e0_2.q
            
            if (rax_48 == (var_110_1:8.q u>> 0x20).d && rcx_21 == r13_1 + 0x10 && var_f0.q == r13_1)
                break
            
            int32_t rdi_2 = data_143a1c6b4
            
            if (rax_48 s< *(rcx_21 + 0x18))
                rdi_2 = rax_48
            
            if (sub_141cdff60(*(arg2 + 0x28), rdi_2) == 0)
                int64_t rdx_24 = sx.q(rdi_2) * 3
                int64_t rcx_23 = **(rbx_2 + 0x18)
                zmm2 = *(rcx_23 + (rdx_24 << 2) + 4)
                zmm1.d = (*(rcx_23 + (rdx_24 << 2))).d f- zmm9.d
                zmm2[0].d = zmm2[0].d f- zmm10[0].d
                zmm0.d = (*(rcx_23 + (rdx_24 << 2) + 8)).d f- zmm11.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm2[0].d = zmm2[0].d f* zmm2[0].d
                zmm0.d = zmm0.d f* zmm0.d
                zmm2[0].d = zmm2[0].d f+ zmm1.d
                zmm2[0].d = zmm2[0].d f+ zmm0.d
                uint128_t temp0_8 = _mm_sqrt_ss(0, zmm2[0].d)
                
                if (not(temp0_8.d f< zmm6.d))
                    zmm6 = temp0_8
            
            var_e0_2:8.d &= not.d(var_f0:0xc.d)
            sub_14059bdd0(&var_f0:8)
        
        zmm1 = zx.o(var_128_2.q)
        zmm0 = var_138.o
        rbx = arg1
        var_124_1:4.d = zmm6.d
        rcx_1 = var_124_1:4.d
    else
        int64_t* rax_1 = sub_1409b2cf0(arg2, &var_138)
        zmm0 = *rax_1
        rcx_1 = rax_1[3].d
        zmm1 = zx.o(rax_1[2])
    *(rbx + 0xc0) = zmm0
    *(rbx + 0xd0) = zmm1.q
    *(rbx + 0xd8) = rcx_1

void* rcx_25 = *(*(rbx + 0x28) + 0x50)
*(rcx_25 + 0x40) = *(rbx + 0xc0)
*(rcx_25 + 0x50) = *(rbx + 0xd0)
*(rcx_25 + 0x58) = *(rbx + 0xd8)
return sub_14235b050(*(rbx + 0x28)) __tailcall
