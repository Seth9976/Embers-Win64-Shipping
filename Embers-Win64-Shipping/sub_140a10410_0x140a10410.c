// 函数: sub_140a10410
// 地址: 0x140a10410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58 = arg4[0]
void var_378
int64_t rax_1 = __security_cookie ^ &var_378
int64_t* r15 = arg2[1]
void* r12 = arg1
int64_t* r14 = *arg2

if (r15 != 0)
    r15[1].d += 1

void* rsi = arg2[2]
uint64_t r9 = zx.q(r14[5].d)
int128_t var_1c8
int128_t* var_330 = &var_1c8
int64_t* rcx_1 = data_143f0f180
int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
int32_t var_338 = 0x119
var_1c8 = zx.o(0)
int32_t var_1a4 = rax_3
int128_t var_1b4 = data_143dbb1e0
int32_t var_1b8 = 1
char var_1a0 = 0
int64_t var_198 = 0
int32_t var_190 = 0
void* const var_328
(*(*rcx_1 + 0x560))(rcx_1, &var_328, &data_143f02b98, r9, *(r14 + 0x2c), 2, 1, 1, var_338, var_330)
void* const rdx_1 = var_328
void* const var_2d8 = rdx_1
var_328 = nullptr
sub_1405d16e0(&r14[2], rdx_1)
sub_1405d1550(&var_328)
sub_1405d1550(&var_2d8)
int32_t rcx_5 = *(rsi + 0x1c)
int64_t r8 = *(r12 + 0x40)
void* var_320 = rsi
sub_140a0f240(&var_320, &data_143f02b98, r8, 0, arg3, rcx_5)
sub_140a0f240(&var_320, &data_143f02b98, *(r12 + 0x48), 1, arg3, *(rsi + 0x1c) u>> 1)
sub_140a0f240(&var_320, &data_143f02b98, *(r12 + 0x50), 2, arg3, *(rsi + 0x1c) u>> 1)
int64_t* rax_8 = (*(*r14 + 0x30))(r14)
int32_t r14_1 = 0
int32_t var_b0 = 0
int128_t var_98 = data_142d3f5a0
int64_t var_88
__builtin_memset(&var_88, 0, 0x19)
int32_t var_ac
__builtin_memset(&var_ac, 0xff, 0x14)
int64_t* var_188 = rax_8
int64_t var_180 = 0
int32_t var_178 = 0xffffffff
int16_t var_174 = 0x500
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x11)
int32_t var_b4 = 0
bool var_6f = rax_8[7].d u> 1
void var_170
memset(&var_170, 0, 0xa8)
int64_t rbx_2 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
int64_t rax_9 = rbx_2 + 0x22

if (rax_9 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x24)
    rbx_2 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
    rax_9 = rbx_2 + 0x22

wchar16 const* const rcx_13 = u"ConvertYUVtoRGBA"
data_143f02bc8 = rax_9
wchar16 const i

do
    i = *rcx_13
    *(rcx_13 + rbx_2 - u"ConvertYUVtoRGBA") = i
    rcx_13 = &rcx_13[1]
while (i != 0)
void*** rcx_16 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_16[0x27]

if (rax_10 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x140)
    rcx_16 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_16[0x27]

data_143f02bc8 = rax_10
void**** rax_11 = data_143f02ba0
data_143f02bac += 1
*rax_11 = rcx_16
data_143f02ba0 = &rcx_16[1]
sub_1405d11b0(rcx_16, &var_188, rbx_2)
data_143f02d5c = 1
sub_1405d19b0(&data_143f02b98, &var_188)
int64_t var_78
data_143f02d10 = var_78:7.b
data_143f02d11 = 0
data_143f02d5c = 1
int64_t* rax_15 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_2a0
sub_1419a2ec0(rax_15, &var_2a0, &data_143f11ae0, 0)
void* var_290
sub_1419a2ec0(rax_15, &var_290, &data_143f10cd0, 0)
uint64_t rax_16 = zx.q(data_143f02c38)
int64_t var_210
__builtin_memset(&var_210, 0, 0x2c)
int64_t var_1e0 = 0
int32_t var_1d8 = 0
int16_t var_1d4 = 0
char var_1d2 = 0
int16_t var_1d0 = 0
int32_t var_214 = rax_16.d
int128_t var_270
__builtin_memset(&var_270, 0, 0x30)
int128_t var_228 = zx.o(0)

