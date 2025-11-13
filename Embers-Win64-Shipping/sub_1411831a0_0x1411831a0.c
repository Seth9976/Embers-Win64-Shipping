// 函数: sub_1411831a0
// 地址: 0x1411831a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t var_70 = __security_cookie ^ &var_208
int32_t r12 = 0
int64_t var_100
__builtin_memset(&var_100, 0, 0x48)
void*** var_1d8 = arg4
int128_t var_108
sub_14142a030(arg1, &var_108)
int32_t* rax_2 = sub_14081d830(0x230, arg1[1], 1, 0)
int32_t* rsi = rax_2

if (rax_2 == 0)
    rsi = nullptr
else
    sub_14117aa90(rax_2)
    *(rsi + 0x160) = 0
    *(rsi + 0x168) = 0
    __builtin_memset(&rsi[0x5e], 0, 0x20)
    sub_14117af20(&rsi[0x68])

memset(rsi, 0, 0x230)
void var_88
sub_14118c8f0(&var_88, *arg1, arg2)
void var_80
*(rsi + 0x108) = sub_1410fccd0(arg1, &var_80, u"HairMeanEnergyLUTTexture", 0)
*(rsi + 0x110) = sub_1410fccd0(arg1, &var_88, u"HairScatteringEnergyLUTTexture", 0)
int64_t* rdi = &data_1439b70c8
*(rsi + 0x118) = data_14395f4d0
*rsi = *(arg5 + 0xcc)

if (arg6 == 0)
    int32_t rcx_8 = data_143e6a530
    r12 = 1
    
    if (rcx_8 != 0 && rcx_8 == 1)
        r12 = 2
else
    *(rsi + 0xf0) = arg6
    int64_t* rdx_5 = &data_1439b70c8
    
    if (*(arg3 + 0x28) != 0)
        rdx_5 = arg3 + 0x28
    
    *(rsi + 0x100) = sub_1410fccd0(arg1, rdx_5, u"External", 0)

rsi[0xa] = *(arg3 + 0xd4)
rsi[0xb] = *(arg3 + 0xd8)
*(rsi + 0x40) = sub_1410fccd0(arg1, arg3 + 0x98, u"External", 0)
int64_t r8_1
int32_t r9
float zmm0_1
zmm0_1, r8_1, r9 = tanf(_mm_max_ss(data_1439b5f8c, 0) * 0.0174532924f)
rsi[1] = zmm0_1
rsi[8] = __maxss_xmmss_memss(data_1439b5fa4, 0x3f800000)
int32_t rax_13

if (*(arg3 + 0x30) == 0 || data_1439b5f9c == 0)
    rax_13 = 0
else
    rax_13 = 1

rsi[9] = rax_13
rsi[2] = *(*(arg3 + 0xa8) + 0xbc)
int32_t rcx_11 = 1

if (data_1439b5f90 u>= 1)
    rcx_11 = data_1439b5f90

rsi[3] = rcx_11
int32_t rax_15
rax_15.b = data_143e6a52c != 0
rsi[7] = rax_15
bool var_178[0x10]
bool* rax_16 = sub_1411e1150(&var_178)
int32_t var_1c6 = *rax_16
char var_1c2 = rax_16[4]
rsi[4] = sub_1411fc260(&var_1c6, 0, r8_1, r9)
rsi[5] = sub_1411e11b0()
rsi[6] = _mm_max_ss(data_1439b5f98, 0)
*(rsi + 0x30) = *(data_1439b7100 + 0x10)
*(rsi + 0x38) = data_14395f4d0

if (*(arg3 + 0x30) != 0)
    rdi = arg3 + 0x30

void*** rax_21 = sub_1410fccd0(arg1, rdi, u"External", 0)
void*** rdx_8 = var_1d8
*(rsi + 0xf8) = rax_21
*(rsi + 0x60) = var_108
__builtin_memset(&rsi[0x1c], 0, 0x40)
sub_1405d16e0(&rsi[0x52], rdx_8[0x18])
sub_14142a1f0(&rsi[0x2c])
sub_1405d16e0(&rsi[0x4a], arg2[2])
sub_1405d16e0(&rsi[0x4e], arg2[0xa0a])
int128_t var_168 = data_142d3f660
int64_t var_150
__builtin_memset(&var_150, 0, 0x20)
int128_t var_128
__builtin_memset(&var_128, 0, 0x18)
sub_14123d450(arg2, &var_168)
int64_t* rcx_22 = data_143f0f180
void*** var_1a8
(*(*rcx_22 + 0xf8))(rcx_22, &var_1a8, &var_168, &data_143e81d10, 0, 1)
void*** rax_23 = var_1a8
var_1d8 = rax_23

