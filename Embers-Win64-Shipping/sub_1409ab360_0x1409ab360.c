// 函数: sub_1409ab360
// 地址: 0x1409ab360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x6a].d = 0
int64_t rcx = arg1[0x69]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1409aaf90(&arg1[0x61])
arg1[0x5f].d = 0
int64_t rcx_2 = arg1[0x5e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1409aaf90(&arg1[0x56])
arg1[0x54].d = 0
int64_t rcx_4 = arg1[0x53]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1409aaf90(&arg1[0x4b])
arg1[0x49].d = 0
int64_t rcx_6 = arg1[0x48]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1409aaf90(&arg1[0x40])
arg1[0x3e].d = 0
int64_t rcx_8 = arg1[0x3d]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_1409aaf90(&arg1[0x35])
arg1[0x33].d = 0
int64_t rcx_10 = arg1[0x32]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_1409aaf90(&arg1[0x2a])
int32_t var_64 = 1
int32_t r10 = arg1[0x28].d
void* var_60 = &arg1[0x25]
int32_t rcx_12 = 0
int32_t var_68 = 0
int32_t r8 = 0
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r10 != 0)
    void* rax_1 = arg1[0x27]
    void* r9_1 = &arg1[0x25]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1409ab4e8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_54.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_54.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_12)
            r8 += 0x20
            rcx_12 += 1
            var_54:4.d = r8
            var_68 = rcx_12
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_58_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1409ab4e8
        
        var_54.d = r10

void* rdx_5 = &arg1[0x23]
int128_t var_40 = var_68.o
int64_t var_30 = 0xffffffff

if (0 s< r10)
    int32_t rcx_14 = 0
    
    while (true)
        int64_t rcx_15 = *((sx.q(rcx_14) << 4) + *rdx_5)
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        var_30.d &= not.d(var_40:4.d)
        sub_14059bdd0(&var_40)
        rcx_14 = var_30:4.d
        
        if (rcx_14 s>= *(var_40:8.q + 0x18))
            break
        
        rdx_5 = &arg1[0x23]

arg1[0x24].d = 0

if (*(arg1 + 0x124) != 0)
    sub_1405a5410(&arg1[0x23], 0)

arg1[0x29].d = 0xffffffff
*(arg1 + 0x14c) = 0
sub_14059a8e0(&arg1[0x25], 0)
int64_t rcx_19 = arg1[0x27]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[0x23]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

sub_14094b8e0(&arg1[0x1c])
arg1[0x16].d = 0

if (*(arg1 + 0xb4) != 0)
    sub_1405a5410(&arg1[0x15], 0)

arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
sub_14059a8e0(&arg1[0x17], 0)
int64_t rcx_24 = arg1[0x19]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_25 = arg1[0x15]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int32_t var_64_2 = 1
int32_t r9_2 = arg1[0x13].d
void* var_60_1 = &arg1[0x10]
int32_t rcx_26 = 0
int32_t var_68_1 = 0
int32_t r8_2 = 0
int32_t var_58_2 = 0xffffffff
int64_t var_54_1 = 0

if (r9_2 != 0)
    void* rax_17 = arg1[0x12]
    void* r10_1 = &arg1[0x10]
    
    if (rax_17 != 0)
        r10_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_2 - 1)
    int32_t rdx_8 = *r10_1
    
    if (rdx_8 != 0)
    label_1409ab698:
        int32_t rax_24 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t var_64_3 = rax_24
        int32_t rax_25
        
        if (rax_24 == 0)
            rax_25 = 0x20
        else
            rax_25 = 0x1f - temp0_3
        
        var_54_1.d = r8_2 - rax_25 + 0x1f
        
        if (r8_2 - rax_25 + 0x1f s> r9_2)
            var_54_1.d = r9_2
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_26)
            r8_2 += 0x20
            rcx_26 += 1
            var_54_1:4.d = r8_2
            var_68_1 = rcx_26
            
            if (rdx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rdx_9 << 2) + 4)
            int32_t var_58_3 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1409ab698
        
        var_54_1.d = r9_2

void* rdx_10 = &arg1[0xe]
var_40 = var_68_1.o
int64_t var_30_1 = 0xffffffff

if (0 s< r9_2)
    int32_t rcx_28 = 0
    
    while (true)
        int64_t rcx_30 = *(*rdx_10 + sx.q(rcx_28) * 0x18 + 8)
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        var_30_1.d &= not.d(var_40:4.d)
        sub_14059bdd0(&var_40)
        rcx_28 = var_30_1:4.d
        
        if (rcx_28 s>= *(var_40:8.q + 0x18))
            break
        
        rdx_10 = &arg1[0xe]

arg1[0xf].d = 0

if (*(arg1 + 0x7c) != 0)
    sub_1405a5130(&arg1[0xe], 0)

arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
sub_14059a8e0(&arg1[0x10], 0)
int64_t rcx_34 = arg1[0x12]

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

int64_t rcx_35 = arg1[0xe]

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

int32_t var_64_4 = 1
int32_t r9_3 = arg1[0xc].d
void* var_60_2 = &arg1[9]
int32_t rcx_36 = 0
int32_t var_68_2 = 0
int32_t r8_4 = 0
int32_t var_58_4 = 0xffffffff
int64_t var_54_2 = 0

if (r9_3 != 0)
    void* rax_32 = arg1[0xb]
    void* r10_2 = &arg1[9]
    
    if (rax_32 != 0)
        r10_2 = rax_32
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r9_3 - 1)
    int32_t rdx_13 = *r10_2
    
    if (rdx_13 != 0)
    label_1409ab7f8:
        int32_t rax_39 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_39)
        int32_t var_64_5 = rax_39
        int32_t r14_1
        
        if (rax_39 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_4
        
        var_54_2.d = r8_4 - r14_1 + 0x1f
        
        if (r8_4 - r14_1 + 0x1f s> r9_3)
            var_54_2.d = r9_3
    else
        while (true)
            int64_t rdx_14 = sx.q(rcx_36)
            r8_4 += 0x20
            rcx_36 += 1
            var_54_2:4.d = r8_4
            var_68_2 = rcx_36
            
            if (rdx_14.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r10_2 + (rdx_14 << 2) + 4)
            int32_t var_58_5 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_1409ab7f8
        
        var_54_2.d = r9_3

void* rdx_15 = &arg1[7]
var_40 = var_68_2.o
int64_t var_30_2 = 0xffffffff

if (0 s< r9_3)
    int32_t rcx_38 = 0
    
    while (true)
        int64_t rcx_40 = *(*rdx_15 + sx.q(rcx_38) * 0x18 + 8)
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
        
        var_30_2.d &= not.d(var_40:4.d)
        sub_14059bdd0(&var_40)
        rcx_38 = var_30_2:4.d
        
        if (rcx_38 s>= *(var_40:8.q + 0x18))
            break
        
        rdx_15 = &arg1[7]

arg1[8].d = 0

if (*(arg1 + 0x44) != 0)
    sub_1405a5130(&arg1[7], 0)

arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
sub_14059a8e0(&arg1[9], 0)
int64_t rcx_44 = arg1[0xb]

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

int64_t rcx_45 = arg1[7]

if (rcx_45 != 0)
    sub_140a74f90(rcx_45)

return sub_1409aadd0(arg1) __tailcall
