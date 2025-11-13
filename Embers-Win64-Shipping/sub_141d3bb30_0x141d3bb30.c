// 函数: sub_141d3bb30
// 地址: 0x141d3bb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t r15 = 0
int32_t temp0 = rdi.d

if (temp0 s< 0)
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) s< 0)
        sub_1405a4d70(arg1)
    
    memset(*arg1 + (rdi << 3), 0, sx.q(neg.d(rdi.d)) << 3)
else if (temp0 s> 0 && rdi.d != 0)
    arg1[1].d = 0

if (arg4 == 0)
    return 

void* var_b8
void* i
int32_t var_94
int32_t var_90
int32_t var_88
int64_t var_80
uint64_t rax

if (arg3 == 0)
    int64_t* r12_4 = *(arg2 + 0x348) + 0x4d8
    int64_t* var_68_1 = r12_4
    
    if (*(arg2 + 0x110) != 0)
        sub_14175a890(arg2 + 0x88, 0)
    
    int32_t rdx_1 = *(arg2 + 0x248)
    
    if (rdx_1 s> *(arg1 + 0xc))
        sub_1405c5570(arg1, rdx_1)
    
    var_b8 = arg2 + 0x238
    int64_t* var_b0_1
    __builtin_memset(&var_b0_1, 0, 0x15)
    int32_t var_98_1 = 0
    sub_141750820(&var_b8)
    
    while (i != 0)
        int64_t rdi_3 = sx.q(arg1[1].d)
        void* i_1 = i
        int32_t var_a0_1
        int64_t rsi_1 = sx.q(var_a0_1) << 3
        int64_t r13_1 = *(rsi_1 + *(i_1 + 0xc8))
        int32_t rax_4 = (rdi_3 + 1).d
        arg1[1].d = rax_4
        
        if (rax_4 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        *(*arg1 + (rdi_3 << 3)) = r13_1
        void** rax_6 = &i
        char var_9c
        
        if (var_9c u< 3)
            rax_6 = nullptr
        
        if (rax_6 != 0 && *(*(*rax_6 + 0x428) + sx.q(rax_6[1].d) * 0x10 + 8) != 0)
            void* rdi_4 = nullptr
            void* rcx_6 = *(rsi_1 + *(i_1 + 0xc8))
            
            if (*(rcx_6 + 0xc) u>= 2)
                rdi_4 = rcx_6
            
            void arg_8
            
            if (*sub_1405ba560(r12_4, &arg_8, rdi_4) != 0xffffffff)
                int32_t arg_20
                sub_1405ba560(r12_4, &arg_20, rdi_4)
                int64_t rax_10 = sx.q(arg_20)
                void* const rcx_11
                
                if (rax_10.d == 0xffffffff)
                    rcx_11 = nullptr
                else
                    rcx_11 = (rax_10 << 5) + *r12_4
                
                int64_t r14_1 = 0
                int64_t* rsi_2 = *(rcx_11 + 8)
                uint64_t r12_6 = sx.q(*(rcx_11 + 0x10)) << 3 u>> 3
                
                if (rsi_2 u> &rsi_2[sx.q(*(rcx_11 + 0x10))])
                    r12_6 = 0
                
                if (r12_6 != 0)
                    do
                        int64_t rdi_5 = sx.q(arg1[1].d)
                        int64_t r13_2 = *rsi_2
                        int32_t rax_13 = (rdi_5 + 1).d
                        arg1[1].d = rax_13
                        
                        if (rax_13 s> *(arg1 + 0xc))
                            sub_1405a4d70(arg1)
                        
                        rsi_2 = &rsi_2[1]
                        r14_1 += 1
                        *(*arg1 + (rdi_5 << 3)) = r13_2
                    while (r14_1 != r12_6)
                
                r12_4 = var_68_1
        
        int64_t* rdx_8 = var_b0_1
        
        if (rdx_8 != 0)
            int32_t rax_17 = var_90 + 1
            var_90 = rax_17
            
            if (rax_17 s>= rdx_8[1].d)
                var_98_1 += 1
                sub_141750820(&var_b8)
            else
                void** rdx_9 = *(*rdx_8 + (sx.q(rax_17) << 3))
                void* rcx_15 = *rdx_9
                var_80.d = rdx_9[1].d
                
                if (rcx_15 == 0)
                    var_88.q = rcx_15
                    var_80:4.b = 0
                    i.o = var_88.o
                else
                    var_80:4.b = *(rcx_15 + 0x40)
                    var_88.q = rcx_15
                    i.o = var_88.o
        else
            rax = zx.q(var_a0_1 + 1)
            var_a0_1 = rax.d
            
            if (rax.d s>= var_94)
                var_98_1 += 1
                sub_141750820(&var_b8)
else if (arg3 == 1)
    void* r13_4 = *(arg2 + 0x348) + 0x378
    int32_t rdx_11 = *(r13_4 + 8) - *(r13_4 + 0x34)
    
    if (rdx_11 s> *(arg1 + 0xc))
        sub_1405c5570(arg1, rdx_11)
    
    int32_t r10_1 = *(r13_4 + 0x28)
    void* r8_4 = r13_4 + 0x10
    int32_t var_88_1 = 0
    int32_t rcx_17 = 0
    int32_t var_84_1 = 1
    void* var_80_1 = r8_4
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    int32_t var_70_1 = 0
    
    if (r10_1 != 0)
        void* rax_20 = *(r8_4 + 0x10)
        
        if (rax_20 != 0)
            r8_4 = rax_20
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r10_1 - 1)
        int32_t rdx_14 = *r8_4
        int32_t var_74_3
        
        if (rdx_14 != 0)
        label_141d3be68:
            int32_t rax_27 = neg.d(rdx_14) & rdx_14
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_27)
            int32_t var_84_2 = rax_27
            int32_t rax_28
            
            if (rax_27 == 0)
                rax_28 = 0x20
            else
                rax_28 = 0x1f - temp0_1
            
            int32_t var_74_2 = rcx_17 - rax_28 + 0x1f
            
            if (rcx_17 - rax_28 + 0x1f s> r10_1)
                var_74_3 = r10_1
        else
            while (true)
                int64_t rdx_15 = sx.q(r15)
                rcx_17 += 0x20
                r15 += 1
                int32_t var_70_2 = rcx_17
                var_88_1 = r15
                
                if (rdx_15.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_14 = *(r8_4 + (rdx_15 << 2) + 4)
                int32_t var_78_2 = 0xffffffff
                
                if (rdx_14 != 0)
                    goto label_141d3be68
            
            var_74_3 = r10_1
    
    int32_t rdx_17 = *(r13_4 + 0x28)
    var_b8 = r13_4
    int32_t var_a0
    var_a0.o = 0xffffffff
    int64_t var_b0
    var_b0.o = var_88_1.o
    int32_t r14_2 = 0xffffffff << (rdx_17.b & 0x1f)
    int32_t r9_1 = rdx_17 & 0xffffffe0
    int128_t zmm0 = var_b8.o
    int32_t r8_6 = rdx_17 s>> 5
    int64_t var_40_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int32_t var_78_3 = r14_2
    int32_t var_74_4 = rdx_17
    uint64_t var_60_1 = zmm0.q
    int128_t var_50_1 = i.o
    
    if (rdx_17 != r10_1)
        void* rax_30 = *(r13_4 + 0x20)
        void* r11_1 = r13_4 + 0x10
        
        if (rax_30 != 0)
            r11_1 = rax_30
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r10_1 - 1)
        int32_t rdx_21 = *(r11_1 + (sx.q(r8_6) << 2)) & r14_2
        int32_t var_74_6
        
        if (rdx_21 != 0)
        label_141d3bf32:
            int32_t rax_37 = neg.d(rdx_21) & rdx_21
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_37)
            int32_t rdi_6
            
            if (rax_37 == 0)
                rdi_6 = 0x20
            else
                rdi_6 = 0x1f - temp0_3
            
            int32_t var_74_5 = r9_1 - rdi_6 + 0x1f
            
            if (r9_1 - rdi_6 + 0x1f s> r10_1)
                var_74_6 = r10_1
        else
            while (true)
                int64_t rcx_22 = sx.q(r8_6)
                r9_1 += 0x20
                r8_6 += 1
                
                if (rcx_22.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_21 = *(r11_1 + (rcx_22 << 2) + 4)
                var_78_3 = 0xffffffff
                
                if (rdx_21 != 0)
                    goto label_141d3bf32
            
            var_74_6 = r10_1
    
    while (true)
        int64_t rcx_24 = sx.q(var_50_1:0xc.d)
        
        if (rcx_24.d == (var_78_3.q u>> 0x20).d && var_50_1.q == r13_4 + 0x10 && var_60_1 == r13_4)
            break
        
        int64_t rdi_7 = sx.q(arg1[1].d)
        int64_t rsi_3 = *(*var_60_1 + rcx_24 * 0x10)
        int32_t rax_40 = (rdi_7 + 1).d
        arg1[1].d = rax_40
        
        if (rax_40 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        *(*arg1 + (rdi_7 << 3)) = rsi_3
        int32_t var_54
        var_50_1:8.d &= not.d(var_54)
        void var_58
        sub_14059bdd0(&var_58)
else if (arg3 == 2)
    if (*(arg2 + 0x110) != 0)
        sub_14175a890(arg2 + 0x88, 0)
    
    int32_t rdx_23 = *(arg2 + 0x290)
    
    if (rdx_23 s> *(arg1 + 0xc))
        sub_1405c5570(arg1, rdx_23)
    
    var_b8 = arg2 + 0x280
    int64_t* var_b0_2
    __builtin_memset(&var_b0_2, 0, 0x15)
    int32_t var_98_2 = 0
    sub_141750820(&var_b8)
    
    if (i != 0)
        int64_t* rdi_9 = var_b0_2
        
        do
            int64_t rsi_4 = sx.q(arg1[1].d)
            int32_t rax_45 = (rsi_4 + 1).d
            int32_t var_a0_2
            int64_t r14_5 = *(*(i + 0xc8) + (sx.q(var_a0_2) << 3))
            arg1[1].d = rax_45
            
            if (rax_45 s> *(arg1 + 0xc))
                sub_1405a4d70(arg1)
            
            *(*arg1 + (rsi_4 << 3)) = r14_5
            
            if (rdi_9 != 0)
                int32_t rax_49 = var_90 + 1
                var_90 = rax_49
                
                if (rax_49 s>= rdi_9[1].d)
                label_141d3c065:
                    var_98_2 += 1
                    sub_141750820(&var_b8)
                    rdi_9 = var_b0_2
                else
                    void** rdx_26 = *(*rdi_9 + (sx.q(rax_49) << 3))
                    void* rcx_35 = *rdx_26
                    var_80.d = rdx_26[1].d
                    
                    if (rcx_35 == 0)
                        var_88.q = rcx_35
                        var_80:4.b = 0
                        i.o = var_88.o
                    else
                        var_80:4.b = *(rcx_35 + 0x40)
                        var_88.q = rcx_35
                        i.o = var_88.o
            else
                rax = zx.q(var_a0_2 + 1)
                var_a0_2 = rax.d
                
                if (rax.d s>= var_94)
                    goto label_141d3c065
        while (i != 0)
