// 函数: sub_141d7e160
// 地址: 0x141d7e160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t r10 = zx.q(data_14401b1a0)
int64_t* var_2a8 = arg3
int64_t* var_2b0 = arg2

if (data_143f383a8 s> *(0x14 + *(ThreadLocalStoragePointer + (r10 << 3))))
    _Init_thread_header(&data_143f383a8)
    
    if (data_143f383a8 == 0xffffffff)
        sub_140b58170(&data_143f383a0, "Renderer", 1)
        _Init_thread_footer(&data_143f383a8)

int64_t rbx = data_143f383a0
j_sub_140b3db50()
int64_t* rax_3 = sub_140b3da90(&data_143de7d78, rbx)
*(arg1 + 0x35) = 1
void* rcx = *(arg1 + 0x10)
int128_t zmm0 = data_143f02308
char var_320 = 0
int32_t rsi = *(rcx + 0x60)
int32_t r15 = *(rcx + 0x64)
wchar16 const* const var_1a8 = u"UnknownTexture2D"
int32_t var_1d8 = data_143f02318
int32_t var_1bc = *(rcx + 0x3c)
char var_328 = 1
char var_330 = 1
wchar16 const* const var_338 = u"ResampleTexture"
int32_t var_2e4 = rsi
int32_t var_2e8 = r15
int16_t var_1b0 = 0
int128_t var_1e8 = zmm0
int32_t var_1d4 = rsi
int32_t var_1d0 = r15
int32_t var_1cc = 0
int32_t var_1c8 = 1
int32_t var_1c4 = 0x10000
int16_t var_1c0 = 1
int32_t var_1b8 = 0
int32_t var_1b4 = 1
int16_t var_1a0 = 1
char var_19e = 0
int64_t* var_2b8 = nullptr
sub_1419a0ce0(&data_1439c9260, &data_143f02b98, &var_1e8, &var_2b8, var_338, var_330, var_328, 
    var_320)
int64_t rcx_2 = *(arg1 + 0x10)
int128_t zmm1 = data_142d3f5a0
int64_t rdx_2 = var_2b8[1]
int64_t var_198 = rdx_2
int64_t var_190 = rcx_2
int32_t var_c0 = 0
int32_t var_bc
__builtin_memset(&var_bc, 0xff, 0x14)
int128_t var_a8 = zmm1
int64_t var_98
__builtin_memset(&var_98, 0, 0x19)
int32_t var_188 = 0xffffffff
int16_t var_184 = 0x500
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x11)
int32_t var_c4 = 0
bool var_7f = *(rdx_2 + 0x38) u> 1
void var_180
memset(&var_180, 0, 0xa8)
int64_t rbx_3 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
int64_t rax_5 = rbx_3 + 0x40

if (rax_5 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x42)
    rbx_3 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
    rax_5 = rbx_3 + 0x40

wchar16 const* const rcx_4 = u"FrameGrabberResolveRenderTarget"
data_143f02bc8 = rax_5
wchar16 const i

do
    i = *rcx_4
    *(rcx_4 + rbx_3 - u"FrameGrabberResolveRenderTarget") = i
    rcx_4 = &rcx_4[1]
while (i != 0)
void*** rcx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_7[0x27]

if (rax_6 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x140)
    rcx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_7[0x27]

data_143f02bc8 = rax_6
void**** rax_7 = data_143f02ba0
data_143f02bac += 1
*rax_7 = rcx_7
data_143f02ba0 = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_198, rbx_3)
data_143f02d5c = 1
sub_1405d19b0(&data_143f02b98, &var_198)
int64_t var_88
data_143f02d10 = var_88:7.b
data_143f02d11 = 0
data_143f02d5c = 1
void*** rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(r15))
void* rax_10 = &rcx_12[5]
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rsi))

if (rax_10 u> data_143f02bd0)
    zmm6 = sub_140b0e3d0(&data_143f02bc8, 0x30)
    rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_12[5]

data_143f02bc8 = rax_10
void**** rax_11 = data_143f02ba0
data_143f02bac += 1
int32_t rsi_1 = 0
*rax_11 = rcx_12
data_143f02ba0 = &rcx_12[1]
rcx_12[1] = 0
*rcx_12 = &data_142d54998
*(rcx_12 + 0x1c) = zmm7.d
rcx_12[4].d = zmm6.d
rcx_12[2] = 0
rcx_12[3].d = 0
*(rcx_12 + 0x24) = 0x3f800000
uint64_t rax_13 = zx.q(data_143f02c38)
int64_t var_230
__builtin_memset(&var_230, 0, 0x2c)
int64_t var_200 = 0
int32_t var_1f8 = 0
int16_t var_1f4 = 0
char var_1f2 = 0
int16_t var_1f0 = 0
int32_t var_234 = rax_13.d
int128_t var_290
__builtin_memset(&var_290, 0, 0x30)
int128_t var_248 = zx.o(0)

