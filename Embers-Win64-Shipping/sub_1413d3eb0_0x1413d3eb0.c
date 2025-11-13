// 函数: sub_1413d3eb0
// 地址: 0x1413d3eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
char var_338
int32_t var_320 = &var_338
var_338 = 0
void*** (* var_328)() = j_sub_140597fc0
int64_t* rax_3 = sub_140a756e0(&var_328, &data_143958018) + 0x10
int64_t* var_310 = rax_3
int64_t rcx_1 = *rax_3
int64_t rcx_2 = rax_3[2]
char var_2f8 = 0
int64_t result_1 = rax_3[3]
rax_3[3] = &var_310
int64_t* rax_4 = var_310
rax_4[4].d += 1
sub_1423cc240(arg1)
float zmm2[0x4]
int128_t zmm3
zmm2, zmm3 = sub_142134440()
int32_t rax_5 = arg2[0x76].d
(*(*arg2 + 8))(arg2, arg1)
int32_t rbx = data_143f029c8
sub_140b34200("FlushRHIThreadTotal", rbx)

if (data_143f02bac u> 0)
    zmm2, zmm3 = j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2, zmm3)

sub_14198b230()

if (data_143f01c92 != 0)
    sub_14198b3f0()

int64_t rdx_2
rdx_2.b = 1
sub_14198b7d0()
sub_140b38680("FlushRHIThreadTotal", rbx)
int32_t rbx_1 = data_143f029c8
sub_140b34200("FlushRHIThreadTotal", rbx_1)

if (*(arg1 + 0x14) u> 0)
    j_sub_14196ef60(&data_143f02b88, arg1, zmm2, zmm3)

sub_14198b230()

if (data_143f01c92 != 0)
    sub_14198b3f0()

int64_t rdx_6
rdx_6.b = 1
sub_14198b7d0()
sub_140b38680("FlushRHIThreadTotal", rbx_1)
int64_t* rcx_11 = data_143f0f180
(*(*rcx_11 + 0x3f0))(rcx_11)
sub_141392f60(&data_143ec4c60, arg1, arg4)
void* rax_8 = arg2[0x14]
void var_2c0
sub_1419928d0(&var_2c0, arg1)
void*** rax_9 = sub_1410fccd0(&var_2c0, &data_143ec4d80, u"ReflectionColorScratchCubemap", 0)
int64_t* var_2b8
void*** (* rax_10)() = sub_14081d830(0xe0, var_2b8, 1, 0)
void*** (* rbx_2)() = rax_10

if (rax_10 == 0)
    rbx_2 = nullptr
else
    __builtin_memset(rax_10, 0, 0x28)
    *(rax_10 + 0x40) = 0
    *(rax_10 + 0x48) = 0
    *(rax_10 + 0x4c) = 0x3f800000
    sub_14117af20(rax_10 + 0x50)

memset(rbx_2, 0, 0xe0)
var_328 = rax_9
var_320.w = 0
var_320:2.b = 0
var_320 = arg3
*(rbx_2 + 0x50) = var_328.o
float zmm1[0x4] = *arg7
*(rbx_2 + 0x40) = zmm1
var_328.o = zmm1

if (arg5 == 0)
    void* rax_13 = *(arg2[1] + 0xf80)
    
    if (rax_13 == 0 || (*(rax_13 + 0x20) & 4) != 0)
        zmm2 = _mm_unpacklo_ps(0x40000000, 0)
        var_320 = 0
    else
        zmm2 = _mm_unpacklo_ps(0x3f800000, (*(rax_13 + 0x14))[0].q)
        var_320 = 0
else if (arg6 == 0)
    var_320 = 0
    zmm2 = _mm_unpacklo_ps(zx.o(0), 0)
else
    var_320 = 0x3f800000
    zmm2 = _mm_unpacklo_ps(zx.o(0), 0)

*(rbx_2 + 0x30) = zmm2.q
*(rbx_2 + 0x38) = var_320
sub_1405d16e0(rbx_2, *(rax_8 + 0x10))
*(rbx_2 + 0x10) = data_14395f4d0
*(rbx_2 + 8) = sub_1410fccd0(&var_2c0, sub_14139d440(&data_143ec4c60), u"ColorTexture", 0)
*(rbx_2 + 0x20) = data_14395f4d0
*(rbx_2 + 0x18) = sub_1410fccd0(&var_2c0, &data_143ec4ca0, u"DepthTexture", 0)
int64_t* var_2d8 = &data_143ec4c60
void*** (* var_2c8)() = rbx_2
void*** rax_22
char rcx_20
rax_22, rcx_20 = sub_14081d830(0x58, var_2b8, 1, 0)
void*** rsi_1 = rax_22

if (rax_22 == 0)
    rsi_1 = nullptr
else
    var_328 = rbx_2
    sub_1413ea6c0(rcx_20)
    void* var_320_1 = &data_143ecd710
    var_328.o = var_328.o
    sub_141992bd0(rsi_1, &var_338, &var_328, 1)
    *rsi_1 = &data_142f78f48
    *(rsi_1 + 0x38) = arg4.o
    *(rsi_1 + 0x48) = rax_5.o

sub_1419968d0(&var_2c0, rsi_1)
int128_t zmm3_1 = sub_14199ef00(&var_2c0)
sub_1410eb9e0(&var_2c0)
int64_t result = sub_1414336b0(arg1, arg2, 1, zmm3_1)

if (var_2f8 == 0)
    int64_t* rax_23 = var_310
    char var_2f8_1 = 1
    rax_23[4].d -= 1
    int64_t* rcx_26 = var_310
    
    if (rcx_2 != rcx_26[2])
        sub_140b16b40(rcx_26, rcx_2)
        rcx_26 = var_310
    
    *rcx_26 = rcx_1
    result = result_1
    var_310[3] = result

__security_check_cookie(rax_1 ^ &var_358)
return result
