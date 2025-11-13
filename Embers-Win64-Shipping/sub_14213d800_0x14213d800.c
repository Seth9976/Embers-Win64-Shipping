// 函数: sub_14213d800
// 地址: 0x14213d800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cd7d40(arg1)
int32_t r8 = 0
int32_t var_74 = 1
int32_t var_78 = 0
int32_t r11 = *(arg1 + 0xb0)
void* r9 = arg1 + 0x98
void* var_70 = r9
int32_t rcx = 0
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int32_t var_60 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    int32_t var_64_2
    
    if (rdx_3 != 0)
    label_14213d8a8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
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
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_60 = rcx
            var_78 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14213d8a8
        
        var_64_2 = r11

void* var_10 = arg1 + 0x88
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
int128_t zmm3 = var_78.o
var_68.o = zmm3
var_78.o = (arg1 + 0x88).o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = zmm0

if (0 s< *(zmm3.q + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdx_6 = sx.q(i) * 3
        sub_141997f50(*(*var_78.q + (rdx_6 << 3) + 8), rdx_6)
        var_60 &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_1405b6470(arg1 + 0x88, *(arg1 + 0x90) - *(arg1 + 0xbc), 1)

sub_141997f50(arg1 + 0x178)
return sub_141997ac0(arg1 + 0x208, 0, sub_141997f50(arg1 + 0xf0), zmm3) __tailcall
