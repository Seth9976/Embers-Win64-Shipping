// 函数: sub_1421278b0
// 地址: 0x1421278b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = data_143a2e848
void* r10 = &data_143a2e830
int32_t r8 = 0
int32_t var_74 = 1
int32_t r9 = 0
int32_t var_78 = 0
void* var_70 = &data_143a2e830
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r11 != 0)
    void* rax_1 = data_143a2e840
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_14212794a:
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
                goto label_14212794a
        
        var_64.d = r11

int16_t var_40 = 0
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int64_t* var_10 = &data_143a2e820
int64_t* var_48 = &data_143a2e820
void* rax_11 = zmm0.q
var_68.o = zmm0
var_78.o = (&data_143a2e820).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = zmm0

if (0 s< *(rax_11 + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* r9_2 = var_78.q
        void* rax_13 = *r9_2 + (sx.q(i) << 5)
        int64_t rcx_5 = 0
        int64_t rdx_3 = sx.q(*(rax_13 + 0x10))
        
        if (rdx_3.d s> 0)
            int64_t* rax_14 = *(rax_13 + 8)
            
            do
                if (*rax_14 == arg1)
                    int64_t result = *((sx.q(i) << 5) + *r9_2)
                    
                    if (var_40.b != 0 && var_40:1.b != 0)
                        i.b = 1
                        sub_1405b6520(var_48, var_48[1].d - *(var_48 + 0x34), i.b)
                    
                    return result
                
                rcx_5 += 1
                rax_14 = &rax_14[1]
            while (rcx_5 s< rdx_3)
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        i.b = 1
        sub_1405b6520(var_48, var_48[1].d - *(var_48 + 0x34), i.b)

return 0
