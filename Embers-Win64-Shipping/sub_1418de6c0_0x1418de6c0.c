// 函数: sub_1418de6c0
// 地址: 0x1418de6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15_1

if (arg3 == 0)
    int32_t r11_1 = arg1[5].d
    int32_t rbx_1 = 0
    int32_t rcx_2 = 0
    int32_t r8 = 0
    int32_t var_98_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = &arg1[2]
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = arg1[4]
        void* r9_1 = &arg1[2]
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_1418de7a8:
            int32_t rax_8 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_94_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_84_1.d = r8 - rax_9 + 0x1f
            
            if (r8 - rax_9 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_2)
                r8 += 0x20
                rcx_2 += 1
                var_84_1:4.d = r8
                var_98_1 = rcx_2
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_1418de7a8
            
            var_84_1.d = r11_1
    
    int32_t rdx_6 = arg1[5].d
    int128_t var_38_1 = 0xffffffff
    int32_t rsi_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_3 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_3 = rsi_1
    var_84_1.d = rdx_6
    int128_t var_78 = arg1.o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_6 != r11_1)
        void* rax_11 = arg1[4]
        void* r10_1 = &arg1[2]
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_1
        
        if (rdx_10 != 0)
        label_1418de872:
            int32_t rax_18 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t rax_19
            
            if (rax_18 == 0)
                rax_19 = 0x20
            else
                rax_19 = 0x1f - temp0_4
            
            var_84_1.d = r9_3 - rax_19 + 0x1f
            
            if (r9_3 - rax_19 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_7 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_1418de872
            
            var_84_1.d = r11_1
    
    int32_t var_5c
    
    while (true)
        int64_t rax_21 = sx.q(var_5c)
        int64_t* rdx_11 = var_78.q
        
        if (rax_21.d == (var_88_3.q u>> 0x20).d && var_68_1.q == &arg1[2] && rdx_11 == arg1)
            break
        
        void* rdi_1 = *(*rdx_11 + rax_21 * 0x18 + 8)
        
        if (rdi_1 != 0)
            sub_1418be030(*(rdi_1 + 0x398) + 0x3b0, 0, *(rdi_1 + 0x388))
            *(rdi_1 + 0x388) = 0
            j_sub_140a74f90(rdi_1)
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    r15_1 = &arg1[0xa]
    int32_t var_98_2 = 0
    int32_t r10_2 = *(r15_1 + 0x28)
    void* r11_2 = r15_1 + 0x10
    int32_t var_94_3 = 1
    int32_t rcx_14 = 0
    void* var_90_2 = r11_2
    int32_t var_88_4 = 0xffffffff
    int64_t var_84_2 = 0
    
    if (r10_2 != 0)
        void* rax_25 = *(r11_2 + 0x10)
        void* r8_5 = r11_2
        
        if (rax_25 != 0)
            r8_5 = rax_25
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_2 - 1)
        int32_t rdx_15 = *r8_5
        
        if (rdx_15 != 0)
        label_1418de986:
            int32_t rax_32 = neg.d(rdx_15) & rdx_15
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_32)
            int32_t var_94_4 = rax_32
            int32_t rax_33
            
            if (rax_32 == 0)
                rax_33 = 0x20
            else
                rax_33 = 0x1f - temp0_5
            
            var_84_2.d = rcx_14 - rax_33 + 0x1f
            
            if (rcx_14 - rax_33 + 0x1f s> r10_2)
                var_84_2.d = r10_2
        else
            while (true)
                int64_t rdx_16 = sx.q(rbx_1)
                rcx_14 += 0x20
                rbx_1 += 1
                var_84_2:4.d = rcx_14
                var_98_2 = rbx_1
                
                if (rdx_16.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_15 = *(r8_5 + (rdx_16 << 2) + 4)
                int32_t var_88_5 = 0xffffffff
                
                if (rdx_15 != 0)
                    goto label_1418de986
            
            var_84_2.d = r10_2
    
    int32_t rdx_18 = *(r15_1 + 0x28)
    int128_t var_38_2 = 0xffffffff
    int32_t rdi_2 = 0xffffffff << (rdx_18.b & 0x1f)
    int128_t var_48_2 = var_98_2.o
    int32_t r8_7 = rdx_18 s>> 5
    int32_t r9_6 = rdx_18 & 0xffffffe0
    int64_t var_58_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_6 = rdi_2
    var_84_2.d = rdx_18
    var_78 = r15_1.o
    int96_t var_68_2 = var_48_2:8.12
    
    if (rdx_18 != r10_2)
        void* rax_35 = *(r11_2 + 0x10)
        void* r10_3 = r11_2
        
        if (rax_35 != 0)
            r10_3 = rax_35
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r10_2 - 1)
        int32_t rdx_22 = *(r10_3 + (sx.q(r8_7) << 2)) & rdi_2
        
        if (rdx_22 != 0)
        label_1418dea52:
            int32_t rax_42 = neg.d(rdx_22) & rdx_22
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_42)
            int32_t r13_1
            
            if (rax_42 == 0)
                r13_1 = 0x20
            else
                r13_1 = 0x1f - temp0_7
            
            var_84_2.d = r9_6 - r13_1 + 0x1f
            
            if (r9_6 - r13_1 + 0x1f s> r10_2)
                var_84_2.d = r10_2
        else
            while (true)
                int64_t rcx_19 = sx.q(r8_7)
                r9_6 += 0x20
                r8_7 += 1
                
                if (rcx_19.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_22 = *(r10_3 + (rcx_19 << 2) + 4)
                var_88_6 = 0xffffffff
                
                if (rdx_22 != 0)
                    goto label_1418dea52
            
            var_84_2.d = r10_2
        
        r11_2 = r15_1 + 0x10
    
    while (true)
        int64_t rax_44 = sx.q(var_5c)
        int64_t* rdx_23 = var_78.q
        
        if (rax_44.d == (var_88_6.q u>> 0x20).d && var_68_2.q == r11_2 && rdx_23 == r15_1)
            break
        
        int64_t* rsi_4 = *(*rdx_23 + rax_44 * 0x18 + 8)
        int32_t rax_46 = rsi_4[1].d
        int64_t rdi_3 = sx.q(rax_46 - 1)
        
        if (rax_46 - 1 s>= 0)
            int64_t temp9_1
            
            do
                sub_1418f80e0(*(*rsi_4 + (rdi_3 << 3)), arg2)
                int64_t* rbx_4 = *(*rsi_4 + (rdi_3 << 3))
                
                if (rbx_4 != 0)
                    sub_1418f48f0(rbx_4)
                    j_sub_140a74f90(rbx_4)
                
                temp9_1 = rdi_3
                rdi_3 -= 1
            while (temp9_1 - 1 s>= 0)
        
        int64_t rcx_26 = *rsi_4
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        j_sub_140a74f90(rsi_4)
        var_68_2:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
        r11_2 = r15_1 + 0x10
else
    sub_1418c9a80(arg3, arg1)
    r15_1 = &arg1[0xa]
    sub_1418c97e0(&arg3[0xa], r15_1)

sub_1408d84f0(arg1)
return sub_1408d84f0(r15_1) __tailcall
