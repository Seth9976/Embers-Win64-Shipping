// 函数: sub_1422a82f0
// 地址: 0x1422a82f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
sub_140e5ecb0(data_143e29f28)
void var_240
int64_t* rax_2 = _vfprintf_p_l(&var_240, u"Recompiling Rendering Module...", u"Renderer")
sub_140b0e800(data_143ddb418, rax_2, 1, 0)
int64_t* var_238

if (var_238 != 0)
    var_238[1].d -= 1
    
    if (var_238[1].d == 1)
        (**var_238)(var_238)
        int32_t rax_5 = *(var_238 + 0xc)
        *(var_238 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_238 + 8))(var_238, 1)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
void var_78
sub_141ed2550(&var_78)
void var_268
sub_141992c00(&var_268, 1)
int32_t var_bc = 0x80
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int64_t var_228
int64_t* var_270 = &var_228
int64_t var_1d8
int64_t* var_278 = &var_1d8
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int64_t var_138
__builtin_memset(&var_138, 0, 0x2c)
int32_t var_10c = 0x80
int32_t var_108 = 0xffffffff
int32_t var_104 = 0
int64_t var_f8 = 0
int32_t var_f0 = 0
int128_t var_98
__builtin_memset(&var_98, 0, 0x20)
int64_t var_188
__builtin_memset(&var_188, 0, 0x2c)
int32_t var_15c = 0x80
int32_t var_158 = 0xffffffff
int32_t var_154 = 0
int64_t var_148 = 0
int32_t var_140 = 0
__builtin_memset(&var_1d8, 0, 0x2c)
int32_t var_1ac = 0x80
int32_t var_1a8 = 0xffffffff
int32_t var_1a4 = 0
int64_t var_198 = 0
int32_t var_190 = 0
__builtin_memset(&var_228, 0, 0x2c)
int32_t var_1fc = 0x80
int32_t var_1f8 = 0xffffffff
int32_t var_1f4 = 0
int64_t var_1e8 = 0
int32_t var_1e0 = 0
sub_142293940(&var_e8, &var_138, &var_98, &var_188, var_278, var_270)
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
sub_1422a8770()
int64_t performanceCount_2
QueryPerformanceCounter(&performanceCount_2)
int64_t* var_270_1 = &var_228
int64_t* var_278_1 = &var_1d8
sub_1422aa7f0(&var_e8, &var_138)
int32_t var_1e0_1 = 0

if (var_1e8 != 0)
    sub_140a74f90(var_1e8)

int64_t var_220
var_220.d = 0
int32_t var_1f8_1 = 0xffffffff
int32_t var_1f4_1 = 0
int64_t var_218
sub_14059a8e0(&var_218, 0)
int64_t var_208

if (var_208 != 0)
    sub_140a74f90(var_208)

int64_t rcx_16 = var_228

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int32_t var_190_1 = 0

if (var_198 != 0)
    sub_140a74f90(var_198)

int64_t var_1d0
var_1d0.d = 0
int32_t var_1a8_1 = 0xffffffff
int32_t var_1a4_1 = 0
int64_t var_1c8
sub_14059a8e0(&var_1c8, 0)
int64_t var_1b8

if (var_1b8 != 0)
    sub_140a74f90(var_1b8)

int64_t rcx_21 = var_1d8

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int32_t var_140_1 = 0

if (var_148 != 0)
    sub_140a74f90(var_148)

int64_t var_180
var_180.d = 0
int32_t var_158_1 = 0xffffffff
int32_t var_154_1 = 0
int64_t var_178
sub_14059a8e0(&var_178, 0)
int64_t var_168

if (var_168 != 0)
    sub_140a74f90(var_168)

int64_t rcx_26 = var_188

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t i = 4
void* rsi = &var_78

do
    int64_t* rbx_1 = *(rsi - 8)
    rsi -= 8
    i -= 1
    
    if (rbx_1 != 0)
        int64_t rcx_27 = *rbx_1
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        j_sub_140a74f90(rbx_1)
while (i != 0)

int32_t var_f0_1 = 0

if (var_f8 != 0)
    sub_140a74f90(var_f8)

sub_1422899b0(&var_138)
sub_1405ae080(&var_e8)
sub_141994c70(&var_268)
sub_141ed41d0(&var_78)
int64_t performanceCount_3
QueryPerformanceCounter(&performanceCount_3)
int64_t result = sub_140b137c0(data_143ddb418)
__security_check_cookie(rax_1 ^ &var_298)
return result
