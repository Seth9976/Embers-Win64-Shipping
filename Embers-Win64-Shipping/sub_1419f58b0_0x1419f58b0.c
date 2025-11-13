// 函数: sub_1419f58b0
// 地址: 0x1419f58b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* r12 = arg1
int32_t r15 = arg2
uint128_t zmm6

if (arg2 s<= 1 && data_143f287b0 == 0)
    char rax_2
    rax_2, zmm6 = sub_141a062c0()
    data_143f287b0 = rax_2

uint64_t rdi = 0
int32_t rax_4 = *(r12 + 0x1c) * *(r12 + 0x20)
uint64_t var_90 = 0
uint64_t var_b0 = 0
int32_t var_a4 = 0
int32_t rax_5 = rax_4 * rax_4
int32_t var_a8 = rax_5

if (rax_5 s> 0)
    sub_1405a4cf0(&var_b0)
    rdi = var_b0
    var_90 = rdi

uint64_t result = memset(rdi, 0xff, sx.q(*(r12 + 0x10)) << 2)
int32_t rbx = 0
int32_t r14 = *(r12 + 0x18)
int32_t r8_3 = *(r12 + 0x1c) - 1
int32_t i = r14 - 1
int32_t var_e0 = 0
int32_t i_1 = i
int32_t var_b8 = r8_3

