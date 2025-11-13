// 函数: sub_142126db0
// 地址: 0x142126db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t var_98 = *(arg1 + 8)
int64_t var_68
__builtin_memset(&var_68, 0, 0x2c)
int32_t var_34 = 0
int64_t var_28 = 0
int32_t var_20 = 0
int32_t var_3c = 0x80
int32_t var_38 = 0xffffffff
void var_a0
sub_141e6db90(&var_68, &var_a0, &var_98, nullptr)
int64_t var_58
int64_t* var_c0 = &var_58
int32_t rcx_1 = 0
int32_t var_c8 = 0
int32_t r8_1 = 0
int32_t var_c4 = 1
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0
int64_t* var_48
int32_t var_40

if (var_40 != 0)
    int64_t* r9_1 = &var_58
    
    if (var_48 != 0)
        r9_1 = var_48
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_40 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_142126ea8:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_c4_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        int32_t rax_12 = r8_1 - rax_11 + 0x1f
        
        if (rax_12 s> var_40)
            rax_12 = var_40
        
        var_b4.d = rax_12
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_1 += 0x20
            rcx_1 += 1
            var_b4:4.d = r8_1
            var_c8 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_b4.d = var_40
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_b8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142126ea8

double var_88[0x2] = var_c8.o
int128_t var_78 = 0xffffffff
var_c8.o = (&var_68).o
int64_t var_a8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_b8.o = var_88

if (0 s< var_40)
    int32_t i_1
    int32_t i = i_1
    
    do
        void* r8_3 = *(*var_c8.q + sx.q(i) * 0x10)
        
        if (r8_3 != 0)
            *(arg2 + 8) += zx.q(*(r8_3 + 0x30))
            int64_t* rcx_4 = *(r8_3 + 0x10)
            
            if (rcx_4 != 0)
                uint64_t rax_17 = zx.q((*(*rcx_4 + 0x40))(rcx_4))
                *(arg2 + 8) += rax_17
        
        var_b4:4.d &= not.d(var_c0:4.d)
        sub_14059bdd0(&var_c0)
        i = i_1
    while (i s< *(var_b8.q + 0x18))

int32_t var_20_1 = 0

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t var_60
var_60.d = 0
int32_t var_5c

if (var_5c != 0)
    sub_1405a5410(&var_68, 0)

int32_t var_38_1 = 0xffffffff
int32_t var_34_1 = 0
void* result = sub_14059a8e0(&var_58, 0)

if (var_48 != 0)
    result = sub_140a74f90(var_48)

int64_t rcx_10 = var_68

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_e8)
return result