if (rax_23 != 0)
    rax_23[1].d += 1

sub_1405d1550(&var_1a8)
sub_1405d1600(&rsi[0x4c], &var_1d8)
sub_1405d1550(&var_1d8)
sub_1405d16e0(&rsi[0x50], *(arg2[0x2a8] + 0x280))
*(rsi + 0x120) = 0

if (arg7 != 0)
    rsi[0x5d] = 0x8000
    rsi[0x5c] = 0x20
    int32_t rax_24 = 0
    void*** rdi_1 = *arg7
    int64_t* rdx_17 = arg1[1]
    var_1d8 = rdi_1
    int64_t var_1d0
    var_1d0:4.w = 0
    
    if ((rdi_1[7].d & 0x100) != 0)
        rax_24 = 0x1c
    
    var_1d0.d = rax_24
    void*** rax_25 = sub_14081d830(0x28, rdx_17, 1, 0)
    
    if (rax_25 == 0)
        rax_25 = nullptr
    else
        int128_t zmm0_5 = var_1d8.o
        rax_25[1] = rdi_1[1]
        rax_25[2] = 0
        *(rax_25 + 0x18) = zmm0_5
        *rax_25 = &data_142f285c0
    
    *(rsi + 0x178) = rax_25
    void*** rdi_2 = arg7[1]
    int64_t* rdx_18 = arg1[1]
    var_1d8 = rdi_2
    var_1d0.d = 0x1c
    var_1d0:4.w = 0
    void*** rax_26 = sub_14081d830(0x28, rdx_18, 1, 0)
    
    if (rax_26 == 0)
        rax_26 = nullptr
    else
        int128_t zmm0_6 = var_1d8.o
        rax_26[1] = rdi_2[1]
        *rax_26 = &data_142f285c0
        rax_26[2] = 0
        *(rax_26 + 0x18) = zmm0_6
    
    *(rsi + 0x180) = rax_26
    void*** rdi_3 = arg7[2]
    int32_t rax_27 = 0
    int64_t* rdx_19 = arg1[1]
    var_1d8 = rdi_3
    var_1d0:4.w = 0
    
    if ((rdi_3[7].d & 0x100) != 0)
        rax_27 = 0x1c
    
    var_1d0.d = rax_27
    void*** rax_28 = sub_14081d830(0x28, rdx_19, 1, 0)
    
    if (rax_28 == 0)
        rax_28 = nullptr
    else
        int128_t zmm0_7 = var_1d8.o
        rax_28[1] = rdi_3[1]
        *rax_28 = &data_142f285c0
        rax_28[2] = 0
        *(rax_28 + 0x18) = zmm0_7
    
    *(rsi + 0x188) = rax_28
    void*** rdi_4 = arg7[3]
    int64_t* rdx_20 = arg1[1]
    var_1d8 = rdi_4
    var_1d0.d = 0x1c
    var_1d0:4.w = 0
    void*** rax_29 = sub_14081d830(0x28, rdx_20, 1, 0)
    
    if (rax_29 == 0)
        rax_29 = nullptr
    else
        int128_t zmm0_8 = var_1d8.o
        rax_29[1] = rdi_4[1]
        *rax_29 = &data_142f285c0
        rax_29[2] = 0
        *(rax_29 + 0x18) = zmm0_8
    
    *(rsi + 0x190) = rax_29

void*** rax_30 = sub_141193740(arg1, arg3 + 0xa8, u"HairVisibilityNodeData", 0)
void*** rax_31 = sub_141193740(arg1, arg3 + 0xb8, u"HairVisibilityNodeCoord", 0)
bool cond:1 = (rax_30[7].d & 0x100) == 0
var_1d8 = rax_30
int64_t var_1d0_1 = 1

