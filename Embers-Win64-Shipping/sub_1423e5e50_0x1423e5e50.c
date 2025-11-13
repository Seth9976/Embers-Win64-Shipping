// 函数: sub_1423e5e50
// 地址: 0x1423e5e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_118
int64_t rax_2 = __security_cookie ^ &var_118
int32_t var_d8
sub_140ba6ab0(arg1 + 0xf0, &var_d8, arg2)
int64_t rax_3 = sx.q(var_d8)
void* const rax

if (rax_3.d == 0xffffffff)
    rax = nullptr
else
    rax = rax_3 * 0x60 + *(arg1 + 0xf0)

int64_t* rdx_1 = rax + 8

if (rax == 0)
    rdx_1 = nullptr

if (rdx_1 != 0)
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x2c)
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    int32_t var_44_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    sub_140cd48b0(&var_78, rdx_1)
    int64_t var_68
    int64_t* var_f0_1 = &var_68
    int32_t rcx_2 = 0
    int32_t var_f8_1 = 0
    int32_t var_e8_1 = 0xffffffff
    int32_t r8_2 = 0
    int32_t var_f4_1 = 1
    int64_t var_e4_1 = 0
    int64_t* var_58
    int32_t var_50
    
    if (var_50 != 0)
        int64_t* r10_1 = &var_68
        
        if (var_58 != 0)
            r10_1 = var_58
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_50 - 1)
        int32_t rdx_4 = *r10_1
        
        if (rdx_4 != 0)
        label_1423e5f88:
            int32_t rax_13 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t var_f4_2 = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            int32_t rax_15 = r8_2 - rax_14 + 0x1f
            
            if (rax_15 s> var_50)
                rax_15 = var_50
            
            var_e4_1.d = rax_15
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_2)
                r8_2 += 0x20
                rcx_2 += 1
                var_e4_1:4.d = r8_2
                var_f8_1 = rcx_2
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_e4_1.d = var_50
                    break
                
                rdx_4 = *(r10_1 + (rdx_5 << 2) + 4)
                int32_t var_e8_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_1423e5f88
    
    int128_t var_90_1 = 0xffffffff
    int128_t var_a0_1 = var_f8_1.o
    var_e4_1.d = var_50
    int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_d0 = (&var_78).o
    int128_t var_c0_1 = var_a0_1
    int64_t var_b0_1 = temp0_3
    
    while (true)
        int64_t rax_16 = sx.q(var_c0_1:0xc.d)
        int64_t* rdx_6 = var_d0.q
        
        if (rax_16.d == ((0xffffffff << (var_50.b & 0x1f)).q u>> 0x20).d && var_c0_1.q == &var_68
                && rdx_6 == &var_78)
            break
        
        sub_1423e60e0(arg1, *(*rdx_6 + rax_16 * 0x10))
        var_c0_1:8.d &= not.d(var_d0:0xc.d)
        sub_14059bdd0(&var_d0:8)
    
    int32_t var_30_2 = 0
    
    if (var_38_1 != 0)
        sub_140a74f90(var_38_1)
    
    int64_t var_70
    var_70.d = 0
    int32_t var_48_2 = 0xffffffff
    int32_t var_44_2 = 0
    sub_14059a8e0(&var_68, 0)
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t rcx_12 = var_78
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

__security_check_cookie(rax_2 ^ &var_118)
