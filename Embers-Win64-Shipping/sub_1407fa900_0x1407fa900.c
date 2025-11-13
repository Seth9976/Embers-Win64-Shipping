// 函数: sub_1407fa900
// 地址: 0x1407fa900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int64_t var_158 = data_143ce2e28
int64_t* var_150 = nullptr
int64_t var_148 = 1
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
int64_t var_2a8
sub_140b58260(&var_2a8, u"Texture", 1)
int64_t var_278 = var_2a8
int64_t var_270 = *(arg1 + 0x10)
int32_t var_268 = 0xffff0001
int16_t var_264 = 0xffff
int64_t var_260 = 0
int64_t var_258 = 0
sub_1405c4ec0(&var_150)
int64_t* rsi = var_150
sub_140745220(rsi, &var_278)

if (var_260 != 0)
    sub_140a74f90(var_260)

int64_t var_2a0
sub_140b58260(&var_2a0, &data_142dce1a0, 1)
int64_t r14 = sx.q(var_148.d)
int32_t r15 = var_148:4.d
int64_t var_250 = var_2a0
int32_t rbx = (r14 + 1).d
int64_t var_248 = data_14396f0c8
int16_t var_240 = data_14396f0d0
int32_t var_23e = 0xffffffff
int64_t var_238 = 0
int64_t var_230 = 0
var_148.d = rbx

if (rbx s> r15)
    sub_1405c4ec0(&var_150)
    r15 = var_148:4.d
    rbx = var_148.d
    rsi = var_150

sub_140745220(&rsi[r14 * 5], &var_250)

if (var_238 != 0)
    sub_140a74f90(var_238)

int64_t var_298
sub_140b58260(&var_298, u"MipLevel", 1)
int64_t var_228 = var_298
int64_t var_220 = data_14396f088
int16_t var_218 = data_14396f090
int32_t var_216 = 0xffffffff
int64_t var_210 = 0
int64_t var_208 = 0
var_148.d = rbx + 1

if (rbx + 1 s> r15)
    sub_1405c4ec0(&var_150)
    rsi = var_150

sub_140745220(&rsi[sx.q(rbx) * 5], &var_228)

if (var_210 != 0)
    sub_140a74f90(var_210)

void var_188
_vfprintf_p_l(&var_188, 
    Sample the specified mip level of the input 3d texture at the specified UVW coordinates. The UVW "
"origin", UNiagaraDataInterfaceVolumeTexture")
int64_t* var_180

if (var_180 != 0)
    var_180[1].d -= 1
    
    if (var_180[1].d == 1)
        (**var_180)(var_180)
        int32_t rax_18 = *(var_180 + 0xc)
        *(var_180 + 0xc) -= 1
        
        if (rax_18 == 1)
            (*(*var_180 + 8))(var_180, 1)

int64_t var_290
sub_140b58260(&var_290, u"Value", 1)
int64_t rbx_2 = sx.q(var_138)
int64_t var_200 = var_290
int64_t var_1f8 = data_14396f0d8
int16_t var_1f0 = data_14396f0e0
int32_t rax_23 = (rbx_2 + 1).d
int32_t var_1ee = 0xffffffff
int64_t var_1e8 = 0
int64_t var_1e0 = 0
var_138 = rax_23

if (rax_23 s> 0)
    sub_1405c4ec0(&var_140)

sub_140745220(var_140 + rbx_2 * 0x28, &var_200)

if (var_1e8 != 0)
    sub_140a74f90(var_1e8)

int64_t rbx_3 = sx.q(arg2[1].d)
int32_t rax_25 = (rbx_3 + 1).d
arg2[1].d = rax_25

if (rax_25 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_3 * 0x88 + *arg2, &var_158)
sub_1405ae080(&var_120)
sub_140745ac0(&var_140)
sub_140745ac0(&var_150)
int64_t var_c8 = data_143ce2e30
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
int64_t var_288
sub_140b58260(&var_288, u"Texture", 1)
int64_t var_1d8 = var_288
int64_t var_1d0 = *(arg1 + 0x10)
int32_t var_1c8 = 0xffff0001
int16_t var_1c4 = 0xffff
int64_t var_1c0 = 0
int64_t var_1b8 = 0
sub_1405c4ec0(&var_c0)
sub_140745220(var_c0, &var_1d8)

if (var_1c0 != 0)
    sub_140a74f90(var_1c0)

void var_170
_vfprintf_p_l(&var_170, Get the dimensions of mip 0 of the texture.", 
    UNiagaraDataInterfaceVolumeTexture")
int64_t* var_168

if (var_168 != 0)
    var_168[1].d -= 1
    
    if (var_168[1].d == 1)
        (**var_168)(var_168)
        int32_t rax_34 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (rax_34 == 1)
            (*(*var_168 + 8))(var_168, 1)

int64_t var_280
sub_140b58260(&var_280, u"Dimensions3D", 1)
int64_t rbx_5 = sx.q(var_a8)
int64_t var_1b0 = var_280
int64_t var_1a8 = data_14396f0c8
int16_t var_1a0 = data_14396f0d0
int32_t rax_39 = (rbx_5 + 1).d
int32_t var_19e = 0xffffffff
int64_t var_198 = 0
int64_t var_190 = 0
var_a8 = rax_39

if (rax_39 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rbx_5 * 0x28, &var_1b0)

if (var_198 != 0)
    sub_140a74f90(var_198)

int64_t rbx_6 = sx.q(arg2[1].d)
int32_t rax_41 = (rbx_6 + 1).d
arg2[1].d = rax_41

if (rax_41 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_6 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
int64_t result = sub_140745ac0(&var_c0)
__security_check_cookie(rax_1 ^ &var_2c8)
return result
