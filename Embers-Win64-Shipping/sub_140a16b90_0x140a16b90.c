// 函数: sub_140a16b90
// 地址: 0x140a16b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* r8 = *(arg1 + 0x78)
void* r15 = *(arg1 + 0x80)
int32_t var_340
int32_t var_338
int128_t* var_330
int32_t rax_2
int32_t rcx

if (r8 == 0)
label_140a16c1c:
    int128_t zmm1 = data_143dbb1e0
    uint64_t r9_1 = zx.q(*(r15 + 0x28))
    int128_t var_1f8
    var_330 = &var_1f8
    int64_t* rcx_2 = data_143f0f180
    var_338 = 0x109
    int512_t zmm0
    zmm0.o = zx.o(0)
    int32_t var_1d4_1 = (1 << (data_1439c7a34).b) - 1
    int32_t rax_5 = *(r15 + 0x2c)
    var_340 = 1
    var_1f8 = zx.o(0)
    int32_t var_1e8_1 = 1
    int128_t var_1e4_1 = zmm1
    char var_1d0_1 = 0
    int64_t var_1c8_1 = 0
    int32_t var_1c0_1 = 0
    void* var_318
    (*(*rcx_2 + 0x560))(zmm0, &var_318, &data_143f02b98, r9_1, rax_5, 2, 1, var_340, var_338, 
        var_330)
    void* rdx_2 = var_318
    void* var_2f8 = rdx_2
    var_318 = nullptr
    sub_1405d16e0(arg1 + 0x78, rdx_2)
    sub_1405d1550(&var_318)
    sub_1405d1550(&var_2f8)
    rcx = *(r15 + 0x28)
    rax_2 = *(r15 + 0x2c)
    r8 = *(arg1 + 0x78)
else
    rcx = *(r15 + 0x28)
    
    if (*(r8 + 0x60) != rcx)
        goto label_140a16c1c
    
    rax_2 = *(r15 + 0x2c)
    
    if (*(r8 + 0x64) != rax_2 || *(r8 + 0x3c) != 2 || (*(r8 + 0x40) & 0x100) == 0)
        goto label_140a16c1c

int32_t var_2fc = rax_2
int32_t var_348
var_348.q = *(arg1 + 0x38)
int32_t var_300 = rcx
int64_t* rcx_6 = data_143f0f180
char var_350
var_350.d = *(r15 + 0x30)
int64_t var_310 = 0
int64_t var_308 = 0
int32_t var_358
var_358.q = &var_310
(*(*rcx_6 + 0x520))(rcx_6, &data_143f02b98, r8, 0, var_358, var_350, var_348, var_340, var_338, 
    var_330)
int64_t var_328 = *(r15 + 0x34)
void* r14 = *(*(arg1 + 0x58) + 8)
void* var_2f0 = r14

if (r14 != 0)
    *(r14 + 8) += 1

sub_1405d1550(&var_2f0)
int128_t var_88 = data_142d3f5a0
int32_t var_a0 = 0
int32_t var_9c
__builtin_memset(&var_9c, 0xff, 0x14)
int64_t var_78
__builtin_memset(&var_78, 0, 0x19)
void* var_178 = r14
int64_t var_170 = 0
int32_t var_168 = 0xffffffff
int16_t var_164 = 0x500
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x11)
int32_t var_a4 = 0
bool var_5f = *(r14 + 0x38) u> 1
void var_160
memset(&var_160, 0, 0xa8)
int64_t rbx_3 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
int64_t rax_10 = rbx_3 + 0x34

if (rax_10 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x36)
    rbx_3 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
    rax_10 = rbx_3 + 0x34

wchar16 const* const rcx_9 = u"WindowsMovieConvertSample"
data_143f02bc8 = rax_10
wchar16 const i

do
    i = *rcx_9
    *(rcx_9 + rbx_3 - u"WindowsMovieConvertSample") = i
    rcx_9 = &rcx_9[1]
while (i != 0)
void*** rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_12[0x27]

if (rax_11 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x140)
    rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_12[0x27]

