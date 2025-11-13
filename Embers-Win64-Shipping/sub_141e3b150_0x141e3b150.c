// 函数: sub_141e3b150
// 地址: 0x141e3b150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x40) == 0)
    return sub_1422bf1a0(arg2, arg3)

int64_t var_88 = 0
int64_t var_80_1 = 0
sub_1422c68b0(arg3, &var_88)
int32_t rcx_1 = 0
int32_t var_a8_1 = 0
int32_t var_94_1 = 0
int32_t var_a4_1 = 1
int32_t r8 = 0
int32_t* var_a0_1 = &arg1[6]
int32_t rdi_1 = arg1[9].d
int32_t var_98_1 = 0xffffffff
int32_t var_90_1 = 0

if (rdi_1 != 0)
    int32_t* rax_1 = arg1[8]
    int32_t* r9_1 = &arg1[6]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1 - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_94_3
    
    if (rdx_3 != 0)
    label_141e3b228:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_94_2 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> rdi_1)
            var_94_3 = rdi_1
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            int32_t var_90_2 = rcx_1
            var_a8_1 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            int32_t var_98_2 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e3b228
        
        var_94_3 = rdi_1

int32_t rdx_6 = arg1[9].d
int128_t var_38_1 = 0xffffffff
int32_t r15_1 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48_1 = var_a8_1.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_3 = r15_1
int32_t var_94_4 = rdx_6
int128_t var_78 = (&arg1[4]).o
int96_t var_68_1 = var_48_1:8.12

if (rdx_6 != rdi_1)
    int32_t* rax_11 = arg1[8]
    int32_t* r10_1 = &arg1[6]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi_1 - 1)
    int32_t rdx_10 = r10_1[sx.q(r8_2)] & r15_1
    int32_t var_94_6
    
    if (rdx_10 != 0)
    label_141e3b2f2:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_94_5 = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi_1)
            var_94_6 = rdi_1
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = r10_1[rcx_6 + 1]
            var_98_3 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141e3b2f2
        
        var_94_6 = rdi_1

while (true)
    int32_t var_5c
    int64_t rcx_8 = sx.q(var_5c)
    int64_t* rax_20 = var_78.q
    
    if (rcx_8.d == (var_98_3.q u>> 0x20).d && var_68_1.q == &arg1[6] && rax_20 == &arg1[4])
        void* result = sub_1422b5970(arg2, &var_88)
        int64_t rcx_20 = var_88
        
        if (rcx_20 == 0)
            return result
        
        return sub_140a74f90(rcx_20)
    
    int64_t rdx_11 = *(*rax_20 + rcx_8 * 0x10)
    void* r9_5 = var_88 + sx.q(rdx_11.d) * 0x24
    void* r10_2 = r9_5 + 0x18
    int32_t* r11_2 = *arg1 + (sx.q((rdx_11 u>> 0x20).d) << 3)
    int32_t i = 0
    __builtin_memset(r9_5, 0, 0x24)
    
    if (r11_2[1].b u> 0)
        do
            r9_5 += 2
            r10_2 += 1
            int64_t rdx_13 = sx.q(*r11_2 + i)
            i += 1
            int32_t r8_3 = *(arg1[2] + (rdx_13 << 2))
            *(r9_5 - 2) = (r8_3 u>> 0x10).w
            *(r10_2 - 1) = r8_3.b
        while (i s< zx.d(r11_2[1].b))
    
    var_68_1:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
