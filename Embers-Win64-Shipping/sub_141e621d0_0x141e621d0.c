// 函数: sub_141e621d0
// 地址: 0x141e621d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1 + 0x3d8
int32_t var_ec = 1
int32_t r11 = *(r13 + 0x28)
void* rdi = r13 + 0x10
int32_t rcx = 0
void* var_a0 = r13
uint64_t rsi
rsi.b = 0
int32_t var_f0 = 0
int64_t* r15 = arg3
char arg_8 = 0
int32_t r8 = 0
void* var_e8 = rdi
int32_t var_e0 = 0xffffffff
int64_t var_dc = 0

if (r11 != 0)
    void* rax_1 = *(rdi + 0x10)
    void* r9 = rdi
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141e6229c:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_ec_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_dc.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r11)
            var_dc.d = r11
    else
        while (true)
            int64_t rax_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_dc:4.d = r8
            var_f0 = rcx
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r9 + (rax_4 << 2) + 4)
            int32_t var_e0_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141e6229c
        
        var_dc.d = r11

int32_t rdx_8 = *(r13 + 0x28)
int32_t var_118 = rdx_8
int128_t var_c8 = var_f0.o
int32_t r8_3 = rdx_8 s>> 5
int32_t rcx_5 = rdx_8 & 0xffffffe0
int64_t var_b8 = 0xffffffff
int64_t var_78 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_c8
int128_t var_98 = r13.o
int128_t var_88 = zmm1

if (rdx_8 != r11)
    void* rax_10 = *(rdi + 0x10)
    void* r9_1 = rdi
    
    if (rax_10 != 0)
        r9_1 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *(r9_1 + (sx.q(r8_3) << 2)) & 0xffffffff << (rdx_8.b & 0x1f)
    
    if (rdx_6 != 0)
    label_141e6236b:
        int32_t rax_17 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        int32_t rax_18
        
        if (rax_17 == 0)
            rax_18 = 0x20
        else
            rax_18 = 0x1f - temp0_4
        
        rdx_8 = rcx_5 - rax_18 + 0x1f
        var_118 = rdx_8
        
        if (rdx_8 s> r11)
            rdx_8 = r11
            var_118 = rdx_8
    else
        while (true)
            int64_t rax_14 = sx.q(r8_3)
            rcx_5 += 0x20
            r8_3 += 1
            
            if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rax_14 << 2) + 4)
            
            if (rdx_6 != 0)
                goto label_141e6236b
        
        rdx_8 = r11
        var_118 = rdx_8

