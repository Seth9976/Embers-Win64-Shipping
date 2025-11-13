// 函数: sub_1409d7690
// 地址: 0x1409d7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rdx = arg2[1].d
int64_t var_70
__builtin_memset(&var_70, 0, 0x2c)
int32_t var_44 = 0x80
int32_t var_40 = 0xffffffff
int32_t var_3c = 0
sub_1409d93a0(&var_70, rdx)
int64_t* var_b8
sub_1407453e0(&var_b8, arg1)
int128_t var_b0
void* var_a8
int32_t i_1
int32_t var_90

for (int32_t i = i_1; i s< *(var_a8 + 0x18); i = i_1)
    int32_t rbx_1 = data_143a1c6b0
    int64_t i_2 = sx.q(i)
    int64_t rsi_1 = sx.q(*(*arg2 + (i_2 << 3)))
    int32_t* rcx_3 = *(sub_1409ca9d0(&var_70, &var_90, rsi_1.d) + 8)
    
    if (rcx_3 != 0)
        *rcx_3 = rbx_1
        *(rcx_3 + 8) = 0
        *(rcx_3 + 0x10) = 0
    
    int32_t* r8_2 = *var_b8 + i_2 * 0x18
    int32_t* rdx_4 = var_70 + rsi_1 * 0x18
    *rdx_4 = *r8_2
    
    if (&rdx_4[2] != &r8_2[2])
        int64_t rcx_6 = *(rdx_4 + 8)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *(rdx_4 + 8) = *(r8_2 + 8)
        *(r8_2 + 8) = 0
        rdx_4[4] = r8_2[4]
        rdx_4[5] = r8_2[5]
        *(r8_2 + 0x10) = 0
    
    int32_t var_a0 = var_a0 & not.d(var_b0:4.d)
    sub_14059bdd0(&var_b0)

sub_1409ac1f0(arg1, &var_70)
int32_t rcx_9 = 0
int32_t r8_3 = 0
int64_t var_60
int64_t* var_88 = &var_60
int32_t rax_14 = 0
int32_t var_7c = 0
var_90 = 0
int32_t var_8c = 1
int32_t var_80 = 0xffffffff
int32_t var_78 = 0
int64_t* var_50
int32_t var_48

if (var_48 != 0)
    int64_t* r10_1 = &var_60
    
    if (var_50 != 0)
        r10_1 = var_50
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_48 - 1)
    int32_t rdx_8 = *r10_1
    
    if (rdx_8 != 0)
    label_1409d7888:
        int32_t rax_22 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_22)
        int32_t var_8c_1 = rax_22
        int32_t rax_23
        
        if (rax_22 == 0)
            rax_23 = 0x20
        else
            rax_23 = 0x1f - temp0_2
        
        rax_14 = r8_3 - rax_23 + 0x1f
        
        if (rax_14 s> var_48)
            rax_14 = var_48
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_9)
            r8_3 += 0x20
            rcx_9 += 1
            int32_t var_78_1 = r8_3
            var_90 = rcx_9
            
            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                rax_14 = var_48
                break
            
            rdx_8 = *(r10_1 + (rdx_9 << 2) + 4)
            var_80 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1409d7888
    
    int32_t var_7c_1 = rax_14

int64_t* rdx_10 = &var_70
var_b8 = &var_70
var_b0 = var_90.o
int32_t var_a0_1 = var_80

if (rax_14 s< var_48)
    int32_t i_3 = i_1
    
    while (true)
        int64_t rcx_12 = *(*rdx_10 + sx.q(i_3) * 0x18 + 8)
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        var_a0_1 &= not.d(var_b0:4.d)
        sub_14059bdd0(&var_b0)
        i_3 = i_1
        
        if (i_3 s>= *(var_a8 + 0x18))
            break
        
        rdx_10 = var_b8

int64_t var_68
var_68.d = 0
int32_t var_40_1 = 0xffffffff
int32_t var_3c_1 = 0
void* result = sub_14059a8e0(&var_60, 0)

if (var_50 != 0)
    result = sub_140a74f90(var_50)

int64_t rcx_17 = var_70

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

__security_check_cookie(rax_1 ^ &var_d8)
return result
