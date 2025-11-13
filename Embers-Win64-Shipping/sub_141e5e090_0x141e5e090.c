// 函数: sub_141e5e090
// 地址: 0x141e5e090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rbx = 0
*(arg1 + 0x14c)
int64_t* r8_2

if (*(arg1 + 0x120) == *(arg1 + 0x14c))
label_141e5e139:
    r8_2 = nullptr
else
    int32_t rax_2 = sub_140cde1f0(arg2)
    void* r8 = arg1 + 0x150
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x160)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e5e139_1:
        r8_2 = nullptr
    else
        while (true)
            r8_2 = sx.q(rax_4) * 0x68 + *(arg1 + 0x118)
            
            if (*r8_2 == *arg2 && r8_2[1] == arg2[1])
                break
            
            rax_4 = r8_2[0xc].d
            
            if (rax_4 == 0xffffffff)
                goto label_141e5e139_2
        
        if (rax_4 == 0xffffffff)
        label_141e5e139_2:
            r8_2 = nullptr

void* r15 = &r8_2[2]

if (r8_2 == 0)
    r15 = nullptr

if (r15 != 0)
    int32_t r10_2 = *(r15 + 0x28)
    int32_t rcx_4 = 0
    int32_t var_98_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = r15 + 0x10
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r10_2 != 0)
        void* rax_5 = *(r15 + 0x20)
        void* r8_3 = r15 + 0x10
        
        if (rax_5 != 0)
            r8_3 = rax_5
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_2 - 1)
        int32_t rdx_5 = *r8_3
        
        if (rdx_5 != 0)
        label_141e5e1d6:
            int32_t rax_12 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_94_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_1
            
            var_84_1.d = rcx_4 - rax_13 + 0x1f
            
            if (rcx_4 - rax_13 + 0x1f s> r10_2)
                var_84_1.d = r10_2
        else
            while (true)
                int64_t rdx_6 = sx.q(rbx)
                rcx_4 += 0x20
                rbx += 1
                var_84_1:4.d = rcx_4
                var_98_1 = rbx
                
                if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r8_3 + (rdx_6 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141e5e1d6
            
            var_84_1.d = r10_2
    
    int32_t rdx_8 = *(r15 + 0x28)
    int128_t var_38_1 = 0xffffffff
    int32_t rsi_1 = 0xffffffff << (rdx_8.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_5 = rdx_8 s>> 5
    int32_t r9_3 = rdx_8 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int32_t var_88_3 = rsi_1
    var_84_1.d = rdx_8
    int128_t var_78 = r15.o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_8 != r10_2)
        void* rax_15 = *(r15 + 0x20)
        void* r10_3 = r15 + 0x10
        
        if (rax_15 != 0)
            r10_3 = rax_15
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_2 - 1)
        int32_t rcx_9 = *(r10_3 + (sx.q(r8_5) << 2)) & rsi_1
        
        if (rcx_9 != 0)
        label_141e5e2a2:
            int32_t rax_21 = neg.d(rcx_9) & rcx_9
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_21)
            int32_t r11_1
            
            if (rax_21 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_3
            
            var_84_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> r10_2)
                var_84_1.d = r10_2
        else
            while (true)
                int64_t rcx_10 = sx.q(r8_5)
                r9_3 += 0x20
                r8_5 += 1
                
                if (rcx_10.d s>= ((temp4_1 & 0x1f) + temp5_1) s>> 5)
                    break
                
                rcx_9 = *(r10_3 + (rcx_10 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rcx_9 != 0)
                    goto label_141e5e2a2
            
            var_84_1.d = r10_2
    
    while (true)
        int32_t var_5c
        int64_t rax_23 = sx.q(var_5c)
        int64_t rcx_12 = var_78.q
        
        if (rax_23.d == (var_88_3.q u>> 0x20).d && var_68_1.q == r15 + 0x10 && rcx_12 == r15)
            break
        
        int64_t rbx_2 = sx.q(arg3[1].d)
        r12.b = 1
        int32_t rax_24 = (rbx_2 + 1).d
        void* rsi_3 = rax_23 * 0x38 + *rcx_12
        arg3[1].d = rax_24
        
        if (rax_24 s> *(arg3 + 0xc))
            sub_1405c4ec0(arg3)
        
        sub_141e4f110(*arg3 + rbx_2 * 0x28, rsi_3 + 8)
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

return zx.q(r12.b)
