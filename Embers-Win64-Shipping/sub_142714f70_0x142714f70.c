// 函数: sub_142714f70
// 地址: 0x142714f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("AIPerception")
void* rax
int32_t zmm6_1
rax, zmm6_1 = sub_1423de540(data_143f5b298, *(arg1 - 8), 2)

if ((*(rax + 0x11d) & 4) == 0)
    bool cond:0_1 = *(arg1 + 0xf8) s<= 0
    *(arg1 + 0x100) = *(rax + 0x520)
    
    if (not(cond:0_1))
        zmm6_1 = sub_142706a20(arg1 - 0x28)
    
    int32_t rdi_1 = 0
    int64_t* rcx_2 = *(arg1 + 0x60)
    int64_t r13
    r13.b = 0
    int64_t rdx_1 = 0
    uint64_t r8_2 = sx.q(*(arg1 + 0x68)) << 3 u>> 3
    
    if (rcx_2 u> &rcx_2[sx.q(*(arg1 + 0x68))])
        r8_2 = 0
    
    void* var_b0
    int32_t i_2
    
    if (r8_2 != 0)
        int128_t zmm7 = zx.o(0)
        int128_t zmm0_1
        
        do
            void* rax_4 = *rcx_2
            
            if (rax_4 != 0)
                zmm0_1.d = (*(rax_4 + 0x40)).d f- zmm6_1
                *(rax_4 + 0x40) = zmm0_1.d
            
            if (rax_4 == 0 || zmm0_1.d f> 0f)
                rax_4.b = 0
            else
                rax_4.b = 1
            
            r13.b |= rax_4.b
            rcx_2 = &rcx_2[1]
            rdx_1 += 1
        while (rdx_1 != r8_2)
        
        if (r13.b != 0)
            int32_t rcx_3 = 0
            int32_t r11_1 = *(arg1 + 0x38)
            void* r9_1 = arg1 + 0x20
            r8_2 = 0
            int32_t var_b8_1 = 0
            int32_t var_b4_1 = 1
            var_b0 = r9_1
            int32_t var_a8_1 = 0xffffffff
            int32_t var_a4
            var_a4.q = 0
            int32_t var_a0
            
            if (r11_1 != 0)
                void* rax_5 = *(r9_1 + 0x10)
                
                if (rax_5 != 0)
                    r9_1 = rax_5
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r11_1 - 1)
                int32_t rdx_4 = *r9_1
                int32_t var_a4_2
                
                if (rdx_4 != 0)
                label_1427150f8:
                    int32_t rax_12 = neg.d(rdx_4) & rdx_4
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_12)
                    int32_t var_b4_2 = rax_12
                    int32_t rax_13
                    
                    if (rax_12 == 0)
                        rax_13 = 0x20
                    else
                        rax_13 = 0x1f - temp0_1
                    
                    r8_2 = zx.q(r8_2.d - rax_13)
                    int32_t rax_14 = (r8_2 + 0x1f).d
                    int32_t var_a4_1 = rax_14
                    
                    if (rax_14 s> r11_1)
                        var_a4_2 = r11_1
                else
                    while (true)
                        int64_t rdx_5 = sx.q(rcx_3)
                        r8_2 = zx.q(r8_2.d + 0x20)
                        rcx_3 += 1
                        var_a0 = r8_2.d
                        var_b8_1 = rcx_3
                        
                        if (rdx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                        var_a8_1 = 0xffffffff
                        
                        if (rdx_4 != 0)
                            goto label_1427150f8
                    
                    var_a4_2 = r11_1
            
            void* var_50_1 = arg1 + 0x10
            zmm0_1 = var_b8_1.o
            int128_t var_60_1 = 0xffffffff
            int16_t var_80_1 = 0
            void* rax_15 = zmm0_1.q
            var_a8_1.o = zmm0_1
            var_b8_1.o = (arg1 + 0x10).o
            zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int128_t var_58 = zmm0_1
            int128_t var_98_1 = zmm0_1
            
            if (0 s< *(rax_15 + 0x18))
                int32_t i = i_2
                
                do
                    void** rsi_1 = var_b8_1.q
                    int64_t r14_1 = sx.q(i) * 0x3c
                    
                    if (sub_140d3e110(*rsi_1 + 4 + r14_1) == 0)
                        zmm0_1 = sub_142704f80(arg1 - 0x28, *rsi_1 + 4 + r14_1)
                        sub_14270b030(var_98_1:8.q, i)
                        var_80_1.b = 1
                    else
                        zmm0_1, zmm7 = sub_14271bca0(*rsi_1 + 4 + r14_1)
                    
                    var_a0 &= not.d(var_b0:4.d)
                    r8_2 = sub_14059bdd0(&var_b0)
                    i = i_2
                while (i s< *(var_a8_1.q + 0x18))
                
                if (var_80_1.b != 0 && var_80_1:1.b != 0)
                    r8_2.b = 1
                    r8_2, zmm0_1 =
                        sub_1426f6b40(arg1 + 0x10, *(arg1 + 0x18) - *(arg1 + 0x44), r8_2.b)
            
            int64_t r14_2 = 0
            int64_t* rsi_2 = *(arg1 + 0x60)
            uint64_t r12_2 = sx.q(*(arg1 + 0x68)) << 3 u>> 3
            
            if (rsi_2 u> &rsi_2[sx.q(*(arg1 + 0x68))])
                r12_2 = 0
            
            if (r12_2 != 0)
                do
                    int64_t* rbx_2 = *rsi_2
                    
                    if (rbx_2 != 0 && not(zmm7.d f< rbx_2[8].d))
                        r8_2 = (*(*rbx_2 + 0x2a8))(rbx_2)
                        rbx_2[8].d = zmm0_1.d
                    
                    rsi_2 = &rsi_2[1]
                    r14_2 += 1
                while (r14_2 != r12_2)
    
    int32_t rdx_12
    rdx_12.b = r13.b == 0
    
    if (r13.b != 0 || sub_1426f7870(arg1 - 0x28, rdx_12, r8_2.b) != 0 || (*(arg1 + 0xd8) & 1) != 0)
        int32_t var_b8_2 = 0
        int32_t r9_2 = *(arg1 + 0x38)
        void* r8_3 = arg1 + 0x20
        int32_t var_b4_3 = 1
        int32_t rcx_17 = 0
        var_b0 = r8_3
        int32_t var_a8_2 = 0xffffffff
        int32_t var_a4_3 = 0
        int32_t var_a0_1 = 0
        
        if (r9_2 != 0)
            void* rax_25 = *(r8_3 + 0x10)
            
            if (rax_25 != 0)
                r8_3 = rax_25
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(r9_2 - 1)
            int32_t rdx_15 = *r8_3
            int32_t var_a4_5
            
            if (rdx_15 != 0)
            label_142715327:
                int32_t rax_32 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_32)
                int32_t var_b4_4 = rax_32
                int32_t rsi_3
                
                if (rax_32 == 0)
                    rsi_3 = 0x20
                else
                    rsi_3 = 0x1f - temp0_4
                
                int32_t var_a4_4 = rcx_17 - rsi_3 + 0x1f
                
                if (rcx_17 - rsi_3 + 0x1f s> r9_2)
                    var_a4_5 = r9_2
            else
                while (true)
                    int64_t rdx_16 = sx.q(rdi_1)
                    rcx_17 += 0x20
                    rdi_1 += 1
                    var_a0_1 = rcx_17
                    var_b8_2 = rdi_1
                    
                    if (rdx_16.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                        break
                    
                    rdx_15 = *(r8_3 + (rdx_16 << 2) + 4)
                    var_a8_2 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_142715327
                
                var_a4_5 = r9_2
        
        void* var_50_2 = arg1 + 0x10
        int128_t zmm0_2 = var_b8_2.o
        int128_t var_60_2 = 0xffffffff
        int16_t var_80_2 = 0
        void* rax_34 = zmm0_2.q
        var_a8_2.o = zmm0_2
        var_b8_2.o = (arg1 + 0x10).o
        zmm0_2.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_98_2 = zmm0_2
        
        if (0 s< *(rax_34 + 0x18))
            int32_t i_1 = i_2
            
            do
                void* rcx_19 = sx.q(i_1) * 0x3c
                int64_t rdx_18 = *var_b8_2.q
                
                if ((*(rcx_19 + rdx_18 + 0x2c) & 1) != 0)
                    sub_14271f9a0(rcx_19 + rdx_18 + 4)
                
                var_a0_1 &= not.d(var_b0:4.d)
                sub_14059bdd0(&var_b0)
                i_1 = i_2
            while (i_1 s< *(var_a8_2.q + 0x18))
            
            if (var_80_2.b != 0 && var_80_2:1.b != 0)
                sub_1426f6b40(arg1 + 0x10, *(arg1 + 0x18) - *(arg1 + 0x44), 1)
        
        *(arg1 + 0xd8) &= 0xfffffffe

return sub_140b37f60("AIPerception") __tailcall
