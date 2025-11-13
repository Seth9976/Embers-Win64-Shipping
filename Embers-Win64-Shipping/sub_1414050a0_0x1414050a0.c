// 函数: sub_1414050a0
// 地址: 0x1414050a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_54 = 1
int32_t r10 = *(arg1 + 0x30)
void* r9 = arg1 + 0x18
int32_t rcx = 0
void* var_50 = r9
int32_t var_58 = 0
int32_t r8 = 0
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141405128:
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
        
        var_44.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_44.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_44:4.d = r8
            var_58 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141405128
        
        var_44.d = r10

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_58.o
var_58.o = (arg1 + 8).o
void* result = nullptr
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rcx_3 = *(*var_58.q + sx.q(i) * 0x10)
        (*(*rcx_3 + 0x178))(rcx_3)
        var_44:4.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        result = var_48.q
        i = i_1
    while (i s< *(result + 0x18))

return result
