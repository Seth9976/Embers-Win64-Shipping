// 函数: sub_1413fb200
// 地址: 0x1413fb200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *arg1
int32_t var_74 = 1
*arg1 = rdi + 1
void* r9 = &arg1[3]
int32_t r11 = *(r9 + 0x18)
void* var_70 = r9
int32_t var_68 = 0xffffffff
int32_t rcx = 0
int32_t r8 = 0
int32_t var_78 = 0
int64_t var_64 = 0

if (r11 != 0)
    void* rax_6 = *(r9 + 0x10)
    
    if (rax_6 != 0)
        r9 = rax_6
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1413fb2c8:
        int32_t rax_13 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
        int32_t var_74_1 = rax_13
        int32_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0x20
        else
            rax_14 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_14 + 0x1f
        
        if (r8 - rax_14 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1413fb2c8
        
        var_64.d = r11

void* var_10 = &arg1[1]
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* result = zmm0.q
var_68.o = zmm0
var_78.o = (&arg1[1]).o
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_58 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t r8_2 = sx.q(i) * 0xd0
        int64_t rcx_2 = *var_78.q
        zmm0 = *(r8_2 + rcx_2 + 0x20)
        *(r8_2 + rcx_2 + 0xb0) = 1
        double zmm1[0x2] = *(r8_2 + rcx_2 + 0x30)
        *(r8_2 + rcx_2 + 0x60) = zmm0
        zmm0 = *(r8_2 + rcx_2 + 0x40)
        *(r8_2 + rcx_2 + 0x70) = zmm1
        zmm1 = *(r8_2 + rcx_2 + 0x50)
        *(r8_2 + rcx_2 + 0x80) = zmm0
        *(r8_2 + rcx_2 + 0x90) = zmm1
        
        if (*arg1 - *(r8_2 + rcx_2 + 0xa8) == 1)
            void* rax_20 = *(r8_2 + rcx_2 + 0x10)
            
            if (rax_20 != 0)
                *(rax_20 + 0x120) |= 2
        
        if (rdi + 1 == (rdi + 1) u/ 0x64 * 0x64 && *arg1 - *(r8_2 + rcx_2 + 0xa0) u> 0xa)
            sub_1413f0f20(var_58:8.q, i)
            var_40.b = 1
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        return sub_1413d7220(&arg1[1], arg1[2].d - *(arg1 + 0x3c), 1)

return result
