// 函数: sub_1407f8ce0
// 地址: 0x1407f8ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4f8
int64_t rax_1 = __security_cookie ^ &var_4f8
int64_t var_158 = data_143ce2d40
int64_t* var_150 = nullptr
int32_t var_148 = 1
int32_t var_128
int32_t var_128_1 = (var_128 & 0xffffffd2) | 0x12
int64_t var_140 = 0
int32_t var_138 = 0
int64_t var_130 = 0
int64_t var_120
__builtin_memset(&var_120, 0, 0x2c)
int32_t var_f4 = 0x80
int32_t var_f0 = 0xffffffff
int32_t var_ec = 0
int64_t var_e0 = 0
int32_t var_d8 = 0
int64_t var_4d8
sub_140b58260(&var_4d8, u"Texture", 1)
int64_t var_3f0 = var_4d8
int64_t var_3e8 = *(arg1 + 0x10)
int32_t var_3e0 = 0xffff0001
int16_t var_3dc = 0xffff
int64_t var_3d8 = 0
int64_t var_3d0 = 0
sub_1405c4ec0(&var_150)
int64_t* rsi = var_150
sub_140745220(rsi, &var_3f0)

if (var_3d8 != 0)
    sub_140a74f90(var_3d8)

int64_t var_4d0
sub_140b58260(&var_4d0, &data_142d9b038, 1)
int64_t rbx = sx.q(var_148)
int64_t var_3c8 = var_4d0
int64_t var_3c0 = data_14396f0b8
int16_t var_3b8 = data_14396f0c0
int32_t rax_11 = (rbx + 1).d
int32_t var_3b6 = 0xffffffff
int64_t var_3b0 = 0
int64_t var_3a8 = 0
var_148 = rax_11

if (rax_11 s> 0)
    sub_1405c4ec0(&var_150)
    rsi = var_150

sub_140745220(&rsi[rbx * 5], &var_3c8)

if (var_3b0 != 0)
    sub_140a74f90(var_3b0)

void var_238
_vfprintf_p_l(&var_238, 
    Sample mip level 0 of the input 2d texture at the specified UV coordinates. The UV origin (0,0) is "
"in the upper left hand corne", UNiagaraDataInterfaceTexture")
int64_t* var_230

if (var_230 != 0)
    var_230[1].d -= 1
    
    if (var_230[1].d == 1)
        (**var_230)(var_230)
        int32_t rax_14 = *(var_230 + 0xc)
        *(var_230 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*var_230 + 8))(var_230, 1)

int64_t var_4c8
sub_140b58260(&var_4c8, u"Value", 1)
int64_t rbx_2 = sx.q(var_138)
int64_t var_3a0 = var_4c8
int64_t var_398 = data_14396f0d8
int16_t var_390 = data_14396f0e0
int32_t rax_19 = (rbx_2 + 1).d
int32_t var_38e = 0xffffffff
int64_t var_388 = 0
int64_t var_380 = 0
var_138 = rax_19

if (rax_19 s> 0)
    sub_1405c4ec0(&var_140)

sub_140745220(var_140 + rbx_2 * 0x28, &var_3a0)

if (var_388 != 0)
    sub_140a74f90(var_388)

int64_t rbx_3 = sx.q(arg2[1].d)
int32_t rax_21 = (rbx_3 + 1).d
arg2[1].d = rax_21

if (rax_21 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_3 * 0x88 + *arg2, &var_158)
sub_1405ae080(&var_120)
sub_140745ac0(&var_140)
sub_140745ac0(&var_150)
int64_t var_1e8 = data_143ce2d50
int64_t* var_1e0 = nullptr
int64_t var_1d8 = 1
int32_t var_1b8
int32_t var_1b8_1 = (var_1b8 & 0xffffffd2) | 0x12
int64_t var_1d0 = 0
int32_t var_1c8 = 0
int64_t var_1c0 = 0
int64_t var_1b0
__builtin_memset(&var_1b0, 0, 0x2c)
int32_t var_184 = 0x80
int32_t var_180 = 0xffffffff
int32_t var_17c = 0
int64_t var_170 = 0
int32_t var_168 = 0
int64_t var_4c0
sub_140b58260(&var_4c0, u"Texture", 1)
int64_t var_378 = var_4c0
int64_t var_370 = *(arg1 + 0x10)
int32_t var_368 = 0xffff0001
int16_t var_364 = 0xffff
int64_t var_360 = 0
int64_t var_358 = 0
sub_1405c4ec0(&var_1e0)
int64_t* rbx_4 = var_1e0
sub_140745220(rbx_4, &var_378)

if (var_360 != 0)
    sub_140a74f90(var_360)

