// 函数: sub_141e77490
// 地址: 0x141e77490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int64_t (* var_48)(int64_t* arg1, char arg2)

if (sub_140a80ea0() == 0)
    void** const var_28_1 = &data_142da2668
    int64_t var_38_1 = 0
    var_48 = sub_141e76860
    void* var_20 = arg1
    return sub_141e85cb0(&var_48, arg2)

int32_t rcx_1 = 0
int32_t var_88 = 0
int32_t r10 = *(arg1 + 0x238)
int64_t (* r9)(int64_t* arg1, char arg2) = arg1 + 0x220
int32_t var_84 = 1
int64_t (* var_80)(int64_t* arg1, char arg2) = r9
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int32_t var_70 = 0

if (r10 != 0)
    int64_t (* rax_2)(int64_t* arg1, char arg2) = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r9
    int32_t var_74_2
    
    if (rdx_4 != 0)
    label_141e77578:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_84_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t var_74_1 = rcx_1 - rax_10 + 0x1f
        
        if (rcx_1 - rax_10 + 0x1f s> r10)
            var_74_2 = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            var_70 = rcx_1
            var_88 = r8
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141e77578
        
        var_74_2 = r10

int64_t (* var_20_1)(int64_t* arg1, char arg2) = arg1 + 0x210
var_48 = arg1 + 0x210
int128_t var_30 = 0xffffffff
int128_t var_40 = var_88.o
int16_t var_50 = 0
int64_t var_38
int128_t zmm3 = var_38.o
void* result = zmm3.q
var_88.o = var_48.o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_78.o = zmm3
int128_t var_68 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        sub_141e773a0(arg1, *(*var_88.q + sx.q(i) * 0x50))
        var_70 &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        result = var_78.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        return sub_140864250(arg1 + 0x210, *(arg1 + 0x218) - *(arg1 + 0x244), 1)

return result
