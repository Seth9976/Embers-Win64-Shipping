// 函数: sub_1423af320
// 地址: 0x1423af320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int128_t zmm6 = 0xbf800000
int32_t r11 = *(arg1 + 0x40)
void* r9 = arg1 + 0x28
int32_t var_98 = 0
int32_t rcx = 0
int32_t var_94 = 1
int32_t r8 = 0
void* var_90 = r9
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1423af3c9:
        int32_t rax_7 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_94_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rax_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_3 = *(r9 + (rax_4 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1423af3c9
        
        var_84.d = r11

void* var_30 = arg1 + 0x18
int128_t zmm0 = var_98.o
int128_t var_40 = 0xffffffff
char var_60 = 0
void* rax_10 = zmm0.q
var_88.o = zmm0
var_98.o = (arg1 + 0x18).o
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_78 = zmm0

if (0 s< *(rax_10 + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* r10_3 = var_98.q
        int64_t r9_1 = *r10_3
        int64_t r8_3 = sx.q(i) * 6
        int64_t rdx_4 = sx.q(*(r9_1 + (r8_3 << 3) + 8))
        
        if (rdx_4.d != *(r9_1 + (r8_3 << 3) + 0x20) - 1)
            if (not(arg2[0].d f< *((rdx_4 << 5) + *(r9_1 + (r8_3 << 3) + 0x18) + 0x38)))
                *(r9_1 + (r8_3 << 3) + 8) = (rdx_4 + 1).d
            
            zmm0 = *(r9_1 + (r8_3 << 3) + 0xc)
            
            if (not(zmm0.d f<= zmm6.d))
                zmm6 = zmm0
                result = *(*r10_3 + (r8_3 << 3))
        else
            sub_1423b3e50(var_78:8.q, i)
            var_60 = 1
        
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        i = i_1
    while (i s< *(var_88.q + 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        sub_1423ac660(arg1 + 0x18, *(arg1 + 0x20) - *(arg1 + 0x4c), 1)

return result
