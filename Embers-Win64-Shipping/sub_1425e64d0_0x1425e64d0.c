// 函数: sub_1425e64d0
// 地址: 0x1425e64d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_74 = 1
int32_t var_78 = 0
int32_t r11 = *(arg1 + 0x98)
void* r9 = arg1 + 0x80
void* var_70 = r9
int64_t rdi
rdi.b = 0
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int32_t rcx = 0
int32_t var_60 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    int32_t var_64_2
    
    if (rdx_3 != 0)
    label_1425e6578:
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
        
        int32_t var_64_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_64_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_60 = rcx
            var_78 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1425e6578
        
        var_64_2 = r11

int64_t* var_10 = arg1 + 0x70
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* result = zmm0.q
var_68.o = zmm0
var_78.o = (arg1 + 0x70).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rcx_3 = *(*var_78.q + sx.q(i) * 0x28 + 0x10)
        
        if (sub_1425e61f0(arg1, (*(*rcx_3 + 0x28))(rcx_3)) == 0)
            sub_1425e66a0(zmm0:8.q, i)
            var_40.b = 1
            rdi.b = 1
        
        var_60 &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        result = sub_141d67640(arg1 + 0x70, *(arg1 + 0x78) - *(arg1 + 0xa4), 1)
    
    if (rdi.b != 0)
        return sub_140599090(arg1 + 0x130)

return result
