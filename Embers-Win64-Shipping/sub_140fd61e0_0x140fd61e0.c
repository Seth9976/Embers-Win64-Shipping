// 函数: sub_140fd61e0
// 地址: 0x140fd61e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg7
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t rbx = 0x10
void* var_168 = arg8
int32_t rax_5 = *(arg1 + 0x19f8)

if (rax_5 s>= 1)
    rax_5 = 1

if (rax_5 s<= 0x10)
    rbx = rax_5

int128_t var_80

if (rbx s> 0)
    memcpy(&var_80, arg1 + 0x19fc, rbx * 0x18)

if (rbx s< 1)
    memset(&var_80 + sx.q(rbx) * 0x18, 0, sx.q(1 - rbx) * 0x18)

if (*(arg2 + 0x14) u> 0)
    sub_14196fa90(&data_143f02b88, arg2, arg5, arg6)

int128_t zmm0 = zx.o(0)
int64_t var_cc
__builtin_memset(&var_cc, 0, 0x43)
int128_t var_128
__builtin_memset(&var_128, 0, 0x30)
int128_t var_e0 = zx.o(0)
int16_t var_88 = 0
sub_140fdc870(arg2, &var_128)
int64_t var_f8 = data_14395da00
int64_t var_f0 = data_14395da18

if (arg4 != 0)
    sub_140fdf350(arg1, arg4 + 0x68, 0)

int32_t* r12

if (*arg12 != 0 || arg12[1] != 0 || arg12[2] != *arg10 || arg12[3] != arg10[1])
    r12.b = 0
else
    r12.b = 1

int64_t* rbx_1 = *(arg1 + 0x27c8)
int32_t rdi_1 = *(arg1 + 0x43d0)

if (rbx_1 != 0)
    (*(*rbx_1 + 8))(rbx_1)

char var_198
void* const var_180
int128_t var_158
int64_t rax_19
void** r8_4
int64_t r9

if ((arg10[8].b & 0x40) == 0)
    if (r12.b != 0)
        if (*(arg1 + 0x17d18) != 0)
            void* rax_20 = *(arg1 + 0x17d30)
            
            if (rax_20 != 0)
                *(rax_20 + 0x10) += 1
        
        int64_t rax_21 = *arg13
        void* rdx_5 = var_168
        zmm0 = zx.o(0)
        var_158 = zmm0
        (*(rax_21 + 0x190))(arg13, rdx_5, &var_158)
    
    rax_19 = data_14395d9e8
    r8_4 = &var_168
    r9 = 0
else
    int64_t r12_1
    
    if (r12.b == 0)
        r12_1 = arg9
    else
        if (*(arg1 + 0x17d18) != 0)
            void* rax_17 = *(arg1 + 0x17d30)
            
            if (rax_17 != 0)
                *(rax_17 + 0x10) += 1
        
        r12_1 = arg9
        var_198 = 0
        (*(*arg13 + 0x1a8))(arg13, r12_1, 3, zx.o(0), var_198)
    
    *(arg1 + 0x43d0) = 0x22
    rax_19 = data_1439b4ac0
    r8_4 = &var_180
    var_180 = nullptr
    r9 = r12_1

int64_t var_e8 = rax_19
(*(*arg13 + 0x108))(zmm0, 1, r8_4, r9, var_198)
arg7.d = float.s(zx.q(arg10[1]))
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int128_t zmm7
zmm7.d = float.s(zx.q(*arg10))
void* rax_25 = &rcx_11[5]

if (rax_25 u> *(arg2 + 0x38))
    arg7 = sub_140b0e3d0(&arg2[0x30], 0x30)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_25 = &rcx_11[5]

