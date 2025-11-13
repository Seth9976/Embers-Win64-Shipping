// 函数: sub_141dba240
// 地址: 0x141dba240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t var_a4 = 1
int32_t var_a8 = 0
int32_t r10 = *(arg1 + 0x158)
void* r9 = arg1 + 0x140
void* var_a0 = r9
int32_t var_98 = 0xffffffff
int32_t rcx = 0
int32_t var_94 = 0
int32_t var_90 = 0
int32_t r8 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    int32_t var_94_2
    
    if (rdx_2 != 0)
    label_141dba2f8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_94_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_94_2 = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_90 = rcx
            var_a8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141dba2f8
        
        var_94_2 = r10

int64_t var_68 = 0xffffffff
double var_78[0x2] = var_a8.o
double zmm1[0x2] = var_78
var_a8.o = (arg1 + 0x130).o
int64_t var_88 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_98.o = zmm1

if (0 s< r10)
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t* rcx_3 = *(*var_a8.q + sx.q(i) * 0x18 + 8)
        
        if (rcx_3 != 0)
            sub_141e545b0(rcx_3, arg2)
        
        var_90 &= not.d(var_a0:4.d)
        sub_14059bdd0(&var_a0)
        i = i_2
    while (i s< *(var_98.q + 0x18))

(*(*arg2 + 0x38))(arg2, arg1 + 0xf8, 0, 0, var_a8)
(*(*arg2 + 0x38))(arg2, arg1 + 0x20, 0, 0)
void* rcx_7 = *(arg1 + 0x20)

if (rcx_7 != 0)
    sub_142357fa0(rcx_7)

(*(*arg2 + 0x38))(arg2, arg1 + 0x18, 0, 0)
void* rcx_9 = *(arg1 + 0x18)

if (rcx_9 != 0)
    void* rcx_10 = *(rcx_9 + 0x138)
    
    if (rcx_10 != 0)
        sub_142357fa0(rcx_10)

int32_t var_a8_1 = 0
int32_t r10_1 = *(arg1 + 0xd0)
int32_t var_a4_2 = 1
int32_t rcx_11 = 0
var_a0 = arg1 + 0xb8
int32_t var_98_1 = 0xffffffff
int32_t var_94_3 = 0
int32_t var_90_1 = 0

if (r10_1 != 0)
    void* rax_19 = *(arg1 + 0xc8)
    void* r8_1 = arg1 + 0xb8
    
    if (rax_19 != 0)
        r8_1 = rax_19
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10_1 - 1)
    int32_t rdx_14 = *r8_1
    int32_t var_94_5
    
    if (rdx_14 != 0)
    label_141dba486:
        int32_t rax_26 = neg.d(rdx_14) & rdx_14
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
        int32_t var_a4_3 = rax_26
        int32_t rax_27
        
        if (rax_26 == 0)
            rax_27 = 0x20
        else
            rax_27 = 0x1f - temp0_4
        
        int32_t var_94_4 = rcx_11 - rax_27 + 0x1f
        
        if (rcx_11 - rax_27 + 0x1f s> r10_1)
            var_94_5 = r10_1
    else
        while (true)
            int64_t rdx_15 = sx.q(rsi)
            rcx_11 += 0x20
            rsi += 1
            int32_t var_90_2 = rcx_11
            var_a8_1 = rsi
            
            if (rdx_15.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r8_1 + (rdx_15 << 2) + 4)
            int32_t var_98_2 = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_141dba486
        
        var_94_5 = r10_1

int32_t rdx_17 = *(arg1 + 0xd0)
int128_t var_40 = 0xffffffff
int32_t rsi_1 = 0xffffffff << (rdx_17.b & 0x1f)
double var_50[0x2] = var_a8_1.o
int32_t r8_3 = rdx_17 s>> 5
int32_t r9_2 = rdx_17 & 0xffffffe0
var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_3 = rsi_1
int32_t var_94_6 = rdx_17
void* result_1
result_1.o = (arg1 + 0xa8).o
var_78 = var_50

if (rdx_17 != r10_1)
    void* rax_29 = *(arg1 + 0xc8)
    void* r10_2 = arg1 + 0xb8
    
    if (rax_29 != 0)
        r10_2 = rax_29
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r10_1 - 1)
    int32_t rdx_21 = *(r10_2 + (sx.q(r8_3) << 2)) & rsi_1
    int32_t var_94_8
    
    if (rdx_21 != 0)
    label_141dba552:
        int32_t rax_36 = neg.d(rdx_21) & rdx_21
        uint64_t rflags_3
        int32_t temp0_6
        temp0_6, rflags_3 = _bit_scan_reverse(rax_36)
        int32_t r12_1
        
        if (rax_36 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_6
        
        int32_t var_94_7 = r9_2 - r12_1 + 0x1f
        
        if (r9_2 - r12_1 + 0x1f s> r10_1)
            var_94_8 = r10_1
    else
        while (true)
            int64_t rcx_16 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_16.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_21 = *(r10_2 + (rcx_16 << 2) + 4)
            var_98_3 = 0xffffffff
            
            if (rdx_21 != 0)
                goto label_141dba552
        
        var_94_8 = r10_1

while (true)
    int64_t rcx_18 = sx.q(var_68:4.d)
    void* result = result_1
    
    if (rcx_18.d == (var_98_3.q u>> 0x20).d && var_78[1] == arg1 + 0xb8 && result == arg1 + 0xa8)
        int64_t i_1 = *(arg1 + 0x6c0)
        
        for (int64_t rsi_4 = (sx.q(*(arg1 + 0x6c8)) << 5) + i_1; i_1 != rsi_4; i_1 += 0x20)
            if (*(i_1 + 0x18) != 0)
                result = (*(*arg2 + 0x38))(arg2, i_1 + 0x18, 0, 0, var_a8_1)
        
        return result
    
    int64_t rcx_20 = *(*result + rcx_18 * 0x10)
    int64_t arg_8 = rcx_20
    
    if (rcx_20 != 0)
        (*(*arg2 + 0x38))(arg2, &arg_8, 0, 0, var_a8_1)
    
    var_68.d &= not.d(var_78[0]:4.d)
    sub_14059bdd0(&var_78)
