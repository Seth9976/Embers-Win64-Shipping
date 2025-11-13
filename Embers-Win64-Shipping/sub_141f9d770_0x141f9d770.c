// 函数: sub_141f9d770
// 地址: 0x141f9d770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x30) & 0x84) != 0)
    return 

int32_t r8_1 = 0
int32_t var_78_1 = 0
int32_t r11_1 = *(arg1 + 0xd0)
void* r9_1 = arg1 + 0xb8
int32_t var_74_1 = 1
int32_t rcx = 0
void* var_70 = r9_1
int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int32_t var_60_1 = 0

if (r11_1 != 0)
    void* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_64_3
    
    if (rdx_3 != 0)
    label_141f9d818:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_64_2 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11_1)
            var_64_3 = r11_1
    else
        while (true)
            int64_t rdx_4 = sx.q(r8_1)
            rcx += 0x20
            r8_1 += 1
            var_60_1 = rcx
            var_78_1 = r8_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_68_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141f9d818
        
        var_64_3 = r11_1

void* var_10_1 = arg1 + 0xa8
int128_t var_20_1 = 0xffffffff
int16_t var_40_1 = 0
int128_t zmm3 = var_78_1.o
var_78_1.o = (arg1 + 0xa8).o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_68_1.o = zmm3
int128_t var_58_1 = zmm0

if (0 s< *(zmm3.q + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        sub_141fc9dd0(*((sx.q(i) << 5) + *var_78_1.q + 8))
        var_60_1 &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68_1.q + 0x18))
    
    if (var_40_1.b != 0 && var_40_1:1.b != 0)
        sub_1405b6520(arg1 + 0xa8, *(arg1 + 0xb0) - *(arg1 + 0xdc), 1)

void* rcx_6 = *(arg1 + 0x28)
*(arg1 + 0x30) |= 0x80
void* arg_8 = arg1
sub_1405a7050(rcx_6 + 0x1510, &arg_8)
