// 函数: sub_1419c7dd0
// 地址: 0x1419c7dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = arg1
int64_t r12 = 0
void* r13 = arg2
int32_t r14 = 0
int32_t var_f4 = 0
void* r15_1

while (true)
    void* var_110
    int512_t zmm2
    
    if (r14.b == 0)
        int32_t r10_1 = *(r13 + 0x28)
        void* r9_1 = r13 + 0x10
        int32_t var_114_1 = 1
        int32_t rcx = 0
        int32_t var_118_1 = 0
        int32_t r8_1 = 0
        var_110 = r9_1
        int32_t var_108_1 = 0xffffffff
        int64_t var_104_1 = 0
        
        if (r10_1 != 0)
            void* rax_1 = *(r9_1 + 0x10)
            
            if (rax_1 != 0)
                r9_1 = rax_1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_2 = *r9_1
            
            if (rdx_2 != 0)
            label_1419c7eac:
                int32_t rax_8 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
                int32_t var_114_2 = rax_8
                int32_t rax_9
                
                if (rax_8 == 0)
                    rax_9 = 0x20
                else
                    rax_9 = 0x1f - temp0_2
                
                var_104_1.d = r8_1 - rax_9 + 0x1f
                
                if (r8_1 - rax_9 + 0x1f s> r10_1)
                    var_104_1.d = r10_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx)
                    r8_1 += 0x20
                    rcx += 1
                    var_104_1:4.d = r8_1
                    var_118_1 = rcx
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                    var_108_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_1419c7eac
                
                var_104_1.d = r10_1
            
            r11 = arg1
        
        zmm2.o = 0xffffffff
        int128_t var_d8_1 = 0xffffffff
        double var_e8_1[0x2] = var_118_1.o
        double var_c8[0x2] = r13.o
        int64_t var_a8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        
        if (0 s>= r10_1)
            r15_1 = arg1
        else
            int32_t rcx_2 = var_e8_1[1]:4.d
            
            while (true)
                int64_t rsi_3 = (sx.q(rcx_2) << 5) + *var_c8[0]
                int64_t rcx_3
                
                if (*(rsi_3 + 0x16) == 0)
                    rcx_3.b = 0
                    int32_t i = 0
                    
                    if (*(r11 + 0xd0) s> 0)
                        void* r13_1 = r11 + 0xc8
                        
                        do
                            void* rax_13 = *r13_1
                            
                            if ((rax_13.b & 1) != 0)
                                rax_13 = (rax_13 s>> 1) + r13_1
                            
                            void* rdi_1 = rax_13 + r12
                            
                            if (*rdi_1 == *(rsi_3 + 0x10))
                                int16_t rax_15 = *(rsi_3 + 0x12)
                                int64_t r14_1 = sx.q(*(rdi_1 + 0x10))
                                int16_t arg_1a = *(rsi_3 + 0x14)
                                int32_t rax_17 = (r14_1 + 1).d
                                *(rdi_1 + 0x10) = rax_17
                                
                                if (rax_17 s> *(rdi_1 + 0x14))
                                    sub_1407c3800(rdi_1 + 8, r14_1.d)
                                    r11 = arg1
                                
                                void* rdx_6 = *(rdi_1 + 8)
                                
                                if ((rdx_6.b & 1) != 0)
                                    rdx_6 = (rdx_6 s>> 1) + rdi_1 + 8
                                
                                *(rdx_6 + (r14_1 << 2)) = rax_15.d
                                rcx_3.b = 1
                                *(rdi_1 + 2) += *(rsi_3 + 0x14)
                            
                            i += 1
                            r12 += 0x18
                        while (i s< *(r11 + 0xd0))
                        
                        r12 = 0
                
                if (*(rsi_3 + 0x16) != 0 || rcx_3.b != 0)
                    r15_1 = arg1
                else
                    int16_t rcx_5 = *(rsi_3 + 0x14)
                    var_118_1.w = *(rsi_3 + 0x10)
                    int16_t rax_21 = *(rsi_3 + 0x12)
                    var_118_1:2.w = rcx_5
                    int16_t arg_22 = rcx_5
                    var_110 = nullptr
                    var_108_1.q = 1
                    sub_1407c3800(&var_110, 0)
                    void* rcx_7
                    
                    if ((var_110.b & 1) == 0)
                        rcx_7 = var_110
                    else
                        rcx_7 = &var_110 + (var_110 s>> 1)
                    
                    r15_1 = arg1
                    *rcx_7 = rax_21.d
                    int64_t rdi_2 = sx.q(*(r15_1 + 0xd0))
                    int32_t rax_25 = (rdi_2 + 1).d
                    *(r15_1 + 0xd0) = rax_25
                    
                    if (rax_25 s> *(r15_1 + 0xd4))
                        sub_1419d6f80(r15_1 + 0xc8, rdi_2.d)
                    
                    void* rdx_9 = *(r15_1 + 0xc8)
                    
                    if ((rdx_9.b & 1) != 0)
                        rdx_9 = (rdx_9 s>> 1) + r15_1 + 0xc8
                    
                    int64_t rcx_9 = rdi_2 * 3
                    *(rdx_9 + (rcx_9 << 3)) = var_118_1.w
                    void* rbx_4 = rdx_9 + ((rcx_9 + 1) << 3)
                    *(rdx_9 + (rcx_9 << 3) + 2) = var_118_1:2.w
                    *rbx_4 = 0
                    int64_t rdi_3 = sx.q(var_108_1)
                    void* rsi_4
                    
                    if ((var_110.b & 1) == 0)
                        rsi_4 = var_110
                    else
                        rsi_4 = &var_110 + (var_110 s>> 1)
                    
                    *(rbx_4 + 8) = rdi_3.d
                    
                    if (rdi_3.d != 0)
                        sub_1419d6d70(rbx_4, rdi_3.d, 0)
                        void* rcx_12 = *rbx_4
                        
                        if ((rcx_12.b & 1) != 0)
                            rcx_12 = (rcx_12 s>> 1) + rbx_4
                        
                        memcpy(rcx_12, rsi_4, (rdi_3 << 2).d)
                        sub_140a1d5c0(&var_110)
                    else
                        *(rbx_4 + 0xc) = 0
                        sub_140a1d5c0(&var_110)
                
                var_e8_1[1].d &= not.d(var_c8[1]:4.d)
                sub_14059bdd0(&var_c8[1])
                rcx_2 = var_e8_1[1]:4.d
                
                if (rcx_2 s>= *(var_e8_1[0] i+ 0x18))
                    break
                
                r11 = arg1
            
            r14 = var_f4
            r13 = arg2
    else if (r14.b == 4)
        r15_1 = arg1
    else
        int32_t r11_1 = *(r13 + 0x28)
        int32_t var_114_3 = 1
        int32_t rcx_16 = 0
        int32_t var_118_2 = 0
        int32_t rdi_4 = 0
        var_110 = r13 + 0x10
        int32_t r8_5 = 0
        int32_t var_108_2 = 0xffffffff
        int64_t var_104_2 = 0
        
        if (r11_1 != 0)
            void* rax_33 = *(r13 + 0x20)
            void* r9_2 = r13 + 0x10
            
            if (rax_33 != 0)
                r9_2 = rax_33
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_14 = *r9_2
            
            if (rdx_14 != 0)
            label_1419c81eb:
                int32_t rax_40 = neg.d(rdx_14) & rdx_14
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_40)
                int32_t var_114_4 = rax_40
                int32_t rax_41
                
                if (rax_40 == 0)
                    rax_41 = 0x20
                else
                    rax_41 = 0x1f - temp0_4
                
                var_104_2.d = r8_5 - rax_41 + 0x1f
                
                if (r8_5 - rax_41 + 0x1f s> r11_1)
                    var_104_2.d = r11_1
            else
                while (true)
                    int64_t rdx_15 = sx.q(rcx_16)
                    r8_5 += 0x20
                    rcx_16 += 1
                    var_104_2:4.d = r8_5
                    var_118_2 = rcx_16
                    
                    if (rdx_15.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_14 = *(r9_2 + (rdx_15 << 2) + 4)
                    int32_t var_108_3 = 0xffffffff
                    
                    if (rdx_14 != 0)
                        goto label_1419c81eb
                
                var_104_2.d = r11_1
        
        zmm2.o = 0xffffffff
        int128_t var_d8_2 = 0xffffffff
        double var_e8_2[0x2] = var_118_2.o
        double var_a0[0x2] = r13.o
        int64_t var_80_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        
        if (0 s< r11_1)
            int32_t i_1 = var_e8_2[1]:4.d
            
            do
                int32_t rax_44 = rdi_4 + 1
                
                if (*((sx.q(i_1) << 5) + *var_a0[0] + 0x16) != r14.b)
                    rax_44 = rdi_4
                
                rdi_4 = rax_44
                var_e8_2[1].d &= not.d(var_a0[1]:4.d)
                sub_14059bdd0(&var_a0[1])
                i_1 = var_e8_2[1]:4.d
            while (i_1 s< *(var_e8_2[0] i+ 0x18))
        
        r15_1 = arg1
        void* rbx_5 = r15_1 + 0x98
        
        if (r14.b == 2)
            rbx_5 = r15_1 + 0xa8
        else if (r14.b == 3)
            rbx_5 = r15_1 + 0xb8
        
        *(rbx_5 + 8) = 0
        
        if (*(rbx_5 + 0xc) != rdi_4)
            sub_1407c4340(rbx_5, rdi_4)
        
        int32_t r11_2 = *(r13 + 0x28)
        int32_t rcx_21 = 0
        int32_t var_118_3 = 0
        int32_t r8_7 = 0
        int32_t var_114_5 = 1
        var_110 = r13 + 0x10
        int32_t var_108_4 = 0xffffffff
        int64_t var_104_3 = 0
        
        if (r11_2 != 0)
            void* rax_48 = *(r13 + 0x20)
            void* r9_3 = r13 + 0x10
            
            if (rax_48 != 0)
                r9_3 = rax_48
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_2 - 1)
            int32_t rdx_21 = *r9_3
            
            if (rdx_21 != 0)
            label_1419c835b:
                int32_t rax_55 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_3
                int32_t temp0_6
                temp0_6, rflags_3 = _bit_scan_reverse(rax_55)
                int32_t var_114_6 = rax_55
                int32_t rax_56
                
                if (rax_55 == 0)
                    rax_56 = 0x20
                else
                    rax_56 = 0x1f - temp0_6
                
                var_104_3.d = r8_7 - rax_56 + 0x1f
                
                if (r8_7 - rax_56 + 0x1f s> r11_2)
                    var_104_3.d = r11_2
            else
                while (true)
                    int64_t rdx_22 = sx.q(rcx_21)
                    r8_7 += 0x20
                    rcx_21 += 1
                    var_104_3:4.d = r8_7
                    var_118_3 = rcx_21
                    
                    if (rdx_22.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_21 = *(r9_3 + (rdx_22 << 2) + 4)
                    int32_t var_108_5 = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_1419c835b
                
                var_104_3.d = r11_2
        
        zmm2.o = 0xffffffff
        int128_t var_d8_3 = 0xffffffff
        double var_e8_3[0x2] = var_118_3.o
        double var_78[0x2] = r13.o
        int64_t var_58_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        
        if (0 s< r11_2)
            int32_t i_2 = var_e8_3[1]:4.d
            
            do
                int64_t rdx_24 = sx.q(i_2) << 5
                int64_t rcx_23 = *var_78[0]
                
                if (*(rdx_24 + rcx_23 + 0x16) == r14.b)
                    int16_t rax_59
                    
                    if (r14.b != 1)
                        rax_59 = *(rdx_24 + rcx_23 + 0x12)
                    else
                        rax_59 = *(rdx_24 + rcx_23 + 0x10)
                    
                    int64_t rdi_5 = sx.q(*(rbx_5 + 8))
                    int16_t var_f6_1 = *(rdx_24 + rcx_23 + 0x14)
                    int32_t rax_61 = (rdi_5 + 1).d
                    *(rbx_5 + 8) = rax_61
                    
                    if (rax_61 s> *(rbx_5 + 0xc))
                        sub_1407c3800(rbx_5, rdi_5.d)
                    
                    void* rdx_27 = *rbx_5
                    
                    if ((rdx_27.b & 1) != 0)
                        rdx_27 = (rdx_27 s>> 1) + rbx_5
                    
                    *(rdx_27 + (rdi_5 << 2)) = rax_59.d
                
                var_e8_3[1].d &= not.d(var_78[1]:4.d)
                sub_14059bdd0(&var_78[1])
                i_2 = var_e8_3[1]:4.d
            while (i_2 s< *(var_e8_3[0] i+ 0x18))
    r14 += 1
    var_f4 = r14
    
    if (r14 s>= 5)
        break
    
    r11 = arg1

void* rdi_6 = *(r15_1 + 0xc8)

if ((rdi_6.b & 1) != 0)
    rdi_6 = (rdi_6 s>> 1) + r15_1 + 0xc8

uint64_t rdx_28 = sx.q(*(r15_1 + 0xd0))
void* i_3 = rdi_6 + rdx_28 * 0x18

if (rdi_6 != i_3)
    void* rdi_8 = rdi_6 + 8
    
    do
        void* rcx_28 = *rdi_8
        
        if ((rcx_28.b & 1) != 0)
            rcx_28 = (rcx_28 s>> 1) + rdi_8
        
        sub_1419bf5a0(rcx_28, *(rdi_8 + 8), arg1.b)
        rdi_8 += 0x18
    while (rdi_8 - 8 != i_3)
    
    rdx_28 = zx.q(*(r15_1 + 0xd0))

void* rcx_30 = *(r15_1 + 0xc8)

if ((rcx_30.b & 1) != 0)
    rcx_30 = (rcx_30 s>> 1) + r15_1 + 0xc8

sub_1419bf270(rcx_30, rdx_28.d, arg1.b)
void* rcx_31 = *(r15_1 + 0x98)

if ((rcx_31.b & 1) != 0)
    rcx_31 = (rcx_31 s>> 1) + 0x98 + r15_1

sub_1419bf5a0(rcx_31, *(r15_1 + 0xa0), arg1.b)
void* rcx_34 = *(r15_1 + 0xa8)

if ((rcx_34.b & 1) != 0)
    rcx_34 = (rcx_34 s>> 1) + 0xa8 + r15_1

sub_1419bf5a0(rcx_34, *(r15_1 + 0xb0), arg1.b)
void* rcx_37 = *(r15_1 + 0xb8)

if ((rcx_37.b & 1) != 0)
    rcx_37 = (rcx_37 s>> 1) + 0xb8 + r15_1

return sub_1419bf5a0(rcx_37, *(r15_1 + 0xc0), arg1.b)
