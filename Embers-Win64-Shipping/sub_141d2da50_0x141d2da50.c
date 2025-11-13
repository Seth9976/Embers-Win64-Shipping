// 函数: sub_141d2da50
// 地址: 0x141d2da50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
*arg1 = arg2
char var_d8 = arg2
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
void* rcx = &arg1[0x18]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
*(arg1 + 0x38) = 0xffffffff
*(arg1 + 0x3c) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = arg3
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0x2edbe6ff
*(arg1 + 0x7c) = 1
*(arg1 + 0x80) = 0x100
arg1[0x82] = 0
*(arg1 + 0x84) = 0
sub_1417c7020(&arg1[0x88])
void*** rax_3 = j_sub_140a82f30(0x9c0)
void*** rcx_2 = rax_3
void*** rax_4

if (rax_3 == 0)
    rax_4 = nullptr
else
    rax_3.b = arg2 == 1
    rax_4 = sub_1417a1c60(rcx_2, &arg1[0x88], data_143a21be0, data_143a21be4, rax_3.b)

*(arg1 + 0x348) = rax_4
char* rax_5 = j_sub_140a82f30(0x28)
char* rdi = rax_5

if (rax_5 == 0)
    rdi = nullptr
else
    *rax_5 = arg2
    *(rax_5 + 8) = 0
    *(rax_5 + 0x10) = 0
    InitializeSRWLock(&rax_5[0x18])
    InitializeSRWLock(&rdi[0x20])

*(arg1 + 0x350) = rdi
char** rax_6 = j_sub_140a82f30(0x20)
char** rdi_1 = rax_6

if (rax_6 == 0)
    rdi_1 = nullptr
else
    char* rax_7 = j_sub_140a82f30(0x10)
    
    if (rax_7 == 0)
        rax_7 = nullptr
    else
        *rax_7 = 0
        *(rax_7 + 4) = 0
        *(rax_7 + 0xc) = 0
    
    *rdi_1 = rax_7
    char* rax_8 = j_sub_140a82f30(0x10)
    
    if (rax_8 == 0)
        rax_8 = nullptr
    else
        *rax_8 = 0
        *(rax_8 + 4) = 0
        *(rax_8 + 0xc) = 0
    
    rdi_1[1] = rax_8
    char* rax_9 = j_sub_140a82f30(0x10)
    
    if (rax_9 == 0)
        rdi_1[2] = 0
        rdi_1[3].w = 0
        *(rdi_1 + 0x1a) = 0
    else
        *rax_9 = 0
        *(rax_9 + 4) = 0
        *(rax_9 + 0xc) = 0
        rdi_1[2] = rax_9
        rdi_1[3].w = 0
        *(rdi_1 + 0x1a) = 0

*(arg1 + 0x358) = rdi_1
char* rax_10 = j_sub_140a82f30(0x18)
char* rax_11

if (rax_10 == 0)
    rax_11 = nullptr
else
    rax_11 = sub_141d2d8f0(rax_10, &var_d8)

*(arg1 + 0x360) = rax_11
void* rcx_6 = &arg1[0x378]
*(arg1 + 0x368) = 0
*(arg1 + 0x370) = 0
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_12 = *(rcx_6 + 0x10)

if (rax_12 != 0)
    rcx_6 = rax_12

*rcx_6 = 0
*(rcx_6 + 8) = 0
*(arg1 + 0x398) = 0xffffffff
*(arg1 + 0x39c) = 0
*(arg1 + 0x3a8) = 0
*(arg1 + 0x3b0) = 0
int64_t* rax_13 = j_sub_140a82f30(0x50)

if (rax_13 == 0)
    rax_13 = nullptr
else
    *rax_13 = 0
    rax_13[2] = 0
    rax_13[4] = 0

*(arg1 + 0x3c8) = rax_13
*(arg1 + 0x3c0) = rax_13
CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x28)
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)

*(arg1 + 0x3d0) = lpCriticalSection_1
void*** rax_14 = j_sub_140a82f30(0x18)

if (rax_14 == 0)
    rax_14 = nullptr
else
    rax_14[1].d = 1
    *rax_14 = &data_143222a48
    *(rax_14 + 0xc) = 1
    rax_14[2] = lpCriticalSection_1

