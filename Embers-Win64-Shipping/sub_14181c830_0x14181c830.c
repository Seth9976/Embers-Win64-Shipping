// 函数: sub_14181c830
// 地址: 0x14181c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_94 = 1
*arg1 = 0
arg1[1] = 0
int32_t r11 = *(arg2 + 0x28)
int32_t var_98 = 0
void* r10 = arg2
int32_t* var_90 = arg2 + 0x10
int64_t r15
r15.b = 1
int32_t var_88 = 0xffffffff
int32_t r8 = 0
int64_t var_84 = 0
int32_t rcx = 0

if (r11 != 0)
    int32_t* rax_1 = *(arg2 + 0x20)
    int32_t* r9_1 = arg2 + 0x10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_14181c8e8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_84:4.d = rcx
            var_98 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9_1[rdx_3 + 1]
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14181c8e8
        
        var_84.d = r11
    
    r10 = arg2

int32_t rdx_5 = *(r10 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_5
int128_t var_78 = r10.o
int96_t var_68 = var_48:8.12

if (rdx_5 != r11)
    int32_t* rax_11 = *(arg2 + 0x20)
    int32_t* r10_1 = arg2 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = r10_1[sx.q(r8_2)] & r12
    
    if (rdx_9 != 0)
    label_14181c9b2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
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
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r10_1[rcx_5 + 1]
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14181c9b2
        
        var_84.d = r11
    
    r10 = arg2

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_10 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == arg2 + 0x10 && rdx_10 == r10)
        return arg1
    
    int64_t* rdi_2 = *rdx_10 + rax_20 * 0x18
    
    if (r15.b == 0)
        int64_t r8_3 = -1
        
        do
            r8_3 += 1
        while (*(arg3 + (r8_3 << 1)) != 0)
        
        sub_140a20ba0(arg1, arg3, r8_3.d)
    else
        r15.b = 0
    
    int32_t rax_22 = rdi_2[1].d
    int32_t r8_4 = rax_22 - 1
    
    if (rax_22 == 0)
        r8_4 = 0
    
    sub_140a20ba0(arg1, *rdi_2, r8_4)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
    r10 = arg2
