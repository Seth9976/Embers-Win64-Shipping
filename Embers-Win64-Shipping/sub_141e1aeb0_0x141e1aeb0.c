// 函数: sub_141e1aeb0
// 地址: 0x141e1aeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e30310(arg1)
int32_t result = arg1[0x42] - arg1[0x4b]
int32_t rbx_1 = *(arg2 + 0x108) - *(arg2 + 0x12c)

if (rbx_1 s> result)
    sub_141e2ffe0(arg1, rbx_1)
    uint32_t rax_2 = rbx_1 u>> 1
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_2)
    int32_t rcx_1
    
    if (rax_2 == 0)
        rcx_1 = 0x20
    else
        rcx_1 = 0x1f - temp0_1
    
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rax_2 - 1)
    char rdx_2
    
    if (rax_2 == 1)
        rdx_2 = 0x20
    else
        rdx_2 = 0x1f - temp0_2
    
    result = 2
    int32_t result_1 = 1 << ((not.d(rcx_1 << 0x1a s>> 0x1f)).b & (0x20 - rdx_2))
    
    if (result_1 u>= 2)
        if (rbx_1 u< 4)
            result_1 = 2
        
        result = result_1
    
    int32_t rcx_6 = arg1[0x50]
    
    if (rcx_6 == 0 || rcx_6 s< result)
        arg1[0x50] = result
        result = sub_141e2f970(arg1)

int32_t rcx_8 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r11 = *(arg2 + 0x120)
int32_t r8_2 = 0
void* var_90 = arg2 + 0x110
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_5 = *(arg2 + 0x118)
    void* r9_1 = arg2 + 0x110
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp0_3
    int32_t temp1_1
    temp0_3:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_5 = *r9_1
    result = (temp1_1 + (temp0_3 & 0x1f)) s>> 5
    
    if (rdx_5 != 0)
    label_141e1aff8:
        int32_t rax_11 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_11)
        int32_t var_94_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_4
        
        result = r8_2 - rax_12 + 0x1f
        var_84.d = result
        
        if (result s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_8)
            r8_2 += 0x20
            rcx_8 += 1
            var_84:4.d = r8_2
            var_98 = rcx_8
            
            if (rdx_6.d s>= result)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141e1aff8
        
        var_84.d = r11

int32_t rdx_7 = *(arg2 + 0x120)
int128_t var_38 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_7.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_5 = rdx_7 s>> 5
int32_t r9_3 = rdx_7 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = rsi
var_84.d = rdx_7
int128_t var_78 = arg2.o
int96_t var_68 = var_48:8.12

if (rdx_7 != r11)
    void* rax_13 = *(arg2 + 0x118)
    void* r10_1 = arg2 + 0x110
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    result = (temp4_1 + (temp3_1 & 0x1f)) s>> 5
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_5) << 2)) & rsi
    
    if (rdx_11 != 0)
    label_141e1b0c3:
        int32_t rax_19 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_4
        int32_t temp0_6
        temp0_6, rflags_4 = _bit_scan_reverse(rax_19)
        int32_t rdi_1
        
        if (rax_19 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_6
        
        result = r9_3 - rdi_1 + 0x1f
        var_84.d = result
        
        if (result s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_13 = sx.q(r8_5)
            r9_3 += 0x20
            r8_5 += 1
            
            if (rcx_13.d s>= result)
                break
            
            rdx_11 = *(r10_1 + (rcx_13 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141e1b0c3
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rcx_15 = sx.q(var_5c)
    void* rbx_3 = var_78.q
    
    if (rcx_15.d == (var_88_2.q u>> 0x20).d && var_68.q == arg2 + 0x110 && rbx_3 == arg2)
        return result
    
    void* rax_20 = *(rbx_3 + 0x100)
    
    if (rax_20 != 0)
        rbx_3 = rax_20
    
    int64_t* rbx_4 = rbx_3 + (rcx_15 << 6)
    
    if (rbx_4[6].d != 0)
        void* rax_23 = sub_141e10500(arg1, rbx_4)
        void* rcx_17 = rbx_4[5]
        void* rdx_13 = &rbx_4[1]
        void* rdi_2 = rax_23
        
        if (rcx_17 != 0)
            rdx_13 = rcx_17
        
        int64_t rbx_5 = sx.q(*(rax_23 + 0x28))
        void* r14_1 = rdx_13 + (sx.q(rbx_4[6].d) << 3)
        int32_t rcx_19 = (rbx_5 + 1).d
        *(rax_23 + 0x28) = rcx_19
        
        if (rcx_19 s> *(rax_23 + 0x2c))
            sub_14083a490(rax_23, rbx_5.d)
        
        void* rax_24 = *(rdi_2 + 0x20)
        
        if (rax_24 != 0)
            rdi_2 = rax_24
        
        *(rdi_2 + (rbx_5 << 3)) = *(r14_1 - 8)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    result = sub_140b4fe60(&var_78:8)
