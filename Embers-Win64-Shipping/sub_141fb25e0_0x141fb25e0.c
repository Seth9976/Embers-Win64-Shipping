// 函数: sub_141fb25e0
// 地址: 0x141fb25e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = arg2.b
int64_t performanceCount = arg1
char r12 = *(arg1 + 0xb0d)
*(arg1 + 0xb0d) = 1
int64_t performanceCount_1 = arg1
void* rbx = *(arg1 + 0x140)
*(arg1 + 0xb09) = 0
int64_t* rbx_1

if (rbx == 0)
    rbx_1 = nullptr
else
    rbx_1 = *(rbx + 0x130)

if (*(arg1 + 0xb0a) != 0)
    sub_141faaad0(arg1)

if (rbx_1 != 0)
    if (*(performanceCount_1 + 0xb0a) != 0)
        int128_t zmm0
        zmm0.d = (*(performanceCount_1 + 0xb64)).d f+ *(performanceCount_1 + 0xb60)
        *(rbx_1 + 0x24c) = zmm0.d
    
    (*(*rbx_1 + 0x6a8))(rbx_1)

void* rcx_1 = *(performanceCount_1 + 0x88)
void* rax_2 = rcx_1

if (rcx_1 != 0 && *(performanceCount_1 + 0xb0a) != 0)
    int64_t* rdi_1 = *(rcx_1 + 0x70)
    void* r14_1 = &rdi_1[sx.q(*(rcx_1 + 0x78))]
    rax_2 = rcx_1
    
    if (rdi_1 != r14_1)
        do
            void* rbx_2 = *rdi_1
            
            if (rbx_2 != 0)
                void* rax_4 = sub_142458ee0()
                void* rdx_1 = *(rbx_2 + 0x10)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s<= *(rdx_1 + 0x38)
                        && *(*(rdx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                    void* rsi_1 = *(rbx_2 + 0x70)
                    
                    if (rsi_1 != 0)
                        void* rbx_3 = *(rbx_2 + 0x98)
                        
                        if (rbx_3 != 0 && sub_141dce3a0(rsi_1) != 0)
                            int32_t var_e8_1 = 1
                            int64_t* r8_2 = **(rbx_3 + 0x30)
                            sub_1422b19f0(*(rbx_3 + 0x20), &r8_2[0xe], *r8_2, rsi_1.d)
            
            rdi_1 = &rdi_1[1]
        while (rdi_1 != r14_1)
        
        rax_2 = *(performanceCount_1 + 0x88)

if (rax_2 != 0)
    void* rsi_2 = rax_2 + 0x1370
    int32_t var_d4_1 = 1
    int32_t r10_1 = *(rsi_2 + 0x28)
    void* rbx_4 = rsi_2 + 0x10
    void* arg_18 = rsi_2
    int32_t rcx_5 = 0
    int32_t var_d8_1 = 0
    int32_t r8_4 = 0
    int32_t var_c8_1 = 0xffffffff
    int64_t var_c4_1 = 0
    
    if (r10_1 != 0)
        void* rax_9 = *(rbx_4 + 0x10)
        void* r9_2 = rbx_4
        
        if (rax_9 != 0)
            r9_2 = rax_9
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_5 = *r9_2
        
        if (rdx_5 != 0)
        label_141fb27e8:
            int32_t rax_16 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
            int32_t var_d4_2 = rax_16
            int32_t rax_17
            
            if (rax_16 == 0)
                rax_17 = 0x20
            else
                rax_17 = 0x1f - temp0_2
            
            var_c4_1.d = r8_4 - rax_17 + 0x1f
            
            if (r8_4 - rax_17 + 0x1f s> r10_1)
                var_c4_1.d = r10_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_5)
                r8_4 += 0x20
                rcx_5 += 1
                var_c4_1:4.d = r8_4
                var_d8_1 = rcx_5
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_2 + (rdx_6 << 2) + 4)
                int32_t var_c8_2 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141fb27e8
            
            var_c4_1.d = r10_1
    
    int32_t rdx_7 = *(rsi_2 + 0x28)
    int32_t var_a4_1 = rdx_7
    int128_t var_88 = var_d8_1.o
    int32_t rdi_2 = 0xffffffff << (rdx_7 & 0x1f).b
    int64_t var_78_1 = 0xffffffff
    int32_t r8_7 = rdx_7 s>> 5
    int32_t r9_4 = rdx_7 & 0xffffffe0
    int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_a8_1 = rdi_2
    arg2 = var_88
    int128_t var_68 = rsi_2.o
    int128_t var_58_1 = arg2
    
    if (rdx_7 != r10_1)
        void* rax_21 = *(rbx_4 + 0x10)
        void* r11_1 = rbx_4
        
        if (rax_21 != 0)
            r11_1 = rax_21
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *(r11_1 + (sx.q(r8_7) << 2)) & rdi_2
        int32_t var_a4_3
        
        if (rdx_11 != 0)
        label_141fb28b6:
            int32_t rax_27 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_27)
            int32_t rax_28
            
            if (rax_27 == 0)
                rax_28 = 0x20
            else
                rax_28 = 0x1f - temp0_4
            
            int32_t var_a4_2 = r9_4 - rax_28 + 0x1f
            
            if (r9_4 - rax_28 + 0x1f s> r10_1)
                var_a4_3 = r10_1
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_7)
                r9_4 += 0x20
                r8_7 += 1
                
                if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r11_1 + (rcx_9 << 2) + 4)
                var_a8_1 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141fb28b6
            
            var_a4_3 = r10_1
    
    uint32_t r13_2 = (var_a8_1.q u>> 0x20).d
    int32_t var_5c
    
    while (true)
        int64_t rcx_11 = sx.q(var_58_1:0xc.d)
        int32_t rax_20
        
        if (rcx_11.d != r13_2 || var_58_1.q != rbx_4)
            rax_20.b = 0
        else
            rax_20.b = 1
        
        int64_t* rdx_12 = var_68.q
        
        if (rax_20.b == 0 || rdx_12 != rsi_2)
            rax_20.b = 1
        else
            rax_20.b = 0
        
        if (rax_20.b == 0)
            break
        
        void* rdx_13 = *(*rdx_12 + rcx_11 * 0x18 + 8)
        
        if (rdx_13 != 0)
            int32_t rcx_13 = 0
            int32_t var_d4_3 = 1
            int32_t var_d8_2 = 0
            int32_t r10_2 = *(rdx_13 + 0xd0)
            int32_t r8_8 = 0
            void* var_d0_2 = rdx_13 + 0xb8
            int32_t var_c8_3 = 0xffffffff
            int64_t var_c4_2 = 0
            
            if (r10_2 != 0)
                void* rax_30 = *(rdx_13 + 0xc8)
                void* r9_6 = rdx_13 + 0xb8
                
                if (rax_30 != 0)
                    r9_6 = rax_30
                
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(r10_2 - 1)
                int32_t rdx_16 = *r9_6
                
                if (rdx_16 != 0)
                label_141fb29b8:
                    int32_t rax_37 = neg.d(rdx_16) & rdx_16
                    uint64_t rflags_3
                    int32_t temp0_5
                    temp0_5, rflags_3 = _bit_scan_reverse(rax_37)
                    int32_t var_d4_4 = rax_37
                    int32_t rax_38
                    
                    if (rax_37 == 0)
                        rax_38 = 0x20
                    else
                        rax_38 = 0x1f - temp0_5
                    
                    var_c4_2.d = r8_8 - rax_38 + 0x1f
                    
                    if (r8_8 - rax_38 + 0x1f s> r10_2)
                        var_c4_2.d = r10_2
                else
                    while (true)
                        int64_t rdx_17 = sx.q(rcx_13)
                        r8_8 += 0x20
                        rcx_13 += 1
                        var_c4_2:4.d = r8_8
                        var_d8_2 = rcx_13
                        
                        if (rdx_17.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_16 = *(r9_6 + (rdx_17 << 2) + 4)
                        int32_t var_c8_4 = 0xffffffff
                        
                        if (rdx_16 != 0)
                            goto label_141fb29b8
                    
                    var_c4_2.d = r10_2
            
            int32_t rdx_18 = *(rdx_13 + 0xd0)
            int128_t var_b0_1 = var_d8_2.o
            int32_t rdi_3 = 0xffffffff << (rdx_18 & 0x1f).b
            int32_t r9_8 = rdx_18 & 0xffffffe0
            int128_t var_a0_1 = 0xffffffff
            int32_t r8_11 = rdx_18 s>> 5
            var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            arg2 = var_a8_1.o
            var_a8_1 = rdi_3
            int32_t var_a4_4 = rdx_18
            void* var_90_1
            var_90_1.o = (rdx_13 + 0xa8).o
            var_88 = arg2
            
            if (rdx_18 != r10_2)
                void* rax_42 = *(rdx_13 + 0xc8)
                void* r11_2 = rdx_13 + 0xb8
                
                if (rax_42 != 0)
                    r11_2 = rax_42
                
                int32_t temp10_1
                int32_t temp11_1
                temp10_1:temp11_1 = sx.q(r10_2 - 1)
                int32_t rdx_22 = *(r11_2 + (sx.q(r8_11) << 2)) & rdi_3
                int32_t var_a4_6
                
                if (rdx_22 != 0)
                label_141fb2a87:
                    int32_t rax_48 = neg.d(rdx_22) & rdx_22
                    uint64_t rflags_4
                    int32_t temp0_7
                    temp0_7, rflags_4 = _bit_scan_reverse(rax_48)
                    int32_t rax_49
                    
                    if (rax_48 == 0)
                        rax_49 = 0x20
                    else
                        rax_49 = 0x1f - temp0_7
                    
                    int32_t var_a4_5 = r9_8 - rax_49 + 0x1f
                    
                    if (r9_8 - rax_49 + 0x1f s> r10_2)
                        var_a4_6 = r10_2
                else
                    while (true)
                        int64_t rcx_17 = sx.q(r8_11)
                        r9_8 += 0x20
                        r8_11 += 1
                        
                        if (rcx_17.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_22 = *(r11_2 + (rcx_17 << 2) + 4)
                        var_a8_1 = 0xffffffff
                        
                        if (rdx_22 != 0)
                            goto label_141fb2a87
                    
                    var_a4_6 = r10_2
            
            while (true)
                int64_t rdx_23 = sx.q(var_78_1:4.d)
                int32_t rax_41
                
                if (rdx_23.d != (var_a8_1.q u>> 0x20).d || var_88:8.q != rdx_13 + 0xb8)
                    rax_41.b = 0
                else
                    rax_41.b = 1
                
                if (rax_41.b == 0 || var_90_1 != rdx_13 + 0xa8)
                    rax_41.b = 1
                else
                    rax_41.b = 0
                
                if (rax_41.b == 0)
                    break
                
                int64_t rax_51 = rdx_23 << 5
                rdx_23.b = 1
                sub_141faa150(*(rax_51 + *var_90_1 + 8), rdx_23.b)
                var_78_1.d &= not.d(var_88:4.d)
                sub_14059bdd0(&var_88)
            
            rsi_2 = arg_18
        
        var_58_1:8.d &= not.d(var_5c)
        sub_14059bdd0(&var_68:8)
    
    performanceCount_1 = performanceCount
    int32_t rcx_24 = 0
    int32_t var_d4_5 = 1
    int32_t var_d8_3 = 0
    int32_t r8_12 = 0
    int32_t var_c8_5 = 0xffffffff
    void* rsi_5 = *(performanceCount_1 + 0x88) + 0x1468
    int64_t var_c4_3 = 0
    int32_t r10_3 = *(rsi_5 + 0x28)
    void* var_d0_3 = rsi_5 + 0x10
    
    if (r10_3 != 0)
        void* rax_56 = *(rsi_5 + 0x20)
        void* r9_10 = rsi_5 + 0x10
        
        if (rax_56 != 0)
            r9_10 = rax_56
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_3 - 1)
        int32_t rdx_26 = *r9_10
        
        if (rdx_26 != 0)
        label_141fb2bb8:
            int32_t rax_63 = neg.d(rdx_26) & rdx_26
            uint64_t rflags_5
            int32_t temp0_8
            temp0_8, rflags_5 = _bit_scan_reverse(rax_63)
            int32_t var_d4_6 = rax_63
            int32_t rax_64
            
            if (rax_63 == 0)
                rax_64 = 0x20
            else
                rax_64 = 0x1f - temp0_8
            
            var_c4_3.d = r8_12 - rax_64 + 0x1f
            
            if (r8_12 - rax_64 + 0x1f s> r10_3)
                var_c4_3.d = r10_3
        else
            while (true)
                int64_t rdx_27 = sx.q(rcx_24)
                r8_12 += 0x20
                rcx_24 += 1
                var_c4_3:4.d = r8_12
                var_d8_3 = rcx_24
                
                if (rdx_27.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_26 = *(r9_10 + (rdx_27 << 2) + 4)
                int32_t var_c8_6 = 0xffffffff
                
                if (rdx_26 != 0)
                    goto label_141fb2bb8
            
            var_c4_3.d = r10_3
    
    int32_t rdx_28 = *(rsi_5 + 0x28)
    int32_t var_a4_7 = rdx_28
    var_88 = var_d8_3.o
    int32_t r14_3 = 0xffffffff << (rdx_28 & 0x1f).b
    int128_t var_78_2 = 0xffffffff
    int32_t r8_15 = rdx_28 s>> 5
    int32_t r9_12 = rdx_28 & 0xffffffe0
    int64_t var_48_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_a8_2 = r14_3
    arg2 = var_88
    var_68 = rsi_5.o
    int128_t var_58_2 = arg2
    
    if (rdx_28 != r10_3)
        void* rax_68 = *(rsi_5 + 0x20)
        void* r11_3 = rsi_5 + 0x10
        
        if (rax_68 != 0)
            r11_3 = rax_68
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r10_3 - 1)
        int32_t rdx_32 = *(r11_3 + (sx.q(r8_15) << 2)) & r14_3
        int32_t var_a4_9
        
        if (rdx_32 != 0)
        label_141fb2c95:
            int32_t rax_74 = neg.d(rdx_32) & rdx_32
            uint64_t rflags_6
            int32_t temp0_10
            temp0_10, rflags_6 = _bit_scan_reverse(rax_74)
            int32_t r12_1
            
            if (rax_74 == 0)
                r12_1 = 0x20
            else
                r12_1 = 0x1f - temp0_10
            
            int32_t var_a4_8 = r9_12 - r12_1 + 0x1f
            
            if (r9_12 - r12_1 + 0x1f s> r10_3)
                var_a4_9 = r10_3
        else
            while (true)
                int64_t rcx_28 = sx.q(r8_15)
                r9_12 += 0x20
                r8_15 += 1
                
                if (rcx_28.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_32 = *(r11_3 + (rcx_28 << 2) + 4)
                var_a8_2 = 0xffffffff
                
                if (rdx_32 != 0)
                    goto label_141fb2c95
            
            var_a4_9 = r10_3
    
    while (true)
        int64_t rdx_33 = sx.q(var_58_2:0xc.d)
        int32_t rax_67
        
        if (rdx_33.d != (var_a8_2.q u>> 0x20).d || var_58_2.q != rsi_5 + 0x10)
            rax_67.b = 0
        else
            rax_67.b = 1
        
        int64_t* rcx_30 = var_68.q
        
        if (rax_67.b == 0 || rcx_30 != rsi_5)
            rax_67.b = 1
        else
            rax_67.b = 0
        
        if (rax_67.b == 0)
            break
        
        int64_t rax_76 = rdx_33 << 5
        rdx_33.b = 1
        sub_141faa150(*(rax_76 + *rcx_30 + 8), rdx_33.b)
        var_58_2:8.d &= not.d(var_5c)
        sub_14059bdd0(&var_68:8)

*(performanceCount_1 + 0xb0a) = 0
int32_t rax_79 = *(performanceCount_1 + 0xb1c)
*(performanceCount_1 + 0xb18) = 0

if (rax_79 s<= 0xffffffff)
    sub_1405dadb0(performanceCount_1 + 0xb10, 0)

QueryPerformanceCounter(&performanceCount)
char rax_80
int64_t rdx_34

if (*(performanceCount_1 + 0xb58) == 0)
    rax_80 = 0
else
    int64_t* rcx_36 = *(performanceCount_1 + 0xb50)
    
    if (rcx_36 == 0)
        rax_80 = 0
    else
        rax_80, rdx_34 = (*(*rcx_36 + 0x28))(rcx_36)
        
        rax_80 = rax_80 == 0 ? 0 : 1

if (rax_80 != 0)
    int64_t* rcx_37
    
    if (*(performanceCount_1 + 0xb58) == 0)
        rcx_37 = nullptr
    else
        rcx_37 = *(performanceCount_1 + 0xb50)
    
    rdx_34.b = 1
    (*(*rcx_37 + 0x50))(rcx_37, rdx_34)

if (*(performanceCount_1 + 0xb58) != 0)
    int64_t* rcx_38 = *(performanceCount_1 + 0xb50)
    
    if (rcx_38 != 0)
        (*(*rcx_38 + 0x38))(rcx_38, 0)
        int64_t rcx_39 = *(performanceCount_1 + 0xb50)
        
        if (rcx_39 != 0)
            *(performanceCount_1 + 0xb50) = sub_140a84c80(rcx_39, 0, 0)
        
        *(performanceCount_1 + 0xb58) = 0

int64_t result = sub_140599090(performanceCount_1 + 0x9a8)
*(performanceCount_1 + 0xb0d) = r12
return result
