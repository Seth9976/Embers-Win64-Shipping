// 函数: sub_141b64b70
// 地址: 0x141b64b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_84 = 1
int32_t r11 = *(arg1 + 0x78)
void* r9 = arg1 + 0x60
int32_t rcx = 0
void* var_80 = r9
int32_t var_88 = 0
int32_t var_78 = 0xffffffff
int32_t r8 = 0
int64_t var_74 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141b64c08:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_74:4.d = r8
            var_88 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141b64c08
        
        var_74.d = r11

void* var_20 = arg1 + 0x50
int128_t zmm0 = var_88.o
int128_t var_30 = 0xffffffff
int16_t var_50 = 0
void* result = zmm0.q
var_78.o = zmm0
var_88.o = (arg1 + 0x50).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* r14_1 = var_88.q
        int64_t rbx_2 = sx.q(i) << 5
        
        if (sub_140d3e110(*r14_1 + rbx_2) == 0)
            int64_t r15_1 = sx.q(arg2[1].d)
            int64_t r12_1 = *r14_1
            int32_t rax_12 = (r15_1 + 1).d
            arg2[1].d = rax_12
            
            if (rax_12 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            int64_t* r8_4 = (r15_1 << 4) + *arg2
            *r8_4 = *(r12_1 + rbx_2 + 8)
            void* rax_14 = *(r12_1 + rbx_2 + 0x10)
            r8_4[1] = rax_14
            
            if (rax_14 != 0)
                *(rax_14 + 8) += 1
            
            sub_141b65090(*(rbx_2 + *r14_1 + 8))
            sub_141b643e0(zmm0:8.q, i)
            var_50.b = 1
        
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        result = var_78.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        return sub_141b50c00(arg1 + 0x50, *(arg1 + 0x58) - *(arg1 + 0x84), 1)

return result
