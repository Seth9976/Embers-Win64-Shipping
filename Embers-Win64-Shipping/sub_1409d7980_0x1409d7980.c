// 函数: sub_1409d7980
// 地址: 0x1409d7980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rdx = arg2[1].d
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x2c)
int32_t var_94 = 0x80
int32_t var_90 = 0xffffffff
int32_t var_8c = 0
sub_1409d9210(&var_c0, rdx)
int64_t* var_108
sub_1407453e0(&var_108, arg1)
int128_t var_100
void* var_f8
int32_t i_1
int32_t var_e0

for (int32_t i = i_1; i s< *(var_f8 + 0x18); i = i_1)
    int64_t rax_3 = *arg2
    int64_t i_2 = sx.q(i)
    int32_t rbx_1 = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x3c)
    int64_t rsi_1 = sx.q(*(rax_3 + (i_2 << 3)))
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    int32_t var_44_1 = 0
    int32_t* rcx_3 = *(sub_1409ca850(&var_c0, &var_e0, rsi_1.d) + 8)
    int64_t var_78
    
    if (rcx_3 != 0)
        *rcx_3 = 0
        rcx_3[1] = var_88:4.d
        rcx_3[2] = 0
        sub_1409a9d30(&rcx_3[4], &var_78)
        int32_t var_6c
        rbx_1 = var_6c
    
    int32_t var_70_1 = 0
    
    if (rbx_1 != 0)
        sub_1405a5410(&var_78, 0)
    
    int32_t var_48_2 = 0xffffffff
    int32_t var_44_2 = 0
    int64_t var_68
    sub_14059a8e0(&var_68, 0)
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t rcx_8 = var_78
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int32_t* rdx_5 = *var_108 + i_2 * 0x48
    int32_t* rcx_11 = var_c0 + rsi_1 * 0x48
    *rcx_11 = *rdx_5
    rcx_11[1] = rdx_5[1]
    rcx_11[2] = rdx_5[2]
    sub_140780e10(&rcx_11[4], &rdx_5[4])
    int32_t var_f0 = var_f0 & not.d(var_100:4.d)
    sub_14059bdd0(&var_100)

sub_1409ac4a0(arg1, &var_c0)
int32_t rcx_15 = 0
int32_t r8_2 = 0
int64_t var_b0
int64_t* var_d8 = &var_b0
int32_t rax_14 = 0
int32_t var_cc = 0
var_e0 = 0
int32_t var_dc = 1
int32_t var_d0 = 0xffffffff
int32_t var_c8 = 0
int64_t* var_a0
int32_t var_98

if (var_98 != 0)
    int64_t* r9_1 = &var_b0
    
    if (var_a0 != 0)
        r9_1 = var_a0
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_98 - 1)
    int32_t rdx_10 = *r9_1
    
    if (rdx_10 != 0)
    label_1409d7c1b:
        int32_t rax_22 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_22)
        int32_t var_dc_1 = rax_22
        int32_t rax_23
        
        if (rax_22 == 0)
            rax_23 = 0x20
        else
            rax_23 = 0x1f - temp0_2
        
        rax_14 = r8_2 - rax_23 + 0x1f
        
        if (rax_14 s> var_98)
            rax_14 = var_98
    else
        while (true)
            int64_t rdx_11 = sx.q(rcx_15)
            r8_2 += 0x20
            rcx_15 += 1
            int32_t var_c8_1 = r8_2
            var_e0 = rcx_15
            
            if (rdx_11.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                rax_14 = var_98
                break
            
            rdx_10 = *(r9_1 + (rdx_11 << 2) + 4)
            var_d0 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1409d7c1b
    
    int32_t var_cc_1 = rax_14

int64_t* rdx_12 = &var_c0
var_108 = &var_c0
var_100 = var_e0.o
int32_t var_f0_1 = var_d0

if (rax_14 s< var_98)
    int32_t i_3 = i_1
    
    while (true)
        sub_1409ab120(*rdx_12 + sx.q(i_3) * 0x48)
        var_f0_1 &= not.d(var_100:4.d)
        sub_14059bdd0(&var_100)
        i_3 = i_1
        
        if (i_3 s>= *(var_f8 + 0x18))
            break
        
        rdx_12 = var_108

int64_t var_b8
var_b8.d = 0
int32_t var_90_1 = 0xffffffff
int32_t var_8c_1 = 0
void* result = sub_14059a8e0(&var_b0, 0)

if (var_a0 != 0)
    result = sub_140a74f90(var_a0)

int64_t rcx_23 = var_c0

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

__security_check_cookie(rax_1 ^ &var_128)
return result
