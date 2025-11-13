// 函数: sub_141d1d910
// 地址: 0x141d1d910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_84 = 1
int32_t rsi = *(arg1 + 0x30)
int32_t rcx = 0
void* var_80 = arg1 + 0x18
int32_t var_88 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0
int32_t r8 = 0

if (rsi != 0)
    void* rax_1 = *(arg1 + 0x28)
    void* r9_1 = arg1 + 0x18
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141d1d9c9:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_84_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> rsi)
            var_74.d = rsi
    else
        while (true)
            int64_t rax_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_74:4.d = r8
            var_88 = rcx
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rax_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141d1d9c9
        
        var_74.d = rsi

int32_t rdx_3 = *(arg1 + 0x30)
var_74.d = rdx_3
int32_t r12 = 0xffffffff << (rdx_3.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_3 = rdx_3 s>> 5
int32_t rcx_5 = rdx_3 & 0xffffffe0
int32_t var_78_2 = r12
int128_t var_28 = 0xffffffff
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = (arg1 + 8).o
int128_t var_58 = var_38

if (rdx_3 != rsi)
    void* rax_10 = *(arg1 + 0x28)
    void* r9_2 = arg1 + 0x18
    
    if (rax_10 != 0)
        r9_2 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rsi - 1)
    int32_t rdx_7 = *(r9_2 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_7 != 0)
    label_141d1da92:
        int32_t rax_17 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        int32_t r11_1
        
        if (rax_17 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = rcx_5 - r11_1 + 0x1f
        
        if (rcx_5 - r11_1 + 0x1f s> rsi)
            var_74.d = rsi
    else
        while (true)
            int64_t rax_14 = sx.q(r8_3)
            rcx_5 += 0x20
            r8_3 += 1
            
            if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_7 = *(r9_2 + (rax_14 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_141d1da92
        
        var_74.d = rsi

while (true)
    int64_t result = sx.q(var_58:0xc.d)
    int64_t rcx_7 = var_68.q
    
    if (result.d == (var_78_2.q u>> 0x20).d && var_58.q == arg1 + 0x18 && rcx_7 == arg1 + 8)
        result.b = 0
        return result
    
    result = result * 0x30 + *rcx_7
    
    if (*result == arg2 && *(result + 8) == arg3)
        result.b = 1
        return result
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
