// 函数: sub_1408d7280
// 地址: 0x1408d7280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = *(arg1 + 0xa0) - *(arg1 + 0xcc)

if (rdx_1 s> *(arg2 + 0xc))
    sub_1405c5570(arg2, rdx_1)

int32_t rcx_1 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r11 = *(arg1 + 0x70)
void* var_90 = arg1 + 0x58
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x68)
    void* r9_1 = arg1 + 0x58
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_1408d7348:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_84:4.d = r8
            var_98 = rcx_1
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1408d7348
        
        var_84.d = r11

int32_t rdx_6 = *(arg1 + 0x70)
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_6
int128_t var_78 = (arg1 + 0x48).o
int96_t var_68 = var_48:8.12

if (rdx_6 != r11)
    void* rax_11 = *(arg1 + 0x68)
    void* r10_1 = arg1 + 0x58
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_10 != 0)
    label_1408d7412:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1408d7412
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rcx_8 = sx.q(var_5c)
    int64_t* result = var_78.q
    
    if (rcx_8.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x58 && result == arg1 + 0x48)
        if (arg3 == 0)
            return result
        
        int64_t (* r9_5)(void* arg1, void* arg2) = sub_1408d6fc0
        
        if (((*(arg1 + 0x28) u>> 2).b & 1) != 0)
            r9_5 = sub_1408d6fb0
        
        return sub_1408d6300(*arg2, arg2[1].d, arg3, r9_5)
    
    void* rsi_3 = (rcx_8 << 5) + *result
    int64_t rdi_2 = sx.q(*(rsi_3 + 0x10))
    
    if (rdi_2.d != 0)
        int32_t rax_21 = arg2[1].d
        int32_t rdx_11 = rax_21 + rdi_2.d
        
        if (rdx_11 s> *(arg2 + 0xc))
            sub_1405c5570(arg2, rdx_11)
            rax_21 = arg2[1].d
        
        memcpy(*arg2 + (sx.q(rax_21) << 3), *(rsi_3 + 8), (rdi_2 << 3).d)
        arg2[1].d += rdi_2.d
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
