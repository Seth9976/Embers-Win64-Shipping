// 函数: sub_1412908c0
// 地址: 0x1412908c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
wchar16 const* const r14
r14.b = 0
void*** var_110
int32_t var_e8
int128_t var_e4

if (*arg5 == 0)
    int64_t* rdx = *(arg2 + 8)
    var_e4 = zx.o(0)
    void*** rax_3 = *(*(arg3 + 8) + 0x44)
    int32_t var_b4_1 = rax_3.d
    var_110 = rax_3
    int32_t var_b0_1 = var_110:4.d
    wchar16 const* const var_88_1 = u"UnknownTexture2D"
    int32_t var_b8_1 = _mm_bsrli_si128(zx.o(0), 0xc).d
    var_e8 = 1
    int16_t var_a0_1 = 1
    int16_t var_7f_1 = 0
    char var_80_1 = 0
    var_88_1.o = var_88_1.o
    int16_t var_90_1 = 0
    int32_t var_ac_1 = 0
    int32_t var_a4_1 = 0x10000
    int32_t var_94_1 = 9
    wchar16 const* const var_88_2 = u"PlanarReflections"
    void*** rax_5
    int128_t zmm6_1
    rax_5, zmm6_1 = sub_14081d830(0x88, rdx, 1, 0)
    
    if (rax_5 == 0)
        rax_5 = nullptr
    else
        rax_5[1] = u"PlanarReflections"
        rax_5[2] = 0
        rax_5[3].b = 0
        *(rax_5 + 0x1c) = 0
        rax_5[4] = 0
        rax_5[5].w = 0x200
        *(rax_5 + 0x30) = zmm6_1
        *rax_5 = &data_142f11960
        *(rax_5 + 0x40) = var_b8_1.o
        rax_5[0x10] = 0
        *(rax_5 + 0x50) = 1.o
        *(rax_5 + 0x60) = 0xa:4.o
        *(rax_5 + 0x70) = var_88_2.o
    
    r14.b = 1
    *arg5 = rax_5

int64_t* rax_6 = sub_1412507e0(arg2)
rax_6[1] = *(arg3 + 8)
rax_6[3] = *(arg3 + 0x18)
rax_6[4] = *(arg3 + 0x20)
int64_t* var_108

if (sub_141270f20(data_143f0f1a0) != 0)
    int64_t* rbx_1 = data_1439b70c8
    int32_t var_114
    sub_140865c40(arg2 + 0xc0, &var_114, rbx_1)
    int64_t rax_8 = sx.q(var_114)
    void* const rcx_6
    
    if (rax_8.d == 0xffffffff)
        rcx_6 = nullptr
    else
        rcx_6 = *(arg2 + 0xc0) + rax_8 * 0x18
    
    int64_t* rax_10 = rcx_6 + 8
    
    if (rcx_6 == 0)
        rax_10 = nullptr
    
    void*** rcx_7
    
    if (rax_10 == 0)
        int128_t* rax_12 = (*(*rbx_1 + 0x10))(rbx_1, 0)
        void*** rax_13 = sub_14081d830(0x88, *(arg2 + 8), 1, 0)
        void*** rcx_9 = rax_13
        
        if (rax_13 == 0)
            rcx_9 = rax_13
        else
            rcx_9[1] = u"External"
            rcx_9[2] = 0
            rcx_9[3].b = 0
            *(rcx_9 + 0x1c) = 0
            rcx_9[4] = 0
            rcx_9[5].w = 0x200
            *rcx_9 = &data_142f11960
            *(rcx_9 + 0x30) = *rax_12
            *(rcx_9 + 0x40) = rax_12[1]
            *(rcx_9 + 0x50) = rax_12[2]
            *(rcx_9 + 0x60) = rax_12[3]
            int128_t zmm0_2 = rax_12[4]
            rcx_9[0x10] = 0
            *(rcx_9 + 0x70) = zmm0_2
        
        int64_t rax_14 = data_1439b70c8
        var_110 = rcx_9
        rcx_9[0x10] = rax_14
        var_110[2] = *(data_1439b70c8 + 0x10)
        var_108 = &var_110
        char var_100
        var_100.q = &data_1439b70c8
        sub_14107bc20(arg2 + 0x20, &var_114, &var_108, nullptr)
        var_108 = data_1439b70c8
        var_e8.q = &var_108
        var_e4:4.q = &var_110
        sub_14107baa0(arg2 + 0xc0, &var_114, &var_e8, nullptr)
        rcx_7 = var_110
    else
        rcx_7 = *rax_10
    
    rax_6[5] = rcx_7

sub_14142a1f0(&rax_6[0xa])
sub_1405d16e0(&rax_6[0x12], *(arg4 + 0x10))
var_108 = *arg5
r14.b += 1
char var_100_1 = r14.b
int16_t var_ff = 0
int32_t var_fc = 0xffffffff
*(rax_6 + 0xa0) = var_108.o
int64_t* rdx_7 = *(arg2 + 8)
var_108 = rax_6
var_100_1.q = arg4
void*** rax_20
char rcx_15
rax_20, rcx_15 = sub_14081d830(0x50, rdx_7, 1, 0)
void*** rbx_3 = rax_20

if (rax_20 == 0)
    rbx_3 = nullptr
else
    var_e8.q = rax_6
    sub_14126cec0(rcx_15)
    var_e4:4.q = &data_143eaade0
    var_e8.o = var_e8.o
    void var_118
    sub_141992bd0(rbx_3, &var_118, &var_e8, 1)
    *(rbx_3 + 0x38) = var_108.o
    *rbx_3 = &data_142f52d38
    rbx_3[9] = arg1

int64_t result = sub_1419968d0(arg2, rbx_3)
__security_check_cookie(rax_1 ^ &var_138)
return result
