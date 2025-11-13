// 函数: sub_142149d30
// 地址: 0x142149d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
int32_t rcx = 0
int32_t var_54 = 1
int32_t var_58 = 0
int32_t r11 = arg1[0x16].d
void* r9 = &arg1[0x13]
void* var_50 = r9
int32_t r8 = 0
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_142149dc8:
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
        
        var_44.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_44.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_44:4.d = r8
            var_58 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_142149dc8
        
        var_44.d = r11

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_58.o
var_58.o = (&arg1[0x11]).o
void* result = nullptr
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int32_t rax_15 = not.d(var_50:4.d)
        *(arg2 + 0x28) += sx.q(*(*(*var_58.q + sx.q(i) * 0x18 + 8) + 0x20)) << 2
        var_44:4.d &= rax_15
        sub_14059bdd0(&var_50)
        result = var_48.q
        i = i_1
    while (i s< *(result + 0x18))

return result
