// 函数: sub_141b63de0
// 地址: 0x141b63de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x28)
void* r10 = arg1 + 0x10
int32_t rbx = 0
int32_t var_74 = 1
int32_t var_78 = 0
void* var_70 = r10
int32_t r8 = 0
int32_t var_68 = 0xffffffff
int32_t r9 = 0
int64_t var_64 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_141b63e7a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_64:4.d = r9
            var_78 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rcx != 0)
                goto label_141b63e7a
        
        var_64.d = r11

void* var_10 = arg1
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* rax_11 = zmm0.q
var_68.o = zmm0
var_78.o = arg1.o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_20 = zmm0
int128_t var_58 = zmm0
int32_t i_2

if (0 s< *(rax_11 + 0x18))
    int32_t i = i_2
    
    do
        void* rdx_5 = *(*((sx.q(i) << 5) + *var_78.q + 8) + 8)
        int64_t* rcx_4 = rdx_5 + 0x20
        
        if (rdx_5 == 0)
            rcx_4 = nullptr
        
        sub_141997f50(rcx_4)
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_2
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_1405b67e0(arg1, *(arg1 + 8) - *(arg1 + 0x34), 1)

int32_t var_78_1 = 0
int32_t r9_2 = *(arg1 + 0x78)
void* r8_2 = arg1 + 0x60
int32_t var_74_2 = 1
int32_t rcx_7 = 0
var_70 = r8_2
int32_t var_68_1 = 0xffffffff
int64_t var_64_1 = 0

if (r9_2 != 0)
    void* rax_17 = *(r8_2 + 0x10)
    
    if (rax_17 != 0)
        r8_2 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_2 - 1)
    int32_t rdx_10 = *r8_2
    
    if (rdx_10 != 0)
    label_141b63fd6:
        int32_t rax_24 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t var_74_3 = rax_24
        int32_t rdi_1
        
        if (rax_24 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_64_1.d = rcx_7 - rdi_1 + 0x1f
        
        if (rcx_7 - rdi_1 + 0x1f s> r9_2)
            var_64_1.d = r9_2
    else
        while (true)
            int64_t rdx_11 = sx.q(rbx)
            rcx_7 += 0x20
            rbx += 1
            var_64_1:4.d = rcx_7
            var_78_1 = rbx
            
            if (rdx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r8_2 + (rdx_11 << 2) + 4)
            var_68_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141b63fd6
        
        var_64_1.d = r9_2

void* var_10_1 = arg1 + 0x50
zmm0 = var_78_1.o
int128_t var_20_1 = 0xffffffff
int16_t var_40_1 = 0
void* result = zmm0.q
var_68_1.o = zmm0
var_78_1.o = (arg1 + 0x50).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58_1 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_1 = i_2
    
    do
        sub_141b65090(*((sx.q(i_1) << 5) + *var_78_1.q + 8))
        var_64_1:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68_1.q
        i_1 = i_2
    while (i_1 s< *(result + 0x18))
    
    if (var_40_1.b != 0 && var_40_1:1.b != 0)
        return sub_141b50c00(arg1 + 0x50, *(arg1 + 0x58) - *(arg1 + 0x84), 1)

return result
