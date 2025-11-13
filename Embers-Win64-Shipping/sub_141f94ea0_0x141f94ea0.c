// 函数: sub_141f94ea0
// 地址: 0x141f94ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 0x60); i != 0; i = *(i + 0xc0))
    if (*(i + 0xec) == arg2 && (*(i + 0xf0) & 1) == 0)
        arg3 = sub_1421536e0(*(arg1 + 0x28), i, 0, arg3)

int32_t i_2 = 0
int32_t var_74 = 1
int32_t var_78 = 0
int32_t r10 = *(arg1 + 0xd0)
void* r9_2 = arg1 + 0xb8
void* var_70 = r9_2
int32_t rcx_1 = 0
int32_t var_68 = 0xffffffff
int32_t r8 = 0
int64_t var_64 = 0

if (r10 != 0)
    void* rax_1 = *(r9_2 + 0x10)
    
    if (rax_1 != 0)
        r9_2 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9_2
    
    if (rdx_3 != 0)
    label_141f94f88:
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
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_64.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_64:4.d = r8
            var_78 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_2 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141f94f88
        
        var_64.d = r10

void* var_10 = arg1 + 0xa8
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* rax_11 = zmm0.q
var_68.o = zmm0
arg3.o = 0xffffffff
var_78.o = (arg1 + 0xa8).o
arg3.o = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
zmm0.q = (arg3.o).q
int128_t var_58 = zmm0

if (0 s< *(rax_11 + 0x18))
    int32_t i_3
    int32_t i_1 = i_3
    
    do
        sub_141fc24a0(*((sx.q(i_1) << 5) + *var_78.q + 8), arg2)
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i_1 = i_3
    while (i_1 s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_1405b6520(arg1 + 0xa8, *(arg1 + 0xb0) - *(arg1 + 0xdc), 1)

int32_t r9_4 = arg2 & 0x8000003f

if (r9_4 s< 0)
    r9_4 = ((r9_4 - 1) | 0xffffffc0) + 1

void* result = zx.q(*(arg1 + 0x1f0))
void* const rcx_9

if (result.d == *(arg1 + 0x21c))
label_141f950e0:
    rcx_9 = nullptr
else
    void* r8_5 = arg1 + 0x220
    void* rcx_7 = *(r8_5 + 8)
    
    if (rcx_7 != 0)
        r8_5 = rcx_7
    
    result = zx.q(*(r8_5 + (((sx.q(*(arg1 + 0x230)) - 1) & sx.q(r9_4)) << 2)))
    
    if (result.d == 0xffffffff)
    label_141f950e0_1:
        rcx_9 = nullptr
    else
        int64_t r8_6 = *(arg1 + 0x1e8)
        
        while (true)
            int64_t rdx_11 = sx.q(result.d) * 5
            rcx_9 = r8_6 + (rdx_11 << 3)
            
            if (*(r8_6 + (rdx_11 << 3)) == r9_4)
                break
            
            result = zx.q(*(rcx_9 + 0x20))
            
            if (result.d == 0xffffffff)
                goto label_141f950e0_2
        
        if (result.d == 0xffffffff)
        label_141f950e0_2:
            rcx_9 = nullptr

void* rdi_1 = rcx_9 + 8

if (rcx_9 == 0)
    rdi_1 = nullptr

if (rdi_1 != 0 && *rdi_1 == arg2)
    while (i_2 s>= 0)
        if (i_2 s>= *(rdi_1 + 0x10))
            break
        
        int64_t rax_17 = *(rdi_1 + 8)
        int64_t i_4 = sx.q(i_2)
        result = sub_141f78910(arg1 + 0x198, *(rax_17 + (i_4 << 2)), rax_17 + (i_4 << 2))
        i_2 += 1
        *result = 0xffffffff

return result
