// 函数: sub_141830a20
// 地址: 0x141830a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x28)
int32_t var_94 = 1
int32_t r8 = 0
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int64_t r12
r12.b = 1
int64_t var_84 = 0
int32_t r9 = 0

if (rdi != 0)
    void* rax_1 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_141830acc:
        int32_t rax_7 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_94_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_84.d = r9 - rax_8 + 0x1f
        
        if (r9 - rax_8 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            int64_t rax_4 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_84:4.d = r9
            var_98 = r8
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rcx = *(r10_1 + (rax_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141830acc
        
        var_84.d = rdi

int32_t rdx_4 = *(arg1 + 0x28)
var_84.d = rdx_4
int32_t rsi = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_4 s>> 5
int32_t rcx_5 = rdx_4 & 0xffffffe0
int32_t var_88_2 = rsi
int128_t var_38 = 0xffffffff
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = arg1.o
int96_t var_68 = var_48:8.12

if (rdx_4 != rdi)
    void* rax_10 = *(arg1 + 0x20)
    void* r9_2 = arg1 + 0x10
    
    if (rax_10 != 0)
        r9_2 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_8 = *(r9_2 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_8 != 0)
    label_141830b92:
        int32_t rax_17 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        int32_t r11_1
        
        if (rax_17 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = rcx_5 - r11_1 + 0x1f
        
        if (rcx_5 - r11_1 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            int64_t rax_14 = sx.q(r8_2)
            rcx_5 += 0x20
            r8_2 += 1
            
            if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_8 = *(r9_2 + (rax_14 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141830b92
        
        var_84.d = rdi

while (true)
    int32_t var_5c
    int64_t rax_19 = sx.q(var_5c)
    int64_t* r8_3 = var_78.q
    
    if (rax_19.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x10 && r8_3 == arg1)
        return zx.q(r12.b)
    
    int64_t r8_4 = *r8_3
    int64_t* rcx_8 = *arg2
    int64_t r9_3 = *rcx_8
    int64_t* rax_20 =
        (*(r9_3 + 0x1c8))(rcx_8, r8_4 + rax_19 * 0x18, r8_4, r9_3, var_98, arg1 + 0x10, var_88_2)
    
    if (rax_20 != 0)
        int64_t rdi_1 = sx.q(arg3[1].d)
        int32_t rax_21 = (rdi_1 + 1).d
        arg3[1].d = rax_21
        
        if (rax_21 s> *(arg3 + 0xc))
            sub_14090a6a0(arg3)
        
        sub_141820800(rdi_1 * 0x60 + *arg3, rax_20)
    else
        r12.b = 0
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
