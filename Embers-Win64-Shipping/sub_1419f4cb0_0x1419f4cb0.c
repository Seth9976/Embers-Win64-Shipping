// 函数: sub_1419f4cb0
// 地址: 0x1419f4cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rdi = arg1
int32_t r12 = arg2
uint128_t zmm6

if (arg2 s<= 1 && data_143f287b0 == 0)
    char rax_2
    rax_2, zmm6 = sub_141a062c0()
    data_143f287b0 = rax_2

uint64_t rsi = 0
int32_t rax_4 = *(rdi + 0x1c) * *(rdi + 0x20)
uint64_t var_80 = 0
uint64_t var_a8 = 0
int32_t var_9c = 0
int32_t rax_5 = rax_4 * rax_4
int32_t var_a0 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_a8)
    rsi = var_a8
    var_80 = rsi

uint64_t result = memset(rsi, 0xff, sx.q(*(rdi + 0x10)) * 2)
int32_t r9 = 0
int32_t r14 = *(rdi + 0x18)
int32_t r8_3 = *(rdi + 0x1c) - 1
int32_t i = r14 - 1
int32_t var_b0 = r8_3
int16_t rbx = 0
int32_t i_1 = i
int16_t var_118 = 0

if (r14 - 1 s>= 0)
    uint128_t var_38_1 = zmm6
    int64_t i_2 = sx.q(i)
    int128_t zmm7 = 0x3f000000
    int64_t i_3 = i_2
    
    do
        int32_t rax_6 = *(rdi + 0x20)
        int32_t rsi_3 = (*(rdi + 0x1c) s>> i.b) - 1
        int64_t var_110 = 0
        int32_t var_bc_1 = rsi_3
        int64_t var_108_1 = 0
        uint32_t rdx_1 = rax_6 * rax_6 * rsi_3 * rsi_3 * 3
        
        if (rdx_1 != neg.d(rdx_1))
            sub_1405947f0(&var_110, rdx_1 * 2)
            r8_3 = var_b0
            r9 = 0
        
        int64_t r11_2 = *(rdi + 0x48)
        int64_t r13_1 = i_2 * 5
        int64_t var_78_1 = r13_1
        int64_t var_70_1 = r11_2
        int32_t var_100_1 = 0
        *(r11_2 + (r13_1 << 3) + 0x20) = 0x7fffffff
        int32_t rcx_4 = *(rdi + 0x20)
        int16_t var_fc
        int32_t var_b8
        
        if (r12 s> 1)
            int32_t var_c0_2 = 0
            int64_t var_90_2 = 0
            int32_t r10_1 = 0
            int64_t r8_8 = 0
            
            if (rcx_4 s> 0)
                int32_t rax_48
                
                do
                    var_b8 = 0
                    int32_t rdx_24 = 0
                    rax_48 = rcx_4
                    
                    if (rcx_4 s> 0)
                        int64_t r14_4 = (r8_8 + i_2 * 0xa) << 2
                        
                        do
                            int32_t* r15_3 = *(rdi + 0x48)
                            int32_t r8_9 = 0
                            int32_t var_d4_2 = 0
                            *(r15_3 + r14_4 + 0x10) = 0
                            *(r15_3 + r14_4) = 0x7fffffff
                            
                            if (rsi_3 s> 0)
                                do
                                    int16_t r9_5 = r8_9.w + 1
                                    int32_t var_cc_2 = 0
                                    var_fc = r9_5
                                    int32_t rdx_25 = 0
                                    
                                    do
                                        int16_t rcx_37 = *(rdi + 0x1c)
                                        int64_t rsi_7 = sx.q(var_108_1.d)
                                        int32_t rax_51 = (rsi_7 + 1).d
                                        var_108_1.d = rax_51
                                        int16_t rdi_7 = rcx_37 * r9_5 + rdx_25.w + r10_1.w
                                        int16_t rbx_6 = r8_9.w * rcx_37 + rdx_25.w + r10_1.w
                                        
                                        if (rax_51 s> var_108_1:4.d)
                                            sub_140594770(&var_110)
                                        
                                        *(var_110 + (rsi_7 << 1)) = rbx_6
                                        int64_t rsi_8 = sx.q(var_108_1.d)
                                        int32_t rax_53 = (rsi_8 + 1).d
                                        var_108_1.d = rax_53
                                        
                                        if (rax_53 s> var_108_1:4.d)
                                            sub_140594770(&var_110)
                                        
                                        *(var_110 + (rsi_8 << 1)) = rdi_7 + 1
                                        int64_t rsi_9 = sx.q(var_108_1.d)
                                        int32_t rax_55 = (rsi_9 + 1).d
                                        var_108_1.d = rax_55
                                        
                                        if (rax_55 s> var_108_1:4.d)
                                            sub_140594770(&var_110)
                                        
                                        *(var_110 + (rsi_9 << 1)) = rbx_6 + 1
                                        int64_t rsi_10 = sx.q(var_108_1.d)
                                        int32_t rax_57 = (rsi_10 + 1).d
                                        var_108_1.d = rax_57
                                        
                                        if (rax_57 s> var_108_1:4.d)
                                            sub_140594770(&var_110)
                                        
                                        *(var_110 + (rsi_10 << 1)) = rbx_6
                                        int64_t rsi_11 = sx.q(var_108_1.d)
                                        int32_t rax_59 = (rsi_11 + 1).d
                                        var_108_1.d = rax_59
                                        
                                        if (rax_59 s> var_108_1:4.d)
                                            sub_140594770(&var_110)
                                        
                                        *(var_110 + (rsi_11 << 1)) = rdi_7
                                        int64_t rsi_12 = sx.q(var_108_1.d)
                                        int32_t rax_61 = (rsi_12 + 1).d
                                        var_108_1.d = rax_61
                                        
                                        if (rax_61 s> var_108_1:4.d)
                                            sub_140594770(&var_110)
                                        
                                        r8_9 = var_d4_2
                                        r9_5 = var_fc
                                        r10_1 = var_100_1
                                        *(var_110 + (rsi_12 << 1)) = rdi_7 + 1
                                        rsi_3 = var_bc_1
                                        uint32_t rdx_32 = zx.d(rbx_6)
                                        uint32_t rcx_44 = rdx_32
                                        
                                        if (*(r15_3 + r14_4 + 0x10) s>= rdx_32)
                                            rcx_44 = *(r15_3 + r14_4 + 0x10)
                                        
                                        *(r15_3 + r14_4 + 0x10) = rcx_44
                                        
                                        if (*(r15_3 + r14_4) s<= rdx_32)
                                            rdx_32 = *(r15_3 + r14_4)
                                        
                                        *(r15_3 + r14_4) = rdx_32
                                        uint32_t rdx_33 = zx.d(rbx_6 + 1)
                                        uint32_t rcx_45 = rdx_33
                                        
                                        if (*(r15_3 + r14_4 + 0x10) s>= rdx_33)
                                            rcx_45 = *(r15_3 + r14_4 + 0x10)
                                        
                                        *(r15_3 + r14_4 + 0x10) = rcx_45
                                        
                                        if (*(r15_3 + r14_4) s<= rdx_33)
                                            rdx_33 = *(r15_3 + r14_4)
                                        
                                        *(r15_3 + r14_4) = rdx_33
                                        uint32_t rdx_34 = zx.d(rdi_7 + 1)
                                        uint32_t rcx_46 = rdx_34
                                        
                                        if (*(r15_3 + r14_4 + 0x10) s>= rdx_34)
                                            rcx_46 = *(r15_3 + r14_4 + 0x10)
                                        
                                        *(r15_3 + r14_4 + 0x10) = rcx_46
                                        
                                        if (*(r15_3 + r14_4) s<= rdx_34)
                                            rdx_34 = *(r15_3 + r14_4)
                                        
                                        *(r15_3 + r14_4) = rdx_34
                                        uint32_t rdx_35 = zx.d(rdi_7)
                                        uint32_t rcx_47 = rdx_35
                                        rdi = arg1
                                        
                                        if (*(r15_3 + r14_4 + 0x10) s>= rdx_35)
                                            rcx_47 = *(r15_3 + r14_4 + 0x10)
                                        
                                        *(r15_3 + r14_4 + 0x10) = rcx_47
                                        
                                        if (*(r15_3 + r14_4) s<= rdx_35)
                                            rdx_35 = *(r15_3 + r14_4)
                                        
                                        *(r15_3 + r14_4) = rdx_35
                                        rdx_25 = var_cc_2 + 1
                                        var_cc_2 = rdx_25
                                    while (rdx_25 s< rsi_3)
                                    
                                    r8_9 += 1
                                    var_d4_2 = r8_9
                                while (r8_9 s< rsi_3)
                                
                                rdx_24 = var_b8
                                r13_1 = var_78_1
                                r11_2 = var_70_1
                            
                            int32_t rcx_48 = *(r15_3 + r14_4 + 0x10)
                            
                            if (*(r11_2 + (r13_1 << 3) + 0x24) s>= rcx_48)
                                rcx_48 = *(r11_2 + (r13_1 << 3) + 0x24)
                            
                            *(r11_2 + (r13_1 << 3) + 0x24) = rcx_48
                            int32_t rcx_49 = *(r15_3 + r14_4)
                            
                            if (*(r11_2 + (r13_1 << 3) + 0x20) s<= rcx_49)
                                rcx_49 = *(r11_2 + (r13_1 << 3) + 0x20)
                            
                            rdx_24 += 1
                            *(r11_2 + (r13_1 << 3) + 0x20) = rcx_49
                            r14_4 += 8
                            int32_t rax_63 = *(rdi + 0x1c)
                            var_b8 = rdx_24
                            r10_1 += rax_63 * rax_63
                            rax_48 = *(rdi + 0x20)
                            var_100_1 = r10_1
                        while (rdx_24 s< rax_48)
                        
                        r8_8 = var_90_2
                        r9 = var_c0_2
                        i_2 = i_3
                    
                    r9 += 1
                    r8_8 += 1
                    var_c0_2 = r9
                    rcx_4 = rax_48
                    var_90_2 = r8_8
                while (r9 s< rax_48)
                i = i_1
        else
            int32_t r8_4 = 0
            zmm6.d = _mm_cvtepi32_ps(zx.o(r8_3)).d f/ _mm_cvtepi32_ps(zx.o(rsi_3)).d
            
            if (rcx_4 s> 0)
                int32_t rax_10
                
                do
                    int32_t var_cc_1 = 0
                    int32_t r14_1 = 0
                    rax_10 = rcx_4
                    
                    if (rcx_4 s> 0)
                        int64_t r12_1 = sx.q(r8_4)
                        int64_t rdi_1 = i_2 * 5
                        int64_t var_68_1 = rdi_1
                        int64_t var_90_1 = r12_1
                        uint32_t rcx_6 = rsi_3 * rsi_3 * 6
                        uint32_t var_c0_1 = rcx_6
                        
                        do
                            uint64_t var_f8 = 0
                            int64_t var_f0_1 = 0
                            
                            if (rcx_6 != 0)
                                sub_1405947f0(&var_f8, rcx_6)
                                r8_4 = var_100_1
                            
                            int64_t rcx_8 = sx.q(r14_1)
                            int64_t r15_2 = *(arg1 + 0x48)
                            int64_t r13_2 = r12_1 + ((rcx_8 + 2 + rdi_1) << 1)
                            *(r15_2 + (r13_2 << 2)) = 0
                            int64_t rdi_2 = r12_1 + ((rdi_1 + rcx_8) << 1)
                            int32_t rcx_9 = 0
                            var_b8.q = rdi_2
                            *(r15_2 + (rdi_2 << 2)) = 0x7fffffff
                            var_fc.d = 0
                            
                            if (rsi_3 s> 0)
                                int32_t rdx_6 = (zx.d(r14_1.b) | sx.d(r8_4.b) << 8) << 8
                                int32_t var_d4_1 = rdx_6
                                
                                do
                                    int32_t r12_2 = 0
                                    
                                    do
                                        int64_t var_60
                                        int64_t* r11_1 = &var_60
                                        
                                        for (int32_t j = 0; j s< 4; )
                                            int16_t r8_5 = (*(arg1 + 0x1c)).w
                                            uint128_t zmm1
                                            zmm1.d =
                                                _mm_cvtepi32_ps(zx.o((j s>> 1) + rcx_9)).d f* zmm6.d
                                            uint128_t zmm2
                                            zmm2.d =
                                                _mm_cvtepi32_ps(zx.o((j & 1) + r12_2)).d f* zmm6.d
                                            zmm1.d = zmm1.d f+ zmm1.d
                                            zmm2.d = zmm2.d f+ zmm2.d
                                            zmm1.d = zmm1.d f+ zmm7.d
                                            zmm2.d = zmm2.d f+ zmm7.d
                                            int32_t r9_4 =
                                                (zx.d((int.d(zmm1.d) s>> 1).b) | rdx_6) << 8
                                                | zx.d((int.d(zmm2.d) s>> 1).b)
                                            int16_t rcx_13 = ((r9_4 u>> 0x18).w * r8_5
                                                + ((r9_4 u>> 8).w & 0xff)) * *(arg1 + 0x20)
                                            uint16_t rax_35 = (r9_4 u>> 0x10).w
                                            r9_4.w &= 0xff
                                            uint64_t rdx_9 =
                                                zx.q((rcx_13 + (rax_35 & 0xff)) * r8_5 + r9_4.w)
                                            int16_t rax_37 = *(var_80 + (rdx_9 << 1))
                                            
                                            if (rax_37 == 0xffff)
                                                rax_37 = rbx
                                                *(var_80 + (rdx_9 << 1)) = rbx
                                                rbx += 1
                                            
                                            *r11_1 = rax_37
                                            uint32_t rdx_10 = zx.d(rax_37)
                                            uint32_t rcx_17 = rdx_10
                                            
                                            if (*(r15_2 + (r13_2 << 2)) s>= rdx_10)
                                                rcx_17 = *(r15_2 + (r13_2 << 2))
                                            
                                            *(r15_2 + (r13_2 << 2)) = rcx_17
                                            rcx_9 = var_fc.d
                                            
                                            if (*(r15_2 + (rdi_2 << 2)) s<= rdx_10)
                                                rdx_10 = *(r15_2 + (rdi_2 << 2))
                                            
                                            j += 1
                                            r11_1 += 2
                                            *(r15_2 + (rdi_2 << 2)) = rdx_10
                                            rdx_6 = var_d4_1
                                        
                                        var_118 = rbx
                                        int64_t rbx_1 = sx.q(var_f0_1.d)
                                        int32_t rdi_3 = (rbx_1 + 1).d
                                        var_f0_1.d = rdi_3
                                        
                                        if (rdi_3 s> var_f0_1:4.d)
                                            sub_140594770(&var_f8)
                                            rdi_3 = var_f0_1.d
                                        
                                        int32_t rsi_5 = rdi_3 + 1
                                        int16_t rbx_2 = var_60.w
                                        var_f0_1.d = rsi_5
                                        *(var_f8 + (rbx_1 << 1)) = rbx_2
                                        
                                        if (rsi_5 s> var_f0_1:4.d)
                                            sub_140594770(&var_f8)
                                            rsi_5 = var_f0_1.d
                                        
                                        int16_t r14_2 = var_60:6.w
                                        int32_t rdi_4 = rsi_5 + 1
                                        var_f0_1.d = rdi_4
                                        *(var_f8 + (sx.q(rdi_3) << 1)) = r14_2
                                        
                                        if (rdi_4 s> var_f0_1:4.d)
                                            sub_140594770(&var_f8)
                                            rdi_4 = var_f0_1.d
                                        
                                        int32_t rsi_6 = rdi_4 + 1
                                        var_f0_1.d = rsi_6
                                        *(var_f8 + (sx.q(rsi_5) << 1)) = var_60:2.w
                                        
                                        if (rsi_6 s> var_f0_1:4.d)
                                            sub_140594770(&var_f8)
                                            rsi_6 = var_f0_1.d
                                        
                                        *(var_f8 + (sx.q(rdi_4) << 1)) = rbx_2
                                        int32_t rbx_3 = rsi_6 + 1
                                        var_f0_1.d = rbx_3
                                        
                                        if (rbx_3 s> var_f0_1:4.d)
                                            sub_140594770(&var_f8)
                                            rbx_3 = var_f0_1.d
                                        
                                        *(var_f8 + (sx.q(rsi_6) << 1)) = var_60:4.w
                                        var_f0_1.d = rbx_3 + 1
                                        
                                        if (rbx_3 + 1 s> var_f0_1:4.d)
                                            sub_140594770(&var_f8)
                                        
                                        r12_2 += 1
                                        rsi_3 = var_bc_1
                                        rdi_2 = var_b8.q
                                        rdx_6 = var_d4_1
                                        rbx = var_118
                                        *(var_f8 + (sx.q(rbx_3) << 1)) = r14_2
                                        rcx_9 = var_fc.d
                                    while (r12_2 s< rsi_3)
                                    
                                    rcx_9 += 1
                                    var_fc.d = rcx_9
                                while (rcx_9 s< rsi_3)
                                
                                r14_1 = var_cc_1
                                r12_1 = var_90_1
                            
                            int32_t rcx_30 = *(r15_2 + (r13_2 << 2))
                            var_a8 = 0
                            var_a0.q = 0
                            
                            if (*(var_70_1 + (var_78_1 << 3) + 0x24) s>= rcx_30)
                                rcx_30 = *(var_70_1 + (var_78_1 << 3) + 0x24)
                            
                            *(var_70_1 + (var_78_1 << 3) + 0x24) = rcx_30
                            int32_t rcx_31 = *(r15_2 + (rdi_2 << 2))
                            
                            if (*(var_70_1 + (var_78_1 << 3) + 0x20) s<= rcx_31)
                                rcx_31 = *(var_70_1 + (var_78_1 << 3) + 0x20)
                            
                            *(var_70_1 + (var_78_1 << 3) + 0x20) = rcx_31
                            zmm6, zmm7 = sub_1419f7fc0(&var_f8, &var_a8, 0x20)
                            uint64_t rdi_5 = var_a8
                            
                            if (var_a0 != 0)
                                int32_t rax_45 = var_108_1.d
                                int32_t rdx_21 = var_a0 + rax_45
                                
                                if (rdx_21 s> var_108_1:4.d)
                                    sub_1405947f0(&var_110, rdx_21)
                                    rax_45 = var_108_1.d
                                
                                memcpy(var_110 + (sx.q(rax_45) << 1), rdi_5, var_a0 * 2)
                                var_108_1.d += var_a0
                            
                            if (rdi_5 != 0)
                                sub_140a74f90(rdi_5)
                            
                            uint64_t rcx_36 = var_f8
                            
                            if (rcx_36 != 0)
                                sub_140a74f90(rcx_36)
                            
                            r14_1 += 1
                            rbx = var_118
                            rcx_6 = var_c0_1
                            rdi_1 = var_68_1
                            rax_10 = *(arg1 + 0x20)
                            r8_4 = var_100_1
                            var_cc_1 = r14_1
                        while (r14_1 s< rax_10)
                        
                        i_2 = i_3
                    
                    r8_4 += 1
                    rcx_4 = rax_10
                    var_100_1 = r8_4
                while (r8_4 s< rax_10)
                rdi = arg1
                i = i_1
        void*** rbx_7 = *(*(rdi + 0x40) + (i_2 << 3))
        
        if (rbx_7 == 0)
            void*** rax_66 = j_sub_140a82f30(zx.q((&rbx_7[9]).d))
            rbx_7 = rax_66
            
            if (rax_66 == 0)
                rbx_7 = nullptr
            else
                rax_66[1].d = 0xffffffff
                *(rax_66 + 0xc) = 4
                rax_66[2] = 0
                rax_66[3] = 0
                *rbx_7 = &data_143020d20
                __builtin_memset(&rbx_7[5], 0, 0x11)
                rbx_7[4] = &data_142da8520
                rbx_7[8].d = 0
        
        (*rbx_7)[0x13](rbx_7, &var_110)
        
        if (arg3 == 0)
            (*rbx_7)[5](rbx_7)
        
        result = *(rdi + 0x40)
        *(result + (i_2 << 3)) = rbx_7
        
        if (data_143f0f21f != 0)
            uint64_t rdx_38 = zx.q(data_143f0f1a0)
            result = zx.q(*(&data_143f025fc + sx.q(rdx_38.d) * 0x14) u>> 0x13)
            
            if ((result.b & 1) != 0)
                result = data_143f13cd8
                
                if (test_bit(result, rdx_38))
                    int64_t var_e8 = 0
                    int32_t r13_5 = 0
                    int64_t var_e0_1 = 0
                    
                    if (rsi_3 s> 0)
                        do
                            int16_t r8_10 = r13_5.w + 1
                            int32_t rsi_13 = 0
                            var_fc = r8_10
                            
                            do
                                int64_t r14_5 = sx.q(var_e0_1.d)
                                int16_t rdx_40 = (*(rdi + 0x1c) s>> i.b).w
                                int32_t rax_73 = (r14_5 + 1).d
                                var_e0_1.d = rax_73
                                int16_t rbx_9 = rdx_40 * r13_5.w + rsi_13.w
                                int16_t rdi_9 = r8_10 * rdx_40 + rsi_13.w
                                
                                if (rax_73 s> var_e0_1:4.d)
                                    sub_140594770(&var_e8)
                                
                                *(var_e8 + (r14_5 << 1)) = rbx_9
                                int64_t r14_6 = sx.q(var_e0_1.d)
                                int32_t rax_75 = (r14_6 + 1).d
                                var_e0_1.d = rax_75
                                
                                if (rax_75 s> var_e0_1:4.d)
                                    sub_140594770(&var_e8)
                                
                                *(var_e8 + (r14_6 << 1)) = rdi_9 + 1
                                int64_t r14_7 = sx.q(var_e0_1.d)
                                int32_t rax_77 = (r14_7 + 1).d
                                var_e0_1.d = rax_77
                                
                                if (rax_77 s> var_e0_1:4.d)
                                    sub_140594770(&var_e8)
                                
                                *(var_e8 + (r14_7 << 1)) = rbx_9 + 1
                                int64_t r14_8 = sx.q(var_e0_1.d)
                                int32_t rax_79 = (r14_8 + 1).d
                                var_e0_1.d = rax_79
                                
                                if (rax_79 s> var_e0_1:4.d)
                                    sub_140594770(&var_e8)
                                
                                *(var_e8 + (r14_8 << 1)) = rbx_9
                                int64_t rbx_10 = sx.q(var_e0_1.d)
                                int32_t rax_81 = (rbx_10 + 1).d
                                var_e0_1.d = rax_81
                                
                                if (rax_81 s> var_e0_1:4.d)
                                    sub_140594770(&var_e8)
                                
                                *(var_e8 + (rbx_10 << 1)) = rdi_9
                                int64_t rbx_11 = sx.q(var_e0_1.d)
                                int32_t rax_83 = (rbx_11 + 1).d
                                var_e0_1.d = rax_83
                                
                                if (rax_83 s> var_e0_1:4.d)
                                    sub_140594770(&var_e8)
                                
                                rsi_13 += 1
                                r8_10 = var_fc
                                rdi = arg1
                                i = i_1
                                *(var_e8 + (rbx_11 << 1)) = rdi_9 + 1
                            while (rsi_13 s< var_bc_1)
                            
                            r13_5 += 1
                        while (r13_5 s< var_bc_1)
                        
                        i_2 = i_3
                    
                    void*** rax_86 = j_sub_140a82f30(0x48)
                    void*** rbx_12 = rax_86
                    
                    if (rax_86 == 0)
                        rbx_12 = nullptr
                    else
                        rax_86[1].d = 0xffffffff
                        *(rax_86 + 0xc) = 4
                        rax_86[2] = 0
                        rax_86[3] = 0
                        *rbx_12 = &data_143020d20
                        __builtin_memset(&rbx_12[5], 0, 0x11)
                        rbx_12[4] = &data_142da8520
                        rbx_12[8].d = 0
                    
                    (*rbx_12)[0x13](rbx_12, &var_e8)
                    (*rbx_12)[5](rbx_12)
                    result = *(rdi + 0x70)
                    *(result + (i_2 << 3)) = rbx_12
                    int64_t rcx_63 = var_e8
                    
                    if (rcx_63 != 0)
                        result = sub_140a74f90(rcx_63)
        
        int64_t rcx_64 = var_110
        
        if (rcx_64 != 0)
            result = sub_140a74f90(rcx_64)
        
        i_2 -= 1
        rbx = var_118
        i = i_1 - 1
        r8_3 = var_b0
        r9 = 0
        r12 = arg2
        i_1 = i
        i_3 = i_2
    while (i s>= 0)
    
    rsi = var_80

if (rsi != 0)
    result = sub_140a74f90(rsi)

__security_check_cookie(rax_1 ^ &var_138)
return result