int64_t var_4b8
sub_140b58260(&var_4b8, &data_142dce1a0, 1)
int64_t r15 = sx.q(var_1d8.d)
int32_t rsi_1 = var_1d8:4.d
int64_t var_350 = var_4b8
int32_t r14 = (r15 + 1).d
int64_t var_348 = data_14396f0c8
int16_t var_340 = data_14396f0d0
int32_t var_33e = 0xffffffff
int64_t var_338 = 0
int64_t var_330 = 0
var_1d8.d = r14

if (r14 s> rsi_1)
    sub_1405c4ec0(&var_1e0)
    rsi_1 = var_1d8:4.d
    r14 = var_1d8.d
    rbx_4 = var_1e0

sub_140745220(&rbx_4[r15 * 5], &var_350)

if (var_338 != 0)
    sub_140a74f90(var_338)

int64_t var_4b0
sub_140b58260(&var_4b0, u"XYNumFrames", 1)
int32_t r15_1 = r14 + 1
int64_t var_328 = var_4b0
int64_t var_320 = data_14396f0b8
int16_t var_318 = data_14396f0c0
int32_t var_316 = 0xffffffff
int64_t var_310 = 0
int64_t var_308 = 0
var_1d8.d = r15_1

if (r15_1 s> rsi_1)
    sub_1405c4ec0(&var_1e0)
    rsi_1 = var_1d8:4.d
    r15_1 = var_1d8.d
    rbx_4 = var_1e0

sub_140745220(&rbx_4[sx.q(r14) * 5], &var_328)

if (var_310 != 0)
    sub_140a74f90(var_310)

int64_t var_4a8
sub_140b58260(&var_4a8, u"TotalNumFrames", 1)
int32_t r14_1 = r15_1 + 1
int64_t var_300 = var_4a8
int64_t var_2f8 = data_14396f088
int16_t var_2f0 = data_14396f090
int32_t var_2ee = 0xffffffff
int64_t var_2e8 = 0
int64_t var_2e0 = 0
var_1d8.d = r14_1

if (r14_1 s> rsi_1)
    sub_1405c4ec0(&var_1e0)
    rsi_1 = var_1d8:4.d
    r14_1 = var_1d8.d
    rbx_4 = var_1e0

sub_140745220(&rbx_4[sx.q(r15_1) * 5], &var_300)

if (var_2e8 != 0)
    sub_140a74f90(var_2e8)

int64_t var_4a0
sub_140b58260(&var_4a0, u"MipMode", 1)
int32_t r15_2 = r14_1 + 1
int64_t var_2d8 = var_4a0
int64_t var_2d0 = data_14396f0a8
int16_t var_2c8 = data_14396f0b0
int32_t var_2c6 = 0xffffffff
int64_t var_2c0 = 0
int64_t var_2b8 = 0
var_1d8.d = r15_2

if (r15_2 s> rsi_1)
    sub_1405c4ec0(&var_1e0)
    rsi_1 = var_1d8:4.d
    r15_2 = var_1d8.d
    rbx_4 = var_1e0

sub_140745220(&rbx_4[sx.q(r14_1) * 5], &var_2d8)

if (var_2c0 != 0)
    sub_140a74f90(var_2c0)

int64_t var_498
sub_140b58260(&var_498, u"MipLevel", 1)
int64_t var_2b0 = var_498
int64_t var_298 = 0
int64_t var_290 = 0
int32_t r13 = r15_2 + 1
int64_t var_2a8 = data_14396f088
int16_t var_2a0 = data_14396f090
int32_t var_29e = 0xffffffff
var_1d8.d = r13

if (r13 s> rsi_1)
    sub_1405c4ec0(&var_1e0)
    rsi_1 = var_1d8:4.d
    r13 = var_1d8.d
    rbx_4 = var_1e0

sub_140745220(&rbx_4[sx.q(r15_2) * 5], &var_2b0)

if (var_298 != 0)
    sub_140a74f90(var_298)

int64_t var_490
sub_140b58260(&var_490, &data_142dce208, 1)
int32_t r14_2 = r13 + 1
int64_t var_288 = var_490
int64_t var_280 = data_14396f0b8
int16_t var_278 = data_14396f0c0
int32_t var_276 = 0xffffffff
int64_t var_270 = 0
int64_t var_268 = 0
var_1d8.d = r14_2

if (r14_2 s> rsi_1)
    sub_1405c4ec0(&var_1e0)
    rsi_1 = var_1d8:4.d
    r14_2 = var_1d8.d
    rbx_4 = var_1e0

sub_140745220(&rbx_4[sx.q(r13) * 5], &var_288)

if (var_270 != 0)
    sub_140a74f90(var_270)

