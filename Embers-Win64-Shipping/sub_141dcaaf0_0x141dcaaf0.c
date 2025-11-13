// 函数: sub_141dcaaf0
// 地址: 0x141dcaaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint64_t var_88 = 0
int32_t var_80 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
sub_141dcad90(arg1, &var_88)
int32_t rdx_2 = var_80 - var_54
arg2[1].d = 0

if (rdx_2 s> *(arg2 + 0xc))
    sub_1405c5570(arg2, rdx_2)

int64_t* var_f0 = &var_78
int32_t rcx_1 = 0
int32_t var_f8 = 0
int32_t var_e8 = 0xffffffff
int32_t r8 = 0
int32_t var_f4 = 1
int64_t var_e4 = 0
int64_t* var_68
int32_t var_60

if (var_60 != 0)
    int64_t* r11_1 = &var_78
    
    if (var_68 != 0)
        r11_1 = var_68
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_60 - 1)
    int32_t rdx_5 = *r11_1
    
    if (rdx_5 != 0)
    label_141dcabf8:
        int32_t rax_9 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_f4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t rax_11 = r8 - rax_10 + 0x1f
        
        if (rax_11 s> var_60)
            rax_11 = var_60
        
        var_e4.d = rax_11
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_e4:4.d = r8
            var_f8 = rcx_1
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_e4.d = var_60
                break
            
            rdx_5 = *(r11_1 + (rdx_6 << 2) + 4)
            int32_t var_e8_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141dcabf8

int128_t var_98 = 0xffffffff
int128_t var_a8 = var_f8.o
var_e4.d = var_60
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_d8 = (&var_88).o
int128_t var_c8 = var_a8
int64_t var_b8 = temp0_3

while (true)
    int64_t rcx_5 = sx.q(var_c8:0xc.d)
    int64_t* rax_12 = var_d8.q
    
    if (rcx_5.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_c8.q == &var_78
            && rax_12 == &var_88)
        int32_t var_40_1 = 0
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        var_80 = 0
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        void* result = sub_14059a8e0(&var_78, 0)
        
        if (var_68 != 0)
            result = sub_140a74f90(var_68)
        
        uint64_t rcx_13 = var_88
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        __security_check_cookie(rax_1 ^ &var_118)
        return result
    
    int64_t rdi_1 = sx.q(arg2[1].d)
    int64_t rsi_1 = *(*rax_12 + rcx_5 * 0x10)
    int32_t rax_14 = (rdi_1 + 1).d
    arg2[1].d = rax_14
    
    if (rax_14 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rdi_1 << 3)) = rsi_1
    var_c8:8.d &= not.d(var_d8:0xc.d)
    sub_14059bdd0(&var_d8:8)
