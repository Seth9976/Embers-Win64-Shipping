// 函数: sub_1409cdfe0
// 地址: 0x1409cdfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_18
sub_14099b070(*(arg2 + 0x28) + 0x308, &arg_18, data_143f36150)
int32_t* rcx_2 = *arg3
int64_t rax = sx.q(arg3[1].d)
arg_18 = rcx_2
void* result = &rcx_2[rax]
void* result_1 = result

if (rcx_2 != result)
    void* rdx_1 = arg1 + 0x88
    
    do
        int64_t rdi_1 = sx.q(*rcx_2)
        int32_t r8_1 = 0
        int64_t rax_1 = *(arg1 + 0x78)
        int32_t r9_1 = 0
        int32_t r11_1 = *(rdx_1 + 0x18)
        int32_t var_b8_1 = 0
        int32_t var_b4_1 = 1
        int64_t rcx_3 = rdi_1 * 9
        int64_t r13_1 = sx.q(*(rax_1 + (rcx_3 << 3)))
        void* var_b0_1 = rdx_1
        int32_t var_a8_1 = 0xffffffff
        int64_t var_a4_1 = 0
        
        if (r11_1 != 0)
            void* rax_2 = *(rdx_1 + 0x10)
            void* r10_1 = rdx_1
            
            if (rax_2 != 0)
                r10_1 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rcx_4 = *r10_1
            
            if (rcx_4 != 0)
            label_1409ce0fa:
                int32_t rax_9 = neg.d(rcx_4) & rcx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_b4_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_a4_1.d = r9_1 - rax_10 + 0x1f
                
                if (r9_1 - rax_10 + 0x1f s> r11_1)
                    var_a4_1.d = r11_1
            else
                while (true)
                    int64_t rcx_5 = sx.q(r8_1)
                    r9_1 += 0x20
                    r8_1 += 1
                    var_a4_1:4.d = r9_1
                    var_b8_1 = r8_1
                    
                    if (rcx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rcx_4 = *(r10_1 + (rcx_5 << 2) + 4)
                    int32_t var_a8_2 = 0xffffffff
                    
                    if (rcx_4 != 0)
                        goto label_1409ce0fa
                
                var_a4_1.d = r11_1
        
        int32_t rdx_4 = *(arg1 + 0xa0)
        int32_t r14_1 = *(arg1 + 0xa0)
        int128_t var_58_1 = 0xffffffff
        int128_t var_68_1 = var_b8_1.o
        int32_t rsi_1 = 0xffffffff << (rdx_4.b & 0x1f)
        int32_t r8_3 = rdx_4 s>> 5
        int32_t r9_4 = rdx_4 & 0xffffffe0
        int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_a8_3 = rsi_1
        var_a4_1.d = rdx_4
        int128_t var_98 = (arg1 + 0x78).o
        int128_t var_88_1 = var_68_1
        
        if (rdx_4 != r14_1)
            void* rax_12 = *(arg1 + 0x98)
            void* r10_2 = arg1 + 0x88
            
            if (rax_12 != 0)
                r10_2 = rax_12
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r14_1 - 1)
            int32_t rdx_8 = *(r10_2 + (sx.q(r8_3) << 2)) & rsi_1
            
            if (rdx_8 != 0)
            label_1409ce1d2:
                int32_t rax_19 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
                int32_t rax_20
                
                if (rax_19 == 0)
                    rax_20 = 0x20
                else
                    rax_20 = 0x1f - temp0_4
                
                var_a4_1.d = r9_4 - rax_20 + 0x1f
                
                if (r9_4 - rax_20 + 0x1f s> r14_1)
                    var_a4_1.d = r14_1
            else
                while (true)
                    int64_t rcx_10 = sx.q(r8_3)
                    r9_4 += 0x20
                    r8_3 += 1
                    
                    if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = *(r10_2 + (rcx_10 << 2) + 4)
                    var_a8_3 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_1409ce1d2
                
                var_a4_1.d = r14_1
        
        while (true)
            int32_t rcx_12 = var_88_1:0xc.d
            int64_t rdx_9 = var_88_1.q
            
            if (rcx_12 == (var_a8_3.q u>> 0x20).d && rdx_9 == arg1 + 0x88
                    && var_98.q == arg1 + 0x78)
                break
            
            int32_t rax_22 = data_143a1c6c4
            
            if (rcx_12 s< *(rdx_9 + 0x18))
                rax_22 = rcx_12
            
            int64_t rax_23 = *(arg1 + 0x78)
            int64_t rdx_10 = sx.q(rax_22) * 9
            int32_t rax_24 = *(rax_23 + (rdx_10 << 3))
            
            if (rax_24 u> r13_1.d)
                *(rax_23 + (rdx_10 << 3)) = rax_24 - 1
            
            var_88_1:8.d &= not.d(var_98:0xc.d)
            sub_14059bdd0(&var_98:8)
        
        if (*(arg2 + 0x520) s<= 0)
            void* rsi_4 = *(**(*(arg1 + 0x28) + 0x50) + (sx.q(*(arg1 + 0x38)) << 3))
            int64_t r12_2 = r13_1 * 0x18
            void* rdx_11 = *(rsi_4 + 0x28)
            uint32_t r15_2 = *(rax_1 + (rcx_3 << 3) + 8) * 3
            void* rax_33 = rsi_4 + 0x10
            
            if (rdx_11 != 0)
                rax_33 = rdx_11
            
            sub_1422aa610(rsi_4 + 0x178, *(rax_33 + r12_2 + 4), r15_2)
            int32_t r9_6 = *(rsi_4 + 0x30)
            int32_t r10_3 = (r13_1 + 1).d
            int32_t r8_5 = r10_3
            
            if (r10_3 u< r9_6)
                do
                    void* rax_34 = *(rsi_4 + 0x28)
                    void* rdx_13 = rsi_4 + 0x10
                    
                    if (rax_34 != 0)
                        rdx_13 = rax_34
                    
                    int64_t rax_35 = sx.q(r8_5)
                    r8_5 += 1
                    int64_t rcx_21 = rax_35 * 3
                    *(rdx_13 + (rcx_21 << 3) + 4) -= r15_2
                while (r8_5 u< r9_6)
            
            int32_t rax_39 = *(rsi_4 + 0x30)
            int32_t rcx_23 = rax_39 - r13_1.d
            
            if (rcx_23 != 1)
                void* rax_36 = *(rsi_4 + 0x28)
                void* r9_7 = rsi_4 + 0x10
                
                if (rax_36 != 0)
                    r9_7 = rax_36
                
                memmove(r9_7 + r12_2, r9_7 + sx.q(r10_3) * 0x18, (rcx_23 - 1) * 0x18)
                rax_39 = *(rsi_4 + 0x30)
            
            *(rsi_4 + 0x30) = rax_39 - 1
            sub_1409da8a0(rsi_4 + 0x10)
        
        result = sub_1409d8630(arg1 + 0x78, rdi_1.d, 1)
        rdx_1 = arg1 + 0x88
        rcx_2 = &arg_18[1]
        arg_18 = rcx_2
    while (rcx_2 != result_1)

return result
