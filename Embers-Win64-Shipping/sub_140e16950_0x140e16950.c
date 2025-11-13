// 函数: sub_140e16950
// 地址: 0x140e16950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t r9 = 0
int32_t* r10 = arg1 + 0x228
int64_t var_88
__builtin_memset(&var_88, 0, 0x14)
int32_t r8 = 0
int32_t rdi = r10[6]
int32_t rcx = 0
int32_t var_74 = 1
int32_t* var_70 = r10
int32_t var_68 = 0xffffffff
int64_t var_64 = 0
int32_t var_78_1

if (rdi != 0)
    int32_t* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_2 = *r10
    
    if (rdx_2 != 0)
    label_140e16a08:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rdi)
            var_64.d = rdi
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_64:4.d = rcx
            var_78_1 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r10[rdx_3 + 1]
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140e16a08
        
        var_64.d = rdi

int128_t var_38 = 0xffffffff
double var_48[0x2] = var_78_1.o
var_78_1.o = (arg1 + 0x218).o
int64_t var_58 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68.o = var_48
int64_t var_80_1
int32_t i_1

if (0 s< rdi)
    int32_t i_2 = i_1
    
    while (true)
        int64_t rdi_1 = sx.q(var_80_1.d)
        int64_t r14_1 = *var_78_1.q
        int32_t rax_12 = (rdi_1 + 1).d
        var_80_1.d = rax_12
        
        if (rax_12 s> r9)
            sub_1405a4d70(&var_88)
        
        *(var_88 + (rdi_1 << 3)) = *(r14_1 + sx.q(i_2) * 0x18 + 8)
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i_2 = i_1
        
        if (i_2 s>= *(var_68.q + 0x18))
            break
        
        r9 = var_80_1:4.d

int32_t r9_1 = *(arg1 + 0x58)
int32_t* r8_1 = arg1 + 0x40
int32_t rcx_5 = 0
int32_t var_78_2 = 0
int32_t var_74_2 = 1
var_70 = r8_1
int32_t var_68_1 = 0xffffffff
int64_t var_64_1 = 0

if (r9_1 != 0)
    int32_t* rax_18 = *(r8_1 + 0x10)
    
    if (rax_18 != 0)
        r8_1 = rax_18
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_1 - 1)
    int32_t rdx_9 = *r8_1
    
    if (rdx_9 != 0)
    label_140e16b76:
        int32_t rax_25 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
        int32_t var_74_3 = rax_25
        int32_t r12_1
        
        if (rax_25 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_4
        
        var_64_1.d = rcx_5 - r12_1 + 0x1f
        
        if (rcx_5 - r12_1 + 0x1f s> r9_1)
            var_64_1.d = r9_1
    else
        while (true)
            int64_t rdx_10 = sx.q(rbx)
            rcx_5 += 0x20
            rbx += 1
            var_64_1:4.d = rcx_5
            var_78_2 = rbx
            
            if (rdx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r8_1[rdx_10 + 1]
            var_68_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140e16b76
        
        var_64_1.d = r9_1

double var_48_1[0x2] = var_78_2.o
void* result = nullptr
int128_t var_38_1 = 0xffffffff
var_78_2.o = (arg1 + 0x30).o
int64_t var_58_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68_1.o = var_48_1

if (0 s< r9_1)
    int32_t i = i_1
    
    do
        int64_t* rcx_8 = *((sx.q(i) << 5) + *var_78_2.q + 8)
        (*(*rcx_8 + 8))(rcx_8, &var_88)
        var_64_1:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68_1.q
        i = i_1
    while (i s< *(result + 0x18))

int64_t rbx_1 = sx.q(var_80_1.d)

if (rbx_1.d != 0)
    int32_t rax_31 = arg2[1].d
    int32_t rdx_15 = rbx_1.d + rax_31
    
    if (rdx_15 s> *(arg2 + 0xc))
        sub_1405c5570(arg2, rdx_15)
        rax_31 = arg2[1].d
    
    result = memcpy(*arg2 + (sx.q(rax_31) << 3), var_88, (rbx_1 << 3).d)
    arg2[1].d += rbx_1.d

int64_t rcx_13 = var_88

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