if (rax_16.d != 0)
    do
        uint64_t rbx_6 = zx.q(r14_1)
        uint64_t r12_1 = rbx_6 * 3
        int64_t* rcx_22 = *((r12_1 << 3) + 0x143f02c40)
        
        if (rcx_22 == 0)
            *(&var_210 + rbx_6) = 0
            rax_16.b = 0
        else
            *(&var_210 + rbx_6) = *(rcx_22 + 0x3c)
            int64_t var_208
            *(&var_208 + (rbx_6 << 2)) = rcx_22[8].d
            int64_t rax_20 = (*(*rcx_22 + 0x10))()
            
            if (rax_20 != 0)
                var_1d4:1.b = 1
            
            if (rax_20 == 0 || *(rax_20 + 0x68) u<= 1)
                var_1d4:1.b = 0
            
            rax_16 = zx.q(*(&var_210 + rbx_6))
        
        if (rax_16.b != 0)
            var_1d8.w = *(*((r12_1 << 3) + 0x143f02c40) + 0x38)
        
        r14_1 += 1
    while (r14_1 u< var_214)
    
    r12 = arg1

int64_t* rcx_24 = data_143f02d00
int32_t var_1e8

if (rcx_24 == 0)
    var_1e8 = 0
else
    var_1e8 = *(rcx_24 + 0x3c)
    var_1e8 = rcx_24[8].d
    void* rax_24 = (*(*rcx_24 + 0x10))()
    
    if (rax_24 == 0 || *(rax_24 + 0x68) u<= 1)
        var_1d4:1.b = 0
    else
        var_1d4:1.b = 1

var_1e0.b = data_143f02d08
var_1e0:1.b = data_143f02d09
var_1e0:2.b = data_143f02d0a
var_1e0:3.b = data_143f02d0b
var_1e0:4.d = data_143f02d0c

if (var_1e8 != 0)
    var_1d8.w = *(data_143f02d00 + 0x38)

void* rcx_26 = var_290
var_1d8:2.b = data_143f02d10
var_1d8:3.b = data_143f02d11
char var_1d2_1 = data_143f02d12
int64_t var_240 = data_14395e020
int64_t var_238 = data_14395da18
int64_t var_230 = data_14395d9e8
var_270.q = data_14399e0f0
int64_t rax_38 = 0

