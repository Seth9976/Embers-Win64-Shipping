// 函数: sub_1418d2e60
// 地址: 0x1418d2e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_4c = 0x80
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int64_t* rax_2 = nullptr
int32_t r9 = 0
int32_t var_44 = 0
int64_t var_38 = 0
int32_t var_30 = 0
int64_t var_68
int64_t* var_58

if (&var_78 != arg1 + 0x50)
    int128_t zmm3 = var_68.o
    int128_t zmm4 = var_58.o
    var_78.o = *(arg1 + 0x50)
    var_58.o = *(arg1 + 0x70)
    int32_t var_50
    r9 = var_50
    int128_t zmm0 = *(arg1 + 0x90)
    rax_2 = var_58
    var_68.o = *(arg1 + 0x60)
    int128_t zmm1 = *(arg1 + 0x80)
    *(arg1 + 0x50) = var_78.o
    *(arg1 + 0x60) = zmm3
    *(arg1 + 0x70) = zmm4
    *(arg1 + 0x80) = 0xffffffff.o
    *(arg1 + 0x90) = var_38.o
    int32_t var_48
    var_48.o = zmm1
    var_38.o = zmm0

int32_t var_e4 = 1
int32_t rcx = 0
int32_t var_e8 = 0
int64_t* var_e0 = &var_68
int32_t var_d8 = 0xffffffff
int32_t r8 = 0
int64_t var_d4 = 0

if (r9 != 0)
    int64_t* r11_1 = &var_68
    
    if (rax_2 != 0)
        r11_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_3 = *r11_1
    
    if (rdx_3 != 0)
    label_1418d2fa6:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_e4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t rax_11 = r8 - rax_10 + 0x1f
        
        if (rax_11 s> r9)
            rax_11 = r9
        
        var_d4.d = rax_11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_d4:4.d = r8
            var_e8 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_d4.d = r9
                break
            
            rdx_3 = *(r11_1 + (rdx_4 << 2) + 4)
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1418d2fa6

int128_t var_88 = 0xffffffff
int128_t var_98 = var_e8.o
var_d4.d = r9
double temp0_3[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_c8 = (&var_78).o
int128_t var_b8 = var_98
int64_t var_a8 = temp0_3.q

while (true)
    int64_t rax_12 = sx.q(var_b8:0xc.d)
    int64_t* rdx_5 = var_c8.q
    
    if (rax_12.d == ((0xffffffff << (r9.b & 0x1f)).q u>> 0x20).d && var_b8.q == &var_68
            && rdx_5 == &var_78)
        int32_t var_30_1 = 0
        
        if (var_38 != 0)
            sub_140a74f90(var_38)
        
        int64_t var_70
        var_70.d = 0
        int32_t var_48_1 = 0xffffffff
        int32_t var_44_1 = 0
        sub_14059a8e0(&var_68, 0)
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        int64_t rcx_11 = var_78
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        void* result = sub_1405ae080(arg1 + 0x50)
        __security_check_cookie(rax_1 ^ &var_108)
        return result
    
    int64_t* rcx_5 = *(*rdx_5 + rax_12 * 0x18 + 8)
    
    if (rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)
    
    var_b8:8.d &= not.d(var_c8:0xc.d)
    sub_14059bdd0(&var_c8:8)
