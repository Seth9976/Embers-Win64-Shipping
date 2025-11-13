// 函数: sub_141f93e60
// 地址: 0x141f93e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_74 = 1
int32_t r11 = *(arg1 + 0xd0)
void* r9 = arg1 + 0xb8
int32_t rcx = 0
void* var_70 = r9
int32_t var_78 = 0
int32_t var_68 = 0xffffffff
int32_t r8 = 0
int64_t var_64 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141f93ef8:
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
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141f93ef8
        
        var_64.d = r11

void* var_10 = arg1 + 0xa8
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
uint64_t result = zmm0.q
var_68.o = zmm0
var_78.o = (arg1 + 0xa8).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = zmm0

if (0 s>= *(result + 0x18))
label_141f93fda:
    result.b = 1
else
    int32_t var_5c
    int32_t rcx_2 = var_5c
    
    while (true)
        if (sub_141fc1c70(*((sx.q(rcx_2) << 5) + *var_78.q + 8)).b == 0)
            if (var_40.b != 0 && var_40:1.b != 0)
                int64_t r8_3
                r8_3.b = 1
                sub_1405b6520(arg1 + 0xa8, *(arg1 + 0xb0) - *(arg1 + 0xdc), r8_3.b)
            
            result.b = 0
            break
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        rcx_2 = var_5c
        
        if (rcx_2 s>= *(var_68.q + 0x18))
            if (var_40.b != 0 && var_40:1.b != 0)
                sub_1405b6520(arg1 + 0xa8, *(arg1 + 0xb0) - *(arg1 + 0xdc), 1)
            
            goto label_141f93fda

return result
