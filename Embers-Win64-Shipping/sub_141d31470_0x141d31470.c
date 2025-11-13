// 函数: sub_141d31470
// 地址: 0x141d31470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405a5410(arg3, 0)

AcquireSRWLockShared(*(rbx + 0xa8) + 0x3b8)
void* rcx_3 = *(rbx + 0xa8)
int64_t* r15 = *(rcx_3 + 0x3a8)
void* r8_2 = &r15[sx.q(*(rcx_3 + 0x3b0)) * 2]

if (r15 != r8_2)
    void* rax_1 = r8_2
    
    do
        int64_t r8_3 = *r15
        
        if (r8_3 != 0)
            int32_t arg_18
            sub_140ba6ab0(rbx + 0x368, &arg_18, r8_3)
            int64_t rax_2 = sx.q(arg_18)
            void* const rax_5
            
            if (rax_2.d == 0xffffffff)
                rax_5 = nullptr
            else
                rax_5 = rax_2 * 0x60 + *(rbx + 0x368)
            
            void* r13_1 = rax_5 + 8
            
            if (rax_5 == 0)
                r13_1 = nullptr
            
            if (r13_1 != 0)
                int32_t r10_1 = *(r13_1 + 0x28)
                int32_t var_b8_1 = 0
                int32_t rcx_5 = 0
                int32_t var_b4_1 = 1
                int32_t r8_4 = 0
                void* var_b0_1 = r13_1 + 0x10
                int32_t var_a8_1 = 0xffffffff
                int64_t var_a4_1 = 0
                
                if (r10_1 != 0)
                    void* rax_6 = *(r13_1 + 0x20)
                    void* r9_1 = r13_1 + 0x10
                    
                    if (rax_6 != 0)
                        r9_1 = rax_6
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r10_1 - 1)
                    int32_t rdx_3 = *r9_1
                    
                    if (rdx_3 != 0)
                    label_141d315e8:
                        int32_t rax_13 = neg.d(rdx_3) & rdx_3
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
                        int32_t var_b4_2 = rax_13
                        int32_t rax_14
                        
                        if (rax_13 == 0)
                            rax_14 = 0x20
                        else
                            rax_14 = 0x1f - temp0_2
                        
                        var_a4_1.d = r8_4 - rax_14 + 0x1f
                        
                        if (r8_4 - rax_14 + 0x1f s> r10_1)
                            var_a4_1.d = r10_1
                    else
                        while (true)
                            int64_t rdx_4 = sx.q(rcx_5)
                            r8_4 += 0x20
                            rcx_5 += 1
                            var_a4_1:4.d = r8_4
                            var_b8_1 = rcx_5
                            
                            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                            int32_t var_a8_2 = 0xffffffff
                            
                            if (rdx_3 != 0)
                                goto label_141d315e8
                        
                        var_a4_1.d = r10_1
                
                int32_t rdx_5 = *(r13_1 + 0x28)
                int128_t var_48_1 = 0xffffffff
                int32_t rsi_1 = 0xffffffff << (rdx_5.b & 0x1f)
                int128_t var_58_1 = var_b8_1.o
                int32_t r8_7 = rdx_5 s>> 5
                int32_t r9_3 = rdx_5 & 0xffffffe0
                int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int32_t var_a8_3 = rsi_1
                var_a4_1.d = rdx_5
                int128_t var_98 = r13_1.o
                int128_t var_88_1 = var_58_1
                
                if (rdx_5 != r10_1)
                    void* rax_16 = *(r13_1 + 0x20)
                    void* r11_1 = r13_1 + 0x10
                    
                    if (rax_16 != 0)
                        r11_1 = rax_16
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r10_1 - 1)
                    int32_t rdx_9 = *(r11_1 + (sx.q(r8_7) << 2)) & rsi_1
                    
                    if (rdx_9 != 0)
                    label_141d316b2:
                        int32_t rax_23 = neg.d(rdx_9) & rdx_9
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
                        int32_t rax_24
                        
                        if (rax_23 == 0)
                            rax_24 = 0x20
                        else
                            rax_24 = 0x1f - temp0_4
                        
                        var_a4_1.d = r9_3 - rax_24 + 0x1f
                        
                        if (r9_3 - rax_24 + 0x1f s> r10_1)
                            var_a4_1.d = r10_1
                    else
                        while (true)
                            int64_t rcx_10 = sx.q(r8_7)
                            r9_3 += 0x20
                            r8_7 += 1
                            
                            if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_9 = *(r11_1 + (rcx_10 << 2) + 4)
                            var_a8_3 = 0xffffffff
                            
                            if (rdx_9 != 0)
                                goto label_141d316b2
                        
                        var_a4_1.d = r10_1
                
                while (true)
                    int64_t r9_5 = sx.q(var_88_1:0xc.d)
                    int64_t* r8_8 = var_98.q
                    
                    if (r9_5.d == (var_a8_3.q u>> 0x20).d && var_88_1.q == r13_1 + 0x10
                            && r8_8 == r13_1)
                        break
                    
                    int64_t* rax_26 = *r15
                    int64_t rsi_2 = *(*(*rax_26 + 0xe0) + (sx.q(rax_26[1].d) << 3))
                    
                    if (rsi_2 != 0 && *(*r8_8 + r9_5 * 0x10) != 0)
                        int64_t var_70_1 = 0
                        int64_t rbx_1 = sx.q(arg3[1].d)
                        char var_68_1 = 1
                        int32_t rax_29 = (rbx_1 + 1).d
                        arg3[1].d = rax_29
                        
                        if (rax_29 s> *(arg3 + 0xc))
                            sub_1405a4f90(arg3)
                        
                        int64_t rcx_17 = rbx_1 << 4
                        *(rcx_17 + *arg3) = var_70_1.o
                        int64_t rcx_18 = rcx_17 + *arg3
                        *rcx_18 = rsi_2
                        *(rcx_18 + 8) = r15[1].b
                    
                    var_88_1:8.d &= not.d(var_98:0xc.d)
                    sub_14059bdd0(&var_98:8)
            
            rbx = arg2
            rax_1 = r8_2
        
        r15 = &r15[2]
    while (r15 != rax_1)
    
    rcx_3 = *(rbx + 0xa8)

ReleaseSRWLockShared(rcx_3 + 0x3b8)
void* rbx_2 = *(rbx + 0xa8)
AcquireSRWLockExclusive(rbx_2 + 0x3b8)
bool cond:0 = *(rbx_2 + 0x3b4) == 0
*(rbx_2 + 0x3b0) = 0

if (not(cond:0))
    sub_1405a5410(rbx_2 + 0x3a8, 0)

return ReleaseSRWLockExclusive(rbx_2 + 0x3b8) __tailcall
