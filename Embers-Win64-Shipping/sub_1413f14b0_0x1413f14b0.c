// 函数: sub_1413f14b0
// 地址: 0x1413f14b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2

if ((*(arg2 + 0x64) & 2) == 0)
    sub_1407c2ba0(arg1 + 0xf20, arg2[5].d, 1)
else
    if (arg2 == *(arg1 + 0xf98))
        *(arg1 + 0xf98) = 0
    
    void* var_a8
    int128_t var_a0
    void* var_98
    int32_t var_90
    int32_t i_2
    
    if (*(arg1 + 8) s< 3)
        int64_t* rcx = arg2[4]
        bool rax_2 = (*(*rcx + 0x98))(rcx)
        int32_t i = 0
        int64_t* rcx_1 = arg1 + 0xfa0
        
        do
            if (rdi == *rcx_1)
                int32_t rcx_2 = 0
                int64_t i_3 = sx.q(i)
                int32_t r8_1 = 0
                int32_t var_e8_1 = 0
                int32_t var_e4_1 = 1
                *(arg1 + (i_3 << 3) + 0xfa0) = 0
                int32_t r11_1 = *(arg1 + 0xf10)
                int32_t var_d8_1 = 0xffffffff
                int64_t var_d4_1 = 0
                
                if (r11_1 != 0)
                    void* rax_3 = *(arg1 + 0xf08)
                    void* r9_1 = arg1 + 0xef8
                    
                    if (rax_3 != 0)
                        r9_1 = rax_3
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r11_1 - 1)
                    int32_t rdx_2 = *r9_1
                    
                    if (rdx_2 != 0)
                    label_1413f15cb:
                        int32_t rax_10 = neg.d(rdx_2) & rdx_2
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                        int32_t var_e4_2 = rax_10
                        int32_t rax_11
                        
                        if (rax_10 == 0)
                            rax_11 = 0x20
                        else
                            rax_11 = 0x1f - temp0_2
                        
                        var_d4_1.d = r8_1 - rax_11 + 0x1f
                        
                        if (r8_1 - rax_11 + 0x1f s> r11_1)
                            var_d4_1.d = r11_1
                    else
                        while (true)
                            int64_t rdx_3 = sx.q(rcx_2)
                            r8_1 += 0x20
                            rcx_2 += 1
                            var_d4_1:4.d = r8_1
                            var_e8_1 = rcx_2
                            
                            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                            int32_t var_d8_2 = 0xffffffff
                            
                            if (rdx_2 != 0)
                                goto label_1413f15cb
                        
                        var_d4_1.d = r11_1
                
                int32_t r13_1 = *(arg1 + 0xf10)
                void* r11_2 = arg1 + 0xee8
                int32_t rdx_4 = *(r11_2 + 0x28)
                var_a8 = r11_2
                int32_t var_b4_1 = rdx_4
                int32_t r12_1 = 0xffffffff << (rdx_4.b & 0x1f)
                int32_t r8_4 = rdx_4 s>> 5
                int32_t r10_2 = rdx_4 & 0xffffffe0
                int32_t var_b8_1 = r12_1
                void* r9_2 = r11_2
                var_a0 = var_e8_1.o
                var_90 = -1
                
                if (rdx_4 != r13_1)
                    void* rax_13 = *(arg1 + 0xf08)
                    void* r11_3 = arg1 + 0xef8
                    
                    if (rax_13 != 0)
                        r11_3 = rax_13
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r13_1 - 1)
                    int32_t rdx_8 = *(r11_3 + (sx.q(r8_4) << 2)) & r12_1
                    int32_t var_b4_3
                    
                    if (rdx_8 != 0)
                    label_1413f1692:
                        int32_t rax_20 = neg.d(rdx_8) & rdx_8
                        uint64_t rflags_2
                        int32_t temp0_3
                        temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
                        int32_t r14_1
                        
                        if (rax_20 == 0)
                            r14_1 = 0x20
                        else
                            r14_1 = 0x1f - temp0_3
                        
                        int32_t var_b4_2 = r10_2 - r14_1 + 0x1f
                        
                        if (r10_2 - r14_1 + 0x1f s> r13_1)
                            var_b4_3 = r13_1
                    else
                        while (true)
                            int64_t rcx_7 = sx.q(r8_4)
                            r10_2 += 0x20
                            r8_4 += 1
                            
                            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_8 = *(r11_3 + (rcx_7 << 2) + 4)
                            var_b8_1 = 0xffffffff
                            
                            if (rdx_8 != 0)
                                goto label_1413f1692
                        
                        var_b4_3 = r13_1
                    r11_2 = arg1 + 0xee8
                
                while (true)
                    int64_t i_4 = sx.q(i_2)
                    
                    if (i_4.d == (var_b8_1.q u>> 0x20).d && var_98 == arg1 + 0xef8 && r9_2 == r11_2)
                        break
                    
                    void* rcx_11 = i_4 * 0x30 + *r9_2
                    void* rdx_9 = *(rcx_11 + 0x20)
                    
                    if (rdx_9 != rdi && (*(rcx_11 + 0x28) & 0x13) == 0)
                        char rcx_12 = *(*(rdx_9 + 0x20) + 0x13d)
                        int32_t rax_24
                        
                        if (rcx_12 == 0)
                            rax_24 = -1
                        else
                            uint64_t rflags_3
                            int32_t temp0_4
                            temp0_4, rflags_3 = _bit_scan_forward(zx.d(rcx_12))
                            rax_24 = temp0_4
                        
                        if (rax_24 == i)
                            *(arg1 + (i_3 << 3) + 0xfa0) = rdx_9
                            break
                    
                    var_90 &= not.d(var_a0:4.d)
                    sub_14059bdd0(&var_a0)
                    r9_2 = var_a8
                    r11_2 = arg1 + 0xee8
                
                if ((*(rdi[4] + 0x138) & 8) == 0 || rax_2 != 0)
                    *(arg1 + 0xf78) = 1
                
                break
            
            i += 1
            rcx_1 = &rcx_1[1]
        while (i u< 3)
    
    uint64_t rsi_4 = zx.q(*(rdi[4] + 0x13b))
    uint64_t rbx_1 = zx.q(rsi_4.d)
    
    if (*(arg1 + (rsi_4 << 3) + 0xfb8) == rdi)
        *(arg1 + (rbx_1 << 3) + 0xfb8) = 0
        int128_t zmm6 = zx.o(0)
        sub_1407453e0(&var_a8, arg1 + 0xee8)
        
        for (int32_t i_1 = i_2; i_1 s< *(var_98 + 0x18); i_1 = i_2)
            void* rdx_11 = *(sx.q(i_1) * 0x30 + *var_a8 + 0x20)
            void* rax_33 = *(rdx_11 + 0x20)
            int128_t zmm2
            zmm2.d = (*(rax_33 + 0x34)).d f* 0.589999974f
            zmm2.d = zmm2.d f+ *(rax_33 + 0x30) * 0.300000012f
            zmm2.d = zmm2.d f+ *(rax_33 + 0x38) * 0.109999999f
            
            if (rdx_11 != rdi && (*(rax_33 + 0x13a) & 1) != 0 && *(rax_33 + 0x13b) == rsi_4.b
                    && (*(arg1 + (rbx_1 << 3) + 0xfb8) == 0 || not(zmm6.d f>= zmm2.d)))
                *(arg1 + (rbx_1 << 3) + 0xfb8) = rdx_11
                zmm6 = zmm2
            
            var_90 &= not.d(var_a0:4.d)
            sub_14059bdd0(&var_a0)
    
    sub_14122fa20(rdi)
    sub_1407c2ba0(arg1 + 0xee8, rdi[5].d, 1)
    void* rbx_2 = rdi[4]
    char rax_37 = *(rbx_2 + 0x138)
    
    if ((rax_37 & 8) == 0 && (rax_37 & 0x10) != 0 && rdi[0xc].d == 0xffffffff)
        int64_t rcx_21 = sx.q(*(arg1 + 0xf60))
        int64_t rbx_3 = *(rbx_2 + 0x140)
        
        if (rcx_21.d != 0)
            int32_t r13_2 = 0
            int32_t rsi_5 = 0
            bool r8_5 = **(arg1 + 0xf58) != rbx_3
            int64_t rdi_1 = 0
            bool arg_18 = r8_5
            
            do
                int64_t r9_3 = sx.q(rsi_5)
                rdi_1 += 1
                rsi_5 += 1
                
                if (rdi_1 s< rcx_21)
                    int64_t* rcx_22 = *(arg1 + 0xf58) + (rdi_1 << 3)
                    
                    do
                        int32_t rax_40
                        rax_40.b = *rcx_22 != rbx_3
                        
                        if (zx.d(r8_5) != rax_40)
                            break
                        
                        rsi_5 += 1
                        rdi_1 += 1
                        rcx_22 = &rcx_22[1]
                    while (rdi_1 s< rcx_21)
                
                int32_t r12_3 = rsi_5 - r9_3.d
                
                if (r8_5 != 0)
                    if (r13_2 != r9_3.d)
                        int64_t rcx_23 = *(arg1 + 0xf58)
                        memmove(rcx_23 + (sx.q(r13_2) << 3), rcx_23 + (r9_3 << 3), r12_3 << 3)
                        r8_5 = arg_18
                    
                    r13_2 += r12_3
                
                r8_5 ^= 1
                arg_18 = r8_5
            while (rdi_1 s< rcx_21)
            
            rdi = arg2
            *(arg1 + 0xf60) = r13_2

int64_t* rcx_26 = rdi[4]

if (rcx_26 != 0)
    (**rcx_26)(rcx_26, 1)

jump(**rdi)
