// 函数: sub_1410b54c0
// 地址: 0x1410b54c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg4 + 0x10)
int64_t rax = *(arg2 + 0x1b0)
int64_t arg_10 = rax
sub_1410809a0(arg1, arg2, rax, r9)
void* arg_30
int64_t var_f0 = *(arg_30 + 0x10)

if (arg6 != 0)
    int64_t var_e8_1 = *(arg6 + 8)

int32_t r12
r12.b = arg6 != 0
uint64_t r12_1 = zx.q(r12 + 1)
int64_t* r14_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint64_t rdx = zx.q((r12_1 << 3).d)
void* rax_4 = r14_2 + rdx

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, rdx.d + 8)
    r14_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = r14_2 + zx.q(rdx.d)

*(arg2 + 0x30) = rax_4
uint64_t i_1 = zx.q(r12_1.d)
int64_t* rcx_1 = r14_2
uint64_t i

do
    *rcx_1 = *(&var_f0 - r14_2 + rcx_1)
    rcx_1 = &rcx_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_4[6]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_4[6]

*(arg2 + 0x30) = rax_6
void**** rax_7 = *(arg2 + 8)
*(arg2 + 0x14) += 1
void* r9_1 = arg_30
*rax_7 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = r12_1.d
rcx_4[3] = r14_2
rcx_4[4].d = 2
*(rcx_4 + 0x24) = 3
rcx_4[5] = 0
sub_141083370(arg1 + 0x12e, arg2, &arg_10, *(r9_1 + 8), *(r9_1 + 0x10))

if (arg6 != 0)
    sub_14077c370(arg1 + 0x120, arg2, &arg_10, arg6)

int64_t var_148
var_148.d = 0
void arg_38
sub_14077c4b0(arg2, &arg_10, arg1 + 0x128, &arg_38, 0)
int64_t r15_1

if (*(arg1 + 0x138) u<= 0)
    r15_1 = arg_10
else
    uint32_t r14_5 = zx.d(*(arg1 + 0x136))
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_13[5]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_13[5]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15_1 = arg_10
    *rax_11 = rcx_13
    *(arg2 + 8) = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142da77b8
    rcx_13[4] = arg11
    rcx_13[2] = r15_1
    rcx_13[3].d = r14_5

int32_t r8_5 = *(arg4 + 0x1548)

if (*(arg1 + 0x164) != 0xffff)
    void** rcx_17 = &arg_30
    
    if (r8_5 s< 3)
        sub_14137b7f0(rcx_17, arg2)
    else
        sub_14137baa0(rcx_17, arg2, 0xf, r8_5)
    
    sub_14077caf0(arg2, &arg_10, arg1 + 0x164, arg_30)
    sub_1405d1550(&arg_30)

var_148.d = 0
void arg_48
int128_t zmm6 = sub_14077c4b0(arg2, &arg_10, arg1 + 0x13a, &arg_48, 0)
int64_t var_118

if (arg5 != 0)
    int64_t* r14_7 = *(arg5 + 0x20)
    int64_t var_80_1 = 0
    int128_t var_d8
    (*(*r14_7 + 0x68))(r14_7, &var_d8)
    var_148.d = 0
    void var_b8
    sub_14077c5f0(arg2, &arg_10, arg1 + 0x140, &var_b8, 0)
    var_118.o = var_d8
    var_148.d = 0
    sub_14077c870(arg2, &arg_10, arg1 + 0x146, &var_118, 0)
    int32_t var_9c
    float zmm1_1
    
    if (var_9c f!= 0f)
        zmm1_1 = 0.00100000005f
        
        if (not(var_9c f< 0.00100000005f))
            zmm1_1 = _mm_min_ss(1f f/ (var_d8:0xc.d f* 4f), var_9c)
    else
        zmm1_1 = 20f
    
    arg_30.d = zmm1_1
    var_148.d = 0
    sub_140741e30(arg2, &arg_10, arg1 + 0x14c, &arg_30, 0)
    arg_30.d = r14_7[0x20].d
    var_148.d = 0
    int128_t zmm0_4 = sub_140741e30(arg2, &arg_10, arg1 + 0x152, &arg_30, 0)
    (*(*r14_7 + 0x48))(r14_7)
    int128_t zmm7
    zmm7.d = zmm0_4.d f* 5f
    
    if (zmm7.d f>= 1f)
        zmm7 = __minss_xmmss_memss(zmm7.d, 0x41f00000)
    else
        zmm7 = 0x3f800000
    
    zmm7.d = zmm7.d f* 0.0174532924f
    (*(*r14_7 + 0x50))(r14_7)
    int32_t var_100 = zmm7.d
    zmm7.d = zmm7.d f+ 1.57079637f
    float var_fc_1 = cosf(zmm7.d)
    int32_t var_f8_1 = zmm0_4.d
    var_148.d = 0
    sub_14077c5f0(arg2, &arg_10, arg1 + 0x158, &var_100, 0)
    int512_t zmm6_2
    zmm6_2.o = zmm6

