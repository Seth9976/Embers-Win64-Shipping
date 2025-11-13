// 函数: sub_1409280d0
// 地址: 0x1409280d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_54 = 1
*arg2 = 0
int32_t* r9 = arg1 + 0x1d8
arg2[1] = 0
int32_t r10 = r9[6]
int32_t rcx = 0
int32_t var_58 = 0
int32_t* var_50 = r9
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int32_t var_40 = 0

if (r10 != 0)
    int32_t* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    int32_t var_44_2
    
    if (rdx_2 != 0)
    label_140928178:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_44_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_44_2 = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_40 = rcx
            var_58 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9[rdx_3 + 1]
            var_48 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140928178
        
        var_44_2 = r10

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_58.o
var_58.o = (arg1 + 0x1c8).o
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdx_5 = sx.q(i) * 9
        int64_t rcx_2 = *var_58.q
        void* rdi_1 = *(rcx_2 + (rdx_5 << 3) + 0x38)
        int64_t r14_1 = *(rcx_2 + (rdx_5 << 3) + 0x30)
        
        if (rdi_1 != 0)
            *(rdi_1 + 8) += 1
        
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_13 = (rsi_1 + 1).d
        arg2[1].d = rax_13
        
        if (rax_13 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rax_16 = (rsi_1 << 4) + *arg2
        *rax_16 = r14_1
        rax_16[1] = rdi_1
        var_40 &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        i = i_1
    while (i s< *(var_48.q + 0x18))

return arg2
