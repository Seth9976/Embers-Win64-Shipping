// 函数: sub_141ce12f0
// 地址: 0x141ce12f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg2
uint64_t* rbx = arg1
(*(*arg2 + 0x1d8))(r15, &data_1439a4b70)
(*(*r15 + 0x1d8))(r15, &data_1439a93f8)

if ((r15[5].b & 1) != 0)
    arg3 = sub_140b4e7c0(r15, &data_1439a4b70)

int64_t* rdi = &rbx[7]
int64_t* rax_2 = &rbx[0xe]
int64_t* r14 = &rbx[0x1c]
int64_t* arg_20 = r14
uint128_t zmm0
int512_t zmm1_4
zmm0, zmm1_4 = sub_141cd4940(r15, &rbx[0x23], 
    sub_141cd4340(r15, r14, 
        sub_141cd3e30(r15, rax_2, sub_141cd50a0(r15, rdi, sub_141cd4ce0(r15, rbx, arg3)))))
uint128_t zmm0_1
int512_t zmm1_5
zmm0_1, zmm1_5 = sub_141cd73f0(r15, &rbx[0x2a], zmm0, zmm1_4)
uint128_t zmm0_2
int512_t zmm1_6
zmm0_2, zmm1_6 = sub_141cd73f0(r15, &rbx[0x35], zmm0_1, zmm1_5)
uint128_t zmm0_3
int512_t zmm1_7
zmm0_3, zmm1_7 = sub_141cd73f0(r15, &rbx[0x40], zmm0_2, zmm1_6)
uint128_t zmm0_4
int512_t zmm1_8
zmm0_4, zmm1_8 = sub_141cd73f0(r15, &rbx[0x56], zmm0_3, zmm1_7)
int512_t zmm1_9 = sub_141cd73f0(r15, &rbx[0x61], zmm0_4, zmm1_8)
int32_t result

if ((r15[5].b & 1) != 0)
    result, zmm1_9 = sub_140b4e7c0(r15, &data_1439a93f8)

if ((r15[5].b & 1) == 0 || result s>= 0x23)
    uint128_t zmm0_5
    int512_t zmm1_10
    zmm0_5, zmm1_10 = sub_1409ae5b0(r15, &rbx[0x15], zmm1_9)
    result = sub_141cd73f0(r15, &rbx[0x4b], zmm0_5, zmm1_10)

int32_t r13 = 0

