// 函数: sub_141f88d80
// 地址: 0x141f88d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_74 = 1
*arg2 = 0
int32_t* r9 = arg1 + 0x18
arg2[1] = 0
int32_t r10 = r9[6]
int32_t rcx = 0
int32_t var_78 = 0
int32_t* var_70 = r9
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int32_t var_60 = 0

if (r10 != 0)
    int32_t* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    int32_t var_64_2
    
    if (rdx_2 != 0)
    label_141f88e28:
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
        
        int32_t var_64_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_64_2 = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_60_1 = rcx
            var_78 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9[rdx_3 + 1]
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141f88e28
        
        var_64_2 = r10

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_78.o
double var_58[0x2] = (arg1 + 8).o
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r10)
    int32_t i = var_28[1]:4.d
    
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int64_t rdx_5 = sx.q(i) * 3
        int64_t rcx_2 = *var_58[0]
        var_78.q = *(rcx_2 + (rdx_5 << 3))
        int64_t var_70_1 = *(rcx_2 + (rdx_5 << 3) + 8)
        int32_t rax_15 = (rdi_1 + 1).d
        arg2[1].d = rax_15
        
        if (rax_15 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        *(*arg2 + rdi_1 * 0x10) = var_78.o
        var_28[1].d &= not.d(var_58[1]:4.d)
        sub_14059bdd0(&var_58[1])
        i = var_28[1]:4.d
    while (i s< *(var_28[0] i+ 0x18))

return arg2
