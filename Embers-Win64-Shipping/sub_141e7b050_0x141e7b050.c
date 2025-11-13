// 函数: sub_141e7b050
// 地址: 0x141e7b050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int32_t var_74 = 1
int32_t var_78 = 0
int32_t r11 = *(arg1 + 0x238)
void* r9 = arg1 + 0x220
void* var_70 = r9
int32_t var_68 = 0xffffffff
void* rdi = nullptr
int64_t var_64 = 0
int32_t rcx = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141e7b0f9:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_74_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rax_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r9 + (rax_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141e7b0f9
        
        var_64.d = r11

void* var_10 = arg1 + 0x210
uint128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* rax_10 = zmm0.q
var_68.o = zmm0
var_78.o = (arg1 + 0x210).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
uint128_t var_58 = zmm0

if (0 s< *(rax_10 + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rcx_3 = sx.q(i) * 0x50
        void* rdx_3 = *var_78.q
        void* result_1 = *(rcx_3 + rdx_3)
        
        if (result_1 != arg2 && *(rcx_3 + rdx_3 + 0x44) s< 3)
            if (result == 0)
                result = result_1
                rdi = rdx_3 + 8 + rcx_3
            else
                zmm0 = *(result_1 + 0x2c)
                int64_t zmm1 = *(result + 0x2c)
                
                if (zmm0.d f> zmm1.d)
                    result = result_1
                    rdi = rdx_3 + 8 + rcx_3
                else if (not(zmm0.d f!= zmm1.d) && not(*(rdi + 0x10) f<= *(rcx_3 + rdx_3 + 0x18)))
                    result = result_1
                    rdi = rdx_3 + 8 + rcx_3
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_140864250(arg1 + 0x210, *(arg1 + 0x218) - *(arg1 + 0x244), 1)

return result
