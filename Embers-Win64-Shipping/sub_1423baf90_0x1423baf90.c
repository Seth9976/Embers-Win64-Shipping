// 函数: sub_1423baf90
// 地址: 0x1423baf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_74 = 1
int32_t var_78 = 0
int32_t r10 = *(arg1 + 0x30)
void* r9 = arg1 + 0x18
void* var_70 = r9
int32_t var_68 = 0xffffffff
int32_t rcx = 0
int32_t var_64 = 0
int32_t r8 = 0
int32_t var_60 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1423bb038:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_64 = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_60 = rcx
            var_78 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1423bb038
        
        var_64 = r10

int64_t* var_50 = arg1 + 8
int128_t var_30 = 0xffffffff
double var_40[0x2] = var_78.o
var_78.o = (arg1 + 8).o
int64_t var_58 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68.o = var_40
int32_t i_3

if (0 s< r10)
    int32_t i = i_3
    
    do
        char* rcx_3 = *(*(*var_78.q + sx.q(i) * 0x10) + 0x20)
        var_60 &= not.d(var_70:4.d)
        *rcx_3 &= 0xfe
        sub_14059bdd0(&var_70)
        i = i_3
    while (i s< *(var_68.q + 0x18))

int32_t var_74_2 = 1
int32_t r10_1 = *(arg1 + 0x88)
void* r9_1 = arg1 + 0x70
var_70 = r9_1
int32_t rcx_5 = 0
int32_t var_78_1 = 0
int32_t r8_1 = 0
int32_t var_68_1 = 0xffffffff
var_64.q = 0

if (r10_1 != 0)
    void* rax_16 = *(r9_1 + 0x10)
    
    if (rax_16 != 0)
        r9_1 = rax_16
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10_1 - 1)
    int32_t rdx_10 = *r9_1
    int32_t var_64_2
    
    if (rdx_10 != 0)
    label_1423bb158:
        int32_t rax_23 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
        int32_t var_74_3 = rax_23
        int32_t rbx_1
        
        if (rax_23 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        int32_t var_64_1 = r8_1 - rbx_1 + 0x1f
        
        if (r8_1 - rbx_1 + 0x1f s> r10_1)
            var_64_2 = r10_1
    else
        while (true)
            int64_t rdx_11 = sx.q(rcx_5)
            r8_1 += 0x20
            rcx_5 += 1
            var_60 = r8_1
            var_78_1 = rcx_5
            
            if (rdx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r9_1 + (rdx_11 << 2) + 4)
            var_68_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1423bb158
        
        var_64_2 = r10_1

int64_t* var_50_1 = arg1 + 0x60
int128_t var_30_1 = 0xffffffff
double var_40_1[0x2] = var_78_1.o
var_78_1.o = (arg1 + 0x60).o
int64_t var_58_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68_1.o = var_40_1

if (0 s< r10_1)
    int32_t i_1 = i_3
    
    do
        char* rcx_8 = *(*(*var_78_1.q + sx.q(i_1) * 0x10) + 0x20)
        var_60 &= not.d(var_70:4.d)
        *rcx_8 &= 0xfe
        sub_14059bdd0(&var_70)
        i_1 = i_3
    while (i_1 s< *(var_68_1.q + 0x18))

for (void* i_2 = *(arg1 + 0x58); i_2 != 0; i_2 = *(*(i_2 + 0x20) + 0x18))
    char* rax_30 = *(i_2 + 0x20)
    *rax_30 &= 0xfe

*(arg1 + 0x108) = 0
int64_t rcx_10 = *(arg1 + 0x100)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

*(arg1 + 0xc8) = 0

if (*(arg1 + 0xcc) != 0)
    sub_1405a5410(arg1 + 0xc0, 0)

*(arg1 + 0xf0) = 0xffffffff
*(arg1 + 0xf4) = 0
sub_14059a8e0(arg1 + 0xd0, 0)
int64_t rcx_13 = *(arg1 + 0xe0)

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = *(arg1 + 0xc0)

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = *(arg1 + 0xb0)

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

*(arg1 + 0xa8) = 0
int64_t rcx_16 = *(arg1 + 0xa0)

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

*(arg1 + 0x68) = 0

if (*(arg1 + 0x6c) != 0)
    sub_1405a5410(arg1 + 0x60, 0)

*(arg1 + 0x90) = 0xffffffff
*(arg1 + 0x94) = 0
sub_14059a8e0(arg1 + 0x70, 0)
int64_t rcx_19 = *(arg1 + 0x80)

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = *(arg1 + 0x60)

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

*(arg1 + 0x50) = 0
int64_t rcx_21 = *(arg1 + 0x48)

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) != 0)
    sub_1405a5410(arg1 + 8, 0)

*(arg1 + 0x38) = 0xffffffff
*(arg1 + 0x3c) = 0
void* result = sub_14059a8e0(arg1 + 0x18, 0)
int64_t rcx_24 = *(arg1 + 0x28)

if (rcx_24 != 0)
    result = sub_140a74f90(rcx_24)

int64_t rcx_25 = *(arg1 + 8)

if (rcx_25 == 0)
    return result

return sub_140a74f90(rcx_25)
