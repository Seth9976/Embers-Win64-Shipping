// 函数: sub_1419e3570
// 地址: 0x1419e3570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = *(arg1 + 0x88) - *(arg1 + 0xb4)
int32_t rbx = 0
*(arg1 + 0xd8) = 0

if (*(arg1 + 0xdc) != rdx_1)
    sub_14090a730(arg1 + 0xd0, rdx_1)

int32_t var_88 = 0
int32_t r10 = *(arg1 + 0xa8)
int32_t var_84 = 1
int32_t rcx_1 = 0
void* var_80 = arg1 + 0x90
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10 != 0)
    void* rax_1 = *(arg1 + 0xa0)
    void* r8_1 = arg1 + 0x90
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r8_1
    
    if (rdx_4 != 0)
    label_1419e3646:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rbx)
            rcx_1 += 0x20
            rbx += 1
            var_74:4.d = rcx_1
            var_88 = rbx
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r8_1 + (rdx_5 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1419e3646
        
        var_74.d = r10

int32_t rdx_7 = *(arg1 + 0xa8)
int128_t var_28 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_7.b & 0x1f)
uint128_t var_38 = var_88.o
int32_t r8_3 = rdx_7 s>> 5
int32_t r9_1 = rdx_7 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r14
var_74.d = rdx_7
uint128_t var_68 = (arg1 + 0x80).o
uint128_t var_58 = var_38

if (rdx_7 != r10)
    void* rax_11 = *(arg1 + 0xa0)
    void* r10_1 = arg1 + 0x90
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_11 != 0)
    label_1419e3712:
        int32_t rax_18 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = r9_1 - r11_1 + 0x1f
        
        if (r9_1 - r11_1 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_1 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_6 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_1419e3712
        
        var_74.d = r10

while (true)
    int64_t rcx_8 = sx.q(var_58:0xc.d)
    int64_t* result = var_68.q
    
    if (rcx_8.d == (var_78_2.q u>> 0x20).d && var_58.q == arg1 + 0x90 && result == arg1 + 0x80)
        return result
    
    int64_t* rbx_1 = *(*result + rcx_8 * 0x10)
    
    if (rbx_1[8].b == 0)
        int64_t rsi_2 = sx.q(*(arg1 + 0xd8))
        int32_t rax_21 = (rsi_2 + 1).d
        *(arg1 + 0xd8) = rax_21
        
        if (rax_21 s> *(arg1 + 0xdc))
            sub_14090a6a0(arg1 + 0xd0)
        
        int64_t rcx_12 = rsi_2 * 0x60
        uint64_t* rcx_13 = rcx_12 + *(arg1 + 0xd0)
        
        if (rcx_12 != neg.q(*(arg1 + 0xd0)))
            *rcx_13 = *rbx_1
            rcx_13[1].d = rbx_1[1].d
            *(rcx_13 + 0x10) = *(rbx_1 + 0x10)
            rcx_13[4] = rbx_1[4]
            rcx_13[5].d = rbx_1[5].d
            *(rcx_13 + 0x2c) = *(rbx_1 + 0x2c)
            rcx_13[6].d = rbx_1[6].d
            rcx_13[7] = rbx_1[7]
            rcx_13[8].b = rbx_1[8].b
            rcx_13[9] = rbx_1[9]
            rcx_13[0xa].b = rbx_1[0xa].b
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
