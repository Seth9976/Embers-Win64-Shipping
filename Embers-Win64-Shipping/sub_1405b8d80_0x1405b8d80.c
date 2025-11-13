// 函数: sub_1405b8d80
// 地址: 0x1405b8d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return sub_1405b8930(arg1 + 8, arg2)

int32_t r11_1 = *(arg1 + 0x30)
void* r9_1 = arg1 + 0x18
int32_t rcx_1 = 0
int32_t var_74_1 = 1
int32_t var_78_1 = 0
int32_t r8_1 = 0
void* var_70 = r9_1
int32_t var_68_1 = 0xffffffff
int64_t var_64_1 = 0

if (r11_1 != 0)
    void* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1405b8e28:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64_1.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> r11_1)
            var_64_1.d = r11_1
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_1)
            r8_1 += 0x20
            rcx_1 += 1
            var_64_1:4.d = r8_1
            var_78_1 = rcx_1
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_68_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1405b8e28
        
        var_64_1.d = r11_1

uint64_t* var_10_1 = arg1 + 8
int128_t zmm0 = var_78_1.o
int128_t var_20_1 = 0xffffffff
int16_t var_40_1 = 0
void* result = zmm0.q
var_68_1.o = zmm0
var_78_1.o = (arg1 + 8).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        if ((*((sx.q(i) << 5) + *var_78_1.q + 8) & arg2) == 0)
            sub_1405c3390(zmm0:8.q, i)
            var_40_1.b = 1
        
        var_64_1:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68_1.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_40_1.b != 0 && var_40_1:1.b != 0)
        return sub_1405b67e0(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 1)

return result
