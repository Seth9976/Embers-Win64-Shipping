// 函数: sub_14183b240
// 地址: 0x14183b240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int32_t var_29c = 0x80
int64_t var_2c8 = 0
int32_t var_2c0 = 0
int64_t var_2b8
__builtin_memset(&var_2b8, 0, 0x1c)
int32_t var_298 = 0xffffffff
int32_t var_294 = 0
void* var_288 = nullptr
int32_t var_280 = 0

if (&var_2c8 != arg2)
    int64_t rbx_1 = sx.q(arg2[9].d)
    void var_290
    sub_1405a4aa0(&var_290, 0, rbx_1.d, 4)
    void* rax_2 = arg2[8]
    void* rdx = &arg2[7]
    void* rcx_1 = &var_290
    
    if (rax_2 != 0)
        rdx = rax_2
    
    if (var_288 != 0)
        rcx_1 = var_288
    
    memcpy(rcx_1, rdx, (rbx_1 << 2).d)
    int32_t var_280_1 = rbx_1.d
    sub_141823c70(&var_2c8, arg2)

int64_t* r15_1 = *arg3
int64_t* rsi_1 = arg3[1]

if (rsi_1 != 0)
    rsi_1[1].d += 1

int64_t var_318 = 0
int32_t var_310 = 0
int32_t var_2ec = 0x80
int64_t var_308
__builtin_memset(&var_308, 0, 0x1c)
int32_t var_2e8 = 0xffffffff
int32_t var_2e4 = 0
void* var_2d8 = nullptr
int32_t var_2d0 = 0

if (&var_318 != arg4)
    int64_t rbx_2 = sx.q(arg4[9].d)
    void var_2e0
    sub_1405a4aa0(&var_2e0, 0, rbx_2.d, 4)
    void* rax_4 = arg4[8]
    void* rdx_2 = &arg4[7]
    void* rcx_4 = &var_2e0
    
    if (rax_4 != 0)
        rdx_2 = rax_4
    
    if (var_2d8 != 0)
        rcx_4 = var_2d8
    
    memcpy(rcx_4, rdx_2, (rbx_2 << 2).d)
    int32_t var_2d0_1 = rbx_2.d
    sub_141823c70(&var_318, arg4)

if (var_2c0 == var_294)
    (*(*arg1 + 0xa8))(arg1, &var_2c8)

if (var_310 == var_2e4)
    (*(*r15_1 + 0xa8))(r15_1, &var_318)

int64_t var_138
__builtin_memset(&var_138, 0, 0x2c)
int32_t var_10c = 0x80
int32_t var_108 = 0xffffffff
int32_t var_104 = 0
int64_t var_f8 = 0
int32_t var_f0 = 0
int64_t var_1d8
__builtin_memset(&var_1d8, 0, 0x2c)
int32_t var_1ac = 0x80
int32_t var_1a8 = 0xffffffff
int32_t var_1a4 = 0
int64_t var_198 = 0
int32_t var_190 = 0
int64_t var_228
__builtin_memset(&var_228, 0, 0x2c)
int32_t var_1fc = 0x80
int32_t var_1f8 = 0xffffffff
int32_t var_1f4 = 0
int64_t var_1e8 = 0
int32_t var_1e0 = 0
(*(*r15_1 + 0x1a8))(r15_1, &var_318, &var_138)
(*(*r15_1 + 0x168))(r15_1, &var_138, &var_1d8)
(*(*r15_1 + 0x208))(r15_1, &var_318, &var_1d8, &var_228)
int64_t var_388 = 0
int64_t var_380 = 0
int64_t var_188
__builtin_memset(&var_188, 0, 0x2c)
int32_t var_15c = 0x80
int32_t var_158 = 0xffffffff
int32_t var_154 = 0
int64_t var_148 = 0
int32_t var_140 = 0
int64_t* var_378 = r15_1

if (rsi_1 != 0)
    rsi_1[1].d += 1

