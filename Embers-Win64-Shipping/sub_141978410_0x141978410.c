// 函数: sub_141978410
// 地址: 0x141978410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2[5].d
void* r10 = &arg2[2]
int32_t var_74 = 1
void* var_70 = r10
int32_t rcx = 0
int32_t var_78 = 0
int32_t var_68 = 0xffffffff
int64_t var_64 = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r10
    
    if (rdx_2 != 0)
    label_1419784b8:
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
            
            rdx_2 = *(r10 + (rdx_3 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1419784b8
        
        var_64.d = r11

int64_t* var_10 = arg2
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* result = zmm0.q
var_68.o = zmm0
var_78.o = arg2.o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int32_t* r11_1 = *var_78.q + sx.q(i) * 0x28
        int32_t* rcx_8
        
        if (arg3[1].d == *(arg3 + 0x34))
        label_1419785b4:
            rcx_8 = nullptr
        else
            void* rdx_5 = arg3[8]
            void* r8_2 = &arg3[7]
            int64_t r9 = sx.q(*r11_1)
            
            if (rdx_5 != 0)
                r8_2 = rdx_5
            
            int32_t rax_14 = *(r8_2 + (((sx.q(arg3[9].d) - 1) & r9) << 2))
            
            if (rax_14 == 0xffffffff)
            label_1419785b4_1:
                rcx_8 = nullptr
            else
                while (true)
                    rcx_8 = sx.q(rax_14) * 0xb8 + *arg3
                    
                    if (*rcx_8 == r9.d)
                        break
                    
                    rax_14 = rcx_8[0x2c]
                    
                    if (rax_14 == 0xffffffff)
                        goto label_1419785b4_2
                
                if (rax_14 == 0xffffffff)
                label_1419785b4_2:
                    rcx_8 = nullptr
        
        void* r8_4 = &rcx_8[2]
        
        if (rcx_8 == 0)
            r8_4 = nullptr
        
        if (r8_4 != 0)
            *(r8_4 + 0x98) |= *(r11_1 + 0x10)
            *(r8_4 + 0xa0) |= r11_1[6].w
            
            if (arg4 != 0)
                sub_1419826a0(zmm0:8.q, i)
                var_40.b = 1
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        return sub_1408df340(arg2, arg2[1].d - *(arg2 + 0x34), 1)

return result
