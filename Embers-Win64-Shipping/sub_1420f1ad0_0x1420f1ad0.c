// 函数: sub_1420f1ad0
// 地址: 0x1420f1ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xd0)
int32_t i_2 = 0

if (rax != 0)
    int32_t i = 0
    
    if (rax s> 0)
        int64_t* r14_1 = nullptr
        
        do
            int64_t* rcx = *(r14_1 + *(arg1 + 0xc8))
            
            if (rcx != 0 && (rcx[0x11].b & 1) != 0)
                sub_141efdf10(rcx)
            
            i += 1
            r14_1 = &r14_1[1]
        while (i s< *(arg1 + 0xd0))

int32_t rcx_1 = 0
int64_t* rsi_2 = *(arg1 + 0xc0) + 0x88
int32_t var_78 = 0
int32_t r11 = rsi_2[5].d
void* r9 = &rsi_2[2]
int32_t var_74 = 1
int32_t r8 = 0
void* var_70 = r9
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r11 != 0)
    void* rax_2 = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1420f1bc8:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_74_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_1
        
        var_64.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_64:4.d = r8
            var_78 = rcx_1
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1420f1bc8
        
        var_64.d = r11

int64_t* var_10 = rsi_2
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* rax_12 = zmm0.q
var_68.o = zmm0
var_78.o = rsi_2.o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t var_58 = zmm0

if (0 s< *(rax_12 + 0x18))
    int32_t i_3
    int32_t i_1 = i_3
    
    do
        int64_t rdx_5 = sx.q(i_1) * 3
        sub_141997e80(*(*var_78.q + (rdx_5 << 3) + 8), rdx_5)
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i_1 = i_3
    while (i_1 s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_1405b6470(rsi_2, rsi_2[1].d - *(rsi_2 + 0x34), 1)

if (*(arg1 + 0xd0) s> 0)
    int64_t* rsi_3 = nullptr
    
    do
        int64_t* rcx_7 = *(rsi_3 + *(arg1 + 0xc8))
        
        if (rcx_7 != 0)
            sub_141ef14c0(rcx_7, *(arg1 + 0xb8), 0)
        
        i_2 += 1
        rsi_3 = &rsi_3[1]
    while (i_2 s< *(arg1 + 0xd0))

void* result = *(arg1 + 0xc0)
*(result + 0x21a) = 1
return result
