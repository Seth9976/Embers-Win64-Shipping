// 函数: sub_141939600
// 地址: 0x141939600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x44].b != 0)
    return sub_1419397d0(arg1) __tailcall

int32_t r11_1 = arg1[0x3a]
void* r9_1 = &arg1[0x34]
int32_t rcx_1 = 0
int32_t var_74 = 1
int32_t var_78 = 0
int32_t r8_1 = 0
void* var_70 = r9_1
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r11_1 != 0)
    void* rax_2 = *(r9_1 + 0x10)
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_1419396a8:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_74_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_64.d = r8_1 - rax_10 + 0x1f
        
        if (r8_1 - rax_10 + 0x1f s> r11_1)
            var_64.d = r11_1
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_1)
            r8_1 += 0x20
            rcx_1 += 1
            var_64:4.d = r8_1
            var_78 = rcx_1
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1419396a8
        
        var_64.d = r11_1

void* var_10 = &arg1[0x30]
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* rax_12 = zmm0.q
var_68.o = zmm0
var_78.o = (&arg1[0x30]).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = zmm0

if (0 s< *(rax_12 + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        void* rbx_1 = *(sx.q(i) * 0x88 + *var_78.q + 0x78)
        
        if (rbx_1 != 0)
            sub_14192b870(rbx_1)
            j_sub_140a74f90(rbx_1)
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_1419347c0(&arg1[0x30], arg1[0x32] - arg1[0x3d], 1)

return sub_141938ed0(&arg1[0x30], 0) __tailcall
