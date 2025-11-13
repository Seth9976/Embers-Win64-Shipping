// 函数: sub_141861f50
// 地址: 0x141861f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
arg1[1] = arg2
*arg1 = &data_142fe7810
arg1[2] = arg3
sub_141853be0(&arg1[3], arg4)
int64_t var_58
int16_t* rax_2 = sub_140a95a00(&var_58)
void* rcx_2 = &arg1[0xf]
int32_t i_1 = 1
*(rax_2 + 0x14) = 1
*(rax_2 + 0x10) = 1
*(rax_2 + 4) = 4
*(arg1 + 0x48) = *rax_2
arg1[0xb] = *(rax_2 + 0x10)
arg1[0xc].d = arg5
arg1[0xd] = 0
arg1[0xe] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
int32_t var_148 = arg5
void* rax_4 = *(rcx_2 + 0x10)

if (rax_4 != 0)
    rcx_2 = rax_4

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x13].d = 0xffffffff
*(arg1 + 0x9c) = 0
arg1[0x15] = 0
arg1[0x16].d = 0
int32_t rcx_3 = arg1[0xe].d
int32_t rbx_2 = rcx_3 - *(arg1 + 0x9c) + 1

if (rbx_2 s> rcx_3 - *(arg1 + 0x9c))
    sub_140859120(&arg1[0xd], rbx_2)
    int32_t rax_7
    
    if (rbx_2 u< 4)
        rax_7 = 1
    else
        uint32_t rbx_3 = rbx_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_3 + 8)
        int32_t rcx_6
        
        if (rbx_3 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        int32_t rcx_8 = rcx_6 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_3 + 7)
        
        if (rcx_8 == 0)
            rax_7 = 1
        else
            rax_7 = 1 << ((not.d(rcx_8)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_11 = arg1[0x16].d
    
    if (rcx_11 == 0 || rcx_11 s< rax_7)
        arg1[0x16].d = rax_7
        sub_140771f10(&arg1[0xd])

int32_t* i = &var_148
void var_144
int32_t var_130

do
    sub_1406f3d50(&arg1[0xd], &var_130, i, nullptr)
    i = &i[1]
while (i != &var_144)

arg1[0x17] = 0
arg1[0x18] = 0
void* rcx_14 = &arg1[0x19]
*(rcx_14 + 0x10) = 0
*(rcx_14 + 0x18) = 0
*(rcx_14 + 0x1c) = 0x80
void* rax_8 = *(rcx_14 + 0x10)

if (rax_8 != 0)
    rcx_14 = rax_8

*rcx_14 = 0
*(rcx_14 + 8) = 0
void* rcx_15 = &arg1[0x23]
arg1[0x1d].d = 0xffffffff
*(arg1 + 0xec) = 0
arg1[0x1f] = 0
arg1[0x20].d = 0
arg1[0x21] = 0
arg1[0x22] = 0
*(rcx_15 + 0x1c) = 0x80
void* rax_9 = *(rcx_15 + 0x10)

if (rax_9 != 0)
    rcx_15 = rax_9

__builtin_memset(rcx_15, 0, 0x1c)
void* rcx_16 = &arg1[0x2e]
arg1[0x27].d = 0xffffffff
*(arg1 + 0x13c) = 0
arg1[0x29] = 0
arg1[0x2a].d = 0
arg1[0x2b].b = 0
arg1[0x2c] = 0
arg1[0x2d] = 0
*(rcx_16 + 0x1c) = 0x80
void* rax_10 = *(rcx_16 + 0x10)

if (rax_10 != 0)
    rcx_16 = rax_10

__builtin_memset(rcx_16, 0, 0x1c)
void* rcx_17 = &arg1[0x38]
arg1[0x32].d = 0xffffffff
*(arg1 + 0x194) = 0
arg1[0x34] = 0
arg1[0x35].d = 0
arg1[0x36] = 0
arg1[0x37] = 0
*(rcx_17 + 0x1c) = 0x80
void* rax_11 = *(rcx_17 + 0x10)

if (rax_11 != 0)
    rcx_17 = rax_11

__builtin_memset(rcx_17, 0, 0x1c)
arg1[0x3c].d = 0xffffffff
*(arg1 + 0x1e4) = 0
arg1[0x3e] = 0
arg1[0x3f].d = 0
arg1[0x40] = 0
void* rcx_18 = &arg1[0x42]
arg1[0x41] = 0
*(rcx_18 + 0x1c) = 0x80
void* rax_12 = *(rcx_18 + 0x10)

if (rax_12 != 0)
    rcx_18 = rax_12

__builtin_memset(rcx_18, 0, 0x1c)
arg1[0x46].d = 0xffffffff
*(arg1 + 0x234) = 0
arg1[0x48] = 0
arg1[0x49].d = 0
int64_t* var_140 = nullptr
arg1[0x4a] = 0
void* rcx_19 = &arg1[0x4c]
arg1[0x4b] = 0
int64_t* rdi = nullptr
*(rcx_19 + 0x1c) = 0x80
void* rax_13 = *(rcx_19 + 0x10)
int32_t* var_138 = nullptr

if (rax_13 != 0)
    rcx_19 = rax_13

__builtin_memset(rcx_19, 0, 0x1c)
void* rcx_20 = &arg1[0x56]
arg1[0x50].d = 0xffffffff
*(arg1 + 0x284) = 0
arg1[0x52] = 0
arg1[0x53].d = 0
arg1[0x54] = 0
arg1[0x55] = 0
*(rcx_20 + 0x10) = 0
*(rcx_20 + 0x18) = 0
*(rcx_20 + 0x1c) = 0x80
void* rax_14 = *(rcx_20 + 0x10)

if (rax_14 != 0)
    rcx_20 = rax_14

int64_t var_e8
__builtin_memset(&var_e8, 0, 0x14)
*rcx_20 = 0
*(rcx_20 + 8) = 0
arg1[0x5a].d = 0xffffffff
*(arg1 + 0x2d4) = 0
arg1[0x5c] = 0
arg1[0x5d].d = 0
uint64_t count = zx.q(arg1[0xc].d)
int64_t var_120 = 1
int64_t var_118 = 0
int32_t temp1 = count.d

if (temp1 s> 0)
    var_138.d = count.d
    sub_1405daba0(&var_140)
    rdi = var_140
else if (temp1 s< 0)
    int32_t rax_16 = neg.d(count.d)
    
    if (rax_16 != 0)
        var_138.d = neg.d(rax_16)
        sub_1405dac10(&var_140)
        rdi = var_140

memset(rdi, 0, count)
sub_140b3f690(rdi, count, &var_e8)

if (rdi != 0)
    sub_140a74f90(rdi)

sub_141859c90(&arg1[0x21], &var_148, &var_e8, nullptr)
int64_t var_128 = sub_141887fe0(0, arg1[0xc].d)
int128_t* var_c8 = nullptr
int32_t var_bc = 0
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x2c)
int32_t var_7c = 0
int64_t var_70 = 0
int32_t var_68 = 0
int64_t var_60 = 0
int32_t var_b8 = 0xffffffff
int32_t var_84 = 0x80
int32_t var_80 = 0xffffffff
int32_t var_c0 = 1
sub_1405a4df0(&var_c8)
int128_t* rbx_5 = var_c8
sub_140a98020(rbx_5)
*rbx_5 = var_120.o
var_c8[1].d = 0
*(var_c8 + 0x14) = arg1[0xc].d
int64_t r9_1 = var_128
int64_t var_60_1 = 0
int32_t r10_1 = (r9_1 u>> 0x20).d * 0x17 + r9_1.d
void* rdi_1

if (arg1[0x2d].d == *(arg1 + 0x194))
label_1418624af:
    rdi_1 = sub_141819350(&arg1[0x2c], r10_1, &var_128)
else
    void* rcx_30 = arg1[0x34]
    void* r8_6 = &arg1[0x33]
    
    if (rcx_30 != 0)
        r8_6 = rcx_30
    
    int32_t rax_25 = *(r8_6 + (((sx.q(arg1[0x35].d) - 1) & sx.q(r10_1)) << 2))
    
    if (rax_25 == 0xffffffff)
    label_1418624af_1:
        rdi_1 = sub_141819350(&arg1[0x2c], r10_1, &var_128)
    else
        int64_t* rcx_34
        
        while (true)
            rcx_34 = &arg1[0x2c][sx.q(rax_25) * 0xc]
            
            if (*rcx_34 == r9_1)
                break
            
            rax_25 = rcx_34[0xb].d
            
            if (rax_25 == 0xffffffff)
                goto label_1418624af_2
        
        if (rax_25 == 0xffffffff || rcx_34 == 0)
        label_1418624af_2:
            rdi_1 = sub_141819350(&arg1[0x2c], r10_1, &var_128)
        else
            rdi_1 = &rcx_34[1]

sub_140598750(rdi_1, &var_140)
*var_138 = var_120.o
var_138[4] = 0xffffffff
sub_14093ebb0(rdi_1, &var_130, sub_140a6b260(var_138, 0x10), var_138, var_140.d, nullptr)
sub_1418182f0(&arg1[0x36], &var_120, &var_128)
sub_14186d450(&arg1[0x40], &var_140)
int32_t rax_29 = var_148
*var_138 = var_120.o
var_138[4] = rax_29
var_138[5] = 0xffffffff
sub_141835dd0(&arg1[0x40], &var_130, sub_140a6b260(var_138, 0x10), var_138, var_140.d, nullptr)
var_140 = &var_120
void** var_138_1 = &var_c8
int32_t var_110
sub_14186d230(&arg1[0x4a], &var_110)
int128_t* var_108
sub_141853f50(&var_140, var_108)
var_108[8].d = 0xffffffff
sub_14187e270(&arg1[0x4a], &var_130, sub_140a6b260(var_108, 0x10), var_108, var_110, nullptr)
int64_t* var_f8 = &var_120
void** var_f0 = &var_c8

do
    uint64_t count_1 = zx.q(arg1[0xc].d)
    int32_t c = zx.d(i_1.b)
    int64_t* rdi_2 = nullptr
    var_118:4.d = c
    __builtin_memset(&var_58, 0, 0x14)
    var_140 = nullptr
    int64_t var_138_2 = 0
    int32_t temp2_1 = count_1.d
    
    if (temp2_1 s> 0)
        var_138_2.d = count_1.d
        sub_1405daba0(&var_140)
        rdi_2 = var_140
    else if (temp2_1 s< 0)
        int32_t rax_35 = neg.d(count_1.d)
        
        if (rax_35 != 0)
            var_138_2.d = neg.d(rax_35)
            sub_1405dac10(&var_140)
            rdi_2 = var_140
    
    memset(rdi_2, c, count_1)
    sub_140b3f690(rdi_2, count_1, &var_58)
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)
    
    sub_141859c90(&arg1[0x21], &var_130, &var_58, nullptr)
    int32_t rdx_27 = arg1[0xc].d
    var_148 = var_130
    int64_t rax_38 = sub_141887fe0(i_1.b, rdx_27)
    int128_t zmm0_4 = var_120.o
    var_128 = rax_38
    *var_c8 = zmm0_4
    int64_t r9_5 = var_128
    int32_t r10_3 = (r9_5 u>> 0x20).d * 0x17 + r9_5.d
    int64_t* rdi_3
    
    if (arg1[0x2d].d == *(arg1 + 0x194))
    label_14186273f:
        rdi_3 = sub_141819350(&arg1[0x2c], r10_3, &var_128)
    else
        void* rcx_54 = arg1[0x34]
        void* r8_16 = &arg1[0x33]
        
        if (rcx_54 != 0)
            r8_16 = rcx_54
        
        int32_t rax_44 = *(r8_16 + (((sx.q(arg1[0x35].d) - 1) & sx.q(r10_3)) << 2))
        
        if (rax_44 == 0xffffffff)
        label_14186273f_1:
            rdi_3 = sub_141819350(&arg1[0x2c], r10_3, &var_128)
        else
            int64_t* rcx_58
            
            while (true)
                rcx_58 = &arg1[0x2c][sx.q(rax_44) * 0xc]
                
                if (*rcx_58 == r9_5)
                    break
                
                rax_44 = rcx_58[0xb].d
                
                if (rax_44 == 0xffffffff)
                    goto label_14186273f_2
            
            if (rax_44 == 0xffffffff || rcx_58 == 0)
            label_14186273f_2:
                rdi_3 = sub_141819350(&arg1[0x2c], r10_3, &var_128)
            else
                rdi_3 = &rcx_58[1]
    
    sub_140598750(rdi_3, &var_110)
    *var_108 = var_120.o
    var_108[1].d = 0xffffffff
    void var_100
    sub_14093ebb0(rdi_3, &var_100, sub_140a6b260(var_108, 0x10), var_108, var_110, nullptr)
    sub_1418182f0(&arg1[0x36], &var_120, &var_128)
    sub_141859bf0(&arg1[0x40], &var_120, &var_148)
    sub_14186d230(&arg1[0x4a], &var_e8)
    int128_t* var_e0
    sub_141853f50(&var_f8, var_e0)
    var_e0[8].d = 0xffffffff
    void var_fc
    sub_14187e270(&arg1[0x4a], &var_fc, sub_140a6b260(var_e0, 0x10), var_e0, var_e8.d, nullptr)
    i_1 += 1
while (i_1 u<= 0xff)

sub_141866a30(&var_b0)
int128_t* rcx_70 = var_c8

if (rcx_70 != 0)
    sub_140a74f90(rcx_70)

__security_check_cookie(rax_1 ^ &var_178)
return arg1