if (r14 - 1 s>= 0)
    uint128_t var_38_1 = zmm6
    int64_t i_2 = sx.q(i)
    int128_t zmm7 = 0x3f000000
    int64_t i_3 = i_2
    
    do
        int32_t rax_6 = *(r12 + 0x20)
        int32_t rsi_3 = (*(r12 + 0x1c) s>> i.b) - 1
        int64_t var_128 = 0
        int32_t var_c8_1 = rsi_3
        int64_t var_120_1 = 0
        uint32_t rdx_1 = rax_6 * rax_6 * rsi_3 * rsi_3 * 3
        
        if (rdx_1 != neg.d(rdx_1))
            sub_1405dadb0(&var_128, rdx_1 * 2)
            r8_3 = var_b8
        
        int64_t r11_2 = *(r12 + 0x48)
        int64_t r13_1 = i_2 * 5
        int64_t var_88_1 = r13_1
        int64_t var_80_1 = r11_2
        *(r11_2 + (r13_1 << 3) + 0x20) = 0x7fffffff
        int32_t rcx_4 = *(r12 + 0x20)
        
        if (r15 s> 1)
            int32_t r9_8 = 0
            int32_t r10_1 = 0
            int64_t r8_7 = 0
            int32_t var_118_2 = 0
            int32_t var_d8_2 = 0
            int64_t var_c0_2 = 0
            
            if (rcx_4 s> 0)
                int32_t rax_43
                
                do
                    int32_t rdx_24 = 0
                    rax_43 = rcx_4
                    int32_t var_ec_2 = 0
                    
                    if (rcx_4 s> 0)
                        int64_t rbx_6 = (r8_7 + i_2 * 0xa) << 2
                        
                        do
                            int64_t rdi_7 = *(r12 + 0x48)
                            int32_t r8_8 = 0
                            int32_t var_e8_2 = 0
                            *(rbx_6 + rdi_7 + 0x10) = 0
                            *(rbx_6 + rdi_7) = 0x7fffffff
                            
                            if (rsi_3 s> 0)
                                do
                                    int32_t rdx_25 = 0
                                    int32_t var_dc_2 = 0
                                    
                                    do
                                        int64_t r15_3 = sx.q(var_120_1.d)
                                        int32_t rax_45 = (r15_3 + 1).d
                                        int32_t r14_6 = (r8_8 + 1) * *(r12 + 0x1c) + rdx_25 + r9_8
                                        var_120_1.d = rax_45
                                        int32_t rsi_9 = *(r12 + 0x1c) * r8_8 + rdx_25 + r9_8
                                        int32_t r12_2 = r14_6 + 1
                                        int32_t r13_4 = rsi_9 + 1
                                        
                                        if (rax_45 s> var_120_1:4.d)
                                            sub_1405a4cf0(&var_128)
                                        
                                        *(var_128 + (r15_3 << 2)) = rsi_9
                                        int64_t r15_4 = sx.q(var_120_1.d)
                                        int32_t rax_47 = (r15_4 + 1).d
                                        var_120_1.d = rax_47
                                        
                                        if (rax_47 s> var_120_1:4.d)
                                            sub_1405a4cf0(&var_128)
                                        
                                        *(var_128 + (r15_4 << 2)) = r12_2
                                        int64_t r15_5 = sx.q(var_120_1.d)
                                        int32_t rax_49 = (r15_5 + 1).d
                                        var_120_1.d = rax_49
                                        
                                        if (rax_49 s> var_120_1:4.d)
                                            sub_1405a4cf0(&var_128)
                                        
                                        *(var_128 + (r15_5 << 2)) = r13_4
                                        int64_t r15_6 = sx.q(var_120_1.d)
                                        int32_t rax_51 = (r15_6 + 1).d
                                        var_120_1.d = rax_51
                                        
                                        if (rax_51 s> var_120_1:4.d)
                                            sub_1405a4cf0(&var_128)
                                        
                                        *(var_128 + (r15_6 << 2)) = rsi_9
                                        int64_t r15_7 = sx.q(var_120_1.d)
                                        int32_t rax_53 = (r15_7 + 1).d
                                        var_120_1.d = rax_53
                                        
                                        if (rax_53 s> var_120_1:4.d)
                                            sub_1405a4cf0(&var_128)
                                        
                                        *(var_128 + (r15_7 << 2)) = r14_6
                                        int64_t r15_8 = sx.q(var_120_1.d)
                                        int32_t rax_55 = (r15_8 + 1).d
                                        var_120_1.d = rax_55
                                        
                                        if (rax_55 s> var_120_1:4.d)
                                            sub_1405a4cf0(&var_128)
                                        
                                        int32_t rcx_42 = rsi_9
                                        r8_8 = var_e8_2
                                        r9_8 = var_118_2
                                        *(var_128 + (r15_8 << 2)) = r12_2
                                        
                                        if (*(rbx_6 + rdi_7 + 0x10) s>= rsi_9)
                                            rcx_42 = *(rbx_6 + rdi_7 + 0x10)
                                        
                                        *(rbx_6 + rdi_7 + 0x10) = rcx_42
                                        int32_t rcx_43 = r13_4
                                        
                                        if (*(rbx_6 + rdi_7) s<= rsi_9)
                                            rsi_9 = *(rbx_6 + rdi_7)
                                        
                                        *(rbx_6 + rdi_7) = rsi_9
                                        rsi_3 = var_c8_1
                                        
                                        if (*(rbx_6 + rdi_7 + 0x10) s>= r13_4)
                                            rcx_43 = *(rbx_6 + rdi_7 + 0x10)
                                        
                                        *(rbx_6 + rdi_7 + 0x10) = rcx_43
                                        int32_t rcx_44 = r12_2
                                        
                                        if (*(rbx_6 + rdi_7) s<= r13_4)
                                            r13_4 = *(rbx_6 + rdi_7)
                                        
                                        *(rbx_6 + rdi_7) = r13_4
                                        
                                        if (*(rbx_6 + rdi_7 + 0x10) s>= r12_2)
                                            rcx_44 = *(rbx_6 + rdi_7 + 0x10)
                                        
                                        *(rbx_6 + rdi_7 + 0x10) = rcx_44
                                        int32_t rcx_45 = r14_6
                                        
                                        if (*(rbx_6 + rdi_7) s<= r12_2)
                                            r12_2 = *(rbx_6 + rdi_7)
                                        
                                        *(rbx_6 + rdi_7) = r12_2
                                        r12 = arg1
                                        
                                        if (*(rbx_6 + rdi_7 + 0x10) s>= r14_6)
                                            rcx_45 = *(rbx_6 + rdi_7 + 0x10)
                                        
                                        *(rbx_6 + rdi_7 + 0x10) = rcx_45
                                        
                                        if (*(rbx_6 + rdi_7) s<= r14_6)
                                            r14_6 = *(rbx_6 + rdi_7)
                                        
                                        rdx_25 = var_dc_2 + 1
                                        *(rbx_6 + rdi_7) = r14_6
                                        var_dc_2 = rdx_25
                                    while (rdx_25 s< rsi_3)
                                    
                                    r8_8 += 1
                                    var_e8_2 = r8_8
                                while (r8_8 s< rsi_3)
                                
                                rdx_24 = var_ec_2
                                r13_1 = var_88_1
                                r11_2 = var_80_1
                            
                            int32_t rcx_46 = *(rbx_6 + rdi_7 + 0x10)
                            
                            if (*(r11_2 + (r13_1 << 3) + 0x24) s>= rcx_46)
                                rcx_46 = *(r11_2 + (r13_1 << 3) + 0x24)
                            
                            *(r11_2 + (r13_1 << 3) + 0x24) = rcx_46
                            int32_t rcx_47 = *(rbx_6 + rdi_7)
                            
                            if (*(r11_2 + (r13_1 << 3) + 0x20) s<= rcx_47)
                                rcx_47 = *(r11_2 + (r13_1 << 3) + 0x20)
                            
                            rdx_24 += 1
                            *(r11_2 + (r13_1 << 3) + 0x20) = rcx_47
                            rbx_6 += 8
                            int32_t rax_57 = *(r12 + 0x1c)
                            var_ec_2 = rdx_24
                            r9_8 += rax_57 * rax_57
                            rax_43 = *(r12 + 0x20)
                            var_118_2 = r9_8
                        while (rdx_24 s< rax_43)
                        
                        r8_7 = var_c0_2
                        r10_1 = var_d8_2
                        i_2 = i_3
                    
                    r10_1 += 1
                    r8_7 += 1
                    var_d8_2 = r10_1
                    rcx_4 = rax_43
                    var_c0_2 = r8_7
                while (r10_1 s< rax_43)
                i = i_1
        else
            int32_t r8_4 = 0
            int32_t var_118_1 = 0
            zmm6.d = _mm_cvtepi32_ps(zx.o(r8_3)).d f/ _mm_cvtepi32_ps(zx.o(rsi_3)).d
            
            if (rcx_4 s> 0)
                int32_t rax_10
                
                do
                    int32_t r14_1 = 0
                    rax_10 = rcx_4
                    int32_t var_dc_1 = 0
                    
                    if (rcx_4 s> 0)
                        int64_t r15_1 = sx.q(r8_4)
                        int64_t rdi_1 = i_2 * 5
                        int64_t var_70_1 = rdi_1
                        int64_t var_78_1 = r15_1
                        uint32_t rcx_6 = rsi_3 * rsi_3 * 6
                        uint32_t var_d8_1 = rcx_6
                        
                        do
                            uint64_t var_110 = 0
                            int64_t var_108_1 = 0
                            
                            if (rcx_6 != 0)
                                sub_1405dadb0(&var_110, rcx_6)
                                r8_4 = var_118_1
                            
                            int64_t r12_1 = *(r12 + 0x48)
                            int64_t rcx_8 = sx.q(r14_1)
                            int64_t r13_2 = r15_1 + ((rcx_8 + 2 + rdi_1) << 1)
                            *(r12_1 + (r13_2 << 2)) = 0
                            int32_t rcx_9 = 0
                            int64_t rdi_2 = r15_1 + ((rdi_1 + rcx_8) << 1)
                            int64_t var_c0_1 = rdi_2
                            *(r12_1 + (rdi_2 << 2)) = 0x7fffffff
                            int32_t var_ec_1 = 0
                            
                            if (rsi_3 s> 0)
                                int32_t rdx_6 = (zx.d(r14_1.b) | sx.d(r8_4.b) << 8) << 8
                                int32_t var_e8_1 = rdx_6
                                
                                do
                                    int32_t r15_2 = 0
                                    
                                    do
                                        int32_t var_68
                                        int32_t* r11_1 = &var_68
                                        
                                        for (int32_t j = 0; j s< 4; )
                                            uint128_t zmm1
                                            zmm1.d =
                                                _mm_cvtepi32_ps(zx.o((j s>> 1) + rcx_9)).d f* zmm6.d
                                            uint128_t zmm2
                                            zmm2.d =
                                                _mm_cvtepi32_ps(zx.o((j & 1) + r15_2)).d f* zmm6.d
                                            zmm1.d = zmm1.d f+ zmm1.d
                                            zmm2.d = zmm2.d f+ zmm2.d
                                            zmm1.d = zmm1.d f+ zmm7.d
                                            zmm2.d = zmm2.d f+ zmm7.d
                                            int32_t rax_30 =
                                                (zx.d((int.d(zmm1.d) s>> 1).b) | rdx_6) << 8
                                                | zx.d((int.d(zmm2.d) s>> 1).b)
                                            int32_t rax_32 = zx.d(rax_30.b) + ((
                                                (rax_30 u>> 0x18) * *(arg1 + 0x1c)
                                                + zx.d((rax_30 u>> 8).b)) * *(arg1 + 0x20)
                                                + zx.d((rax_30 u>> 0x10).b)) * *(arg1 + 0x1c)
                                            int64_t rax_33 = sx.q(rax_32)
                                            int32_t rdx_10 = *(var_90 + (rax_33 << 2))
                                            
                                            if (rdx_10 == 0xffffffff)
                                                rdx_10 = rbx
                                                *(var_90 + (rax_33 << 2)) = rbx
                                                rbx += 1
                                            
                                            *r11_1 = rdx_10
                                            int32_t rcx_17 = rdx_10
                                            
                                            if (*(r12_1 + (r13_2 << 2)) s>= rdx_10)
                                                rcx_17 = *(r12_1 + (r13_2 << 2))
                                            
                                            *(r12_1 + (r13_2 << 2)) = rcx_17
                                            rcx_9 = var_ec_1
                                            
                                            if (*(r12_1 + (rdi_2 << 2)) s<= rdx_10)
                                                rdx_10 = *(r12_1 + (rdi_2 << 2))
                                            
                                            j += 1
                                            r11_1 = &r11_1[1]
                                            *(r12_1 + (rdi_2 << 2)) = rdx_10
                                            rdx_6 = var_e8_1
                                        
                                        int64_t rdi_3 = sx.q(var_108_1.d)
                                        var_e0 = rbx
                                        int32_t rbx_1 = (rdi_3 + 1).d
                                        var_108_1.d = rbx_1
                                        
                                        if (rbx_1 s> var_108_1:4.d)
                                            sub_1405a4cf0(&var_110)
                                            rbx_1 = var_108_1.d
                                        
                                        int32_t rsi_5 = var_68
                                        *(var_110 + (rdi_3 << 2)) = rsi_5
                                        int32_t rdi_4 = rbx_1 + 1
                                        var_108_1.d = rdi_4
                                        
                                        if (rdi_4 s> var_108_1:4.d)
                                            sub_1405a4cf0(&var_110)
                                            rdi_4 = var_108_1.d
                                        
                                        int32_t rbx_2 = rdi_4 + 1
                                        var_108_1.d = rbx_2
                                        int32_t var_5c
                                        *(var_110 + (sx.q(rbx_1) << 2)) = var_5c
                                        
                                        if (rbx_2 s> var_108_1:4.d)
                                            sub_1405a4cf0(&var_110)
                                            rbx_2 = var_108_1.d
                                        
                                        int32_t rdi_5 = rbx_2 + 1
                                        var_108_1.d = rdi_5
                                        int32_t var_64
                                        *(var_110 + (sx.q(rdi_4) << 2)) = var_64
                                        
                                        if (rdi_5 s> var_108_1:4.d)
                                            sub_1405a4cf0(&var_110)
                                            rdi_5 = var_108_1.d
                                        
                                        int32_t rbx_3 = rdi_5 + 1
                                        var_108_1.d = rbx_3
                                        *(var_110 + (sx.q(rbx_2) << 2)) = rsi_5
                                        
                                        if (rbx_3 s> var_108_1:4.d)
                                            sub_1405a4cf0(&var_110)
                                            rbx_3 = var_108_1.d
                                        
                                        int32_t var_60
                                        *(var_110 + (sx.q(rdi_5) << 2)) = var_60
                                        var_108_1.d = rbx_3 + 1
                                        
                                        if (rbx_3 + 1 s> var_108_1:4.d)
                                            sub_1405a4cf0(&var_110)
                                        
                                        r15_2 += 1
                                        rsi_3 = var_c8_1
                                        rdi_2 = var_c0_1
                                        rdx_6 = var_e8_1
                                        rbx = var_e0
                                        *(var_110 + (sx.q(rbx_3) << 2)) = var_5c
                                        rcx_9 = var_ec_1
                                    while (r15_2 s< rsi_3)
                                    
                                    rcx_9 += 1
                                    var_ec_1 = rcx_9
                                while (rcx_9 s< rsi_3)
                                
                                r14_1 = var_dc_1
                                r15_1 = var_78_1
                            
                            int32_t rcx_29 = *(r12_1 + (r13_2 << 2))
                            var_b0 = 0
                            var_a8.q = 0
                            
                            if (*(var_80_1 + (var_88_1 << 3) + 0x24) s>= rcx_29)
                                rcx_29 = *(var_80_1 + (var_88_1 << 3) + 0x24)
                            
                            *(var_80_1 + (var_88_1 << 3) + 0x24) = rcx_29
                            int32_t rcx_30 = *(r12_1 + (rdi_2 << 2))
                            
                            if (*(var_80_1 + (var_88_1 << 3) + 0x20) s<= rcx_30)
                                rcx_30 = *(var_80_1 + (var_88_1 << 3) + 0x20)
                            
                            *(var_80_1 + (var_88_1 << 3) + 0x20) = rcx_30
                            zmm6, zmm7 = sub_1419f8ec0(&var_110, &var_b0, 0x20)
                            int64_t rbx_4 = sx.q(var_a8)
                            uint64_t rdi_6 = var_b0
                            
                            if (rbx_4.d != 0)
                                int32_t rax_41 = var_120_1.d
                                int32_t rdx_21 = rbx_4.d + rax_41
                                
                                if (rdx_21 s> var_120_1:4.d)
                                    sub_1405dadb0(&var_128, rdx_21)
                                    rax_41 = var_120_1.d
                                
                                memcpy(var_128 + (sx.q(rax_41) << 2), rdi_6, (rbx_4 << 2).d)
                                var_120_1.d += rbx_4.d
                            
                            if (rdi_6 != 0)
                                sub_140a74f90(rdi_6)
                            
                            uint64_t rcx_35 = var_110
                            
                            if (rcx_35 != 0)
                                sub_140a74f90(rcx_35)
                            
                            r12 = arg1
                            r14_1 += 1
                            rbx = var_e0
                            rcx_6 = var_d8_1
                            rdi_1 = var_70_1
                            rax_10 = *(r12 + 0x20)
                            r8_4 = var_118_1
                            var_dc_1 = r14_1
                        while (r14_1 s< rax_10)
                        
                        i_2 = i_3
                    
                    r8_4 += 1
                    rcx_4 = rax_10
                    var_118_1 = r8_4
                while (r8_4 s< rax_10)
                i = i_1
        
        void*** rbx_7 = *(*(r12 + 0x40) + (i_2 << 3))
        
        if (rbx_7 == 0)
            void*** rax_60 = j_sub_140a82f30(zx.q((&rbx_7[9]).d))
            rbx_7 = rax_60
            
            if (rax_60 == 0)
                rbx_7 = nullptr
            else
                rax_60[1].d = 0xffffffff
                *(rax_60 + 0xc) = 4
                rax_60[2] = 0
                rax_60[3] = 0
                *rbx_7 = &data_143020c80
                __builtin_memset(&rbx_7[5], 0, 0x11)
                rbx_7[4] = &data_142dd66a0
                rbx_7[8].d = 0
        
        (*rbx_7)[0x13](rbx_7, &var_128)
        
        if (arg3 == 0)
            (*rbx_7)[5](rbx_7)
        
        result = *(r12 + 0x40)
        *(result + (i_2 << 3)) = rbx_7
        
        if (data_143f0f21f != 0)
            uint64_t rdx_34 = zx.q(data_143f0f1a0)
            result = zx.q(*(&data_143f025fc + sx.q(rdx_34.d) * 0x14) u>> 0x13)
            
            if ((result.b & 1) != 0)
                result = data_143f13cd8
                
                if (test_bit(result, rdx_34))
                    int64_t var_100 = 0
                    int32_t r13_5 = 0
                    int64_t var_f8_1 = 0
                    
                    if (rsi_3 s> 0)
                        do
                            int32_t rbx_8 = 0
                            
                            do
                                int64_t rdi_8 = sx.q(var_f8_1.d)
                                int32_t rdx_36 = *(r12 + 0x1c) s>> i.b
                                int32_t rax_65 = (rdi_8 + 1).d
                                var_f8_1.d = rax_65
                                int32_t rsi_12 = r13_5 * rdx_36 + rbx_8
                                int32_t r15_11 = (r13_5 + 1) * rdx_36 + rbx_8
                                
                                if (rax_65 s> var_f8_1:4.d)
                                    sub_1405a4cf0(&var_100)
                                
                                *(var_100 + (rdi_8 << 2)) = rsi_12
                                int64_t rdi_9 = sx.q(var_f8_1.d)
                                int32_t rax_67 = (rdi_9 + 1).d
                                var_f8_1.d = rax_67
                                
                                if (rax_67 s> var_f8_1:4.d)
                                    sub_1405a4cf0(&var_100)
                                
                                *(var_100 + (rdi_9 << 2)) = r15_11 + 1
                                int64_t rdi_10 = sx.q(var_f8_1.d)
                                int32_t rax_69 = (rdi_10 + 1).d
                                var_f8_1.d = rax_69
                                
                                if (rax_69 s> var_f8_1:4.d)
                                    sub_1405a4cf0(&var_100)
                                
                                *(var_100 + (rdi_10 << 2)) = rsi_12 + 1
                                int64_t rdi_11 = sx.q(var_f8_1.d)
                                int32_t rax_71 = (rdi_11 + 1).d
                                var_f8_1.d = rax_71
                                
                                if (rax_71 s> var_f8_1:4.d)
                                    sub_1405a4cf0(&var_100)
                                
                                *(var_100 + (rdi_11 << 2)) = rsi_12
                                int64_t rdi_12 = sx.q(var_f8_1.d)
                                int32_t rax_73 = (rdi_12 + 1).d
                                var_f8_1.d = rax_73
                                
                                if (rax_73 s> var_f8_1:4.d)
                                    sub_1405a4cf0(&var_100)
                                
                                *(var_100 + (rdi_12 << 2)) = r15_11
                                int64_t rdi_13 = sx.q(var_f8_1.d)
                                int32_t rax_75 = (rdi_13 + 1).d
                                var_f8_1.d = rax_75
                                
                                if (rax_75 s> var_f8_1:4.d)
                                    sub_1405a4cf0(&var_100)
                                
                                rbx_8 += 1
                                r12 = arg1
                                *(var_100 + (rdi_13 << 2)) = r15_11 + 1
                                i = i_1
                            while (rbx_8 s< var_c8_1)
                            
                            r13_5 += 1
                        while (r13_5 s< var_c8_1)
                        
                        i_2 = i_3
                    
                    void*** rax_77 = j_sub_140a82f30(0x48)
                    void*** rbx_9 = rax_77
                    
                    if (rax_77 == 0)
                        rbx_9 = nullptr
                    else
                        rax_77[1].d = 0xffffffff
                        *(rax_77 + 0xc) = 4
                        rax_77[2] = 0
                        rax_77[3] = 0
                        *rbx_9 = &data_143020c80
                        __builtin_memset(&rbx_9[5], 0, 0x11)
                        rbx_9[4] = &data_142dd66a0
                        rbx_9[8].d = 0
                    
                    (*rbx_9)[0x13](rbx_9, &var_100)
                    (*rbx_9)[5](rbx_9)
                    result = *(r12 + 0x70)
                    *(result + (i_2 << 3)) = rbx_9
                    int64_t rcx_61 = var_100
                    
                    if (rcx_61 != 0)
                        result = sub_140a74f90(rcx_61)
        
        int64_t rcx_62 = var_128
        
        if (rcx_62 != 0)
            result = sub_140a74f90(rcx_62)
        
        i_2 -= 1
        rbx = var_e0
        i = i_1 - 1
        r8_3 = var_b8
        r15 = arg2
        i_1 = i
        i_3 = i_2
    while (i s>= 0)
    
    rdi = var_90

if (rdi != 0)
    result = sub_140a74f90(rdi)

__security_check_cookie(rax_1 ^ &var_148)
return result
