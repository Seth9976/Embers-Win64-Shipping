// 函数: sub_141faaad0
// 地址: 0x141faaad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x140) != 0)
    int32_t r8_1 = 0
    int32_t r10_1 = *(arg1 + 0xd38)
    int32_t rcx = 0
    int32_t var_98_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = arg1 + 0xd20
    int32_t var_88_1 = 0xffffffff
    int32_t var_84_1 = 0
    int32_t var_80_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = *(arg1 + 0xd30)
        void* r9_1 = arg1 + 0xd20
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_3 = *r9_1
        int32_t var_84_3
        
        if (rdx_3 != 0)
        label_141faab99:
            int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_94_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            int32_t var_84_2 = rcx - rax_9 + 0x1f
            
            if (rcx - rax_9 + 0x1f s> r10_1)
                var_84_3 = r10_1
        else
            while (true)
                int64_t rdx_4 = sx.q(r8_1)
                rcx += 0x20
                r8_1 += 1
                int32_t var_80_2 = rcx
                var_98_1 = r8_1
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141faab99
            
            var_84_3 = r10_1
    
    int32_t rdx_6 = *(arg1 + 0xd38)
    int128_t var_38_1 = 0xffffffff
    int128_t var_48_1 = var_98_1.o
    int32_t r14_1 = 0xffffffff << (rdx_6 & 0x1f).b
    int32_t r8_3 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_3 = r14_1
    int32_t var_84_4 = rdx_6
    int128_t var_78 = (arg1 + 0xd10).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_6 != r10_1)
        void* rax_13 = *(arg1 + 0xd30)
        void* r11_1 = arg1 + 0xd20
        
        if (rax_13 != 0)
            r11_1 = rax_13
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_10 = *(r11_1 + (sx.q(r8_3) << 2)) & r14_1
        int32_t var_84_6
        
        if (rdx_10 != 0)
        label_141faac76:
            int32_t rax_19 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t rbx_1
            
            if (rax_19 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_4
            
            int32_t var_84_5 = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r10_1)
                var_84_6 = r10_1
        else
            while (true)
                int64_t rcx_4 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                
                if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r11_1 + (rcx_4 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_141faac76
            
            var_84_6 = r10_1
    
    while (true)
        int32_t var_5c
        int64_t rcx_6 = sx.q(var_5c)
        int32_t rax_12
        
        if (rcx_6.d != (var_88_3.q u>> 0x20).d || var_68_1.q != arg1 + 0xd20)
            rax_12.b = 0
        else
            rax_12.b = 1
        
        int64_t* rdx_11 = var_78.q
        
        if (rax_12.b == 0 || rdx_11 != arg1 + 0xd10)
            rax_12.b = 1
        else
            rax_12.b = 0
        
        if (rax_12.b == 0)
            break
        
        int64_t* r9_5 = *(arg1 + 0x150)
        int32_t* r14_2 = *rdx_11 + rcx_6 * 0xc
        
        if (r9_5[1].d != *(r9_5 + 0x34))
            void* rcx_8 = r9_5[8]
            void* r8_4 = &r9_5[7]
            int64_t r10_2 = sx.q(*r14_2)
            
            if (rcx_8 != 0)
                r8_4 = rcx_8
            
            int32_t i = *(r8_4 + (((sx.q(r9_5[9].d) - 1) & r10_2) << 2))
            
            if (i != 0xffffffff)
                int64_t r8_5 = *r9_5
                
                do
                    int64_t i_1 = sx.q(i)
                    int32_t* rcx_9 = i_1 * 0x38
                    
                    if (*(rcx_9 + r8_5) == r10_2.d)
                        if (i != 0xffffffff)
                            void* rbx_2 = i_1 * 0x38
                            void* rbx_3 = rbx_2 + r8_5
                            
                            if (rbx_2 != neg.q(r8_5) && rbx_3 != -8)
                                int64_t* rax_21 = sub_140d3c6e0(rbx_3 + 8)
                                
                                if (rax_21 != 0)
                                    void* rax_22 = sub_142452380()
                                    void* rcx_11 = rax_21[2]
                                    int64_t rdx_16 = sx.q(*(rax_22 + 0x38))
                                    
                                    if (rdx_16.d s<= *(rcx_11 + 0x38)
                                            && *(*(rcx_11 + 0x30) + (rdx_16 << 3))
                                            == rax_22 + 0x30)
                                        sub_1420e0c80(*(arg1 + 0x140), rax_21, 0, 1)
                                        sub_141fc3620(*(arg1 + 0x150) + 0x50, *(rbx_3 + 8))
                                        sub_141fc3870(*(arg1 + 0x150), r14_2)
                                        *(rbx_3 + 0x28) &= 0xfe
                        
                        break
                    
                    i = *(rcx_9 + r8_5 + 0x30)
                while (i != 0xffffffff)
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

return sub_14084eee0(arg1 + 0xd10, 0) __tailcall
