// 函数: sub_14216ff60
// 地址: 0x14216ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_74 = 1
int32_t var_78 = 0
int32_t r11 = *(arg1 + 0x448)
void* r9 = arg1 + 0x430
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
    label_142170008:
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
                goto label_142170008
        
        var_64.d = r11

void* var_10 = arg1 + 0x420
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* rax_11 = zmm0.q
var_68.o = zmm0
var_78.o = (arg1 + 0x420).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_20 = zmm0
int32_t i_2

if (0 s< *(rax_11 + 0x18))
    int32_t i = i_2
    
    do
        if (sub_140d3e110((sx.q(i) << 5) + *var_78.q) == 0)
            sub_141b643e0(zmm0:8.q, i)
            var_40.b = 1
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_2
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_141b50c00(arg1 + 0x420, *(arg1 + 0x428) - *(arg1 + 0x454), 1)

int32_t var_78_1 = 0
int32_t r9_1 = *(arg1 + 0x498)
void* r8_2 = arg1 + 0x480
int32_t var_74_2 = 1
int32_t rcx_8 = 0
var_70 = r8_2
int32_t var_68_1 = 0xffffffff
int64_t var_64_1 = 0

if (r9_1 != 0)
    void* rax_17 = *(r8_2 + 0x10)
    
    if (rax_17 != 0)
        r8_2 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_1 - 1)
    int32_t rdx_11 = *r8_2
    
    if (rdx_11 != 0)
    label_142170166:
        int32_t rax_24 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t var_74_3 = rax_24
        int32_t rsi_1
        
        if (rax_24 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        var_64_1.d = rcx_8 - rsi_1 + 0x1f
        
        if (rcx_8 - rsi_1 + 0x1f s> r9_1)
            var_64_1.d = r9_1
    else
        while (true)
            int64_t rdx_12 = sx.q(rbx)
            rcx_8 += 0x20
            rbx += 1
            var_64_1:4.d = rcx_8
            var_78_1 = rbx
            
            if (rdx_12.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r8_2 + (rdx_12 << 2) + 4)
            var_68_1 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_142170166
        
        var_64_1.d = r9_1

int64_t* var_10_1 = arg1 + 0x470
zmm0 = var_78_1.o
int128_t var_20_1 = 0xffffffff
int16_t var_40_1 = 0
void* result = zmm0.q
var_68_1.o = zmm0
var_78_1.o = (arg1 + 0x470).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

if (0 s< *(result + 0x18))
    int32_t i_1 = i_2
    
    do
        if (sub_140d3e110(*var_78_1.q + ((sx.q(i_1) * 5 + 3) << 3)) == 0)
            sub_142173b90(zmm0:8.q, i_1)
            var_40_1.b = 1
        
        var_64_1:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68_1.q
        i_1 = i_2
    while (i_1 s< *(result + 0x18))
    
    if (var_40_1.b != 0 && var_40_1:1.b != 0)
        return sub_140d1a980(arg1 + 0x470, *(arg1 + 0x478) - *(arg1 + 0x4a4), 1)

return result