int64_t var_488
sub_140b58260(&var_488, &data_142dce210, 1)
int64_t var_260 = var_488
int64_t var_258 = data_14396f0b8
int16_t var_250 = data_14396f0c0
int32_t var_24e = 0xffffffff
int64_t var_248 = 0
int64_t var_240 = 0
var_1d8.d = r14_2 + 1

if (r14_2 + 1 s> rsi_1)
    sub_1405c4ec0(&var_1e0)
    rbx_4 = var_1e0

sub_140745220(&rbx_4[sx.q(r14_2) * 5], &var_260)

if (var_248 != 0)
    sub_140a74f90(var_248)

void var_220
_vfprintf_p_l(&var_220, 
    Return a pseudovolume texture sample.\nUseful for simulating 3D texturing with a 2D texture or as a "
"texture flipbook with lerped transit", UNiagaraDataInterfaceTexture")
int64_t* var_218

if (var_218 != 0)
    var_218[1].d -= 1
    
    if (var_218[1].d == 1)
        (**var_218)(var_218)
        int32_t rax_58 = *(var_218 + 0xc)
        *(var_218 + 0xc) -= 1
        
        if (rax_58 == 1)
            (*(*var_218 + 8))(var_218, 1)

int64_t var_480
sub_140b58260(&var_480, u"Value", 1)
int64_t rbx_6 = sx.q(var_1c8)
int64_t var_468 = var_480
int64_t var_460 = data_14396f0d8
int16_t var_458 = data_14396f0e0
int32_t rax_63 = (rbx_6 + 1).d
int32_t var_456 = 0xffffffff
int64_t var_450 = 0
int64_t var_448 = 0
var_1c8 = rax_63

if (rax_63 s> 0)
    sub_1405c4ec0(&var_1d0)

sub_140745220(var_1d0 + rbx_6 * 0x28, &var_468)

if (var_450 != 0)
    sub_140a74f90(var_450)

int64_t rbx_7 = sx.q(arg2[1].d)
int32_t rax_65 = (rbx_7 + 1).d
arg2[1].d = rax_65

if (rax_65 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_7 * 0x88 + *arg2, &var_1e8)
sub_1405ae080(&var_1b0)
sub_140745ac0(&var_1d0)
sub_140745ac0(&var_1e0)
int64_t var_c8 = data_143ce2d58
int64_t* var_c0 = nullptr
int64_t var_b8 = 1
int32_t var_98
int32_t var_98_1 = (var_98 & 0xffffffda) | 0x1a
int64_t var_b0 = 0
int32_t var_a8 = 0
int64_t var_a0 = 0
int64_t var_90
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64 = 0x80
int32_t var_60 = 0xffffffff
int32_t var_5c = 0
int64_t var_50 = 0
int32_t var_48 = 0
int64_t var_478
sub_140b58260(&var_478, u"Texture", 1)
int64_t var_440 = var_478
int64_t var_438 = *(arg1 + 0x10)
int32_t var_430 = 0xffff0001
int16_t var_42c = 0xffff
int64_t var_428 = 0
int64_t var_420 = 0
sub_1405c4ec0(&var_c0)
sub_140745220(var_c0, &var_440)

if (var_428 != 0)
    sub_140a74f90(var_428)

void var_208
_vfprintf_p_l(&var_208, Get the dimensions of mip 0 of the texture.", UNiagaraDataInterfaceTexture")
int64_t* var_200

if (var_200 != 0)
    var_200[1].d -= 1
    
    if (var_200[1].d == 1)
        (**var_200)(var_200)
        int32_t rax_74 = *(var_200 + 0xc)
        *(var_200 + 0xc) -= 1
        
        if (rax_74 == 1)
            (*(*var_200 + 8))(var_200, 1)

int64_t var_470
sub_140b58260(&var_470, u"Dimensions2D", 1)
int64_t rbx_9 = sx.q(var_a8)
int64_t var_418 = var_470
int64_t var_410 = data_14396f0b8
int16_t var_408 = data_14396f0c0
int32_t rax_79 = (rbx_9 + 1).d
int32_t var_406 = 0xffffffff
int64_t var_400 = 0
int64_t var_3f8 = 0
var_a8 = rax_79

if (rax_79 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rbx_9 * 0x28, &var_418)

if (var_400 != 0)
    sub_140a74f90(var_400)

int64_t rbx_10 = sx.q(arg2[1].d)
int32_t rax_81 = (rbx_10 + 1).d
arg2[1].d = rax_81

if (rax_81 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_10 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
int64_t result = sub_140745ac0(&var_c0)
__security_check_cookie(rax_1 ^ &var_4f8)
return result
