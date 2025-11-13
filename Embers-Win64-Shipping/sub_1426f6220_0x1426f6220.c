// 函数: sub_1426f6220
// 地址: 0x1426f6220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
double zmm6[0x2] = *(arg1 + 0x98)
int32_t r11 = *(arg1 + 0x60)
void* r9 = arg1 + 0x48
int32_t var_88 = 0
int32_t var_84 = 1
int32_t rcx = 0
void* var_80 = r9
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int32_t var_70 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    int32_t var_74_2
    
    if (rdx_3 != 0)
    label_1426f62c8:
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
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1426f62c8
        
        var_74_2 = r11

void* var_20 = arg1 + 0x38
int128_t zmm0 = var_88.o
int128_t var_30 = 0xffffffff
int16_t var_50 = 0
void* result = zmm0.q
var_78.o = zmm0
var_88.o = (arg1 + 0x38).o
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_68 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        void* rbx_2 = sx.q(i) * 0x3c + *var_88.q
        
        if (sub_140d3e110(rbx_2 + 4) != 0)
            char rax_15
            rax_15, zmm6 = sub_1426f5d50(sub_140d3c6e0(rbx_2 + 4), zmm6)
            
            if (rax_15 != 0)
                *(rbx_2 + 0x2c) |= 1
                *(arg1 + 0x100) |= 1
        
        var_70 &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        result = var_78.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        return sub_1426f6b40(arg1 + 0x38, *(arg1 + 0x40) - *(arg1 + 0x6c), 1)

return result
