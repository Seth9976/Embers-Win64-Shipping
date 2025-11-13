// 函数: sub_1418d8740
// 地址: 0x1418d8740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_74 = 1
int32_t var_78 = 0
int32_t r11 = *(arg1 + 0x50)
void* r9 = arg1 + 0x38
void* var_70 = r9
int32_t var_68 = 0xffffffff
int32_t rcx = 0
int32_t var_64 = 0
int32_t var_60 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    int32_t var_64_2
    
    if (rdx_2 != 0)
    label_1418d87e8:
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
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_64_2 = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_60 = rcx
            var_78 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1418d87e8
        
        var_64_2 = r11

int64_t* var_10 = arg1 + 0x28
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* rax_11 = zmm0.q
var_68.o = zmm0
var_78.o = (arg1 + 0x28).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = zmm0

if (0 s< *(rax_11 + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rcx_3 = *(*var_78.q + sx.q(i) * 0x18 + 8)
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        var_60 &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_1405b6470(arg1 + 0x28, *(arg1 + 0x30) - *(arg1 + 0x5c), 1)

sub_1405ae080(arg1 + 0x28)
int64_t rcx_7 = *(arg1 + 8)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