while (true)
    int64_t rcx_7 = sx.q(var_88:0xc.d)
    int64_t rax_19 = var_98.q
    
    if (rcx_7.d == rdx_8 && var_88.q == rdi && rax_19 == r13)
        return zx.q(rsi.b)
    
    int64_t rcx_8 = sx.q(r15[1].d)
    int64_t* r12_3 = (rcx_7 << 5) + *rax_19
    
    if (rcx_8.d s<= 0)
    label_141e623f9:
        int32_t rcx_9 = 0
        void* rdi_2 = r12_3[1] + 0x88
        int32_t var_110_1 = 0
        int32_t r11_1 = *(rdi_2 + 0x28)
        void* r13_1 = rdi_2 + 0x10
        int32_t r8_5 = 0
        void* var_a8_1 = rdi_2
        int32_t var_10c_1 = 1
        void* var_108_1 = r13_1
        int32_t var_100_1 = 0xffffffff
        int64_t var_fc_1 = 0
        
        if (r11_1 != 0)
            void* rax_21 = *(r13_1 + 0x10)
            void* r9_2 = r13_1
            
            if (rax_21 != 0)
                r9_2 = rax_21
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_11 = *r9_2
            
            if (rdx_11 != 0)
            label_141e6248c:
                int32_t rax_27 = neg.d(rdx_11) & rdx_11
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_27)
                int32_t var_10c_2 = rax_27
                int32_t rax_28
                
                if (rax_27 == 0)
                    rax_28 = 0x20
                else
                    rax_28 = 0x1f - temp0_5
                
                var_fc_1.d = r8_5 - rax_28 + 0x1f
                
                if (r8_5 - rax_28 + 0x1f s> r11_1)
                    var_fc_1.d = r11_1
            else
                while (true)
                    int64_t rax_24 = sx.q(rcx_9)
                    r8_5 += 0x20
                    rcx_9 += 1
                    var_fc_1:4.d = r8_5
                    var_110_1 = rcx_9
                    
                    if (rax_24.d s>= ((temp4_1 & 0x1f) + temp5_1) s>> 5)
                        break
                    
                    rdx_11 = *(r9_2 + (rax_24 << 2) + 4)
                    int32_t var_100_2 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_141e6248c
                
                var_fc_1.d = r11_1
        
        int32_t rdx_12 = *(rdi_2 + 0x28)
        int32_t rbx_1 = *(r13_1 + 0x18)
        int32_t r11_2 = 0xffffffff << (rdx_12.b & 0x1f)
        int128_t var_58_1 = var_110_1.o
        int32_t r8_8 = rdx_12 s>> 5
        int32_t rcx_14 = rdx_12 & 0xffffffe0
        int32_t var_100_3 = r11_2
        var_fc_1.d = rdx_12
        int128_t var_48_1 = 0xffffffff
        var_b8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        void* var_d0
        var_d0.o = rdi_2.o
        var_c8 = var_58_1
        
        if (rdx_12 != rbx_1)
            void* rax_30 = *(r13_1 + 0x10)
            void* r9_3 = r13_1
            
            if (rax_30 != 0)
                r9_3 = rax_30
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(rbx_1 - 1)
            int32_t rdx_16 = *(r9_3 + (sx.q(r8_8) << 2)) & r11_2
            
            if (rdx_16 != 0)
            label_141e62564:
                int32_t rax_37 = neg.d(rdx_16) & rdx_16
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_37)
                int32_t rax_38
                
                if (rax_37 == 0)
                    rax_38 = 0x20
                else
                    rax_38 = 0x1f - temp0_7
                
                var_fc_1.d = rcx_14 - rax_38 + 0x1f
                
                if (rcx_14 - rax_38 + 0x1f s> rbx_1)
                    var_fc_1.d = rbx_1
            else
                while (true)
                    int64_t rax_34 = sx.q(r8_8)
                    rcx_14 += 0x20
                    r8_8 += 1
                    
                    if (rax_34.d s>= ((temp6_1 & 0x1f) + temp7_1) s>> 5)
                        break
                    
                    rdx_16 = *(r9_3 + (rax_34 << 2) + 4)
                    var_100_3 = 0xffffffff
                    
                    if (rdx_16 != 0)
                        goto label_141e62564
                
                var_fc_1.d = rbx_1
        
        while (true)
            int64_t rax_40 = sx.q(var_b8:4.d)
            
            if (rax_40.d == (var_100_3.q u>> 0x20).d && var_c8:8.q == r13_1 && var_d0 == rdi_2)
                break
            
            int64_t* rdi_5 = rax_40 * 0x90 + *var_d0
            void* rax_41
            void* r11_3
            
            if (arg6 == 0)
                rax_41 = rdi_5[0xb]
                r11_3 = &rdi_5[0xb]
            
            if (arg6 != 0 || rax_41 == 0 || *(rax_41 + 0x12) != 0 || *(rax_41 + 0x11) != 0)
                rax_41 = rdi_5[7]
                r11_3 = &rdi_5[7]
            
            if (rax_41 != 0 && *(rax_41 + 0x12) == 0 && *(rax_41 + 0x11) == 0)
                rsi.b = 0
                int64_t* r8_9 = *arg4
                void* r9_4 = &r8_9[sx.q(arg4[1].d)]
                
                if (r8_9 != r9_4)
                    int64_t* r10_9 = *(r11_3 + 0x10)
                    
                    do
                        void* rcx_17 = &r10_9[sx.q(*(r11_3 + 0x18))]
                        int64_t* rax_45 = r10_9
                        
                        if (r10_9 == rcx_17)
                        label_141e62654:
                            rsi.b = 1
                            break
                        
                        while (*rax_45 != *r8_9)
                            rax_45 = &rax_45[1]
                            
                            if (rax_45 == rcx_17)
                                goto label_141e62654
                        
                        r8_9 = &r8_9[1]
                    while (r8_9 != r9_4)
                
                int64_t* r8_10 = *arg5
                void* r9_5 = &r8_10[sx.q(arg5[1].d)]
                
                if (r8_10 != r9_5)
                    int64_t* r10_10 = *(r11_3 + 0x10)
                    
                    do
                        void* rcx_18 = &r10_10[sx.q(*(r11_3 + 0x18))]
                        int64_t* rax_49 = r10_10
                        
                        if (r10_10 != rcx_18)
                            do
                                if (*rax_49 == *r8_10)
                                    goto label_141e62702
                                
                                rax_49 = &rax_49[1]
                            while (rax_49 != rcx_18)
                        
                        r8_10 = &r8_10[1]
                    while (r8_10 != r9_5)
                
                if (rsi.b != 0)
                label_141e62702:
                    rsi = zx.q(arg_8)
                else
                    int64_t rax_50 = *r12_3
                    int64_t rbx_3 = sx.q(arg2[1].d)
                    int64_t var_68_1 = *rdi_5
                    int32_t rax_52 = (rbx_3 + 1).d
                    arg2[1].d = rax_52
                    
                    if (rax_52 s> *(arg2 + 0xc))
                        sub_1405a4f90(arg2)
                    
                    rsi.b = 1
                    arg_8 = 1
                    *(*arg2 + rbx_3 * 0x10) = rax_50.o
            
            var_b8.d &= not.d(var_c8:4.d)
            sub_14059bdd0(&var_c8)
            rdi_2 = var_a8_1
        
        rdi = var_e8
        r15 = arg3
        r13 = var_a0
    else
        for (int64_t* i = *r15; i != &i[rcx_8]; i = &i[1])
            if (*i == *r12_3)
                goto label_141e623f9
    
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)
    rdx_8 = var_118