data_143f02bac += 1
data_143f02bc8 = rax_11
*data_143f02ba0 = rcx_12
data_143f02ba0 = &rcx_12[1]
sub_1405d11b0(rcx_12, &var_178, rbx_3)
data_143f02d5c = 1
sub_1405d19b0(&data_143f02b98, &var_178)
int64_t var_68
data_143f02d10 = var_68:7.b
uint64_t rax_15 = zx.q(data_143f02c38)
data_143f02d11 = 0
int32_t rdi = 0
data_143f02d5c = 1
int64_t var_240
__builtin_memset(&var_240, 0, 0x2c)
int64_t var_210 = 0
int32_t var_208 = 0
int16_t var_204 = 0
char var_202 = 0
int16_t var_200 = 0
int32_t var_244 = rax_15.d
int128_t var_2a0
__builtin_memset(&var_2a0, 0, 0x30)
int128_t var_258 = zx.o(0)

if (rax_15.d != 0)
    do
        uint64_t rbx_6 = zx.q(rdi)
        uint64_t rsi_1 = rbx_6 * 3
        int64_t* rcx_15 = *((rsi_1 << 3) + 0x143f02c40)
        
        if (rcx_15 == 0)
            *(&var_240 + rbx_6) = 0
            rax_15.b = 0
        else
            *(&var_240 + rbx_6) = *(rcx_15 + 0x3c)
            int64_t var_238
            *(&var_238 + (rbx_6 << 2)) = rcx_15[8].d
            int64_t rax_19 = (*(*rcx_15 + 0x10))()
            
            if (rax_19 != 0)
                var_204:1.b = 1
            
            if (rax_19 == 0 || *(rax_19 + 0x68) u<= 1)
                var_204:1.b = 0
            
            rax_15 = zx.q(*(&var_240 + rbx_6))
        
        if (rax_15.b != 0)
            var_208.w = *(*((rsi_1 << 3) + 0x143f02c40) + 0x38)
        
        rdi += 1
    while (rdi u< var_244)

int64_t* rcx_17 = data_143f02d00
int32_t var_218

if (rcx_17 == 0)
    var_218 = 0
else
    var_218 = *(rcx_17 + 0x3c)
    var_218 = rcx_17[8].d
    void* rax_23 = (*(*rcx_17 + 0x10))()
    
    if (rax_23 == 0 || *(rax_23 + 0x68) u<= 1)
        var_204:1.b = 0
    else
        var_204:1.b = 1

var_210.b = data_143f02d08
var_210:1.b = data_143f02d09
var_210:2.b = data_143f02d0a
var_210:3.b = data_143f02d0b
var_210:4.d = data_143f02d0c

if (var_218 != 0)
    var_208.w = *(data_143f02d00 + 0x38)

uint128_t zmm7 = zx.o(var_328.d)
void*** rcx_21 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
var_208:2.b = data_143f02d10
var_208:3.b = data_143f02d11
char var_202_1 = data_143f02d12
void* rax_33 = &rcx_21[5]
bool cond:0 = rax_33 u<= data_143f02bd0
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(var_328:4.d))
zmm7 = _mm_cvtepi32_ps(zmm7)

if (not(cond:0))
    zmm6 = sub_140b0e3d0(&data_143f02bc8, 0x30)
    rcx_21 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_33 = &rcx_21[5]

data_143f02bac += 1
data_143f02bc8 = rax_33
*data_143f02ba0 = rcx_21
data_143f02ba0 = &rcx_21[1]
rcx_21[1] = 0
*rcx_21 = &data_142d54998
*(rcx_21 + 0x1c) = zmm7.d
rcx_21[4].d = zmm6.d
rcx_21[2] = 0
rcx_21[3].d = 0
*(rcx_21 + 0x24) = 0x3f800000
int64_t var_260 = data_14395d9e8
int64_t var_268 = data_14395da18
int64_t var_270 = data_14395e020
int32_t var_248 = 1
int64_t* rax_40 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_2b0
sub_1419a2ec0(rax_40, &var_2b0, &data_143f10cd0, 0)
int64_t rax_41 = 0
var_2a0.q = data_1439c93a0
void* rcx_27 = var_2b0