if ((r15[5].b & 1) != 0)
    result = sub_140b4e7c0(r15, &data_1439a4b70)
    int64_t var_c4
    int128_t var_b8
    void* arg_18
    
    if (result s>= 0x11)
        int32_t r11_1 = rdi[5].d
        void* r9_1 = &rdi[2]
        int32_t var_d4_1 = 1
        int32_t rcx_17 = 0
        int32_t var_d8_1 = 0
        int32_t r8_1 = 0
        void* var_d0_1 = r9_1
        int32_t var_c8_1 = 0xffffffff
        int64_t var_c4_1 = 0
        
        if (r11_1 != 0)
            void* rax_3 = *(r9_1 + 0x10)
            
            if (rax_3 != 0)
                r9_1 = rax_3
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_14 = *r9_1
            
            if (rdx_14 != 0)
            label_141ce14d5:
                int32_t rax_10 = neg.d(rdx_14) & rdx_14
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                int32_t var_d4_2 = rax_10
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_2
                
                var_c4_1.d = r8_1 - rax_11 + 0x1f
                
                if (r8_1 - rax_11 + 0x1f s> r11_1)
                    var_c4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_15 = sx.q(rcx_17)
                    r8_1 += 0x20
                    rcx_17 += 1
                    var_c4_1:4.d = r8_1
                    var_d8_1 = rcx_17
                    
                    if (rdx_15.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_14 = *(r9_1 + (rdx_15 << 2) + 4)
                    int32_t var_c8_2 = 0xffffffff
                    
                    if (rdx_14 != 0)
                        goto label_141ce14d5
                
                var_c4_1.d = r11_1
        
        int32_t rdx_16 = rdi[5].d
        int32_t rbx_1 = rdi[5].d
        int128_t var_78_1 = 0xffffffff
        int128_t var_88_1 = var_d8_1.o
        int32_t rdi_1 = 0xffffffff << (rdx_16.b & 0x1f)
        int32_t r8_4 = rdx_16 s>> 5
        int32_t r9_3 = rdx_16 & 0xffffffe0
        int64_t var_98_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_c8_3 = rdi_1
        var_c4_1.d = rdx_16
        var_b8 = rdi.o
        int128_t var_a8_1 = var_88_1
        
        if (rdx_16 != rbx_1)
            void* rax_13 = rdi[4]
            void* r10_1 = &rdi[2]
            
            if (rax_13 != 0)
                r10_1 = rax_13
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rbx_1 - 1)
            int32_t rdx_20 = *(r10_1 + (sx.q(r8_4) << 2)) & rdi_1
            
            if (rdx_20 != 0)
            label_141ce159f:
                int32_t rax_20 = neg.d(rdx_20) & rdx_20
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
                int32_t rax_21
                
                if (rax_20 == 0)
                    rax_21 = 0x20
                else
                    rax_21 = 0x1f - temp0_4
                
                var_c4_1.d = r9_3 - rax_21 + 0x1f
                
                if (r9_3 - rax_21 + 0x1f s> rbx_1)
                    var_c4_1.d = rbx_1
            else
                while (true)
                    int64_t rcx_22 = sx.q(r8_4)
                    r9_3 += 0x20
                    r8_4 += 1
                    
                    if (rcx_22.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_20 = *(r10_1 + (rcx_22 << 2) + 4)
                    var_c8_3 = 0xffffffff
                    
                    if (rdx_20 != 0)
                        goto label_141ce159f
                
                var_c4_1.d = rbx_1
        
        while (true)
            int32_t rax_23 = var_a8_1:0xc.d
            int64_t rcx_24 = var_a8_1.q
            
            if (rax_23 == (var_c8_3.q u>> 0x20).d && rcx_24 == &rdi[2] && var_b8.q == rdi)
                break
            
            int32_t rsi_1 = data_143a1c6b8
            
            if (rax_23 s< *(rcx_24 + 0x18))
                rsi_1 = rax_23
            
            int64_t* rbx_4 = (sx.q(*(*rdi + sx.q(rsi_1) * 0x18)) << 5) + *arg1
            int64_t rdi_2 = sx.q(rbx_4[1].d)
            int32_t rax_26 = (rdi_2 + 1).d
            rbx_4[1].d = rax_26
            
            if (rax_26 s> *(rbx_4 + 0xc))
                sub_1405a4cf0(rbx_4)
            
            *(*rbx_4 + (rdi_2 << 2)) = rsi_1
            var_a8_1:8.d &= not.d(var_b8:0xc.d)
            sub_14059bdd0(&var_b8:8)
        
        int64_t* r14_3 = rax_2
        int32_t r11_2 = r14_3[5].d
        void* r9_5 = &r14_3[2]
        int32_t var_d4_3 = 1
        int32_t rcx_28 = 0
        int32_t var_d8_2 = 0
        void* var_d0_2 = r9_5
        int32_t r8_5 = 0
        int32_t var_c8_4 = 0xffffffff
        int64_t var_c4_2 = 0
        
        if (r11_2 != 0)
            void* rax_30 = *(r9_5 + 0x10)
            
            if (rax_30 != 0)
                r9_5 = rax_30
            
            int32_t temp12_1
            int32_t temp13_1
            temp12_1:temp13_1 = sx.q(r11_2 - 1)
            int32_t rdx_24 = *r9_5
            
            if (rdx_24 != 0)
            label_141ce16ca:
                int32_t rax_37 = neg.d(rdx_24) & rdx_24
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_37)
                int32_t var_d4_4 = rax_37
                int32_t rax_38
                
                if (rax_37 == 0)
                    rax_38 = 0x20
                else
                    rax_38 = 0x1f - temp0_5
                
                var_c4_2.d = r8_5 - rax_38 + 0x1f
                
                if (r8_5 - rax_38 + 0x1f s> r11_2)
                    var_c4_2.d = r11_2
            else
                while (true)
                    int64_t rdx_25 = sx.q(rcx_28)
                    r8_5 += 0x20
                    rcx_28 += 1
                    var_c4_2:4.d = r8_5
                    var_d8_2 = rcx_28
                    
                    if (rdx_25.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                        var_c4_2.d = r11_2
                        break
                    
                    rdx_24 = *(r9_5 + (rdx_25 << 2) + 4)
                    int32_t var_c8_5 = 0xffffffff
                    
                    if (rdx_24 != 0)
                        goto label_141ce16ca
        
        int32_t rdx_26 = r14_3[5].d
        void* r13_2 = &r14_3[2]
        int32_t rbx_5 = *(r13_2 + 0x18)
        int128_t var_78_2 = 0xffffffff
        int128_t var_88_2 = var_d8_2.o
        int32_t rdi_3 = 0xffffffff << (rdx_26.b & 0x1f)
        int32_t r8_8 = rdx_26 s>> 5
        int32_t r9_7 = rdx_26 & 0xffffffe0
        int64_t var_98_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_c8_6 = rdi_3
        var_c4_2.d = rdx_26
        var_b8 = r14_3.o
        int128_t var_a8_2 = var_88_2
        
        if (rdx_26 != rbx_5)
            void* rax_40 = *(r13_2 + 0x10)
            void* r10_2 = r13_2
            
            if (rax_40 != 0)
                r10_2 = rax_40
            
            int32_t temp14_1
            int32_t temp15_1
            temp14_1:temp15_1 = sx.q(rbx_5 - 1)
            int32_t rdx_30 = *(r10_2 + (sx.q(r8_8) << 2)) & rdi_3
            
            if (rdx_30 != 0)
            label_141ce17af:
                int32_t rax_47 = neg.d(rdx_30) & rdx_30
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_47)
                int32_t rax_48
                
                if (rax_47 == 0)
                    rax_48 = 0x20
                else
                    rax_48 = 0x1f - temp0_7
                
                var_c4_2.d = r9_7 - rax_48 + 0x1f
                
                if (r9_7 - rax_48 + 0x1f s> rbx_5)
                    var_c4_2.d = rbx_5
            else
                while (true)
                    int64_t rcx_33 = sx.q(r8_8)
                    r9_7 += 0x20
                    r8_8 += 1
                    
                    if (rcx_33.d s>= (temp15_1 + (temp14_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_30 = *(r10_2 + (rcx_33 << 2) + 4)
                    var_c8_6 = 0xffffffff
                    
                    if (rdx_30 != 0)
                        goto label_141ce17af
                
                var_c4_2.d = rbx_5
        
        while (true)
            int32_t rax_50 = var_a8_2:0xc.d
            int64_t rcx_35 = var_a8_2.q
            
            if (rax_50 == (var_c8_6.q u>> 0x20).d && rcx_35 == r13_2 && var_b8.q == r14_3)
                break
            
            int32_t rsi_2 = data_143a1c6bc
            
            if (rax_50 s< *(rcx_35 + 0x18))
                rsi_2 = rax_50
            
            int64_t rcx_36 = sx.q(rsi_2) * 3
            int64_t rax_52 = *r14_3
            int64_t rbx_6 = sx.q(*(rax_52 + (rcx_36 << 3) + 4))
            int64_t rdi_6 = (sx.q(*(rax_52 + (rcx_36 << 3))) << 5) + *arg1
            int64_t r14_4 = sx.q(*(rdi_6 + 0x18))
            int32_t rax_53 = (r14_4 + 1).d
            *(rdi_6 + 0x18) = rax_53
            
            if (rax_53 s> *(rdi_6 + 0x1c))
                sub_1405a4cf0(rdi_6 + 0x10)
            
            *(*(rdi_6 + 0x10) + (r14_4 << 2)) = rsi_2
            int64_t rbx_8 = (rbx_6 << 5) + *arg1
            int64_t rdi_7 = sx.q(*(rbx_8 + 0x18))
            int32_t rax_55 = (rdi_7 + 1).d
            *(rbx_8 + 0x18) = rax_55
            
            if (rax_55 s> *(rbx_8 + 0x1c))
                sub_1405a4cf0(rbx_8 + 0x10)
            
            *(*(rbx_8 + 0x10) + (rdi_7 << 2)) = rsi_2
            var_a8_2:8.d &= not.d(var_b8:0xc.d)
            sub_14059bdd0(&var_b8:8)
            r14_3 = &arg1[0xe]
        
        r15 = arg2
        
        if (sub_140b4e7c0(r15, &data_1439a93f8) s>= 0x23)
            int32_t var_d8_3 = 0
            int32_t r11_3 = arg1[0x1a].d
            void* r9_9 = &arg1[0x17]
            int32_t var_d4_5 = 1
            int32_t rcx_41 = 0
            void* var_d0_3 = r9_9
            int32_t r8_9 = 0
            int32_t var_c8_7 = 0xffffffff
            int64_t var_c4_3 = 0
            
            if (r11_3 != 0)
                void* rax_60 = *(r9_9 + 0x10)
                
                if (rax_60 != 0)
                    r9_9 = rax_60
                
                int32_t temp18_1
                int32_t temp19_1
                temp18_1:temp19_1 = sx.q(r11_3 - 1)
                int32_t rdx_35 = *r9_9
                
                if (rdx_35 != 0)
                label_141ce193a:
                    int32_t rax_67 = neg.d(rdx_35) & rdx_35
                    uint64_t rflags_5
                    int32_t temp0_8
                    temp0_8, rflags_5 = _bit_scan_reverse(rax_67)
                    int32_t var_d4_6 = rax_67
                    int32_t rax_68
                    
                    if (rax_67 == 0)
                        rax_68 = 0x20
                    else
                        rax_68 = 0x1f - temp0_8
                    
                    var_c4_3.d = r8_9 - rax_68 + 0x1f
                    
                    if (r8_9 - rax_68 + 0x1f s> r11_3)
                        var_c4_3.d = r11_3
                else
                    while (true)
                        int64_t rdx_36 = sx.q(rcx_41)
                        r8_9 += 0x20
                        rcx_41 += 1
                        var_c4_3:4.d = r8_9
                        var_d8_3 = rcx_41
                        
                        if (rdx_36.d s>= (temp19_1 + (temp18_1 & 0x1f)) s>> 5)
                            var_c4_3.d = r11_3
                            break
                        
                        rdx_35 = *(r9_9 + (rdx_36 << 2) + 4)
                        int32_t var_c8_8 = 0xffffffff
                        
                        if (rdx_35 != 0)
                            goto label_141ce193a
            
            int32_t rdx_37 = arg1[0x1a].d
            int32_t rbx_9 = arg1[0x1a].d
            int128_t var_78_3 = 0xffffffff
            int128_t var_88_3 = var_d8_3.o
            int32_t rdi_8 = 0xffffffff << (rdx_37.b & 0x1f)
            int32_t r8_12 = rdx_37 s>> 5
            int32_t r9_11 = rdx_37 & 0xffffffe0
            int64_t var_98_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_c8_9 = rdi_8
            var_c4_3.d = rdx_37
            var_b8 = (&arg1[0x15]).o
            int128_t var_a8_3 = var_88_3
            
            if (rdx_37 != rbx_9)
                void* rax_70 = arg1[0x19]
                void* r10_3 = &arg1[0x17]
                
                if (rax_70 != 0)
                    r10_3 = rax_70
                
                int32_t temp22_1
                int32_t temp23_1
                temp22_1:temp23_1 = sx.q(rbx_9 - 1)
                int32_t rdx_41 = *(r10_3 + (sx.q(r8_12) << 2)) & rdi_8
                
                if (rdx_41 != 0)
                label_141ce1a1f:
                    int32_t rax_77 = neg.d(rdx_41) & rdx_41
                    uint64_t rflags_6
                    int32_t temp0_10
                    temp0_10, rflags_6 = _bit_scan_reverse(rax_77)
                    int32_t rax_78
                    
                    if (rax_77 == 0)
                        rax_78 = 0x20
                    else
                        rax_78 = 0x1f - temp0_10
                    
                    var_c4_3.d = r9_11 - rax_78 + 0x1f
                    
                    if (r9_11 - rax_78 + 0x1f s> rbx_9)
                        var_c4_3.d = rbx_9
                else
                    while (true)
                        int64_t rcx_46 = sx.q(r8_12)
                        r9_11 += 0x20
                        r8_12 += 1
                        
                        if (rcx_46.d s>= (temp23_1 + (temp22_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_41 = *(r10_3 + (rcx_46 << 2) + 4)
                        var_c8_9 = 0xffffffff
                        
                        if (rdx_41 != 0)
                            goto label_141ce1a1f
                    
                    var_c4_3.d = rbx_9
            
            while (true)
                int32_t rax_80 = var_a8_3:0xc.d
                int64_t rcx_48 = var_a8_3.q
                
                if (rax_80 == (var_c8_9.q u>> 0x20).d && rcx_48 == &arg1[0x17]
                        && var_b8.q == &arg1[0x15])
                    break
                
                int32_t rsi_3 = data_143a1c6c0
                
                if (rax_80 s< *(rcx_48 + 0x18))
                    rsi_3 = rax_80
                
                int64_t rax_82 = arg1[0x1c]
                int64_t rdx_42 = sx.q(*(arg1[0x15] + sx.q(rsi_3) * 0x10 + 0xc)) * 5
                int64_t rdi_9 = sx.q(*(rax_82 + (rdx_42 << 3) + 0x18))
                void* rbx_10 = rax_82 + (rdx_42 << 3)
                int32_t rax_83 = (rdi_9 + 1).d
                *(rbx_10 + 0x18) = rax_83
                
                if (rax_83 s> *(rbx_10 + 0x1c))
                    sub_1405a4cf0(rbx_10 + 0x10)
                
                *(*(rbx_10 + 0x10) + (rdi_9 << 2)) = rsi_3
                var_a8_3:8.d &= not.d(var_b8:0xc.d)
                sub_14059bdd0(&var_b8:8)
            
            r15 = arg2
        
        r14 = arg_20
        int32_t r11_4 = r14[5].d
        void* r9_13 = &r14[2]
        int32_t var_d8_4 = 0
        int32_t rcx_54 = 0
        int32_t var_d4_7 = 1
        int32_t r8_13 = 0
        void* var_d0_4 = r9_13
        int32_t var_c8_10 = 0xffffffff
        var_c4 = 0
        
        if (r11_4 != 0)
            void* rax_87 = *(r9_13 + 0x10)
            
            if (rax_87 != 0)
                r9_13 = rax_87
            
            int32_t temp16_1
            int32_t temp17_1
            temp16_1:temp17_1 = sx.q(r11_4 - 1)
            int32_t rdx_46 = *r9_13
            
            if (rdx_46 != 0)
            label_141ce1b5a:
                int32_t rax_94 = neg.d(rdx_46) & rdx_46
                uint64_t rflags_7
                int32_t temp0_11
                temp0_11, rflags_7 = _bit_scan_reverse(rax_94)
                int32_t var_d4_8 = rax_94
                int32_t rax_95
                
                if (rax_94 == 0)
                    rax_95 = 0x20
                else
                    rax_95 = 0x1f - temp0_11
                
                var_c4.d = r8_13 - rax_95 + 0x1f
                
                if (r8_13 - rax_95 + 0x1f s> r11_4)
                    var_c4.d = r11_4
            else
                while (true)
                    int64_t rdx_47 = sx.q(rcx_54)
                    r8_13 += 0x20
                    rcx_54 += 1
                    var_c4:4.d = r8_13
                    var_d8_4 = rcx_54
                    
                    if (rdx_47.d s>= (temp17_1 + (temp16_1 & 0x1f)) s>> 5)
                        var_c4.d = r11_4
                        break
                    
                    rdx_46 = *(r9_13 + (rdx_47 << 2) + 4)
                    int32_t var_c8_11 = 0xffffffff
                    
                    if (rdx_46 != 0)
                        goto label_141ce1b5a
        
        int32_t rdx_48 = r14[5].d
        void* r10_4 = &r14[2]
        int32_t rbx_11 = *(r10_4 + 0x18)
        int128_t var_78_4 = 0xffffffff
        int128_t var_88_4 = var_d8_4.o
        int32_t rdi_10 = 0xffffffff << (rdx_48.b & 0x1f)
        int32_t r8_16 = rdx_48 s>> 5
        int32_t r9_15 = rdx_48 & 0xffffffe0
        int64_t var_98_4 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_c8_12 = rdi_10
        var_c4.d = rdx_48
        var_b8 = r14.o
        int128_t var_a8_4 = var_88_4
        
        if (rdx_48 != rbx_11)
            void* rax_97 = *(r10_4 + 0x10)
            
            if (rax_97 != 0)
                r10_4 = rax_97
            
            int32_t temp20_1
            int32_t temp21_1
            temp20_1:temp21_1 = sx.q(rbx_11 - 1)
            int32_t rdx_52 = *(r10_4 + (sx.q(r8_16) << 2)) & rdi_10
            
            if (rdx_52 != 0)
            label_141ce1c30:
                int32_t rax_104 = neg.d(rdx_52) & rdx_52
                uint64_t rflags_8
                int32_t temp0_13
                temp0_13, rflags_8 = _bit_scan_reverse(rax_104)
                int32_t rax_105
                
                if (rax_104 == 0)
                    rax_105 = 0x20
                else
                    rax_105 = 0x1f - temp0_13
                
                var_c4.d = r9_15 - rax_105 + 0x1f
                
                if (r9_15 - rax_105 + 0x1f s> rbx_11)
                    var_c4.d = rbx_11
            else
                while (true)
                    int64_t rcx_59 = sx.q(r8_16)
                    r9_15 += 0x20
                    r8_16 += 1
                    
                    if (rcx_59.d s>= (temp21_1 + (temp20_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_52 = *(r10_4 + (rcx_59 << 2) + 4)
                    var_c8_12 = 0xffffffff
                    
                    if (rdx_52 != 0)
                        goto label_141ce1c30
                
                var_c4.d = rbx_11
            
            r10_4 = &r14[2]
        
        uint64_t r12_5 = var_c8_12.q u>> 0x20
        uint64_t var_60_1 = r12_5
        
        while (true)
            result = var_a8_4:0xc.d
            int64_t rcx_61 = var_a8_4.q
            
            if (result == r12_5.d && rcx_61 == r10_4 && var_b8.q == r14)
                break
            
            int32_t result_2 = data_143a1c6c8
            
            if (result s< *(rcx_61 + 0x18))
                result_2 = result
            
            arg_18.d = result_2
            
            if (sub_140b4e7c0(r15, &data_1439a93f8) s>= 0x23)
                int64_t rax_109 = *r14
                int64_t r13_4 = sx.q(result_2) * 0x28
                
                if (*(rax_109 + r13_4 + 8) == 0)
                    int64_t i_2 = 3
                    int64_t r14_8 = sx.q(**(rax_109 + r13_4 + 0x10)) << 4
                    int64_t i
                    
                    do
                        int64_t* rdi_12 = *arg_20 + r13_4
                        int64_t rsi_4 = sx.q(rdi_12[1].d)
                        int32_t rbx_12 = *(r14_8 + arg1[0x15])
                        int32_t rax_113 = (rsi_4 + 1).d
                        rdi_12[1].d = rax_113
                        
                        if (rax_113 s> *(rdi_12 + 0xc))
                            sub_1405a4cf0(rdi_12)
                        
                        r14_8 += 4
                        *(*rdi_12 + (rsi_4 << 2)) = rbx_12
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    result_2 = arg_18.d
                    r12_5 = var_60_1
                    r14 = arg_20
                    r15 = arg2
            
            int64_t* rbx_15 = (sx.q(*(*r14 + sx.q(result_2) * 0x28 + 0x20)) << 4) + arg1[0x23]
            int64_t rdi_13 = sx.q(rbx_15[1].d)
            int32_t rax_118 = (rdi_13 + 1).d
            rbx_15[1].d = rax_118
            
            if (rax_118 s> *(rbx_15 + 0xc))
                sub_1405a4cf0(rbx_15)
            
            *(*rbx_15 + (rdi_13 << 2)) = result_2
            var_a8_4:8.d &= not.d(var_b8:0xc.d)
            sub_14059bdd0(&var_b8:8)
            r10_4 = &r14[2]
        
        rbx = arg1
        r13 = 0
    
    if ((r15[5].b & 1) != 0)
        void* rdi_14 = &rbx[0x15]
        arg_18 = rdi_14
        
        if (sub_140b4e7c0(r15, &data_1439a93f8) s>= 0x23)
            int32_t r11_5 = *(rdi_14 + 0x28)
            void* r9_20 = rdi_14 + 0x10
            int32_t var_d4_11 = 1
            int32_t rcx_82 = 0
            int32_t var_d8_6 = 0
            int32_t r8_20 = 0
            void* var_d0_6 = r9_20
            int32_t var_c8_16 = 0xffffffff
            int64_t var_c4_4 = 0
            
            if (r11_5 != 0)
                void* rax_146 = *(r9_20 + 0x10)
                
                if (rax_146 != 0)
                    r9_20 = rax_146
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r11_5 - 1)
                int32_t rdx_67 = *r9_20
                
                if (rdx_67 != 0)
                label_141ce2015:
                    int32_t rax_153 = neg.d(rdx_67) & rdx_67
                    uint64_t rflags_11
                    int32_t temp0_17
                    temp0_17, rflags_11 = _bit_scan_reverse(rax_153)
                    int32_t var_d4_12 = rax_153
                    int32_t rax_154
                    
                    if (rax_153 == 0)
                        rax_154 = 0x20
                    else
                        rax_154 = 0x1f - temp0_17
                    
                    var_c4_4.d = r8_20 - rax_154 + 0x1f
                    
                    if (r8_20 - rax_154 + 0x1f s> r11_5)
                        var_c4_4.d = r11_5
                else
                    while (true)
                        int64_t rdx_68 = sx.q(rcx_82)
                        r8_20 += 0x20
                        rcx_82 += 1
                        var_c4_4:4.d = r8_20
                        var_d8_6 = rcx_82
                        
                        if (rdx_68.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_67 = *(r9_20 + (rdx_68 << 2) + 4)
                        int32_t var_c8_17 = 0xffffffff
                        
                        if (rdx_67 != 0)
                            goto label_141ce2015
                    
                    var_c4_4.d = r11_5
            
            int32_t rdx_73 = *(rdi_14 + 0x28)
            void* r10_7 = rdi_14 + 0x10
            int32_t rbx_19 = *(r10_7 + 0x18)
            int128_t var_88_6 = var_d8_6.o
            int32_t r8_23 = rdx_73 s>> 5
            int32_t r9_22 = rdx_73 & 0xffffffe0
            int128_t var_78_6 = 0xffffffff
            int64_t var_98_6 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int64_t* arg_10
            arg_10.d = rdx_73
            void* var_60_2 = r10_7
            var_b8 = rdi_14.o
            int128_t var_a8_6 = var_88_6
            
            if (rdx_73 != rbx_19)
                void* rax_156 = *(r10_7 + 0x10)
                
                if (rax_156 != 0)
                    r10_7 = rax_156
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(rbx_19 - 1)
                int32_t rdx_72 = *(r10_7 + (sx.q(r8_23) << 2)) & 0xffffffff << (rdx_73.b & 0x1f)
                
                if (rdx_72 != 0)
                label_141ce20db:
                    int32_t rax_163 = neg.d(rdx_72) & rdx_72
                    uint64_t rflags_12
                    int32_t temp0_19
                    temp0_19, rflags_12 = _bit_scan_reverse(rax_163)
                    int32_t rsi_6
                    
                    if (rax_163 == 0)
                        rsi_6 = 0x20
                    else
                        rsi_6 = 0x1f - temp0_19
                    
                    rdx_73 = r9_22 - rsi_6 + 0x1f
                    arg_10.d = rdx_73
                    
                    if (rdx_73 s> rbx_19)
                        rdx_73 = rbx_19
                        arg_10.d = rbx_19
                else
                    while (true)
                        int64_t rcx_87 = sx.q(r8_23)
                        r9_22 += 0x20
                        r8_23 += 1
                        
                        if (rcx_87.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_72 = *(r10_7 + (rcx_87 << 2) + 4)
                        
                        if (rdx_72 != 0)
                            goto label_141ce20db
                    
                    rdx_73 = rbx_19
                    arg_10.d = rbx_19
                
                r10_7 = rdi_14 + 0x10
            
            while (true)
                result = var_a8_6:0xc.d
                int64_t rcx_89 = var_a8_6.q
                
                if (result == rdx_73 && rcx_89 == r10_7 && var_b8.q == rdi_14)
                    break
                
                int32_t result_3 = data_143a1c6c0
                
                if (result s< *(rcx_89 + 0x18))
                    result_3 = result
                
                int32_t r15_6 = 0
                int64_t i_1 = 0
                int64_t* rcx_90 = sx.q(result_3) << 2
                arg_20 = rcx_90
                int64_t r12_8 = rcx_90 << 2
                
                do
                    void* rdx_74 = *rdi_14
                    int64_t r9_24 = *rdi
                    
                    if (r15_6 != 2)
                        rcx_90 = rcx_90 + 1 + i_1
                    
                    int32_t r8_24 = *(r9_24 + sx.q(*(rdx_74 + (rcx_90 << 2))) * 0x18)
                    int64_t rcx_92 = sx.q(*(rdx_74 + r12_8)) * 3
                    int64_t rdx_75 = sx.q(*(r9_24 + (rcx_92 << 3)))
                    void* rdi_16 = r9_24 + (rcx_92 << 3)
                    int64_t rcx_94 = rdx_75 << 5
                    uint64_t rax_171 = *arg1
                    int32_t* r9_25 = *(rcx_94 + rax_171 + 0x10)
                    void* r10_8 = &r9_25[sx.q(*(rcx_94 + rax_171 + 0x18))]
                    int64_t rbx_20
                    
                    if (r9_25 == r10_8)
                    label_141ce21dd:
                        rbx_20 = zx.q(data_143a1c6bc)
                    else
                        int64_t r11_7 = *rax_2
                        
                        while (true)
                            rbx_20 = sx.q(*r9_25)
                            int64_t rcx_95 = rbx_20 * 3
                            int32_t rcx_96 = *(r11_7 + (rcx_95 << 3))
                            int32_t rax_174 = *(r11_7 + (rcx_95 << 3) + 4)
                            
                            if (rcx_96 == rdx_75.d && rax_174 == r8_24)
                                break
                            
                            if (rcx_96 == r8_24 && rax_174 == rdx_75.d)
                                break
                            
                            r9_25 = &r9_25[1]
                            
                            if (r9_25 == r10_8)
                                goto label_141ce21dd
                    
                    int64_t rsi_7 = sx.q(*(rdi_16 + 0x10))
                    int32_t rax_175 = (rsi_7 + 1).d
                    *(rdi_16 + 0x10) = rax_175
                    
                    if (rax_175 s> *(rdi_16 + 0x14))
                        sub_1405a4cf0(rdi_16 + 8)
                    
                    *(*(rdi_16 + 8) + (rsi_7 << 2)) = result_3
                    int64_t rcx_98 = sx.q(rbx_20.d) * 3
                    int64_t rax_179 = *rax_2
                    int64_t rdi_17 = sx.q(*(rax_179 + (rcx_98 << 3) + 0x10))
                    void* rbx_21 = rax_179 + (rcx_98 << 3)
                    int32_t rax_180 = (rdi_17 + 1).d
                    *(rbx_21 + 0x10) = rax_180
                    
                    if (rax_180 s> *(rbx_21 + 0x14))
                        sub_1405a4cf0(rbx_21 + 8)
                    
                    r15_6 += 1
                    rcx_90 = arg_20
                    i_1 += 1
                    r12_8 += 4
                    *(*(rbx_21 + 8) + (rdi_17 << 2)) = result_3
                    rdi_14 = arg_18
                while (i_1 s< 3)
                
                var_a8_6:8.d &= not.d(var_b8:0xc.d)
                sub_14059bdd0(&var_b8:8)
                rdx_73 = arg_10.d
                r10_7 = var_60_2
        else
            int32_t rax_123 = *(rdi_14 + 0xc)
            *(rdi_14 + 8) = 0
            
            if (rax_123 s< 0 && rax_123 != 0)
                sub_1405a5410(rdi_14, 0)
            
            *(rdi_14 + 0x30) = 0xffffffff
            *(rdi_14 + 0x34) = 0
            sub_140774790(rdi_14 + 0x10)
            sub_14090a510(rdi_14, 0)
            int32_t r10_5 = r14[5].d
            void* r8_17 = &r14[2]
            int32_t var_d8_5 = 0
            int32_t rcx_72 = 0
            int32_t var_d4_9 = 1
            void* var_d0_5 = r8_17
            int32_t var_c8_13 = 0xffffffff
            var_c4.d = 0
            var_c4:4.d = 0
            
            if (r10_5 != 0)
                void* rax_124 = *(r8_17 + 0x10)
                
                if (rax_124 != 0)
                    r8_17 = rax_124
                
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(r10_5 - 1)
                int32_t rdx_57 = *r8_17
                
                if (rdx_57 != 0)
                label_141ce1e65:
                    int32_t rax_131 = neg.d(rdx_57) & rdx_57
                    uint64_t rflags_9
                    int32_t temp0_14
                    temp0_14, rflags_9 = _bit_scan_reverse(rax_131)
                    int32_t var_d4_10 = rax_131
                    int32_t rax_132
                    
                    if (rax_131 == 0)
                        rax_132 = 0x20
                    else
                        rax_132 = 0x1f - temp0_14
                    
                    var_c4.d = rcx_72 - rax_132 + 0x1f
                    
                    if (rcx_72 - rax_132 + 0x1f s> r10_5)
                        var_c4.d = r10_5
                else
                    while (true)
                        int64_t rdx_58 = sx.q(r13)
                        rcx_72 += 0x20
                        r13 += 1
                        var_c4:4.d = rcx_72
                        var_d8_5 = r13
                        
                        if (rdx_58.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_57 = *(r8_17 + (rdx_58 << 2) + 4)
                        int32_t var_c8_14 = 0xffffffff
                        
                        if (rdx_57 != 0)
                            goto label_141ce1e65
                    
                    var_c4.d = r10_5
            
            int32_t rdx_60 = r14[5].d
            int32_t rbx_16 = r14[5].d
            int128_t var_78_5 = 0xffffffff
            int128_t var_88_5 = var_d8_5.o
            int32_t rsi_5 = 0xffffffff << (rdx_60.b & 0x1f)
            int32_t r8_19 = rdx_60 s>> 5
            int32_t r9_18 = rdx_60 & 0xffffffe0
            int64_t var_98_5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_c8_15 = rsi_5
            var_c4.d = rdx_60
            var_b8 = r14.o
            int128_t var_a8_5 = var_88_5
            
            if (rdx_60 != rbx_16)
                void* rax_134 = r14[4]
                void* r10_6 = &r14[2]
                
                if (rax_134 != 0)
                    r10_6 = rax_134
                
                int32_t temp10_1
                int32_t temp11_1
                temp10_1:temp11_1 = sx.q(rbx_16 - 1)
                int32_t rdx_64 = *(r10_6 + (sx.q(r8_19) << 2)) & rsi_5
                
                if (rdx_64 != 0)
                label_141ce1f2f:
                    int32_t rax_141 = neg.d(rdx_64) & rdx_64
                    uint64_t rflags_10
                    int32_t temp0_16
                    temp0_16, rflags_10 = _bit_scan_reverse(rax_141)
                    int32_t rax_142
                    
                    if (rax_141 == 0)
                        rax_142 = 0x20
                    else
                        rax_142 = 0x1f - temp0_16
                    
                    var_c4.d = r9_18 - rax_142 + 0x1f
                    
                    if (r9_18 - rax_142 + 0x1f s> rbx_16)
                        var_c4.d = rbx_16
                else
                    while (true)
                        int64_t rcx_77 = sx.q(r8_19)
                        r9_18 += 0x20
                        r8_19 += 1
                        
                        if (rcx_77.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_64 = *(r10_6 + (rcx_77 << 2) + 4)
                        var_c8_15 = 0xffffffff
                        
                        if (rdx_64 != 0)
                            goto label_141ce1f2f
                    
                    var_c4.d = rbx_16
            
            while (true)
                result = var_a8_5:0xc.d
                int64_t rcx_79 = var_a8_5.q
                
                if (result == (var_c8_15.q u>> 0x20).d && rcx_79 == &r14[2] && var_b8.q == r14)
                    break
                
                int32_t result_1 = data_143a1c6c8
                
                if (result s< *(rcx_79 + 0x18))
                    result_1 = result
                
                sub_141cd95d0(arg1, result_1)
                var_a8_5:8.d &= not.d(var_b8:0xc.d)
                sub_14059bdd0(&var_b8:8)

return result