if (rcx_26 != 0)
    int64_t rdx_8 = sx.q(*(rcx_26 + 0x10c))
    void* var_288
    int64_t* rbx_7 = *(var_288 + 0x10)
    int64_t rax_40 = rbx_7[3]
    
    if (*(rax_40 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_7, rdx_8.d)
        rax_40 = rbx_7[3]
    
    rax_38 = *(rax_40 + (rdx_8 << 3))

var_270:8.q = rax_38
int64_t rcx_28 = 0
void* rax_41 = var_2a0

if (rax_41 != 0)
    int64_t rdx_9 = sx.q(*(rax_41 + 0x10c))
    void* var_298
    int64_t* rbx_8 = *(var_298 + 0x10)
    int64_t rax_43 = rbx_8[3]
    
    if (*(rax_43 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rbx_8, rdx_9.d)
        rax_43 = rbx_8[3]
    
    rcx_28 = *(rax_43 + (rdx_9 << 3))

int128_t var_250
var_250.q = rcx_28
int32_t var_218 = 1
float zmm6[0x4] = sub_1419870b0(&data_143f02b98, &var_270, 2)
int64_t* rcx_30 = *(r12 + 0x50)
int64_t* rbx_9 = *(r12 + 0x48)
int64_t* r14_4 = *(r12 + 0x40)
int32_t var_318 = *(rsi + 0x18)
int32_t var_314 = *(rsi + 0x1c)
void* rax_47 = (*(*rcx_30 + 8))(rcx_30)
void* var_2c8 = rax_47

if (rax_47 != 0)
    *(rax_47 + 8) += 1

void* rax_49 = (*(*rbx_9 + 8))(rbx_9)
void* var_2c0 = rax_49

if (rax_49 != 0)
    *(rax_49 + 8) += 1

void* rax_51 = (*(*r14_4 + 8))(r14_4)
void* var_2b8 = rax_51

if (rax_51 != 0)
    *(rax_51 + 8) += 1

var_338.b = 1
int32_t var_340
var_340.q = &data_1439c9370
int32_t var_348
var_348.q = &data_1439c92f0
char var_350
var_350.q = &var_318
uint32_t var_358_3
var_358_3.q = &var_2c8
sub_1419ad7d0(var_2a0, &data_143f02b98, &var_2b8, &var_2c0, zmm6, arg4, var_358_3, var_350, 
    var_348, var_340, var_338.b)
void*** rcx_36 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
float zmm6_1 = float.s(zx.q(*(rsi + 0x1c)))
float zmm7 = float.s(zx.q(*(rsi + 0x18)))
void* rax_54 = &rcx_36[5]

if (rax_54 u> data_143f02bd0)
    zmm6_1 = sub_140b0e3d0(&data_143f02bc8, 0x30)
    rcx_36 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_54 = &rcx_36[5]

data_143f02bc8 = rax_54
data_143f02bac += 1
*data_143f02ba0 = rcx_36
data_143f02ba0 = &rcx_36[1]
rcx_36[1] = 0
*rcx_36 = &data_142d54998
*(rcx_36 + 0x1c) = zmm7
rcx_36[4].d = zmm6_1
rcx_36[2] = 0
rcx_36[3].d = 0
*(rcx_36 + 0x24) = 0x3f800000
int64_t rbx_10 = data_14399e0f8
void*** rcx_41 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_57 = &rcx_41[5]

if (rax_57 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x30)
    rcx_41 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_57 = &rcx_41[5]

data_143f02bc8 = rax_57
int64_t* rax_58 = data_143f02ba0
data_143f02bac += 1
*rax_58 = rcx_41
data_143f02ba0 = &rcx_41[1]
rcx_41[1] = 0
*rcx_41 = &data_142d56618
rcx_41[2].d = 0
rcx_41[3] = rbx_10
rcx_41[4].d = 0
void*** rcx_46 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_60 = &rcx_46[4]

if (rax_60 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x28)
    rcx_46 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_60 = &rcx_46[4]

data_143f02bc8 = rax_60
int64_t* rax_61 = data_143f02ba0
data_143f02bac += 1
*rax_61 = rcx_46
data_143f02ba0 = &rcx_46[1]
rcx_46[1] = 0
*rcx_46 = &data_142d54988
rcx_46[2].d = 0
*(rcx_46 + 0x14) = 2
rcx_46[3].d = 1
void*** rcx_51 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_63 = &rcx_51[2]

if (rax_63 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x18)
    rcx_51 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_63 = &rcx_51[2]

data_143f02bc8 = rax_63
int64_t* rax_64 = data_143f02ba0
data_143f02bac += 1
int128_t zmm0_1 = data_142d57d10
int128_t zmm1_1 = data_142d3f800
*rax_64 = rcx_51
data_143f02ba0 = &rcx_51[1]
rcx_51[1] = 0
*rcx_51 = &data_142d549b8
data_143f02d5c = 0
data_143f02d10.w = 0
void*** rbx_13 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
int128_t var_308 = zmm0_1
zmm0_1 = data_142d57920
void* rax_66 = &rbx_13[0xa]
int128_t var_2f8 = zmm1_1

if (rax_66 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x58)
    rbx_13 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_66 = &rbx_13[0xa]

data_143f02bc8 = rax_66
int64_t* rax_67 = data_143f02ba0
data_143f02bac += 1
*rax_67 = rbx_13
data_143f02ba0 = &rbx_13[1]
rbx_13[1] = 0
*rbx_13 = &data_142d56628
rbx_13[2].d = var_308.d
__builtin_memset(rbx_13 + 0x14, 0xff, 0x20)
*(rbx_13 + 0x34) = zmm0_1:4.d
rbx_13[7].d = zmm0_1:8.d
*(rbx_13 + 0x3c) = zmm0_1:0xc.d
rbx_13[8] = rax_8
rbx_13[9] = rax_8

if ((*(*rax_8 + 8))() == 0)
    int64_t* rcx_55 = rbx_13[8]
    
    if ((*(*rcx_55 + 0x18))(rcx_55) == 0)
        int64_t* rcx_56 = rbx_13[8]
        
        if ((*(*rcx_56 + 0x20))(rcx_56) == 0)
            int64_t* rcx_57 = rbx_13[8]
            (*(*rcx_57 + 0x10))(rcx_57)

int64_t* rcx_58 = rbx_13[9]

if ((*(*rcx_58 + 8))(rcx_58) == 0)
    int64_t* rcx_59 = rbx_13[9]
    
    if ((*(*rcx_59 + 0x18))(rcx_59) == 0)
        int64_t* rcx_60 = rbx_13[9]
        
        if ((*(*rcx_60 + 0x20))(rcx_60) == 0)
            int64_t* rcx_61 = rbx_13[9]
            (*(*rcx_61 + 0x10))(rcx_61)

int64_t* var_280 = r14
int64_t* var_278 = r15

if (r15 != 0)
    r15[1].d += 1

int64_t* rcx_62 = *(r12 + 0x60)
(**rcx_62)(rcx_62, &var_280)
int64_t var_80
int32_t result = sub_1405d1550(&var_80)

if (r15 != 0)
    result = r15[1].d
    r15[1].d -= 1
    
    if (result == 1)
        result = (**r15)(r15)
        int32_t r13_1 = *(r15 + 0xc)
        *(r15 + 0xc) -= 1
        
        if (r13_1 == 1)
            result = (*(*r15 + 8))(r15, zx.q(r13_1))

__security_check_cookie(rax_1 ^ &var_378)
return result
