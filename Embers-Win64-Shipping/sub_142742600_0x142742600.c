// 函数: sub_142742600
// 地址: 0x142742600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_74 = 1
int32_t r11 = *(arg1 + 0x40)
void* r9 = arg1 + 0x28
int32_t rcx = 0
void* var_70 = r9
int32_t var_78 = 0
int32_t r8 = 0
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_142742688:
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
        
        if (r8 - rax_9 + 0x1f s> r11)
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
                goto label_142742688
        
        var_64.d = r11

uint64_t* var_10 = arg1 + 0x18
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* rax_11 = zmm0.q
var_68.o = zmm0
var_78.o = (arg1 + 0x18).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = zmm0

if (0 s< *(rax_11 + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rsi_1 = var_78.q
        int64_t rdi_2 = sx.q(i) << 5
        int64_t* rax_13 = sub_140d3c6e0(rdi_2 + *rsi_1)
        
        if (rax_13 != 0)
            void* rsi_2 = *rsi_1
            
            if (sub_142745840(rax_13) == 0)
                sub_1422aeae0(rax_13)
            else
                sub_142747580(rax_13, rsi_2 + 8 + rdi_2)
            
            sub_141df0440(rax_13)
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_141b50c00(arg1 + 0x18, *(arg1 + 0x20) - *(arg1 + 0x4c), 1)

return sub_141e30450(arg1 + 0x18) __tailcall