if (rax_13.d != 0)
    do
        uint64_t rbx_6 = zx.q(rsi_1)
        uint64_t r15_1 = rbx_6 * 3
        int64_t* rcx_15 = *((r15_1 << 3) + 0x143f02c40)
        
        if (rcx_15 == 0)
            *(&var_230 + rbx_6) = 0
            rax_13.b = 0
        else
            *(&var_230 + rbx_6) = *(rcx_15 + 0x3c)
            int64_t var_228
            *(&var_228 + (rbx_6 << 2)) = rcx_15[8].d
            int64_t rax_17 = (*(*rcx_15 + 0x10))()
            
            if (rax_17 != 0)
                var_1f4:1.b = 1
            
            if (rax_17 == 0 || *(rax_17 + 0x68) u<= 1)
                var_1f4:1.b = 0
            
            rax_13 = zx.q(*(&var_230 + rbx_6))
        
        if (rax_13.b != 0)
            var_1f8.w = *(*((r15_1 << 3) + 0x143f02c40) + 0x38)
        
        rsi_1 += 1
    while (rsi_1 u< var_234)

int64_t* rcx_17 = data_143f02d00
int32_t var_208

if (rcx_17 == 0)
    var_208 = 0
else
    var_208 = *(rcx_17 + 0x3c)
    var_208 = rcx_17[8].d
    void* rax_21 = (*(*rcx_17 + 0x10))()
    
    if (rax_21 == 0 || *(rax_21 + 0x68) u<= 1)
        var_1f4:1.b = 0
    else
        var_1f4:1.b = 1

var_200.b = data_143f02d08
var_200:1.b = data_143f02d09
var_200:2.b = data_143f02d0a
var_200:3.b = data_143f02d0b
var_200:4.d = data_143f02d0c

if (var_208 != 0)
    var_1f8.w = *(data_143f02d00 + 0x38)

var_1f8:2.b = data_143f02d10
var_1f8:3.b = data_143f02d11
char var_1f2_1 = data_143f02d12
int64_t var_260 = data_14395da00
int64_t var_258 = data_14395da18
int64_t var_250 = data_14395d9e8
int64_t* rax_35 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_2d8
sub_1419a2ec0(rax_35, &var_2d8, &data_143f55f90, 0)
void* var_2c8
sub_1419a2ec0(rax_35, &var_2c8, &data_143f55b50, 0)
void* rcx_22 = var_2d8
var_290.q = data_1439c9210
int64_t rax_37 = 0

