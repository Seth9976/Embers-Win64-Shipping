// 函数: sub_1410b4da0
// 地址: 0x1410b4da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg4 + 0x10)
int64_t rcx = *(arg2 + 0x1b0)
int64_t arg_10 = rcx
sub_1410809a0(arg1, arg2, rcx, r9)
void* arg_30
int64_t var_f0 = *(arg_30 + 0x10)

if (arg6 != 0)
    int64_t var_e8_1 = *(arg6 + 8)

int32_t r12
r12.b = arg6 != 0
uint64_t r12_1 = zx.q(r12 + 1)
int64_t* r14_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint64_t rdx = zx.q((r12_1 << 3).d)
void* rax_3 = r14_2 + rdx

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, rdx.d + 8)
    r14_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = r14_2 + zx.q(rdx.d)

*(arg2 + 0x30) = rax_3
uint64_t i_1 = zx.q(r12_1.d)
int64_t* rcx_3 = r14_2
uint64_t i

do
    *rcx_3 = *(&var_f0 - r14_2 + rcx_3)
    rcx_3 = &rcx_3[1]
    i = i_1
    i_1 -= 1
while (i != 1)
void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_6[6]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_6[6]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
void* r9_1 = arg_30
*rax_6 = rcx_6
*(arg2 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142da7798
rcx_6[2].d = r12_1.d
rcx_6[3] = r14_2
rcx_6[4].d = 2
*(rcx_6 + 0x24) = 3
rcx_6[5] = 0
sub_141083370(arg1 + 0x118, arg2, &arg_10, *(r9_1 + 8), *(r9_1 + 0x10))

if (arg6 != 0)
    sub_14077c370(arg1 + 0x120, arg2, &arg_10, arg6)

int64_t var_148
var_148.d = 0
void arg_38
sub_14077c4b0(arg2, &arg_10, arg1 + 0x128, &arg_38, 0)
int32_t r8_5 = *(arg4 + 0x1548)

if (*(arg1 + 0x164) != 0xffff)
    void** rcx_13 = &arg_30
    
    if (r8_5 s< 3)
        sub_14137b7f0(rcx_13, arg2)
    else
        sub_14137baa0(rcx_13, arg2, 0xf, r8_5)
    
    sub_14077caf0(arg2, &arg_10, arg1 + 0x164, arg_30)
    sub_1405d1550(&arg_30)

var_148.d = 0
void arg_48
int128_t zmm6 = sub_14077c4b0(arg2, &arg_10, arg1 + 0x13a, &arg_48, 0)
int64_t var_118

if (arg5 != 0)
    int64_t* r14_6 = *(arg5 + 0x20)
    int64_t var_80_1 = 0
    int128_t var_d8
    (*(*r14_6 + 0x68))(r14_6, &var_d8)
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
    arg_30.d = r14_6[0x20].d
    var_148.d = 0
    int128_t zmm0_4 = sub_140741e30(arg2, &arg_10, arg1 + 0x152, &arg_30, 0)
    (*(*r14_6 + 0x48))(r14_6)
    int128_t zmm7
    zmm7.d = zmm0_4.d f* 5f
    
    if (zmm7.d f>= 1f)
        zmm7 = __minss_xmmss_memss(zmm7.d, 0x41f00000)
    else
        zmm7 = 0x3f800000
    
    zmm7.d = zmm7.d f* 0.0174532924f
    (*(*r14_6 + 0x50))(r14_6)
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
int64_t r15_1

if (*(arg1 + 0x174) u<= 0)
    r15_1 = arg_10
else
    uint32_t r14_7 = zx.d(*(arg1 + 0x172))
    void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_19 = &rcx_31[5]
    
    if (rax_19 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_19 = &rcx_31[5]
    
    *(arg2 + 0x30) = rax_19
    void**** rax_20 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15_1 = arg_10
    *rax_20 = rcx_31
    *(arg2 + 8) = &rcx_31[1]
    rcx_31[1] = 0
    rcx_31[4] = arg8
    *rcx_31 = &data_142d99560
    rcx_31[2] = r15_1
    rcx_31[3].d = r14_7

var_148.d = 0
void arg_78
sub_140741e30(arg2, &arg_10, arg1 + 0x176, &arg_78, 0)

if (*(arg1 + 0x17e) u> 0)
    uint32_t r14_8 = zx.d(*(arg1 + 0x17c))
    void*** rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_23 = &rcx_38[5]
    
    if (rax_23 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_23 = &rcx_38[5]
    
    *(arg2 + 0x30) = rax_23
    void**** rax_24 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_24 = rcx_38
    *(arg2 + 8) = &rcx_38[1]
    rcx_38[1] = 0
    rcx_38[4] = arg9
    *rcx_38 = &data_142d99560
    rcx_38[2] = r15_1
    rcx_38[3].d = r14_8

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
    uint32_t r14_9 = zx.d(*(arg1 + 0x18c))
    void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_27 = &rcx_46[5]
    
    if (rax_27 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_27 = &rcx_46[5]
    
    *(arg2 + 0x30) = rax_27
    void**** rax_28 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_28 = rcx_46
    *(arg2 + 8) = &rcx_46[1]
    rcx_46[1] = 0
    rcx_46[4] = arg10
    *rcx_46 = &data_142d99560
    rcx_46[2] = r15_1
    rcx_46[3].d = r14_9

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