if (not(cond:1))
    var_1d0_1.d = 4
    var_1d0_1:4.d = 0x1c

void*** rax_32 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_32 == 0)
    rax_32 = nullptr
else
    int128_t zmm0_9 = var_1d8.o
    rax_32[1] = rax_30[1]
    rax_32[2] = 0
    *(rax_32 + 0x18) = zmm0_9
    *rax_32 = &data_142f285c0

*(rsi + 0x48) = rax_32
bool cond:2 = (rax_31[7].d & 0x100) == 0
var_1d8 = rax_31
int64_t var_1d0_2 = 1

if (not(cond:2))
    var_1d0_2.d = 4
    var_1d0_2:4.d = 0x1c

void*** rax_33
int512_t zmm6
rax_33, zmm6 = sub_14081d830(0x28, arg1[1], 1, 0)
int128_t zmm0_10

if (rax_33 == 0)
    rax_33 = nullptr
else
    zmm0_10 = var_1d8.o
    rax_33[1] = rax_31[1]
    *rax_33 = &data_142f285c0
    rax_33[2] = 0
    *(rax_33 + 0x18) = zmm0_10

bool cond:4 = rsi[3] u> 0x10
*(rsi + 0x50) = rax_33
int32_t var_184 = r12
int32_t rax_34
rax_34.b = cond:4
int64_t rbx_2 = *(arg3 + 0xd4)
int32_t rax_35
rax_35.b = arg7 != 0
int32_t var_180 = rax_35
zmm0_10 = rax_34.o
int32_t rdi_6 = zmm0_10.d

if ((zmm0_10.q u>> 0x20).d == 0)
    rdi_6 = 0

int128_t var_b8
sub_1419a2ec0(arg2[0xa2a], &var_b8, &data_143e6d070, 0)
uint64_t rdx_26 = zx.q(zmm0_10:8.d)
int128_t zmm7 = var_b8
int128_t var_a8
sub_1419a2ec0(arg2[0xa2a], &var_a8, &data_143e6cf70, 
    rdi_6 + ((rdx_26.d + zmm0_10:4.d + (rdx_26 << 1).d) << 1))
zmm6.o = var_a8
void*** rax_39
int128_t zmm6_1
rax_39, zmm6_1 = sub_1410fccd0(arg1, arg3 + 0xe0, u"External", 0)
int16_t var_1b0 = 1
char var_1ae = 0
int32_t var_1ac = 0xffffffff
*(rsi + 0x1a0) = rax_39.o
int64_t* rdx_30 = arg1[1]
var_168.q = rsi
var_168 = zmm7
int128_t var_148
var_148:8.q = rbx_2
var_150.o = zmm6_1
void*** rax_40
char rcx_39
rax_40, rcx_39 = sub_14081d830(0x70, rdx_30, 1, 0)
void*** rbx_3 = rax_40

if (rax_40 == 0)
    rbx_3 = nullptr
else
    int128_t var_198
    var_198.q = rsi
    sub_14118e470(rcx_39)
    void var_1c8
    void* rdx_31 = &var_1c8
    var_198:8.q = &data_143e74140
    void var_1c7
    
    if (arg6 != 0)
        rdx_31 = &var_1c7
    int128_t var_98 = var_198
    sub_141992bd0(rbx_3, rdx_31, &var_98, 1)
    int128_t zmm0_13 = var_168
    *rbx_3 = &data_142f2c9b8
    *(rbx_3 + 0x38) = zmm0_13
    uint128_t var_158
    *(rbx_3 + 0x48) = var_158
    *(rbx_3 + 0x58) = var_148
    rbx_3[0xd] = arg2

int64_t result = sub_1419968d0(arg1, rbx_3)
int64_t i = 3
int64_t* rdi_7 = &var_70

do
    int64_t* rcx_42 = rdi_7[-1]
    rdi_7 = &rdi_7[-1]
    i -= 1
    
    if (rcx_42 != 0)
        result = (*(*rcx_42 + 0x38))(rcx_42)
while (i != 0)

__security_check_cookie(var_70 ^ &var_208)
return result
