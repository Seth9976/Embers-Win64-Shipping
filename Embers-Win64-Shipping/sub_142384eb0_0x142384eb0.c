// 函数: sub_142384eb0
// 地址: 0x142384eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t r11 = *(arg1 + 0x38)
void* r9 = arg1 + 0x20
void* var_80 = r9
int32_t var_78 = 0xffffffff
int64_t var_74 = 0
int32_t r8 = 0
int32_t rcx = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_142384f58:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_74:4.d = rcx
            var_88 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_142384f58
        
        var_74.d = r11

int128_t var_30 = 0xffffffff
double var_40[0x2] = var_88.o
var_88.o = (arg1 + 0x10).o
int64_t var_68 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_78.o = var_40
int32_t i_2

if (0 s< r11)
    int32_t i = i_2
    
    do
        int64_t* rdx_6 = *(*var_88.q + sx.q(i) * 0x28 + 0x18)
        
        if (*rdx_6 != 0)
            (*(*arg2 + 0x38))(arg2, rdx_6, 0, 0, var_88)
        
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        i = i_2
    while (i s< *(var_78.q + 0x18))

int32_t var_88_1 = 0
int32_t r10 = *(arg1 + 0x88)
void* r8_1 = arg1 + 0x70
int32_t var_84_2 = 1
int32_t rcx_5 = 0
var_80 = r8_1
int32_t var_78_1 = 0xffffffff
int64_t var_74_1 = 0

if (r10 != 0)
    void* rax_17 = *(r8_1 + 0x10)
    
    if (rax_17 != 0)
        r8_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *r8_1
    
    if (rdx_9 != 0)
    label_142385076:
        int32_t rax_24 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t var_84_3 = rax_24
        int32_t rsi_1
        
        if (rax_24 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        var_74_1.d = rcx_5 - rsi_1 + 0x1f
        
        if (rcx_5 - rsi_1 + 0x1f s> r10)
            var_74_1.d = r10
    else
        while (true)
            int64_t rdx_10 = sx.q(rbx)
            rcx_5 += 0x20
            rbx += 1
            var_74_1:4.d = rcx_5
            var_88_1 = rbx
            
            if (rdx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r8_1 + (rdx_10 << 2) + 4)
            var_78_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_142385076
        
        var_74_1.d = r10

void* var_20 = arg1 + 0x60
int16_t var_50 = 0
double zmm3[0x2] = var_88_1.o
double zmm0[0x2] = 0xffffffff
double result = zmm3[0]
var_78_1.o = zmm3
var_88_1.o = (arg1 + 0x60).o
zmm0[0] = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_68.o = zmm0

if (0 s< *(result i+ 0x18))
    int32_t i_1 = i_2
    
    do
        int64_t* rdx_14 = (sx.q(i_1) << 6) + *var_88_1.q + 0x30
        
        if (*rdx_14 != 0)
            (*(*arg2 + 0x38))(arg2, rdx_14, 0, 0, var_88_1)
        
        var_74_1:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        result = var_78_1.q
        i_1 = i_2
    while (i_1 s< *(result i+ 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        return sub_142387110(arg1 + 0x60, *(arg1 + 0x68) - *(arg1 + 0x94), 1)

return result
