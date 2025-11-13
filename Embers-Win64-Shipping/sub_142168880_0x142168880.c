// 函数: sub_142168880
// 地址: 0x142168880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int32_t var_74 = 1
*arg4 = 0
*arg3 = 0
*arg2 = 0
void* r14 = *(arg1 + 0x2e8)
int32_t rcx = 0
int32_t r11 = *(r14 + 0x28)
void* r8 = r14 + 0x10
int32_t var_78 = 0
void* var_70 = r8
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int32_t var_60 = 0

if (r11 != 0)
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r8
    int32_t var_64_2
    
    if (rdx_2 != 0)
    label_142168938:
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
            int64_t rdx_3 = sx.q(r10)
            rcx += 0x20
            r10 += 1
            var_60 = rcx
            var_78 = r10
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r8 + (rdx_3 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_142168938
        
        var_64_2 = r11

void* var_10 = r14
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* result = zmm0.q
var_68.o = zmm0
var_78.o = r14.o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int32_t rax_12 = *(*var_78.q + sx.q(i) * 0x10 + 4)
        
        if (rax_12 == 0xfffffffe)
            *arg3 += 1
        else if (rax_12 != 0xffffffff)
            *arg4 += 1
        else
            *arg2 += 1
        
        var_60 &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        return sub_1409b3740(r14, *(r14 + 8) - *(r14 + 0x34), 1)

return result