*(arg2 + 0x30) = rax_25
int64_t* rax_26 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_26 = rcx_11
*(arg2 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142d54998
*(rcx_11 + 0x1c) = zmm7.d
rcx_11[4].d = arg7.d
rcx_11[2] = 0
rcx_11[3].d = 0
*(rcx_11 + 0x24) = 0x3f800000
int64_t* rax_29 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_138
sub_1419a2ec0(rax_29, &var_138, &data_143f1ed10, 0)
void* rax_30 = var_138
sub_1419a2ec0(rax_29, &var_158, &data_143f1ec00, 0)
void* const r8_6 = var_158.q
int64_t rax_31 = 0
var_180 = r8_6

if (rax_30 != 0)
    int64_t rdx_8 = sx.q(*(rax_30 + 0x10c))
    int64_t rcx_19 = rdx_8
    void* var_130
    int64_t* rsi_2 = *(var_130 + 0x10)
    int64_t rax_33 = rsi_2[3]
    
    if (*(rax_33 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rsi_2, rdx_8.d)
        rax_33 = rsi_2[3]
        rcx_19 = rdx_8
        r8_6 = var_180
    
    rax_31 = *(rax_33 + (rcx_19 << 3))

var_128:8.q = rax_31
int64_t rax_34 = 0

if (r8_6 != 0)
    int64_t rdx_9 = sx.q(*(r8_6 + 0x10c))
    int64_t rcx_21 = rdx_9
    int64_t* rsi_3 = *(var_158:8.q + 0x10)
    int64_t rax_36 = rsi_3[3]
    
    if (*(rax_36 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rsi_3, rdx_9.d)
        rax_36 = rsi_3[3]
        rcx_21 = rdx_9
    
    rax_34 = *(rax_36 + (rcx_21 << 3))

int64_t* rsi_4 = *(arg1 + 0x27c8)
int128_t var_108
var_108.q = rax_34
int32_t var_d0 = 1
int64_t* rcx_23 = arg4 + 0x68

if (arg4 == 0)
    rcx_23 = nullptr

*(arg1 + 0x27c8) = rcx_23

if (rcx_23 != 0)
    (*(*rcx_23 + 8))()

if (rsi_4 != 0)
    (*(*rsi_4 + 0x10))(rsi_4)

sub_1419870b0(arg2, &var_128, 2)
void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_40 = &rcx_28[4]

if (rax_40 u> *(arg2 + 0x38))
    sub_140b0e3d0(&arg2[0x30], 0x28)
    rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_40 = &rcx_28[4]

*(arg2 + 0x30) = rax_40
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_28
*(arg2 + 8) = &rcx_28[1]
rcx_28[1] = 0
*rcx_28 = &data_142ef5798
*(rcx_28 + 0x10) = data_14399f5c0
var_198.d = *arg10
int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_1419d8470(rax_30, arg2, arg11, arg12, var_198, arg10[1])
void* const rsi_5 = var_180
sub_1419d8330(rsi_5, arg2, arg14)
int512_t zmm6

if (*(arg2 + 0x14) u> 0)
    zmm2, zmm3, zmm6 = sub_14196fa90(&data_143f02b88, arg2, zmm2, zmm3)

if (arg3 != 0)
    void* rdx_14 = arg3 + 0x68
    
    if (arg3 == 0)
        rdx_14 = nullptr
    
    int32_t var_190_1 = 0
    var_198.q = *(arg3 + 0x58)
    sub_140fd5010(arg1, rdx_14, *(arg3 + 0xa8), zx.d(*(rsi_5 + 0x118)))

void*** rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_46 = &rcx_38[4]

if (rax_46 u> *(arg2 + 0x38))
    sub_140b0e3d0(&arg2[0x30], 0x28)
    rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_46 = &rcx_38[4]

*(arg2 + 0x30) = rax_46
int64_t* rax_47 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_47 = rcx_38
*(arg2 + 8) = &rcx_38[1]
rcx_38[1] = 0
*rcx_38 = &data_142d54988
rcx_38[2].d = 0
*(rcx_38 + 0x14) = 2
rcx_38[3].d = 1

if (*(arg2 + 0x14) u> 0)
    sub_14196fa90(&data_143f02b88, arg2, zmm2, zmm3)

if (arg3 != 0)
    void* rdx_16 = arg3 + 0x68
    
    if (arg3 == 0)
        rdx_16 = nullptr
    
    sub_140fdf350(arg1, rdx_16, 0)

sub_140fdeef0(arg1)
int64_t result

if (*(arg1 + 0x19f8) == 1 && *(arg1 + 0x19fc) == var_80.q && *(arg1 + 0x1a04) == var_80:8.q)
    result = *(arg1 + 0x1a0c)

int64_t var_70

if (*(arg1 + 0x19f8) != 1 || *(arg1 + 0x19fc) != var_80.q || *(arg1 + 0x1a04) != var_80:8.q
        || result != var_70)
    *(arg1 + 0x19fc) = var_80
    *(arg1 + 0x1a0c) = var_70
    int64_t* rcx_44 = *(arg1 + 0x188)
    *(arg1 + 0x19f8) = 1
    result = (*(*rcx_44 + 0x160))(rcx_44, 1, &var_80)

*(arg1 + 0x43d0) = rdi_1
int64_t* rdi_2 = *(arg1 + 0x27c8)
*(arg1 + 0x27c8) = rbx_1

if (rbx_1 != 0)
    result = (*(*rbx_1 + 8))(rbx_1)

if (rdi_2 != 0)
    result = (*(*rdi_2 + 0x10))(rdi_2)

if (rbx_1 != 0)
    result = (*(*rbx_1 + 0x10))(rbx_1)

__security_check_cookie(rax_1 ^ &var_1b8)
zmm6.o = var_48
return result
