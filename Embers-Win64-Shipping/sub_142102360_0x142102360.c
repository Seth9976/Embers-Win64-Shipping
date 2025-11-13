// 函数: sub_142102360
// 地址: 0x142102360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x220)
float temp0[0x4] = _mm_max_ss(arg2[0], 0)
*(rax + 0x1f8) = temp0[0]

if (arg3 != 0)
    sub_141ee8490(*(arg1 + 0x220))

int32_t rcx_1 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t rbx_1 = *(arg1 + 0x250)
void* var_90 = arg1 + 0x238
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rbx_1 != 0)
    void* rax_1 = *(arg1 + 0x248)
    void* r9_1 = arg1 + 0x238
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_142102438:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
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
        
        if (r8 - rax_9 + 0x1f s> rbx_1)
            var_84.d = rbx_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_84:4.d = r8
            var_98 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142102438
        
        var_84.d = rbx_1

int32_t rdx_5 = *(arg1 + 0x250)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_5
int128_t var_78 = (arg1 + 0x228).o
int96_t var_68 = var_48[0].12

if (rdx_5 != rbx_1)
    void* rax_11 = *(arg1 + 0x248)
    void* r10_1 = arg1 + 0x238
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_1 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_9 != 0)
    label_142102502:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx_1)
            var_84.d = rbx_1
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_142102502
        
        var_84.d = rbx_1

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t* rcx_8 = var_78.q
    
    if (result.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x238 && rcx_8 == arg1 + 0x228)
        return result
    
    int64_t rcx_9 = *rcx_8
    int64_t rdx_10 = result * 3
    *(*(rcx_9 + (rdx_10 << 3) + 8) + 0x1f8) = temp0[0]
    
    if (arg3 != 0)
        sub_141ee8490(*(rcx_9 + (rdx_10 << 3) + 8))
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
