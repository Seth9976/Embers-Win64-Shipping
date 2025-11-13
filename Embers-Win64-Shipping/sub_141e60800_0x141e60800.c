// 函数: sub_141e60800
// 地址: 0x141e60800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = *(arg1 + 0x428)
char arg_8

if (r12 == 0)
    int64_t rbx_1 = *sub_140b58260(&arg_8, u"AssetRegistry", (r12 + 1).d)
    j_sub_140b3db50()
    int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t rdx_1 = *rax_2
    int64_t* rax_3 = (*(rdx_1 + 0x48))(rax_2, rdx_1)
    r12 = rax_3
    *(arg1 + 0x428) = rax_3

int32_t rcx_2 = *(arg1 + 0x3e0)
int32_t rbx_2 = 0
arg_8 = 0
int64_t* rdx_7

if (rcx_2 == *(arg1 + 0x40c))
label_141e608de:
    rdx_7 = nullptr
else
    int32_t rax_5 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0x410
    void* rcx_4 = *(r8_1 + 8)
    
    if (rcx_4 != 0)
        r8_1 = rcx_4
    
    int32_t rax_7 = *(r8_1 + (((sx.q(*(arg1 + 0x420)) - 1) & sx.q(rax_5)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_141e608de_1:
        rdx_7 = nullptr
    else
        while (true)
            rdx_7 = (sx.q(rax_7) << 5) + *(arg1 + 0x3d8)
            
            if (*rdx_7 == arg2)
                break
            
            rax_7 = rdx_7[3].d
            
            if (rax_7 == 0xffffffff)
                goto label_141e608de_2
        
        if (rax_7 == 0xffffffff)
        label_141e608de_2:
            rdx_7 = nullptr

void* rax_8 = &rdx_7[1]

if (rdx_7 == 0)
    rax_8 = nullptr

if (rax_8 == 0)
    return 0

int32_t rcx_5 = 0
void* r13_2 = *rax_8 + 0x88
int32_t var_a8_1 = 0
int32_t r10_1 = *(r13_2 + 0x28)
int32_t var_a4_1 = 1
void* var_a0_1 = r13_2 + 0x10
int32_t var_98_1 = 0xffffffff
int64_t var_94_1 = 0

if (r10_1 != 0)
    void* rax_9 = *(r13_2 + 0x20)
    void* r8_3 = r13_2 + 0x10
    
    if (rax_9 != 0)
        r8_3 = rax_9
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_10 = *r8_3
    
    if (rdx_10 != 0)
    label_141e60986:
        int32_t rax_16 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
        int32_t var_a4_2 = rax_16
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_2
        
        var_94_1.d = rcx_5 - rax_17 + 0x1f
        
        if (rcx_5 - rax_17 + 0x1f s> r10_1)
            var_94_1.d = r10_1
    else
        while (true)
            int64_t rdx_11 = sx.q(rbx_2)
            rcx_5 += 0x20
            rbx_2 += 1
            var_94_1:4.d = rcx_5
            var_a8_1 = rbx_2
            
            if (rdx_11.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r8_3 + (rdx_11 << 2) + 4)
            int32_t var_98_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141e60986
        
        var_94_1.d = r10_1

int32_t rdx_13 = *(r13_2 + 0x28)
int128_t var_48_1 = 0xffffffff
int32_t r14_1 = 0xffffffff << (rdx_13.b & 0x1f)
int128_t var_58_1 = var_a8_1.o
int32_t r8_5 = rdx_13 s>> 5
int32_t r9_2 = rdx_13 & 0xffffffe0
int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_3 = r14_1
var_94_1.d = rdx_13
int128_t var_88 = r13_2.o
int128_t var_78_1 = var_58_1

if (rdx_13 != r10_1)
    void* rax_19 = *(r13_2 + 0x20)
    void* r10_2 = r13_2 + 0x10
    
    if (rax_19 != 0)
        r10_2 = rax_19
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10_1 - 1)
    int32_t rdx_17 = *(r10_2 + (sx.q(r8_5) << 2)) & r14_1
    
    if (rdx_17 != 0)
    label_141e60a52:
        int32_t rax_26 = neg.d(rdx_17) & rdx_17
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
        int32_t rdi_1
        
        if (rax_26 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_94_1.d = r9_2 - rdi_1 + 0x1f
        
        if (r9_2 - rdi_1 + 0x1f s> r10_1)
            var_94_1.d = r10_1
    else
        while (true)
            int64_t rcx_10 = sx.q(r8_5)
            r9_2 += 0x20
            r8_5 += 1
            
            if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_17 = *(r10_2 + (rcx_10 << 2) + 4)
            var_98_3 = 0xffffffff
            
            if (rdx_17 != 0)
                goto label_141e60a52
        
        var_94_1.d = r10_1

while (true)
    int64_t rax_28 = sx.q(var_78_1:0xc.d)
    int64_t* rcx_12 = var_88.q
    
    if (rax_28.d == (var_98_3.q u>> 0x20).d && var_78_1.q == r13_2 + 0x10 && rcx_12 == r13_2)
        return zx.q(arg_8)
    
    int64_t r8_6 = *r12
    int32_t* rax_29 = (*(r8_6 + 0x258))(r12, *(*rcx_12 + rax_28 * 0x90 + 8), r8_6)
    int64_t* rbx_4 = rax_29
    
    if (rax_29 != 0)
        bool rdx_21 = sub_140b5b8a0(*rax_29, 0) == 0
        int32_t rcx_15
        rcx_15.b = *(rbx_4 + 4) != 0
        rcx_15.b |= rdx_21
        
        if (rcx_15.b != 0)
            int64_t rdi_2 = sx.q(arg3[1].d)
            arg_8 = 1
            int32_t rax_31 = (rdi_2 + 1).d
            arg3[1].d = rax_31
            
            if (rax_31 s> *(arg3 + 0xc))
                sub_1405c5060(arg3)
            
            sub_141c913c0(rdi_2 * 0x50 + *arg3, rbx_4)
    
    var_78_1:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
