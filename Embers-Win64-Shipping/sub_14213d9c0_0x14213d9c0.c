// 函数: sub_14213d9c0
// 地址: 0x14213d9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_74 = 1
int32_t var_78 = 0
int32_t r11 = *(arg1 + 0xb0)
void* r10 = arg1 + 0x98
void* var_70 = r10
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
    label_14213da5a:
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
                goto label_14213da5a
        
        var_64.d = r11

int64_t* var_10 = arg1 + 0x88
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
int128_t zmm3 = var_78.o
var_68.o = zmm3
var_78.o = (arg1 + 0x88).o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = zmm0

if (0 s< *(zmm3.q + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdx_3 = sx.q(i) * 3
        sub_141997f50(*(*var_78.q + (rdx_3 << 3) + 8), rdx_3)
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_1405b6470(arg1 + 0x88, *(arg1 + 0x90) - *(arg1 + 0xbc), 1)

sub_141997f50(arg1 + 0x178)
return sub_141997ac0(arg1 + 0x208, 0, sub_141997f50(arg1 + 0xf0), zmm3) __tailcall
