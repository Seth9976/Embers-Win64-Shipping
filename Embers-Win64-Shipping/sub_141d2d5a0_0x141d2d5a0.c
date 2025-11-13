// 函数: sub_141d2d5a0
// 地址: 0x141d2d5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
void arg_8

if (arg2[1] == 0)
    rax = sub_140b58170(&arg_8, &data_1437020ab, 1)
else
    rax = arg2
int32_t rbx = 0
*arg1 = *rax
int64_t* rcx_1 = arg2[1]
int64_t rax_3

if (rcx_1 == 0)
    rax_3 = 0
else
    rax_3 = (*(*rcx_1 + 0x18))(rcx_1)

arg1[1] = rax_3
void* rcx_2 = &arg1[4]
arg1[2] = 0
arg1[3] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_4 = *(rcx_2 + 0x10)
int32_t var_98 = 0
int32_t var_94 = 1

if (rax_4 != 0)
    rcx_2 = rax_4

void* var_90 = &arg2[4]
int32_t var_88 = 0xffffffff
int64_t var_84 = 0
*rcx_2 = 0
*(rcx_2 + 8) = 0
int32_t rcx_3 = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
int32_t r10 = arg2[7].d

if (r10 != 0)
    void* rax_5 = arg2[6]
    void* r8_1 = &arg2[4]
    
    if (rax_5 != 0)
        r8_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r8_1
    
    if (rdx_2 != 0)
    label_141d2d6c6:
        int32_t rax_12 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_94_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_84.d = rcx_3 - rax_13 + 0x1f
        
        if (rcx_3 - rax_13 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rbx)
            rcx_3 += 0x20
            rbx += 1
            var_84:4.d = rcx_3
            var_98 = rbx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r8_1 + (rdx_3 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141d2d6c6
        
        var_84.d = r10

int32_t rdx_5 = arg2[7].d
int128_t var_38 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_1 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = rsi
var_84.d = rdx_5
int128_t var_78 = (&arg2[2]).o
int96_t var_68 = var_48:8.12

if (rdx_5 != r10)
    void* rax_15 = arg2[6]
    void* r10_1 = &arg2[4]
    
    if (rax_15 != 0)
        r10_1 = rax_15
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_141d2d792:
        int32_t rax_22 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t rdi_1
        
        if (rax_22 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_84.d = r9_1 - rdi_1 + 0x1f
        
        if (r9_1 - rdi_1 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_3)
            r9_1 += 0x20
            r8_3 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_8 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141d2d792
        
        var_84.d = r10

while (true)
    int32_t var_5c
    int64_t rax_24 = sx.q(var_5c)
    int64_t* rdx_10 = var_78.q
    
    if (rax_24.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg2[4] && rdx_10 == &arg2[2])
        return arg1
    
    int64_t rcx_10 = rax_24 * 3
    int64_t rax_25 = *rdx_10
    int64_t* rbx_2 = *(rax_25 + (rcx_10 << 3) + 8)
    int64_t* rax_26 = sub_141d2b870(&arg1[2], rax_25 + (rcx_10 << 3))
    int64_t rdx_12 = *rbx_2
    int64_t rax_27 = (*(rdx_12 + 0x10))(rbx_2, rdx_12)
    int64_t* rcx_13 = *rax_26
    
    if (rcx_13 != rax_27)
        *rax_26 = rax_27
        
        if (rcx_13 != 0)
            (**rcx_13)(rcx_13, 1)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
