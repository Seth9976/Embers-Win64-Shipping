// 函数: sub_1405c4450
// 地址: 0x1405c4450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_74 = 1
int32_t var_78 = 0
int32_t r11 = *(arg1 + 0x358)
void* r9 = arg1 + 0x340
void* var_70 = r9
int32_t var_68 = 0xffffffff
int32_t r8 = 0
int64_t var_64 = 0
int32_t rcx = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1405c44f8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_64:4.d = rcx
            var_78 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1405c44f8
        
        var_64.d = r11

int64_t* var_10 = arg1 + 0x330
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* rax_11 = zmm0.q
var_68.o = zmm0
var_78.o = (arg1 + 0x330).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_20 = zmm0
int32_t i_3

if (0 s< *(rax_11 + 0x18))
    int32_t i = i_3
    
    do
        if (*(*var_78.q + sx.q(i) * 0x18 + 8) == 2)
            sub_1405c2fb0(zmm0:8.q, i)
            var_40.b = 1
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_3
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_1405b6470(arg1 + 0x330, *(arg1 + 0x338) - *(arg1 + 0x364), 1)

int32_t var_78_1 = 0
int32_t r11_1 = *(arg1 + 0x3a8)
void* r9_1 = arg1 + 0x390
int32_t var_74_2 = 1
int32_t rcx_6 = 0
var_70 = r9_1
int32_t r8_3 = 0
int32_t var_68_1 = 0xffffffff
int64_t var_64_1 = 0

if (r11_1 != 0)
    void* rax_17 = *(r9_1 + 0x10)
    
    if (rax_17 != 0)
        r9_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11_1 - 1)
    int32_t rdx_10 = *r9_1
    
    if (rdx_10 != 0)
    label_1405c4658:
        int32_t rax_24 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t var_74_3 = rax_24
        int32_t rax_25
        
        if (rax_24 == 0)
            rax_25 = 0x20
        else
            rax_25 = 0x1f - temp0_4
        
        var_64_1.d = r8_3 - rax_25 + 0x1f
        
        if (r8_3 - rax_25 + 0x1f s> r11_1)
            var_64_1.d = r11_1
    else
        while (true)
            int64_t rdx_11 = sx.q(rcx_6)
            r8_3 += 0x20
            rcx_6 += 1
            var_64_1:4.d = r8_3
            var_78_1 = rcx_6
            
            if (rdx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r9_1 + (rdx_11 << 2) + 4)
            var_68_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1405c4658
        
        var_64_1.d = r11_1

void* var_10_1 = arg1 + 0x380
zmm0 = var_78_1.o
int128_t var_20_1 = 0xffffffff
int16_t var_40_1 = 0
void* rax_27 = zmm0.q
var_68_1.o = zmm0
var_78_1.o = (arg1 + 0x380).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_20_1 = zmm0

if (0 s< *(rax_27 + 0x18))
    int32_t i_1 = i_3
    
    do
        if (*(*var_78_1.q + sx.q(i_1) * 0x18 + 8) == 2)
            sub_1405c2fb0(zmm0:8.q, i_1)
            var_40_1.b = 1
        
        var_64_1:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i_1 = i_3
    while (i_1 s< *(var_68_1.q + 0x18))
    
    if (var_40_1.b != 0 && var_40_1:1.b != 0)
        sub_1405b6470(arg1 + 0x380, *(arg1 + 0x388) - *(arg1 + 0x3b4), 1)

int32_t var_78_2 = 0
int32_t r9_2 = *(arg1 + 0x3f8)
void* r8_7 = arg1 + 0x3e0
int32_t var_74_4 = 1
int32_t rcx_12 = 0
var_70 = r8_7
int32_t var_68_2 = 0xffffffff
int64_t var_64_2 = 0

if (r9_2 != 0)
    void* rax_33 = *(r8_7 + 0x10)
    
    if (rax_33 != 0)
        r8_7 = rax_33
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r9_2 - 1)
    int32_t rdx_16 = *r8_7
    
    if (rdx_16 != 0)
    label_1405c47b6:
        int32_t rax_40 = neg.d(rdx_16) & rdx_16
        uint64_t rflags_3
        int32_t temp0_6
        temp0_6, rflags_3 = _bit_scan_reverse(rax_40)
        int32_t var_74_5 = rax_40
        int32_t rdi_1
        
        if (rax_40 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_6
        
        var_64_2.d = rcx_12 - rdi_1 + 0x1f
        
        if (rcx_12 - rdi_1 + 0x1f s> r9_2)
            var_64_2.d = r9_2
    else
        while (true)
            int64_t rdx_17 = sx.q(rbx)
            rcx_12 += 0x20
            rbx += 1
            var_64_2:4.d = rcx_12
            var_78_2 = rbx
            
            if (rdx_17.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_16 = *(r8_7 + (rdx_17 << 2) + 4)
            var_68_2 = 0xffffffff
            
            if (rdx_16 != 0)
                goto label_1405c47b6
        
        var_64_2.d = r9_2

int64_t* var_10_2 = arg1 + 0x3d0
zmm0 = var_78_2.o
int128_t var_20_2 = 0xffffffff
int16_t var_40_2 = 0
void* rax_42 = zmm0.q
var_68_2.o = zmm0
var_78_2.o = (arg1 + 0x3d0).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

if (0 s< *(rax_42 + 0x18))
    int32_t i_2 = i_3
    
    do
        if (*(*var_78_2.q + sx.q(i_2) * 0x18 + 8) == 2)
            sub_1405c2fb0(zmm0:8.q, i_2)
            var_40_2.b = 1
        
        var_64_2:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i_2 = i_3
    while (i_2 s< *(var_68_2.q + 0x18))
    
    if (var_40_2.b != 0 && var_40_2:1.b != 0)
        sub_1405b6470(arg1 + 0x3d0, *(arg1 + 0x3d8) - *(arg1 + 0x404), 1)

uint32_t zmm6[0x4]
float zmm7[0x4]
int128_t zmm8
sub_141dd50b0(arg1, zmm6, zmm7, zmm8)
return sub_1405bfe10(arg1) __tailcall
