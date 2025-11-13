// 函数: sub_1426628c0
// 地址: 0x1426628c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
EnterCriticalSection(&data_143f714c8)
int32_t var_3c = 0x80
int64_t var_68
__builtin_memset(&var_68, 0, 0x2c)
int32_t var_34 = 0
int64_t var_28 = 0
int32_t var_20 = 0
int32_t var_38 = 0xffffffff
sub_1405af100(&var_68, &data_143b51540)
sub_140865470(&data_143b51540, 0)
int64_t var_58
int64_t* var_e0 = &var_58
int32_t rcx_1 = 0
int32_t var_e8 = 0
int32_t r8 = 0
int32_t var_e4 = 1
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0
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
    label_1426629c9:
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
        
        if (rax_11 s> var_40)
            rax_11 = var_40
        
        var_d4.d = rax_11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_d4:4.d = r8
            var_e8 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_d4.d = var_40
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_d8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1426629c9

int16_t var_b0 = 0
int64_t* var_78 = &var_68
int64_t* var_b8 = &var_68
int128_t var_88 = 0xffffffff
int128_t zmm3 = var_e8.o
var_e8.o = (&var_68).o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_d8.o = zmm3
int128_t var_c8 = zmm0

if (0 s< *(zmm3.q + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t r8_2 = sx.q(i) * 3
        int64_t rcx_3 = *var_e8.q
        int64_t rbx_1 = *(rcx_3 + (r8_2 << 3))
        int64_t var_a8 = *(rcx_3 + (r8_2 << 3) + 8)
        
        if (sub_140d3e110(&var_a8) != 0 && rbx_1 != 0)
            (*(*arg1 + 0x348))(arg1, rbx_1)
        
        var_d4:4.d &= not.d(var_e0:4.d)
        sub_14059bdd0(&var_e0)
        i = i_1
    while (i s< *(var_d8.q + 0x18))
    
    if (var_b0.b != 0 && var_b0:1.b != 0)
        sub_1405b6470(var_b8, var_b8[1].d - *(var_b8 + 0x34), 1)

int32_t var_20_1 = 0

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t var_60
var_60.d = 0
int32_t var_5c

if (var_5c != 0)
    sub_1405a5130(&var_68, 0)

int32_t var_38_1 = 0xffffffff
int32_t var_34_1 = 0
sub_14059a8e0(&var_58, 0)

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t rcx_12 = var_68

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t result = LeaveCriticalSection(&data_143f714c8)
__security_check_cookie(rax_1 ^ &var_108)
return result
