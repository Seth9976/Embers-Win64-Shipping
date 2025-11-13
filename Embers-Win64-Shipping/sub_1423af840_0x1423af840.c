// 函数: sub_1423af840
// 地址: 0x1423af840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_54 = 1
int32_t var_58 = 0
int32_t r10 = *(arg1 + 0xa8)
void* r9 = arg1 + 0x90
void* var_50 = r9
int32_t var_48 = 0xffffffff
int32_t r8 = 0
int64_t var_44 = 0
int32_t rcx = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1423af8d8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_44.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_44.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_44:4.d = rcx
            var_58 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1423af8d8
        
        var_44.d = r10

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_58.o
var_58.o = (arg1 + 0x80).o
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        rbx += *((sx.q(i) << 5) + *var_58.q + 0x14) * 0xc
        var_44:4.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        i = i_1
    while (i s< *(var_48.q + 0x18))

int32_t rdx_16 = ((*(arg1 + 0x194) + 0x1f) u>> 5) + (((*(arg1 + 0x2c) + *(arg1 + 0x1c) * 6) * 5
    + (*(arg1 + 0x174) + *(arg1 + 0xdc) + *(arg1 + 0x3c)) * 3 + *(arg1 + 0x134)
    + (*(arg1 + 0x8c) << 2)) << 1) + *(arg1 + 0x154) + *(arg1 + 0x144)
    + ((*(arg1 + 0xfc) + 0x1f) u>> 5) + ((*(arg1 + 0xac) + 0x1f) u>> 5)
    + ((*(arg1 + 0x5c) + 0x1f) u>> 5)
return zx.q(rbx
    + ((rdx_16 + *(arg1 + 0x1b0) + *(arg1 + 0x118) + *(arg1 + 0xc8) + *(arg1 + 0x78)) << 2))
