// 函数: sub_141d552f0
// 地址: 0x141d552f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_408
int64_t rax_1 = __security_cookie ^ &var_408
void* var_3c8 = nullptr
void* var_3d0 = nullptr
char rax_3
uint128_t zmm6
rax_3, zmm6 = sub_142004670(sub_142003380(), nullptr, arg3, &var_3c8, &var_3d0)
int64_t* rcx_14

if (rax_3 != 0)
    uint128_t var_48_1 = zmm6
    void var_378
    sub_142004780(sub_142003380(), arg3, &var_378)
    void var_368
    sub_142004830(sub_142003380(), arg3, &var_368)
    int64_t rax_16 = *(arg1 + 8)
    int32_t var_b0_1 = 0
    int32_t var_ac
    __builtin_memset(&var_ac, 0xff, 0x14)
    int128_t var_358
    __builtin_memset(&var_358, 0, 0x30)
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x19)
    int128_t var_310_1 = zx.o(0)
    int128_t var_98_1 = data_142d3f5a0
    int64_t var_188 = rax_16
    int64_t var_180_1 = 0
    int32_t var_178_1 = 0xffffffff
    int16_t var_174_1 = 0x100
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x11)
    int32_t var_b4_1 = 0
    int64_t var_2fc
    __builtin_memset(&var_2fc, 0, 0x43)
    int16_t var_2b8_1 = 0
    bool var_6f_1 = *(rax_16 + 0x38) u> 1
    void var_170
    memset(&var_170, 0, 0xa8)
    int64_t rbx_13 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
    int64_t rax_17 = rbx_13 + 0x3a
    
    if (rax_17 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x3c)
        rbx_13 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
        rax_17 = rbx_13 + 0x3a
    
    wchar16 const* const rcx_18 = u"ConvertMedia_ExternalTexture"
    data_143f02bc8 = rax_17
    wchar16 const i
    
    do
        i = *rcx_18
        *(rbx_13 - u"ConvertMedia_ExternalTexture" + rcx_18) = i
        rcx_18 = &rcx_18[1]
    while (i != 0)
    void*** rcx_21 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_18 = &rcx_21[0x27]
    
    if (rax_18 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x140)
        rcx_21 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_18 = &rcx_21[0x27]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_18
    *data_143f02ba0 = rcx_21
    data_143f02ba0 = &rcx_21[1]
    sub_1405d11b0(rcx_21, &var_188, rbx_13)
    data_143f02d5c = 1
    sub_1405d19b0(&data_143f02b98, &var_188)
    int64_t var_78
    data_143f02d10 = var_78:7.b
    data_143f02d11 = 0
    data_143f02d5c = 1
    int64_t* rcx_24 = *arg2
    int32_t var_3d8
    (*(*rcx_24 + 0x20))(rcx_24, &var_3d8)
    sub_140fdc870(&data_143f02b98, &var_358)
    uint128_t zmm7 = zx.o(var_3d8)
    void*** rcx_27 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    int32_t var_3d4
    zmm6 = _mm_cvtepi32_ps(zx.o(var_3d4))
    void* rax_23 = &rcx_27[5]
    bool cond:0_1 = rax_23 u<= data_143f02bd0
    zmm7 = _mm_cvtepi32_ps(zmm7)
    
    if (not(cond:0_1))
        zmm6 = sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_27 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_23 = &rcx_27[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_23
    *data_143f02ba0 = rcx_27
    data_143f02ba0 = &rcx_27[1]
    *(rcx_27 + 0x1c) = zmm7.d
    rcx_27[4].d = zmm6.d
    *rcx_27 = &data_142d54998
    *(rcx_27 + 0x24) = 0x3f800000
    __builtin_memset(&rcx_27[1], 0, 0x14)
    int64_t var_318_1 = data_14395d9e8
    int64_t var_320_1 = data_14395da18
    int64_t var_328_1 = data_14395e020
    int32_t var_300_1 = 1
    int64_t* rax_30 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
    void* var_388
    sub_1419a2ec0(rax_30, &var_388, &data_143f10cd0, 0)
    void* rdx_13 = var_388
    var_358.q = data_1439c93a0
    int64_t rcx_33 = 0
    
    if (rdx_13 != 0)
        int64_t rdx_14 = sx.q(*(rdx_13 + 0x10c))
        void* var_380
        int64_t* rbx_16 = *(var_380 + 0x10)
        int64_t rax_31 = rbx_16[3]
        
        if (*(rax_31 + (rdx_14 << 3)) == 0)
            sub_1419ccf30(rbx_16, rdx_14.d)
            rax_31 = rbx_16[3]
        
        rcx_33 = *(rax_31 + (rdx_14 << 3))
    
    var_358:8.q = rcx_33
    void* var_3b8
    sub_1419a2ec0(rax_30, &var_3b8, &data_143f127e0, 0)
    void* rbx_17 = var_3b8
    int64_t rax_32 = 0
    
    if (rbx_17 != 0)
        int64_t rdx_16 = sx.q(*(rbx_17 + 0x10c))
        void* var_3b0
        int64_t* rdi_2 = *(var_3b0 + 0x10)
        int64_t rax_34 = rdi_2[3]
        
        if (*(rax_34 + (rdx_16 << 3)) == 0)
            sub_1419ccf30(rdi_2, rdx_16.d)
            rax_34 = rdi_2[3]
        
        rax_32 = *(rax_34 + (rdx_16 << 3))
    
    int128_t var_338
    var_338.q = rax_32
    sub_1419870b0(&data_143f02b98, &var_358, 2)
    void* rax_35 = var_3d0
    void* var_3a0 = rax_35
    
    if (rax_35 != 0)
        *(rax_35 + 8) += 1
        rbx_17 = var_3b8
    
    void* rax_36 = var_3c8
    void* var_398 = rax_36
    
    if (rax_36 != 0)
        *(rax_36 + 8) += 1
        rbx_17 = var_3b8
    
    void* var_3e0_1 = &var_378
    int32_t var_3e8_1 = &var_368
    sub_1419ad090(rbx_17, &data_143f02b98, &var_398, &var_3a0)
    int64_t var_3c0
    sub_141d56bf0(&var_3c0, zx.o(0), 0x3f800000, zx.o(0), 0x3f800000)
    int64_t rbx_18 = var_3c0
    void*** rcx_42 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_37 = &rcx_42[5]
    
    if (rax_37 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_42 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_37 = &rcx_42[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_37
    *data_143f02ba0 = rcx_42
    data_143f02ba0 = &rcx_42[1]
    rcx_42[1] = 0
    *rcx_42 = &data_142d56618
    rcx_42[2].d = 0
    rcx_42[3] = rbx_18
    rcx_42[4].d = 0
    uint128_t zmm7_1 = zx.o(var_3d8)
    void*** rcx_47 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(var_3d4))
    void* rax_40 = &rcx_47[5]
    bool cond:1_1 = rax_40 u<= data_143f02bd0
    zmm7_1 = _mm_cvtepi32_ps(zmm7_1)
    
    if (not(cond:1_1))
        zmm6_1 = sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_47 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_40 = &rcx_47[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_40
    *data_143f02ba0 = rcx_47
    data_143f02ba0 = &rcx_47[1]
    *(rcx_47 + 0x1c) = zmm7_1.d
    rcx_47[4].d = zmm6_1.d
    *rcx_47 = &data_142d54998
    *(rcx_47 + 0x24) = 0x3f800000
    __builtin_memset(&rcx_47[1], 0, 0x14)
    void*** rcx_52 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_43 = &rcx_52[4]
    
    if (rax_43 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x28)
        rcx_52 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_43 = &rcx_52[4]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_43
    *data_143f02ba0 = rcx_52
    data_143f02ba0 = &rcx_52[1]
    rcx_52[1] = 0
    *rcx_52 = &data_142d54988
    rcx_52[2].d = 0
    *(rcx_52 + 0x14) = 2
    rcx_52[3].d = 1
    sub_1405d1550(&var_3c0)
    sub_141096650(&data_143f02b98)
    int64_t rcx_56 = *(arg1 + 8)
    int64_t* rbx_21 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_46 = &rbx_21[1]
    
    if (rax_46 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x10)
        rbx_21 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_46 = &rbx_21[1]
    
    data_143f02bc8 = rax_46
    *rbx_21 = rcx_56
    void*** rcx_59 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_47 = &rcx_59[5]
    
    if (rax_47 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_59 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_47 = &rcx_59[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_47
    *data_143f02ba0 = rcx_59
    data_143f02ba0 = &rcx_59[1]
    rcx_59[1] = 0
    *rcx_59 = &data_142d549c8
    rcx_59[2].d = 1
    rcx_59[3] = rbx_21
    rcx_59[4].d = 0
    int64_t var_80
    rcx_14 = &var_80
else
    int64_t rax_4 = *(arg1 + 8)
    int128_t zmm1 = data_142d3f5a0
    int32_t var_1d0_1 = 0
    int32_t var_1cc
    __builtin_memset(&var_1cc, 0xff, 0x14)
    int128_t var_1b8_1 = zmm1
    int64_t var_1a8
    __builtin_memset(&var_1a8, 0, 0x19)
    int64_t var_2a8 = rax_4
    int64_t var_2a0_1 = 0
    int32_t var_298_1 = 0xffffffff
    int16_t var_294_1 = 0x900
    int64_t var_1e8
    __builtin_memset(&var_1e8, 0, 0x11)
    int32_t var_1d4_1 = 0
    bool var_18f_1 = *(rax_4 + 0x38) u> 1
    void var_290
    memset(&var_290, 0, 0xa8)
    int64_t rbx_3 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
    int64_t rax_5 = rbx_3 + 0x1a
    
    if (rax_5 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x1c)
        rbx_3 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
        rax_5 = rbx_3 + 0x1a
    
    wchar16 const* const rcx_2 = u"ClearTexture"
    data_143f02bc8 = rax_5
    wchar16 const i_1
    
    do
        i_1 = *rcx_2
        *(rcx_2 + rbx_3 - u"ClearTexture") = i_1
        rcx_2 = &rcx_2[1]
    while (i_1 != 0)
    void*** rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_5[0x27]
    
    if (rax_6 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x140)
        rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_5[0x27]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_6
    *data_143f02ba0 = rcx_5
    data_143f02ba0 = &rcx_5[1]
    sub_1405d11b0(rcx_5, &var_2a8, rbx_3)
    data_143f02d5c = 1
    sub_1405d19b0(&data_143f02b98, &var_2a8)
    int64_t var_198
    data_143f02d10 = var_198:7.b
    data_143f02d11 = 0
    data_143f02d5c = 1
    sub_141096650(&data_143f02b98)
    int64_t rcx_8 = *(arg1 + 8)
    int64_t* rbx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_10 = &rbx_8[1]
    
    if (rax_10 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x10)
        rbx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_10 = &rbx_8[1]
    
    data_143f02bc8 = rax_10
    *rbx_8 = rcx_8
    void*** rcx_11 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_11[5]
    
    if (rax_11 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_11 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_11[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_11
    *data_143f02ba0 = rcx_11
    data_143f02ba0 = &rcx_11[1]
    rcx_11[1] = 0
    *rcx_11 = &data_142d549c8
    rcx_11[2].d = 1
    rcx_11[3] = rbx_8
    rcx_11[4].d = 0
    int64_t var_1a0
    rcx_14 = &var_1a0

sub_1405d1550(rcx_14)
sub_1405d1550(&var_3d0)
int64_t result = sub_1405d1550(&var_3c8)
__security_check_cookie(rax_1 ^ &var_408)
return result
