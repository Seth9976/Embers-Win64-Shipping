// 函数: sub_1409b6490
// 地址: 0x1409b6490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg3) * 3
int64_t rax_1 = *(arg1 + 0x40)
void* rbx = rax_1 + (r8 << 3)
uint64_t result = *(arg1 + 0x78)
int32_t* r14 = result + sx.q(*(rax_1 + (r8 << 3))) * 0x48

if (*(rax_1 + (r8 << 3) + 0x10) s> 0)
    char arg_18 = 0
    void* r13_1 = *(**(*(arg1 + 0x28) + 0x50) + (sx.q(*(arg1 + 0x38)) << 3))
    void* rax_6 = *(r13_1 + 0x28)
    void* rdx = r13_1 + 0x10
    
    if (rax_6 != 0)
        rdx = rax_6
    
    void* r15_1 = rdx + sx.q(*r14) * 0x18
    uint64_t rcx_2 = 0
    
    if (*(arg2 + 0x520) s<= 0)
        int32_t* r8_2 = *(rbx + 8)
        void* r11_1 = &r8_2[sx.q(*(rbx + 0x10))]
        
        if (r8_2 != r11_1)
            while (true)
                int32_t rax_9 = *((sx.q(*r8_2) << 4) + *(r14 + 0x10) + (rcx_2 << 2))
                
                if (rax_9 != *(r15_1 + 0xc) && rax_9 != *(r15_1 + 0x10))
                    rcx_2 += 1
                    
                    if (rcx_2 s< 3)
                        continue
                    else
                        r8_2 = &r8_2[1]
                        rcx_2 = 0
                        
                        if (r8_2 == r11_1)
                            break
                        
                        continue
                
                arg_18 = 1
                rcx_2 = 0
                break
    
    void* r12_1 = rbx + 8
    int32_t* rbx_1 = *(rbx + 8)
    int64_t rdi_2 = 0
    uint64_t rsi_2 = sx.q(*(rbx + 0x10)) << 2 u>> 2
    
    if (rbx_1 u> &rbx_1[sx.q(*(rbx + 0x10))])
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            sub_140906230(&r14[4], *rbx_1, 1)
            rdi_2 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_2 != rsi_2)
        
        rcx_2 = 0
    
    if (*(arg2 + 0x520) s<= 0)
        if (arg_18 != 0)
            int32_t rbx_2 = r14[0xe]
            void* r9_2 = &r14[8]
            int32_t r8_3 = 0
            int32_t var_b8_1 = 0
            int32_t var_b4_1 = 1
            int32_t rdi_3 = 0x7fffffff
            void* var_b0_1 = r9_2
            int32_t rsi_3 = -0x80000000
            int32_t var_a8_1 = 0xffffffff
            int64_t var_a4_1 = 0
            
            if (rbx_2 != 0)
                void* rax_13 = *(r9_2 + 0x10)
                
                if (rax_13 != 0)
                    r9_2 = rax_13
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rbx_2 - 1)
                int32_t rdx_7 = *r9_2
                
                if (rdx_7 != 0)
                label_1409b6688:
                    int32_t rax_20 = neg.d(rdx_7) & rdx_7
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_20)
                    int32_t var_b4_2 = rax_20
                    int32_t rax_21
                    
                    if (rax_20 == 0)
                        rax_21 = 0x20
                    else
                        rax_21 = 0x1f - temp0_2
                    
                    var_a4_1.d = r8_3 - rax_21 + 0x1f
                    
                    if (r8_3 - rax_21 + 0x1f s> rbx_2)
                        var_a4_1.d = rbx_2
                else
                    while (true)
                        int64_t rdx_8 = sx.q(rcx_2.d)
                        r8_3 += 0x20
                        rcx_2 = zx.q(rcx_2.d + 1)
                        var_a4_1:4.d = r8_3
                        var_b8_1 = rcx_2.d
                        
                        if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_7 = *(r9_2 + (rdx_8 << 2) + 4)
                        int32_t var_a8_2 = 0xffffffff
                        
                        if (rdx_7 != 0)
                            goto label_1409b6688
                    
                    var_a4_1.d = rbx_2
            
            int32_t rdx_9 = r14[0xe]
            int32_t r12_2 = r14[0xe]
            int128_t var_58_1 = 0xffffffff
            int32_t r9_3 = 0xffffffff << (rdx_9.b & 0x1f)
            arg_18.d = r9_3
            int32_t var_a8_3 = r9_3
            int128_t var_68_1 = var_b8_1.o
            int32_t r9_5 = rdx_9 & 0xffffffe0
            int32_t r8_6 = rdx_9 s>> 5
            int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            var_a4_1.d = rdx_9
            int128_t var_98 = (&r14[4]).o
            int128_t var_88_1 = var_68_1
            
            if (rdx_9 != r12_2)
                void* rax_23 = *(r14 + 0x30)
                void* r10_2 = &r14[8]
                
                if (rax_23 != 0)
                    r10_2 = rax_23
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r12_2 - 1)
                int32_t rdx_13 = *(r10_2 + (sx.q(r8_6) << 2)) & arg_18.d
                
                if (rdx_13 != 0)
                label_1409b6762:
                    int32_t rax_30 = neg.d(rdx_13) & rdx_13
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
                    int32_t r11_2
                    
                    if (rax_30 == 0)
                        r11_2 = 0x20
                    else
                        r11_2 = 0x1f - temp0_4
                    
                    var_a4_1.d = r9_5 - r11_2 + 0x1f
                    
                    if (r9_5 - r11_2 + 0x1f s> r12_2)
                        var_a4_1.d = r12_2
                else
                    while (true)
                        int64_t rcx_8 = sx.q(r8_6)
                        r9_5 += 0x20
                        r8_6 += 1
                        
                        if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_13 = *(r10_2 + (rcx_8 << 2) + 4)
                        var_a8_3 = 0xffffffff
                        
                        if (rdx_13 != 0)
                            goto label_1409b6762
                    
                    var_a4_1.d = r12_2
            
            while (true)
                int32_t rcx_10 = var_88_1:0xc.d
                int64_t rdx_14 = var_88_1.q
                
                if (rcx_10 == (var_a8_3.q u>> 0x20).d && rdx_14 == &r14[8] && var_98.q == &r14[4])
                    break
                
                int32_t rax_32 = data_143a1c6c0
                
                if (rcx_10 s< *(rdx_14 + 0x18))
                    rax_32 = rcx_10
                
                int32_t* rcx_13 = (sx.q(rax_32) << 4) + *(r14 + 0x10)
                int32_t rax_33 = *rcx_13
                
                if (rax_33 s< rdi_3)
                    rdi_3 = rax_33
                
                if (rax_33 s> rsi_3)
                    rsi_3 = rax_33
                
                int32_t rax_34 = rcx_13[1]
                
                if (rax_34 s< rdi_3)
                    rdi_3 = rax_34
                
                if (rax_34 s> rsi_3)
                    rsi_3 = rax_34
                
                int32_t rax_35 = rcx_13[2]
                
                if (rax_35 s< rdi_3)
                    rdi_3 = rax_35
                
                if (rax_35 s> rsi_3)
                    rsi_3 = rax_35
                
                var_88_1:8.d &= not.d(var_98:0xc.d)
                sub_14059bdd0(&var_98:8)
            
            *(r15_1 + 0xc) = rdi_3
            *(r15_1 + 0x10) = rsi_3
        
        int32_t* i = *r12_1
        
        for (void* rdi_4 = &i[sx.q(*(r12_1 + 8))]; i != rdi_4; i = &i[1])
            int32_t r10_3 = *(r15_1 + 0xc)
            void* rdx_15 = *(r13_1 + 0x198)
            uint64_t r8_8 = zx.q(*i * 3 + *(r15_1 + 4))
            uint64_t r11_3 = zx.q((r8_8 + 1).d)
            uint64_t rbx_5 = zx.q((r8_8 + 2).d)
            
            if (*(r13_1 + 0x1b4) == 0)
                if ((rdx_15.b & 1) != 0)
                    rdx_15 = (rdx_15 s>> 1) + r13_1 + 0x198
                
                *(rdx_15 + (r8_8 << 1)) = r10_3.w
            else
                if ((rdx_15.b & 1) != 0)
                    rdx_15 = (rdx_15 s>> 1) + r13_1 + 0x198
                
                *(rdx_15 + (r8_8 << 2)) = r10_3
            
            int32_t r8_9 = *(r15_1 + 0xc)
            void* rdx_18 = *(r13_1 + 0x198)
            
            if (*(r13_1 + 0x1b4) == 0)
                if ((rdx_18.b & 1) != 0)
                    rdx_18 = (rdx_18 s>> 1) + r13_1 + 0x198
                
                *(rdx_18 + (r11_3 << 1)) = r8_9.w
            else
                if ((rdx_18.b & 1) != 0)
                    rdx_18 = (rdx_18 s>> 1) + r13_1 + 0x198
                
                *(rdx_18 + (r11_3 << 2)) = r8_9
            
            int32_t r8_10 = *(r15_1 + 0xc)
            void* rdx_21 = *(r13_1 + 0x198)
            
            if (*(r13_1 + 0x1b4) == 0)
                if ((rdx_21.b & 1) != 0)
                    rdx_21 = (rdx_21 s>> 1) + r13_1 + 0x198
                
                *(rdx_21 + (rbx_5 << 1)) = r8_10.w
            else
                if ((rdx_21.b & 1) != 0)
                    rdx_21 = (rdx_21 s>> 1) + r13_1 + 0x198
                
                *(rdx_21 + (rbx_5 << 2)) = r8_10
    
    result = zx.q(*(r12_1 + 0xc))
    *(r12_1 + 8) = 0
    
    if (result.d s< 0 && result.d != 0)
        return sub_1405dadb0(r12_1, 0)

return result