*(arg1 + 0x3d8) = rax_14
__builtin_memset(&arg1[0x3e0], 0, 0x70)
InitializeSRWLock(&arg1[0x450])
*(arg1 + 0x458) = 0xffffff
void* rcx_11 = &arg1[0x470]
*(arg1 + 0x460) = 0
*(arg1 + 0x468) = 0
*(rcx_11 + 0x10) = 0
*(rcx_11 + 0x18) = 0
*(rcx_11 + 0x1c) = 0x80
void* rax_15 = *(rcx_11 + 0x10)

if (rax_15 != 0)
    rcx_11 = rax_15

*rcx_11 = 0
*(rcx_11 + 8) = 0
void* rcx_12 = &arg1[0x4c0]
__builtin_memset(&arg1[0x490], 0, 0x14)
*(arg1 + 0x4a8) = 0xffffff
*(arg1 + 0x4b0) = 0
*(arg1 + 0x4b8) = 0
*(rcx_12 + 0x10) = 0
*(rcx_12 + 0x18) = 0
*(rcx_12 + 0x1c) = 0x80
void* rax_16 = *(rcx_12 + 0x10)

if (rax_16 != 0)
    rcx_12 = rax_16

*rcx_12 = 0
*(rcx_12 + 8) = 0
void* rcx_13 = &arg1[0x510]
__builtin_memset(&arg1[0x4e0], 0, 0x14)
*(arg1 + 0x4f8) = 0xffffff
*(arg1 + 0x500) = 0
*(arg1 + 0x508) = 0
*(rcx_13 + 0x10) = 0
*(rcx_13 + 0x18) = 0
*(rcx_13 + 0x1c) = 0x80
void* rax_17 = *(rcx_13 + 0x10)

if (rax_17 != 0)
    rcx_13 = rax_17

*rcx_13 = 0
*(rcx_13 + 8) = 0
void* rcx_14 = &arg1[0x560]
__builtin_memset(&arg1[0x530], 0, 0x14)
*(arg1 + 0x548) = 0xffffff
*(arg1 + 0x550) = 0
*(arg1 + 0x558) = 0
*(rcx_14 + 0x10) = 0
*(rcx_14 + 0x18) = 0
*(rcx_14 + 0x1c) = 0x80
void* rax_18 = *(rcx_14 + 0x10)

if (rax_18 != 0)
    rcx_14 = rax_18

*rcx_14 = 0
*(rcx_14 + 8) = 0
__builtin_memset(&arg1[0x580], 0, 0x14)
__builtin_memset(&arg1[0x598], 0, 0x1c)
int64_t rdi_2 = sx.q(*(arg1 + 0x5a0))
int32_t rax_19 = (rdi_2 + 0x400).d
*(arg1 + 0x5a0) = rax_19

if (rax_19 s> *(arg1 + 0x5a4))
    sub_141d40c00(&arg1[0x598])

void* rdi_4 = rdi_2 * 0x210 + *(arg1 + 0x598)
int32_t i_3 = 0x400
int32_t i

do
    sub_141761aa0(rdi_4, 2)
    *(rdi_4 + 0x200) = 0
    rdi_4 += 0x210
    i = i_3
    i_3 -= 1
while (i != 1)
__builtin_memset(&arg1[0x5b8], 0, 0x1c)
int64_t rdi_5 = sx.q(*(arg1 + 0x5c0))
int32_t rax_20 = (rdi_5 + 0x64).d
*(arg1 + 0x5c0) = rax_20

if (rax_20 s> *(arg1 + 0x5c4))
    sub_141cac4f0(&arg1[0x5b8])

int32_t i_5 = 0x64
void* rdi_7 = rdi_5 * 0xf0 + *(arg1 + 0x5b8)
int32_t i_4 = 0x64
int32_t i_1

do
    sub_141760e40(rdi_7, 1)
    *(rdi_7 + 0xe0) = 0
    rdi_7 += 0xf0
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
__builtin_memset(&arg1[0x5d8], 0, 0x1c)
int64_t rsi_3 = sx.q(*(arg1 + 0x5e0))
int32_t rax_21 = (rsi_3 + 0x64).d
*(arg1 + 0x5e0) = rax_21

