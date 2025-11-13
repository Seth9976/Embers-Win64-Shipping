// 函数: sub_142683f40
// 地址: 0x142683f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t var_84 = 1
int32_t arg_10 = 0
int32_t r11 = *(arg1 + 0x2f8)
void* r10 = arg1 + 0x2e0
int32_t var_88 = 0
int32_t rcx = 0
void* var_80 = r10
int32_t r8 = 0
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int32_t var_70 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r10
    int32_t var_74_2
    
    if (rdx_3 != 0)
    label_142683fe8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_74_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_74_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_70 = rcx
            var_88 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r10 + (rdx_4 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142683fe8
        
        var_74_2 = r11

int128_t var_48 = 0xffffffff
double var_58[0x2] = var_88.o
var_88.o = (arg1 + 0x2d0).o
int64_t var_68 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_78.o = var_58

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        arg_10 = r9 + (*(sx.q(i) * 0x38 + *var_88.q + 0x24) << 1)
        var_70 &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        i = i_1
        r9 = arg_10
    while (i s< *(var_78.q + 0x18))

uint64_t result = zx.q(sub_141fb38e0(arg1)
    + ((((*(arg1 + 0x2fc) + 0x1f) u>> 5) + *(arg1 + 0x2dc) * 0xe + *(arg1 + 0x318)) << 2) + ((
    *(arg1 + 0x27c) * 3 + (*(arg1 + 0x29c) + *(arg1 + 0x2bc)) * 0x16 + *(arg1 + 0x2cc)
    + (*(arg1 + 0x28c) << 2) + *(arg1 + 0x2ac)) << 2) + arg_10)
return result