(*(*arg1 + 0x120))(arg1, &var_378, &var_388, &var_188)

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t rax_16 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (rax_16 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

int64_t rax_18 = *arg1
int64_t var_278
__builtin_memset(&var_278, 0, 0x2c)
int32_t var_24c = 0x80
int32_t var_248 = 0xffffffff
int32_t var_244 = 0
int64_t var_238 = 0
int32_t var_230 = 0
int64_t var_368
__builtin_memset(&var_368, 0, 0x2c)
int32_t var_33c = 0x80
int32_t var_338 = 0xffffffff
int32_t var_334 = 0
int64_t var_328 = 0
int32_t var_320 = 0
(*(rax_18 + 0x1a8))(arg1, &var_2c8, &var_278)
int64_t var_98
int64_t* rax_19 = sub_140967750(&var_188, &var_98, &var_278)

if (&var_278 != rax_19)
    sub_1409f61f0(&var_278, rax_19)
    void var_240
    
    if (rax_19[8] == 0)
        memmove(&var_240, &rax_19[7], 4)
    
    if (var_238 != 0)
        sub_140a74f90(var_238)
    
    var_238 = rax_19[8]
    rax_19[8] = 0
    int32_t var_230_1 = rax_19[9].d
    rax_19[9].d = 0

int32_t var_50 = 0
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_14059ad90(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_22 = var_98

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

(*(*arg1 + 0x168))(arg1, &var_278, &var_368)
int64_t var_e8
int64_t* rax_23 = sub_141835020(&var_368, &var_e8, &var_228)

if (&var_368 != rax_23)
    sub_140780e10(&var_368, rax_23)
    void var_330
    
    if (rax_23[8] == 0)
        memmove(&var_330, &rax_23[7], 4)
    
    if (var_328 != 0)
        sub_140a74f90(var_328)
    
    var_328 = rax_23[8]
    rax_23[8] = 0
    int32_t var_320_1 = rax_23[9].d
    rax_23[9].d = 0

int32_t var_a0 = 0
int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

int32_t var_e0 = 0
int32_t var_dc

if (var_dc != 0)
    sub_1405a5130(&var_e8, 0)

int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
void var_d8
sub_14059a8e0(&var_d8, 0)
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_32 = var_e8

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int64_t result = (*(*arg1 + 0x178))(arg1, &var_368)
int32_t var_320_2 = 0

if (var_328 != 0)
    sub_140a74f90(var_328)

int64_t var_360
var_360.d = 0
int32_t var_338_1 = 0xffffffff
int32_t var_334_1 = 0
int64_t var_358
sub_14059a8e0(&var_358, 0)
int64_t var_348

if (var_348 != 0)
    sub_140a74f90(var_348)

int64_t rcx_38 = var_368

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

int32_t var_230_2 = 0

if (var_238 != 0)
    sub_140a74f90(var_238)

sub_14059ad90(&var_278, 0)
int64_t var_258

if (var_258 != 0)
    sub_140a74f90(var_258)

int64_t rcx_42 = var_278

if (rcx_42 != 0)
    sub_140a74f90(rcx_42)

int32_t var_140_1 = 0

if (var_148 != 0)
    sub_140a74f90(var_148)

sub_14059ad90(&var_188, 0)
int64_t var_168

if (var_168 != 0)
    sub_140a74f90(var_168)

int64_t rcx_46 = var_188

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)

int64_t rcx_47 = var_388

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

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

int64_t rcx_52 = var_228

if (rcx_52 != 0)
    sub_140a74f90(rcx_52)

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

int64_t rcx_57 = var_1d8

if (rcx_57 != 0)
    sub_140a74f90(rcx_57)

int32_t var_f0_1 = 0

if (var_f8 != 0)
    sub_140a74f90(var_f8)

sub_14059ad90(&var_138, 0)
int64_t var_118

if (var_118 != 0)
    sub_140a74f90(var_118)

int64_t rcx_61 = var_138

if (rcx_61 != 0)
    sub_140a74f90(rcx_61)

int32_t var_2d0_2 = 0

if (var_2d8 != 0)
    sub_140a74f90(var_2d8)

sub_14059ad90(&var_318, 0)
int64_t var_2f8

if (var_2f8 != 0)
    sub_140a74f90(var_2f8)

int64_t rcx_65 = var_318

if (rcx_65 != 0)
    sub_140a74f90(rcx_65)

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t rdi_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, zx.q(rdi_1))

int32_t var_280_2 = 0

if (var_288 != 0)
    sub_140a74f90(var_288)

sub_14059ad90(&var_2c8, 0)
int64_t var_2a8

if (var_2a8 != 0)
    sub_140a74f90(var_2a8)

int64_t rcx_71 = var_2c8

if (rcx_71 != 0)
    sub_140a74f90(rcx_71)

__security_check_cookie(rax_1 ^ &var_3a8)
return result
