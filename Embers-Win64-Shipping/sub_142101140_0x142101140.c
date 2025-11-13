// 函数: sub_142101140
// 地址: 0x142101140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t r11 = *(arg1 + 0xf8)
void* r10 = arg1 + 0xe0
void* var_80 = r10
int32_t var_78 = 0xffffffff
int64_t var_74 = 0
int32_t r9 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_1421011ea:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_74:4.d = r9
            var_88 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rcx != 0)
                goto label_1421011ea
        
        var_74.d = r11

void* var_20 = arg1 + 0xd0
int128_t zmm0 = var_88.o
int128_t var_30 = 0xffffffff
int16_t var_50 = 0
void* rax_11 = zmm0.q
var_78.o = zmm0
var_88.o = (arg1 + 0xd0).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = zmm0

if (0 s< *(rax_11 + 0x18))
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t* rdi_1 = var_88.q
        int32_t* rax_12
        void arg_8
        
        if (arg2 != 0)
            rax_12 = sub_140b162a0(arg2, &arg_8, (sx.q(i) << 5) + *rdi_1)
        
        if (arg2 == 0 || *rax_12 == 0xffffffff)
            sub_141997f50(*((sx.q(i) << 5) + *rdi_1 + 0x10))
        
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        i = i_2
    while (i s< *(var_78.q + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        sub_140cb1970(arg1 + 0xd0, *(arg1 + 0xd8) - *(arg1 + 0x104), 1)

int64_t* i_1 = *(arg1 + 0x218)
int64_t result = sx.q(*(arg1 + 0x220))

for (void* rdi_4 = &i_1[result * 0xa]; i_1 != rdi_4; i_1 = &i_1[0xa])
    result = sub_141997f50(i_1)

return result
