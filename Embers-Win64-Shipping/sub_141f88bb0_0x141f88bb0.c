// 函数: sub_141f88bb0
// 地址: 0x141f88bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_94 = 1
*arg2 = 0
int32_t* r9 = arg1 + 0x18
arg2[1] = 0
int32_t r11 = r9[6]
int32_t rcx = 0
int32_t var_98 = 0
int32_t* var_90 = r9
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t var_80 = 0

if (r11 != 0)
    int32_t* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    int32_t var_84_2
    
    if (rdx_2 != 0)
    label_141f88c58:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_84_2 = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_80_1 = rcx
            var_98 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9[rdx_3 + 1]
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141f88c58
        
        var_84_2 = r11

int64_t* var_10 = arg1 + 8
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
int96_t zmm3 = var_98.o:8.12
int96_t var_68 = zmm3
int128_t var_78 = (arg1 + 8).o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = zmm0

if (0 s< *(zmm3.q + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int64_t rdx_5 = sx.q(i) * 3
        int64_t rcx_2 = *var_78.q
        var_98.q = *(rcx_2 + (rdx_5 << 3))
        int64_t var_90_1 = *(rcx_2 + (rdx_5 << 3) + 8)
        int32_t rax_16 = (rdi_1 + 1).d
        arg2[1].d = rax_16
        
        if (rax_16 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        *(*arg2 + rdi_1 * 0x10) = var_98.o
        var_68:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
        i = i_1
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_1405b6730(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 1)

return arg2
