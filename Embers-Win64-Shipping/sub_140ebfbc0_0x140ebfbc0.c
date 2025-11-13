// 函数: sub_140ebfbc0
// 地址: 0x140ebfbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
*arg2 = 0
arg2[1] = 0
sub_14095cd40(arg2, *(arg1 + 0x140) - *(arg1 + 0x16c))
int32_t var_58 = 0
int32_t r10 = *(arg1 + 0x160)
void* r8 = arg1 + 0x148
int32_t var_54 = 1
int32_t rcx_1 = 0
void* var_50 = r8
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int32_t var_40 = 0

if (r10 != 0)
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r8
    int32_t var_44_2
    
    if (rdx_4 != 0)
    label_140ebfc76:
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
        
        if (rcx_1 - rax_9 + 0x1f s> r10)
            var_44_2 = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rsi)
            rcx_1 += 0x20
            rsi += 1
            var_40 = rcx_1
            var_58 = rsi
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r8 + (rdx_5 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140ebfc76
        
        var_44_2 = r10

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_58.o
var_58.o = (arg1 + 0x138).o
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rbx_2 = sx.q(arg2[1].d)
        int32_t rax_13 = (rbx_2 + 1).d
        arg2[1].d = rax_13
        int64_t* rsi_1 = *var_58.q + sx.q(i) * 0x18
        
        if (rax_13 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rcx_7 = (rbx_2 << 4) + *arg2
        *rcx_7 = *rsi_1
        void* rax_15 = rsi_1[1]
        rcx_7[1] = rax_15
        
        if (rax_15 != 0)
            *(rax_15 + 8) += 1
        
        var_40 &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        i = i_1
    while (i s< *(var_48.q + 0x18))

return arg2
