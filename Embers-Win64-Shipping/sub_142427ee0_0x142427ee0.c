// 函数: sub_142427ee0
// 地址: 0x142427ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
int32_t rbx = 0
arg1[1] = arg2[1]
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x20) = *(arg2 + 0x20)
int64_t* rcx = &arg1[0x38]
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_6 = rcx[2]

if (rax_6 != 0)
    rcx = rax_6

*rcx = 0
rcx[1] = 0
*(arg1 + 0x58) = 0xffffffff
*(arg1 + 0x5c) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
sub_140780e10(&arg1[0x28], &arg2[0x28])

if (*(arg2 + 0x68) == 0)
    memmove(&arg1[0x60], &arg2[0x60], 4)

int64_t rcx_3 = *(arg1 + 0x68)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*(arg1 + 0x68) = *(arg2 + 0x68)
int32_t rcx_4 = 0
*(arg2 + 0x68) = 0
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg2 + 0x70) = 0
int32_t r10 = *(arg1 + 0x50)
int32_t var_98 = 0
int32_t var_94 = 1
void* var_90 = &arg1[0x38]
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r10 != 0)
    void* rax_9 = *(arg1 + 0x48)
    void* r8_1 = &arg1[0x38]
    
    if (rax_9 != 0)
        r8_1 = rax_9
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r8_1
    
    if (rdx_4 != 0)
    label_142428036:
        int32_t rax_16 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
        int32_t var_94_1 = rax_16
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_2
        
        var_84.d = rcx_4 - rax_17 + 0x1f
        
        if (rcx_4 - rax_17 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rbx)
            rcx_4 += 0x20
            rbx += 1
            var_84:4.d = rcx_4
            var_98 = rbx
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r8_1 + (rdx_5 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_142428036
        
        var_84.d = r10

int32_t rdx_7 = *(arg1 + 0x50)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_7.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_7 s>> 5
int32_t r9_1 = rdx_7 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_7
int128_t var_78 = (&arg1[0x28]).o
int96_t var_68 = var_48:8.12

if (rdx_7 != r10)
    void* rax_19 = *(arg1 + 0x48)
    void* r10_1 = &arg1[0x38]
    
    if (rax_19 != 0)
        r10_1 = rax_19
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_11 != 0)
    label_142428102:
        int32_t rax_26 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
        int32_t r15_1
        
        if (rax_26 == 0)
            r15_1 = 0x20
        else
            r15_1 = 0x1f - temp0_4
        
        var_84.d = r9_1 - r15_1 + 0x1f
        
        if (r9_1 - r15_1 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rcx_9 = sx.q(r8_3)
            r9_1 += 0x20
            r8_3 += 1
            
            if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_9 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_142428102
        
        var_84.d = r10

while (true)
    int32_t var_5c
    int64_t rcx_11 = sx.q(var_5c)
    int64_t* rax_28 = var_78.q
    
    if (rcx_11.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[0x38] && rax_28 == &arg1[0x28])
        return arg1
    
    void* rdx_12 = *(*rax_28 + rcx_11 * 0x10)
    
    if (rdx_12 != 0)
        *(rdx_12 + 0x248) = arg1
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
