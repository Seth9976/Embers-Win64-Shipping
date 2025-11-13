// 函数: sub_142409180
// 地址: 0x142409180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_488
int64_t rax_1 = __security_cookie ^ &var_488
int128_t zmm14 = arg4
float zmm1 = arg9
int128_t zmm0

if (not(arg10 == zmm1))
    zmm0.d = arg3.d f- zmm1
    zmm0.d = zmm0.d f/ (arg10 - zmm1)
    zmm1 = zmm0.d

int128_t zmm7 = arg7
int128_t zmm9 = arg5
arg4 = arg12
arg3 = arg11

if (not(arg4.d f== arg3.d))
    arg4.d = arg4.d f- arg3.d
    zmm0.d = zmm14.d f- arg3.d
    zmm0.d = zmm0.d f/ arg4.d
    arg3 = zmm0

void* rbx = *(arg1 + 0x260)
int128_t zmm11 = arg8
int128_t zmm6 = arg6
int64_t var_398 = 0
arg3.d = arg3.d f* zmm11.d
char var_390 = 0
int32_t var_3a0 = zmm9.d
int32_t var_39c = zmm6.d
arg3.d = arg3.d f+ zmm6.d
int32_t var_370 = zmm7.d
int32_t var_36c = zmm11.d
int64_t var_388 = 0
int128_t var_380 = data_14399f5c0
void** const var_3a8 = &data_143298ab8
arg3.d = arg3.d f- 4f
int32_t var_368 = 0
int64_t var_360 = 0
int64_t var_358 = 0
sub_142407cf0(&var_3a8, rbx)

if (*(rbx + 0xa0) == 1)
    sub_14240e030(rbx, 0)

int32_t* rbx_1 = *(arg1 + 0x260)
int128_t var_308 = data_142d8c9b0
int32_t var_2d4 = data_143dbb1f0.d.d
int128_t zmm0_1 = data_14399f620
void** const var_348 = &data_1433443d0
int64_t rax_2 = data_143f10dc8
int32_t var_2f8 = 0x3f800000
int32_t zmm1_1 = data_143dbb1f0:4.d
uint128_t zmm12 = _mm_cvtepi32_ps(zx.o(int.d(zmm1 f* zmm7.d f+ zmm9.d - 4f)))
int64_t var_338 = 0
char var_330 = 0
int64_t var_328 = 0
int32_t var_310 = 0x41000000
uint128_t zmm13 = _mm_cvtepi32_ps(zx.o(int.d(arg3.d)))
int32_t var_30c = 0x41000000
int64_t var_2f0 = rax_2
int64_t var_2e8
__builtin_memset(&var_2e8, 0, 0x14)
int128_t var_320 = zmm0_1
int32_t var_340 = zmm12.d
int32_t var_33c = zmm13.d
int32_t var_2d0 = zmm1_1
float zmm7_1
float zmm9_1
float zmm11_1
int32_t zmm12_1
int32_t zmm13_1
float zmm14_1
zmm7_1, zmm9_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1 = sub_142408260(&var_348, rbx_1)

if (rbx_1[0x28] == 1)
    sub_14240e030(rbx_1, 0)

void* rbx_2 = *(arg1 + 0x260)
int128_t zmm0_2 = data_1432a4f60
float var_420 = zmm9_1
int32_t var_41c = zmm13_1
float var_3f0 = zmm9_1
int32_t var_3ec = zmm13_1
int32_t var_3e0 = zmm13_1
int64_t var_418 = 0
float var_3e4 = zmm9_1 + zmm7_1
char var_410 = 0
int64_t var_408 = 0
void** const var_428 = &data_14328aab8
int64_t var_3dc = 0
int32_t var_3e8 = 0
int128_t var_400 = zmm0_2
float zmm6_1
float zmm8_1
int32_t zmm9_2
float zmm10_1
zmm6_1, zmm8_1, zmm9_2, zmm10_1 = sub_142407e00(&var_428, rbx_2)

if (*(rbx_2 + 0xa0) == 1)
    zmm6_1 = sub_14240e030(rbx_2, 0)

void* rbx_3 = *(arg1 + 0x260)
float zmm7_2 = zmm6_1 + zmm11_1
int32_t var_3f0_1 = zmm12_1
float var_3ec_1 = zmm6_1
int32_t var_3e4_1 = zmm12_1
int32_t var_3e8_1 = 0
float var_3e0_1 = zmm7_2
var_428[3](&var_428, rbx_3)