if (rcx_27 != 0)
    int64_t rdx_8 = sx.q(*(rcx_27 + 0x10c))
    void* var_2a8
    int64_t* rbx_7 = *(var_2a8 + 0x10)
    int64_t rax_42 = rbx_7[3]
    
    if (*(rax_42 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_7, rdx_8.d)
        rax_42 = rbx_7[3]
    
    rax_41 = *(rax_42 + (rdx_8 << 3))

var_2a0:8.q = rax_41
int32_t rax_43 = *(r15 + 0x3c)
int128_t var_280

if (rax_43 == 4)
    void* var_2c0
    sub_1419a2ec0(rax_40, &var_2c0, &data_143f11010, 0)
    void* rbx_9 = var_2c0
    int64_t rax_48 = 0
    
    if (rbx_9 != 0)
        int64_t rdx_13 = sx.q(*(rbx_9 + 0x10c))
        void* var_2b8
        int64_t* rdi_3 = *(var_2b8 + 0x10)
        int64_t rax_50 = rdi_3[3]
        
        if (*(rax_50 + (rdx_13 << 3)) == 0)
            sub_1419ccf30(rdi_3, rdx_13.d)
            rax_50 = rdi_3[3]
        
        rax_48 = *(rax_50 + (rdx_13 << 3))
    
    var_280.q = rax_48
    sub_1419870b0(&data_143f02b98, &var_2a0, 2)
    void* rax_51 = *(arg1 + 0x78)
    void* var_2e0 = rax_51
    
    if (rax_51 != 0)
        *(rax_51 + 8) += 1
        rbx_9 = var_2c0
    
    var_358.b = 0
    sub_1419abe30(rbx_9, &data_143f02b98, &var_2e0, &var_328, var_358.b)
label_140a17340:
    int128_t zmm1_2 = data_143dbb1e0
    int128_t var_1b8
    var_350.q = &var_1b8
    int32_t var_1a8_1 = 1
    int64_t* rcx_37 = data_143f0f180
    int32_t var_194_1 = (1 << (data_1439c7a34).b) - 1
    var_1b8 = zx.o(0)
    int128_t var_1a4_1 = zmm1_2
    char var_190_1 = 0
    int64_t var_188_1 = 0
    int32_t var_180_1 = 0
    int64_t var_320
    (*(*rcx_37 + 0x498))(rcx_37, &var_320, &data_143f02b98, 0x80, 4, var_350, var_348)
    int64_t* rcx_38 = data_143f0f180
    var_350.d = 1
    int32_t* rax_56 = (*(*rcx_38 + 0x130))(rcx_38, &data_143f02b98, var_320, 0, 0x80, var_350)
    *rax_56 = 0xbf800000
    rax_56[1] = 0x3f800000
    rax_56[2] = 0x3f800000
    *(rax_56 + 0xc) = 0x3f800000
    rax_56[8] = 0x3f800000
    rax_56[9] = 0x3f800000
    rax_56[0xa] = 0x3f800000
    rax_56[0xb] = 0x3f800000
    rax_56[0x10] = 0xbf800000
    rax_56[0x11] = 0xbf800000
    rax_56[0x12] = 0x3f800000
    *(rax_56 + 0x4c) = 0x3f800000
    __builtin_memcpy(&rax_56[0x18], 
        "\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x18)
    rax_56[5] = 0
    *(rax_56 + 0x30) = 0x3f800000
    rax_56[0x15] = 0x3f800000
    int64_t* rcx_39 = data_143f0f180
    (*(*rcx_39 + 0x138))(rcx_39, &data_143f02b98, var_320)
    int64_t rbx_10 = var_320
    void*** rcx_42 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_58 = &rcx_42[5]
    
    if (rax_58 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_42 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_58 = &rcx_42[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_58
    *data_143f02ba0 = rcx_42
    data_143f02ba0 = &rcx_42[1]
    rcx_42[1] = 0
    *rcx_42 = &data_142d56618
    rcx_42[2].d = 0
    rcx_42[3] = rbx_10
    rcx_42[4].d = 0
    zmm7 = zx.o(var_328.d)
    void*** rcx_47 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(var_328:4.d))
    void* rax_61 = &rcx_47[5]
    bool cond:2_1 = rax_61 u<= data_143f02bd0
    zmm7 = _mm_cvtepi32_ps(zmm7)
    
    if (not(cond:2_1))
        zmm6_1 = sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_47 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_61 = &rcx_47[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_61
    *data_143f02ba0 = rcx_47
    data_143f02ba0 = &rcx_47[1]
    rcx_47[1] = 0
    *rcx_47 = &data_142d54998
    *(rcx_47 + 0x1c) = zmm7.d
    rcx_47[4].d = zmm6_1.d
    rcx_47[2] = 0
    rcx_47[3].d = 0
    *(rcx_47 + 0x24) = 0x3f800000
    void*** rcx_52 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_64 = &rcx_52[4]
    
    if (rax_64 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x28)
        rcx_52 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_64 = &rcx_52[4]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_64
    *data_143f02ba0 = rcx_52
    data_143f02ba0 = &rcx_52[1]
    rcx_52[1] = 0
    *rcx_52 = &data_142d54988
    rcx_52[2].d = 0
    *(rcx_52 + 0x14) = 2
    rcx_52[3].d = 1
    sub_1405d1550(&var_320)
    void*** rcx_58 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_67 = &rcx_58[2]
    
    if (rax_67 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x18)
        rcx_58 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_67 = &rcx_58[2]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_67
    *data_143f02ba0 = rcx_58
    data_143f02ba0 = &rcx_58[1]
    rcx_58[1] = 0
    *rcx_58 = &data_142d549b8
    int64_t rbx_12 = data_143f02bc8 + 7
    data_143f02d5c = 0
    void** rbx_13 = rbx_12 & 0xfffffffffffffff8
    data_143f02d10.w = 0
    void* rax_70 = &rbx_13[1]
    
    if (rax_70 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x10)
        rbx_13 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_70 = &rbx_13[1]
    
    data_143f02bc8 = rax_70
    *rbx_13 = r14
    void*** rcx_63 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_71 = &rcx_63[5]
    
    if (rax_71 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_63 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_71 = &rcx_63[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_71
    *data_143f02ba0 = rcx_63
    data_143f02ba0 = &rcx_63[1]
    rcx_63[1] = 0
    *rcx_63 = &data_142d549c8
    rcx_63[2].d = 1
    rcx_63[3] = rbx_13
    rcx_63[4].d = 0
else if (rax_43 == 8)
    void* var_2d0
    sub_1419a2ec0(rax_40, &var_2d0, &data_143f11e20, 0)
    void* rbx_8 = var_2d0
    int64_t rax_44 = 0
    
    if (rbx_8 != 0)
        int64_t rdx_10 = sx.q(*(rbx_8 + 0x10c))
        void* var_2c8
        int64_t* rdi_2 = *(var_2c8 + 0x10)
        int64_t rax_46 = rdi_2[3]
        
        if (*(rax_46 + (rdx_10 << 3)) == 0)
            sub_1419ccf30(rdi_2, rdx_10.d)
            rax_46 = rdi_2[3]
        
        rax_44 = *(rax_46 + (rdx_10 << 3))
    
    var_280.q = rax_44
    sub_1419870b0(&data_143f02b98, &var_2a0, 2)
    void* rax_47 = *(arg1 + 0x78)
    void* var_2e8 = rax_47
    
    if (rax_47 != 0)
        *(rax_47 + 8) += 1
        rbx_8 = var_2d0
    
    var_348.b = 0
    var_350.q = &data_1439c9370
    var_358.q = &data_1439c92f0
    sub_1419addf0(rbx_8, &data_143f02b98, &var_2e8, &var_328, var_358, var_350, var_348.b)
    goto label_140a17340
int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_378)
return result
