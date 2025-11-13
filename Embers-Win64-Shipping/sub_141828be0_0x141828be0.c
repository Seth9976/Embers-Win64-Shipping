// 函数: sub_141828be0
// 地址: 0x141828be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_158
int64_t rax_2 = __security_cookie ^ &var_158
int64_t rax_3 = *arg2
int32_t var_5c_1 = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_54_1 = 0
int64_t var_48_1 = 0
int32_t var_40_1 = 0
int32_t var_58_1 = 0xffffffff
(*(rax_3 + 0x1b8))(arg2, &var_88)
int64_t var_78
int64_t* var_130_1 = &var_78
int32_t rcx_1 = 0
int32_t var_138 = 0
int32_t var_128_1 = 0xffffffff
int32_t r8_1 = 0
int32_t var_134_1 = 1
int64_t var_124_1 = 0
int64_t* var_68
int32_t var_60

if (var_60 != 0)
    int64_t* r10_1 = &var_78
    
    if (var_68 != 0)
        r10_1 = var_68
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_60 - 1)
    int32_t rdx_3 = *r10_1
    
    if (rdx_3 != 0)
    label_141828ce8:
        int32_t rax_11 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_134_2 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        int32_t rax_13 = r8_1 - rax_12 + 0x1f
        
        if (rax_13 s> var_60)
            rax_13 = var_60
        
        var_124_1.d = rax_13
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_1 += 0x20
            rcx_1 += 1
            var_124_1:4.d = r8_1
            var_138 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_124_1.d = var_60
                break
            
            rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
            var_128_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141828ce8

int512_t zmm2
zmm2.o = var_128_1.o
int128_t var_98_1 = zmm2.o
var_124_1.d = var_60
int512_t zmm1
zmm1.o = var_138.o
zmm2.o = _mm_unpackhi_pd(zmm2.o, zmm2.q)
int128_t var_f8 = (&var_88).o
int128_t var_e8_1 = zmm1.o
int64_t var_d8_1 = (zmm2.o).q

while (true)
    int64_t rax_14 = sx.q(var_e8_1:0xc.d)
    int64_t* rdx_5 = var_f8.q
    
    if (rax_14.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_e8_1.q == &var_78
            && rdx_5 == &var_88)
        break
    
    int64_t var_118 = 0
    int64_t var_110_1 = 0
    int32_t* rdi_1 = *rdx_5 + rax_14 * 0x18
    int64_t var_c0
    sub_140b187e0(&var_c0, sub_14183a8c0(&var_138, arg2, &var_118, rdi_1, zmm1, zmm2))
    int64_t rcx_8 = var_138.q
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t rcx_9 = var_118
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t var_100 = (*(*arg2 + 0x188))(arg2, rdi_1)
    int64_t* var_d0 = &var_c0
    int64_t* var_c8_1 = &var_100
    void var_108
    zmm1 = sub_141818aa0(arg1 + 8, &var_108, &var_d0, nullptr)
    int64_t rcx_12 = var_c0
    
    if (rcx_12 != 0)
        zmm1 = sub_140a74f90(rcx_12)
    
    var_e8_1:8.d &= not.d(var_f8:0xc.d)
    sub_14059bdd0(&var_f8:8)

int32_t var_40_2 = 0

if (var_48_1 != 0)
    sub_140a74f90(var_48_1)

int64_t var_80
var_80.d = 0
int32_t var_58_2 = 0xffffffff
int32_t var_54_2 = 0
sub_14059a8e0(&var_78, 0)

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_18 = var_88

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

__security_check_cookie(rax_2 ^ &var_158)
