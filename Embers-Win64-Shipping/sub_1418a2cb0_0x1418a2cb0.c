// 函数: sub_1418a2cb0
// 地址: 0x1418a2cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int32_t rdx = *(arg1 + 0x38)

if (rdx != *(arg1 + 0x64))
    sub_1405a51b0(arg2, rdx - *(arg1 + 0x64))

void* r10 = arg1 + 0x30
int32_t var_98 = 0
int32_t r11 = *(r10 + 0x28)
void* r13 = r10 + 0x10
int64_t var_84 = 0
int32_t rcx_1 = 0
int32_t var_94 = 1
int32_t r8 = 0
void* var_90 = r13
int32_t var_88 = 0xffffffff

if (r11 != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_1418a2d78:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
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
            
            if (rdx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1418a2d78
        
        var_84.d = r11
    
    r10 = arg1 + 0x30

int32_t rdx_6 = *(r10 + 0x28)
double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
int32_t r14 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = r14
var_84.d = rdx_6
int128_t var_78 = r10.o
int96_t var_68 = var_48:8.12

if (rdx_6 != r11)
    void* rax_11 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_10 != 0)
    label_1418a2e52:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        var_84.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1418a2e52
        
        var_84.d = r11
    
    r10 = arg1 + 0x30

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_11 = var_78.q
    
    if (rax_20.d == (var_88_1.q u>> 0x20).d && var_68.q == r13 && rdx_11 == r10)
        return arg2
    
    int64_t rbx_2 = sx.q(arg2[1].d)
    void* r14_1 = *rdx_11 + rax_20 * 0x28
    int32_t rax_22 = (rbx_2 + 1).d
    arg2[1].d = rax_22
    
    if (rax_22 s> *(arg2 + 0xc))
        sub_1405c4e40(arg2)
    
    int64_t* rax_25 = (rbx_2 << 5) + *arg2
    *rax_25 = 0
    rax_25[1] = 0
    int64_t* rbx_5 = *arg2 - 0x20 + (sx.q(arg2[1].d) << 5)
    int64_t* rax_28 = sub_140b18970(&var_98, r14_1 + 8)
    
    if (rbx_5 != rax_28)
        int64_t rcx_11 = *rbx_5
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        *rbx_5 = *rax_28
        *rax_28 = 0
        rbx_5[1].d = rax_28[1].d
        *(rbx_5 + 0xc) = *(rax_28 + 0xc)
        rax_28[1] = 0
    
    int64_t rcx_13 = var_98.q
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int64_t* rcx_14 = *(arg1 + 0x10)
    rbx_5[2] = (*(*rcx_14 + 8))(rcx_14, rbx_5)
    rbx_5[3] = sx.q(*(r14_1 + 0x18))
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
    r10 = arg1 + 0x30
