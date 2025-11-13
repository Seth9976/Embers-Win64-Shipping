// 函数: sub_1408677d0
// 地址: 0x1408677d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14074c8e0(*(arg1 + 0x460))
void* r12 = arg1 + 0x1b8
int64_t i_3 = 7
void* r15 = arg1 + 0x1d8
int64_t i

do
    int32_t r11_1 = *(r15 + 8)
    void* r10_1 = r15 - 0x10
    int32_t r8_1 = 0
    int32_t var_94_1 = 1
    int32_t r9_1 = 0
    int32_t var_98_1 = 0
    void* var_90_1 = r10_1
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = *r15
        
        if (rax_1 != 0)
            r10_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rcx_1 = *r10_1
        
        if (rcx_1 != 0)
        label_14086789a:
            int32_t rax_8 = neg.d(rcx_1) & rcx_1
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_94_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_84_1.d = r9_1 - rax_9 + 0x1f
            
            if (r9_1 - rax_9 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rcx_2 = sx.q(r8_1)
                r9_1 += 0x20
                r8_1 += 1
                var_84_1:4.d = r9_1
                var_98_1 = r8_1
                
                if (rcx_2.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rcx_1 = *(r10_1 + (rcx_2 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rcx_1 != 0)
                    goto label_14086789a
            
            var_84_1.d = r11_1
    
    int32_t rbx_1 = *(r15 + 8)
    int128_t var_38_1 = 0xffffffff
    int32_t r14_1 = 0xffffffff << (r11_1.b & 0x1f)
    int32_t r8_3 = r11_1 s>> 5
    int32_t r9_4 = r11_1 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_3 = r14_1
    var_84_1.d = r11_1
    int128_t var_78 = (r15 - 0x20).o
    int96_t var_68_1 = var_98_1.o:8.12
    
    if (r11_1 != rbx_1)
        void* rax_11 = *r15
        void* r10_2 = r15 - 0x10
        
        if (rax_11 != 0)
            r10_2 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_6 = *(r10_2 + (sx.q(r8_3) << 2)) & r14_1
        
        if (rdx_6 != 0)
        label_140867972:
            int32_t rax_18 = neg.d(rdx_6) & rdx_6
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t rax_19
            
            if (rax_18 == 0)
                rax_19 = 0x20
            else
                rax_19 = 0x1f - temp0_4
            
            var_84_1.d = r9_4 - rax_19 + 0x1f
            
            if (r9_4 - rax_19 + 0x1f s> rbx_1)
                var_84_1.d = rbx_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_3)
                r9_4 += 0x20
                r8_3 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_6 = *(r10_2 + (rcx_7 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_140867972
            
            var_84_1.d = rbx_1
    
    while (true)
        int32_t var_5c
        int64_t rax_21 = sx.q(var_5c)
        int64_t* rcx_9 = var_78.q
        
        if (rax_21.d == (var_88_3.q u>> 0x20).d && var_68_1.q == r15 - 0x10 && rcx_9 == r15 - 0x20)
            break
        
        sub_14084daa0(*((rax_21 << 5) + *rcx_9 + 8))
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    sub_140865510(r12, 0)
    r12 += 0x50
    r15 += 0x50
    i = i_3
    i_3 -= 1
while (i != 1)
sub_140865470(arg1 + 0x168, 0)
int32_t i_2 = *(arg1 + 0x4c8)
int64_t* rbx_4 = *(arg1 + 0x4c0)

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_15 = *rbx_4
        
        if (rcx_15 != 0)
            (**rcx_15)(rcx_15, 1)
        
        rbx_4 = &rbx_4[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

bool cond:3 = *(arg1 + 0x4cc) == 0
*(arg1 + 0x4c8) = 0

if (not(cond:3))
    sub_1405c5570(arg1 + 0x4c0, 0)

return sub_1408653f0(arg1 + 0x4d0, 0) __tailcall