if (rcx_22 != 0)
    int64_t rdx_9 = sx.q(*(rcx_22 + 0x10c))
    void* var_2d0
    int64_t* rbx_8 = *(var_2d0 + 0x10)
    int64_t rax_39 = rbx_8[3]
    
    if (*(rax_39 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rbx_8, rdx_9.d)
        rax_39 = rbx_8[3]
    
    rax_37 = *(rax_39 + (rdx_9 << 3))

void* rbx_9 = var_2c8
var_290:8.q = rax_37
int64_t rax_40 = 0

if (rbx_9 != 0)
    int64_t rdx_10 = sx.q(*(rbx_9 + 0x10c))
    void* var_2c0
    int64_t* rsi_3 = *(var_2c0 + 0x10)
    int64_t rax_42 = rsi_3[3]
    
    if (*(rax_42 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rsi_3, rdx_10.d)
        rax_42 = rsi_3[3]
    
    rax_40 = *(rax_42 + (rdx_10 << 3))

int128_t var_270
var_270.q = rax_40
int32_t var_238 = 0
sub_1419870b0(&data_143f02b98, &var_290, 2)
int64_t* rsi_4 = var_2a8
void* r9_1 = *rsi_4
int32_t rdx_12 = *(r9_1 + 0x60)
char rcx_25

if (rdx_12 != *(arg1 + 0x28) || *(r9_1 + 0x64) != *(arg1 + 0x2c))
    rcx_25 = 0
else
    rcx_25 = 1

int32_t rax_43

if (var_2e4 != rdx_12 || var_2e8 != *(r9_1 + 0x64))
    rax_43.b = 0
else
    rax_43 = 1

int64_t* r8_2

if (rcx_25 == 0)
    r8_2 = data_14395f4d0

if (rcx_25 != 0 || rax_43.b != 0)
    r8_2 = data_14395fa10

int32_t zmm6_1 = sub_141298600(rbx_9, &data_143f02b98, r8_2, r9_1)
void* rcx_27 = *rsi_4
int32_t r8_3 = *(arg1 + 0x18)
int32_t rdx_13 = *(arg1 + 0x1c)
int32_t var_2f0 = 0
uint128_t zmm0_1
zmm0_1.d = float.s(zx.q(*(rcx_27 + 0x60)))
uint64_t rax_45 = zx.q(*(rcx_27 + 0x64))
void* rcx_28 = *(arg1 + 0x20)
var_2c8.d = 1
var_2c8:4.d = 1
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rdx_13))
float zmm3 = 1f f/ zmm0_1.d
zmm0_1.d = float.s(rax_45)
int64_t r8_4 = *rax_3
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(r8_3))
float zmm2 = 1f f/ zmm0_1.d
zmm0_1 = var_2d8.o
var_2d8 = rcx_28
var_2d8:4.d -= rdx_13
var_2d8.d = rcx_28.d - r8_3
var_2a8.o = zmm0_1
zmm4.d = zmm4.d f* zmm2
int64_t** var_2f8 = &var_2a8
void* rax_50 = var_2c8
void* rax_51 = var_2d8
zmm5.d = zmm5.d f* zmm3
uint128_t zmm1_2
zmm1_2.d = _mm_cvtepi32_ps(zx.o((rcx_28 u>> 0x20).d)).d f* zmm2
zmm0_1.d = _mm_cvtepi32_ps(zx.o(rcx_28.d)).d f* zmm3
zmm1_2.d = zmm1_2.d f- zmm4.d
zmm0_1.d = zmm0_1.d f- zmm5.d
var_320.d = zmm4.d
var_328.d = zmm5.d
var_330.d = zmm6_1
var_338.d = zmm7.d
(*(r8_4 + 0xd0))(rax_3, &data_143f02b98, r8_4, (zx.o(0)).d, var_338, var_330, var_328, var_320, 
    zmm0_1.d, zmm1_2.d, rax_51, rax_50, var_2f8, var_2f0)
void*** rcx_32 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_52 = &rcx_32[2]

if (rax_52 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x18)
    rcx_32 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_52 = &rcx_32[2]

data_143f02bc8 = rax_52
int64_t* rax_53 = data_143f02ba0
data_143f02bac += 1
int64_t* rbx_10 = var_2b0
*rax_53 = rcx_32
data_143f02ba0 = &rcx_32[1]
rcx_32[1] = 0
*rcx_32 = &data_142d549b8
data_143f02d5c = 0
data_143f02d10.w = 0

if (rbx_10 != 0)
    int64_t* rcx_35 = data_143f0f180
    int64_t r8_5 = rbx_10[2]
    var_328.q = &var_2e8
    var_330.q = &var_2e4
    var_2a8 = nullptr
    var_2e4 = 0
    var_2e8 = 0
    (*(*rcx_35 + 0x640))(rcx_35, &data_143f02b98, r8_5, 0, &var_2a8, var_330, var_328)
    int64_t* rcx_36 = &arg4[4]
    var_2c8.d = var_2e8
    var_2d8.d = var_2e4
    var_2b0 = var_2a8
    int64_t* rax_59 = arg4[2]
    
    if (rax_59 != 0)
        rcx_36 = rax_59
    
    (*arg4)((*(*rcx_36 + 8))(rcx_36), &var_2b0, &var_2d8, &var_2c8)
    int64_t* rcx_38 = data_143f0f180
    (*(*rcx_38 + 0x648))(rcx_38, &data_143f02b98, rbx_10[2])
    int64_t* rcx_39 = rbx_10[1]
    (*(*rcx_39 + 0x10))(rcx_39)

int64_t var_90
int64_t result = sub_1405d1550(&var_90)
int64_t* rcx_41 = var_2b8

if (rcx_41 != 0)
    result = (*(*rcx_41 + 0x38))(rcx_41)

if (*arg4 != 0)
    void* rax_65 = arg4[2]
    void* rcx_42 = &arg4[4]
    
    if (rax_65 != 0)
        rcx_42 = rax_65
    
    result = (*(*rcx_42 + 0x10))(rcx_42)

__security_check_cookie(rax_1 ^ &var_358)
return result
