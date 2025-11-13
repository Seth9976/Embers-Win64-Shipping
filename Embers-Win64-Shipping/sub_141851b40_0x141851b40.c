// 函数: sub_141851b40
// 地址: 0x141851b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* r9 = &arg2[2]
*arg2 = 0
arg2[1] = 0
r9[2] = 0
r9[3].d = 0
*(r9 + 0x1c) = 0x80
int64_t* rax = r9[2]

if (rax != 0)
    r9 = rax

*r9 = 0
r9[1] = 0
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[8] = 0
arg2[9].d = 0
int32_t rsi_3 = *(arg3 + 8) - *(arg3 + 0x34) - *(arg1 + 0x34) + *(arg1 + 8)

if (rsi_3 s> arg2[1].d - *(arg2 + 0x34))
    sub_1409d93a0(arg2, rsi_3)
    int32_t rdx_2
    
    if (rsi_3 u< 4)
        rdx_2 = 1
    else
        uint32_t rsi_4 = rsi_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rsi_4 + 8)
        int32_t rcx_1
        
        if (rsi_4 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rsi_4 + 7)
        char rdx_1
        
        if (rcx_3 == 0)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_3
        
        rdx_2 = 1 << ((not.d(rcx_3)).b & (0x20 - rdx_1))
    
    int32_t rax_6 = arg2[9].d
    
    if (rax_6 == 0 || rax_6 s< rdx_2)
        arg2[9].d = rdx_2
        sub_140943380(arg2)

int32_t r10 = *(arg1 + 0x28)
void* r9_1 = arg1 + 0x10
int32_t var_78 = 0
int32_t rcx_7 = 0
int32_t var_74 = 1
int32_t r8_1 = 0
void* var_70 = r9_1
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r10 != 0)
    void* rax_7 = *(r9_1 + 0x10)
    
    if (rax_7 != 0)
        r9_1 = rax_7
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_141851ca8:
        int32_t rax_14 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_14)
        int32_t var_74_1 = rax_14
        int32_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0x20
        else
            rax_15 = 0x1f - temp0_4
        
        var_64.d = r8_1 - rax_15 + 0x1f
        
        if (r8_1 - rax_15 + 0x1f s> r10)
            var_64.d = r10
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_7)
            r8_1 += 0x20
            rcx_7 += 1
            var_64:4.d = r8_1
            var_78 = rcx_7
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141851ca8
        
        var_64.d = r10

int128_t var_38 = 0xffffffff
double var_48[0x2] = var_78.o
var_78.o = arg1.o
int64_t var_58 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68.o = var_48
int32_t i_2
void arg_8

if (0 s< r10)
    int32_t i = i_2
    
    do
        sub_140acafe0(arg2, &arg_8, *var_78.q + sx.q(i) * 0x18, nullptr)
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_2
    while (i s< *(var_68.q + 0x18))

int32_t r9_2 = *(arg3 + 0x28)
void* r8_4 = arg3 + 0x10
int32_t var_78_1 = 0
int32_t rcx_12 = 0
int32_t var_74_2 = 1
var_70 = r8_4
int32_t var_68_1 = 0xffffffff
int64_t var_64_1 = 0

if (r9_2 != 0)
    void* rax_22 = *(r8_4 + 0x10)
    
    if (rax_22 != 0)
        r8_4 = rax_22
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r9_2 - 1)
    int32_t rdx_11 = *r8_4
    
    if (rdx_11 != 0)
    label_141851dc6:
        int32_t rax_29 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_4
        int32_t temp0_6
        temp0_6, rflags_4 = _bit_scan_reverse(rax_29)
        int32_t var_74_3 = rax_29
        int32_t r14_1
        
        if (rax_29 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_6
        
        var_64_1.d = rcx_12 - r14_1 + 0x1f
        
        if (rcx_12 - r14_1 + 0x1f s> r9_2)
            var_64_1.d = r9_2
    else
        while (true)
            int64_t rdx_12 = sx.q(rbx)
            rcx_12 += 0x20
            rbx += 1
            var_64_1:4.d = rcx_12
            var_78_1 = rbx
            
            if (rdx_12.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r8_4 + (rdx_12 << 2) + 4)
            var_68_1 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141851dc6
        
        var_64_1.d = r9_2

int128_t var_38_1 = 0xffffffff
double var_48_1[0x2] = var_78_1.o
var_78_1.o = arg3.o
int64_t var_58_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68_1.o = var_48_1

if (0 s< r9_2)
    int32_t i_1 = i_2
    
    do
        sub_140acafe0(arg2, &arg_8, *var_78_1.q + sx.q(i_1) * 0x18, nullptr)
        var_64_1:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i_1 = i_2
    while (i_1 s< *(var_68_1.q + 0x18))

return arg2
