// 函数: sub_141bb01a0
// 地址: 0x141bb01a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x48))()
int32_t rdi = 0

if (rax_1 == 0)
    return 0

int32_t rdx_1 = *(rax_1 + 0x638) - *(rax_1 + 0x664)
arg2[1].d = 0

if (*(arg2 + 0xc) != rdx_1)
    sub_1405c5570(arg2, rdx_1)

int32_t var_68 = 0
int32_t r9 = *(rax_1 + 0x658)
void* r8 = rax_1 + 0x640
int32_t var_64 = 1
int32_t rcx_1 = 0
void* var_60 = r8
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int32_t var_50 = 0

if (r9 != 0)
    void* rax_2 = *(r8 + 0x10)
    
    if (rax_2 != 0)
        r8 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_4 = *r8
    int32_t var_54_2
    
    if (rdx_4 != 0)
    label_141bb0266:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_64_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t var_54_1 = rcx_1 - rax_10 + 0x1f
        
        if (rcx_1 - rax_10 + 0x1f s> r9)
            var_54_2 = r9
    else
        while (true)
            int64_t rdx_5 = sx.q(rdi)
            rcx_1 += 0x20
            rdi += 1
            var_50 = rcx_1
            var_68 = rdi
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r8 + (rdx_5 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141bb0266
        
        var_54_2 = r9

int128_t var_28 = 0xffffffff
double var_38[0x2] = var_68.o
var_68.o = (rax_1 + 0x630).o
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r9)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int64_t r14_1 = *var_68.q
        int32_t rax_13 = (rdi_1 + 1).d
        arg2[1].d = rax_13
        
        if (rax_13 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rdi_1 << 3)) = *(r14_1 + sx.q(i) * 0x10)
        var_50 &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        i = i_1
    while (i s< *(var_58.q + 0x18))

return zx.q(*(rax_1 + 0x638) - *(rax_1 + 0x664))