if (*(rbx_3 + 0xa0) == 1)
    zmm6_1 = sub_14240e030(rbx_3, 0)

int64_t var_458 = 0
int64_t var_3c8
sub_140a2e390(&var_3c8, u"%f", fconvert.d(zmm10_1))
int64_t rcx_9 = var_458

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

var_458 = var_3c8
int32_t var_3c0
int32_t var_450 = var_3c0
int32_t var_448 = zmm12_1
float var_444 = zmm7_2 + 16f
int32_t var_3bc
int32_t var_44c = var_3bc
int64_t rax_7 = sub_1423de050()
void var_2c8
void** var_280
sub_1420767c0(&var_280, &var_448, sub_140aae420(&var_2c8, &var_458), rax_7, &data_14399f620)
int64_t* var_2c0

if (var_2c0 != 0)
    var_2c0[1].d -= 1
    
    if (var_2c0[1].d == 1)
        (**var_2c0)(var_2c0)
        int32_t rax_11 = *(var_2c0 + 0xc)
        *(var_2c0 + 0xc) -= 1
        
        if (rax_11 == 1)
            (*(*var_2c0 + 8))(var_2c0, 1)

void* rbx_6 = *(arg1 + 0x260)
var_280[3](&var_280, rbx_6)

if (*(rbx_6 + 0xa0) == 1)
    zmm6_1 = sub_14240e030(rbx_6, 0)

int64_t var_3b8
sub_140a2e390(&var_3b8, u"%f", fconvert.d(zmm14_1))
int64_t rcx_17 = var_458

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

var_458 = var_3b8
int32_t var_3b0
int32_t var_450_1 = var_3b0
int32_t var_3ac
int32_t var_44c_1 = var_3ac
void var_2b0
int64_t* rax_17 = sub_140aae420(&var_2b0, &var_458)
int64_t rcx_19 = *rax_17
int64_t var_150
*rax_17 = var_150
int64_t rcx_20 = rax_17[1]
int64_t var_148
rax_17[1] = var_148
int32_t var_140 = rax_17[2].d
int64_t* var_2a8

if (var_2a8 != 0)
    var_2a8[1].d -= 1
    
    if (var_2a8[1].d == 1)
        (**var_2a8)(var_2a8)
        int32_t rax_21 = *(var_2a8 + 0xc)
        *(var_2a8 + 0xc) -= 1
        
        if (rax_21 == 1)
            (*(*var_2a8 + 8))(var_2a8, 1)

void* rbx_8 = *(arg1 + 0x260)
void** rax_23 = var_280
int32_t var_43c = zmm13_1
float var_440 = zmm8_1 + 8f
rax_23[2](&var_280, rbx_8, &var_440)

if (*(rbx_8 + 0xa0) == 1)
    zmm6_1 = sub_14240e030(rbx_8, 0)

if (arg2[1].d s> 1)
    void var_298
    int64_t* rax_24 = sub_140aae420(&var_298, arg2)
    int64_t var_150_2 = *rax_24
    *rax_24 = rcx_19
    int64_t var_148_2 = rax_24[1]
    rax_24[1] = rcx_20
    int32_t var_140_1 = rax_24[2].d
    int64_t* var_290
    
    if (var_290 != 0)
        var_290[1].d -= 1
        
        if (var_290[1].d == 1)
            (**var_290)(var_290)
            int32_t rdi_1 = *(var_290 + 0xc)
            *(var_290 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_290 + 8))(var_290, zx.q(rdi_1))
    
    void* rbx_10 = *(arg1 + 0x260)
    void** rax_29 = var_280
    int32_t var_438 = zmm9_2
    float var_434_1 = zmm6_1 - 16f
    rax_29[2](&var_280, rbx_10, &var_438)
    
    if (*(rbx_10 + 0xa0) == 1)
        sub_14240e030(rbx_10, 0)

sub_141fa61e0(&var_280)
int64_t rcx_33 = var_458

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

void** const result = &data_143283728
var_428 = &data_143283728
var_348 = &data_143283728

if (var_360 != 0)
    result = sub_140a74f90(var_360)

__security_check_cookie(rax_1 ^ &var_488)
return result
