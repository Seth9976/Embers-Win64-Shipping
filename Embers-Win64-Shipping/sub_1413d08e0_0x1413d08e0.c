// 函数: sub_1413d08e0
// 地址: 0x1413d08e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a4 = 1
int32_t r11 = *(arg1 + 0x30)
void* r9 = arg1 + 0x18
int32_t rcx = 0
void* var_a0 = r9
int32_t var_a8 = 0
int32_t r8 = 0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1413d0978:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_94:4.d = r8
            var_a8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1413d0978
        
        var_94.d = r11

void* var_40 = arg1 + 8
int128_t var_50 = 0xffffffff
int128_t var_60 = var_a8.o
int16_t var_70 = 0
int128_t var_58
void* result = var_58.q
var_a8.o = (arg1 + 8).o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_98.o = var_58
int128_t var_88 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    int128_t zmm6 = *arg2
    int128_t zmm7 = *(arg2 + 4)
    int128_t zmm8 = *(arg2 + 8)
    
    do
        void* rcx_3 = sx.q(i) * 0xd0 + *var_a8.q
        var_94:4.d &= not.d(var_a0:4.d)
        int128_t zmm2
        zmm2.d = zmm6.d f+ *(rcx_3 + 0x50)
        int64_t zmm1
        zmm1.d = zmm7.q.d f+ *(rcx_3 + 0x54)
        zmm0.d = zmm8.d f+ *(rcx_3 + 0x58)
        *(rcx_3 + 0x50) = zmm2.d
        *(rcx_3 + 0x54) = zmm1.d
        *(rcx_3 + 0x58) = zmm0.d
        zmm2.d = zmm6.d f+ *(rcx_3 + 0x90)
        zmm1.d = zmm7.q.d f+ *(rcx_3 + 0x94)
        zmm0.d = zmm8.d f+ *(rcx_3 + 0x98)
        *(rcx_3 + 0x90) = zmm2.d
        *(rcx_3 + 0x94) = zmm1.d
        *(rcx_3 + 0x98) = zmm0.d
        sub_14059bdd0(&var_a0)
        result = var_98.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_70.b != 0 && var_70:1.b != 0)
        return sub_1413d7220(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 1)

return result