if (rax_21 s> *(arg1 + 0x5e4))
    sub_1408094f0(&arg1[0x5d8])

void*** r8_3 = rsi_3 * 0xc0 + *(arg1 + 0x5d8)
void* rdx_6 = &r8_3[3]
int32_t i_2

do
    *(rdx_6 - 0x10) = 0
    void* rcx_20 = rdx_6 + 0x40
    *r8_3 = &data_142fc6e58
    r8_3 = &r8_3[0x18]
    __builtin_memset(rdx_6 + 0x18, 0, 0x12)
    *(rdx_6 - 8) = 0
    *rdx_6 = 0
    *(rdx_6 + 0x2c) = 0xffffffff
    *(rdx_6 + 0x30) = 0
    *(rdx_6 + 0x38) = 0
    *(rdx_6 + 0x50) = 0
    *(rdx_6 + 0x58) = 0
    *(rdx_6 + 0x5c) = 0x80
    void* rax_22 = *(rdx_6 + 0x50)
    rdx_6 += 0xc0
    
    if (rax_22 != 0)
        rcx_20 = rax_22
    
    *rcx_20 = 0
    *(rcx_20 + 8) = 0
    __builtin_memset(rdx_6 - 0x60, 0, 0x30)
    *(rdx_6 - 0x28) = 0
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
*(arg1 + 0x6c) = 0
arg1[0x80] = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x74) = 0x3f800000
*(arg1 + 0x78) = 0x2edbe6ff
*(arg1 + 0x7c) = 1
void*** rax_23 = j_sub_140a82f30(0x9c0)
void*** rcx_21 = rax_23
void*** rcx_22

if (rax_23 == 0)
    rcx_22 = nullptr
else
    rax_23.b = *arg1 == 1
    rcx_22 = sub_1417a1c60(rcx_21, &arg1[0x88], data_143a21be0, data_143a21be4, rax_23.b)

void var_d0

if (&arg1[0x348] != &var_d0)
    void*** r8_5 = *(arg1 + 0x348)
    *(arg1 + 0x348) = rcx_22
    
    if (r8_5 != 0)
        (**r8_5)(r8_5, 1)
else if (rcx_22 != 0)
    (**rcx_22)(rcx_22, 1)

sub_141d40630(*(arg1 + 0x350))
void*** rdi_9 = *(arg1 + 0x348)
void** const var_68 = &data_142da2668
void*** var_78 = nullptr
int64_t (* var_88)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_141d35a20
int64_t (* var_c8)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_141d35a20
char* var_60 = arg1
int128_t* var_b8 = nullptr
sub_14074cce0(&var_68, &var_b8)
int128_t var_a8

if (&rdi_9[0x130] != &var_c8)
    int128_t zmm2 = *(rdi_9 + 0x980)
    int128_t zmm3 = *(rdi_9 + 0x990)
    int128_t zmm4_1 = *(rdi_9 + 0x9a0)
    int128_t zmm5_1 = *(rdi_9 + 0x9b0)
    int128_t zmm1_1 = var_b8.o
    *(rdi_9 + 0x980) = var_c8.o
    int128_t zmm0_1 = var_a8
    *(rdi_9 + 0x990) = zmm1_1
    *(rdi_9 + 0x9a0) = zmm0_1
    int128_t var_98
    *(rdi_9 + 0x9b0) = var_98
    var_c8.o = zmm2
    var_b8.o = zmm3
    var_a8 = zmm4_1
    int128_t var_98_1 = zmm5_1

if (var_c8 != 0)
    int128_t* rax_26 = var_b8
    int128_t* rcx_25 = &var_a8
    
    if (rax_26 != 0)
        rcx_25 = rax_26
    
    (*(*rcx_25 + 0x10))(rcx_25)

if (var_88 != 0)
    void** const* rcx_26 = &var_68
    
    if (var_78 != 0)
        rcx_26 = var_78
    
    void** const rdx_10 = *rcx_26
    rdx_10[2](rcx_26, rdx_10)

__security_check_cookie(rax_1 ^ &var_108)
return arg1