var_148.d = 0
arg_30.d = arg7[1].d - *arg7
arg_30:4.d = *(arg7 + 0xc) - *(arg7 + 4)
var_118 = *arg7
void* var_110 = arg_30
sub_14077c870(arg2, &arg_10, arg1 + 0x15e, &var_118, 0)
var_148.d = 0
void arg_60
sub_140741e30(arg2, &arg_10, arg1 + 0x166, &arg_60, 0)
var_148.d = 0
void arg_68
sub_140741e30(arg2, &arg_10, arg1 + 0x16c, &arg_68, 0)

if (*(arg1 + 0x174) u> 0)
    uint32_t r14_8 = zx.d(*(arg1 + 0x172))
    void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_35[5]
    
    if (rax_24 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_35[5]
    
    *(arg2 + 0x30) = rax_24
    void**** rax_25 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_25 = rcx_35
    *(arg2 + 8) = &rcx_35[1]
    rcx_35[1] = 0
    rcx_35[4] = arg8
    *rcx_35 = &data_142d99560
    rcx_35[2] = r15_1
    rcx_35[3].d = r14_8

var_148.d = 0
void arg_78
sub_140741e30(arg2, &arg_10, arg1 + 0x176, &arg_78, 0)

if (*(arg1 + 0x17e) u> 0)
    uint32_t r14_9 = zx.d(*(arg1 + 0x17c))
    void*** rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_28 = &rcx_42[5]
    
    if (rax_28 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_28 = &rcx_42[5]
    
    *(arg2 + 0x30) = rax_28
    void**** rax_29 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_29 = rcx_42
    *(arg2 + 8) = &rcx_42[1]
    rcx_42[1] = 0
    rcx_42[4] = arg9
    *rcx_42 = &data_142d99560
    rcx_42[2] = r15_1
    rcx_42[3].d = r14_9

var_148.d = 0
void arg_50
sub_140741e30(arg2, &arg_10, arg1 + 0x180, &arg_50, 0)
float zmm0_7 = cosf(data_1439b5218)
float var_108 = zmm0_7
var_148.d = 0
int128_t zmm8
zmm8.d = 1f / (1f - zmm0_7)
int32_t var_104 = zmm8.d
sub_14077c4b0(arg2, &arg_10, arg1 + 0x186, &var_108, 0)

if (*(arg1 + 0x18e) u> 0)
    uint32_t r14_10 = zx.d(*(arg1 + 0x18c))
    void*** rcx_50 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_32 = &rcx_50[5]
    
    if (rax_32 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_50 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_32 = &rcx_50[5]
    
    *(arg2 + 0x30) = rax_32
    void**** rax_33 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_33 = rcx_50
    *(arg2 + 8) = &rcx_50[1]
    rcx_50[1] = 0
    rcx_50[4] = arg10
    *rcx_50 = &data_142d99560
    rcx_50[2] = r15_1
    rcx_50[3].d = r14_10

var_148.d = 0
int32_t arg_8 = *(arg3 + 0x6320)
sub_140741e30(arg2, &arg_10, arg1 + 0x190, &arg_8, 0)
uint64_t result = sx.q(*(arg3 + 0x18d0))
void* r9_20 = *(arg3 + (result << 3) + 0x18b8)

if (r9_20 == 0)
    return result

void* rdx_21 = data_143a2dd48
char var_120_1 = 0
var_148.d = *(arg3 + 0x18b0)
return sub_14107ee50(arg1 + 0x196, arg2, &arg_10, r9_20, 0, rdx_21.d, *(rdx_21 + 0x60), 
    *(rdx_21 + 0x64), (*(rdx_21 + 0x68)).b)
