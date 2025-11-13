// 函数: sub_141e54b80
// 地址: 0x141e54b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
arg2[1] = 0
int32_t rdx_1 = *(arg1 + 8) - *(arg1 + 0x34)

if (rdx_1 s> 0)
    sub_1405a5130(arg2, rdx_1)

int32_t r9 = *(arg1 + 0x28)
void* r8 = arg1 + 0x10
int32_t var_58 = 0
int32_t rcx_1 = 0
int32_t var_54 = 1
void* var_50 = r8
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int32_t var_40 = 0

if (r9 != 0)
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_4 = *r8
    int32_t var_44_2
    
    if (rdx_4 != 0)
    label_141e54c27:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_44_1 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r9)
            var_44_2 = r9
    else
        while (true)
            int64_t rdx_5 = sx.q(rdi)
            rcx_1 += 0x20
            rdi += 1
            var_40 = rcx_1
            var_58 = rdi
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r8 + (rdx_5 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141e54c27
        
        var_44_2 = r9

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_58.o
var_58.o = arg1.o
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r9)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rsi_1 = sx.q(arg2[1].d)
        int64_t* rdi_3 = (sx.q(i) << 5) + *var_58.q
        int32_t rax_12 = (rsi_1 + 1).d
        arg2[1].d = rax_12
        
        if (rax_12 s> *(arg2 + 0xc))
            sub_1405a4df0(arg2)
        
        int64_t* rcx_5 = *arg2 + rsi_1 * 0x18
        *rcx_5 = *rdi_3
        sub_140596d10(&rcx_5[1], &rdi_3[1])
        var_40 &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        i = i_1
    while (i s< *(var_48.q + 0x18))

return arg2
