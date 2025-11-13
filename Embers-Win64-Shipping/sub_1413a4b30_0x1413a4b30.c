// 函数: sub_1413a4b30
// 地址: 0x1413a4b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_408
int64_t rax_1 = __security_cookie ^ &var_408
void var_2c8
sub_1419928d0(&var_2c8, arg2)
int64_t* rax_3 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
int128_t var_308
sub_1419a2ec0(rax_3, &var_308, &data_143ec5440, 0)
int128_t zmm6 = var_308
int64_t* var_2e8
sub_1419a2ec0(rax_3, &var_2e8, &data_143ec5550, 0)
int32_t var_3c8 = 0x18
void* rcx_4 = zmm6.q
char var_3c4 = 1
int64_t var_3b0 = 0
void* rax_4 = nullptr
int32_t var_3a8 = 0
int64_t var_390 = 0
int32_t var_388 = 0
int64_t var_378
__builtin_memset(&var_378, 0, 0x18)

if (rcx_4 != 0)
    int64_t rdx_2 = sx.q(*(rcx_4 + 0x10c))
    int64_t* rbx_1 = *(var_308:8.q + 0x10)
    int64_t* rax_6 = rbx_1[3]
    
    if (rax_6[rdx_2] == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rax_6 = rbx_1[3]
    
    rax_4 = rax_6[rdx_2]

void* var_3d8 = rax_4
var_308.q = &var_3d8
int64_t rbx_2 = 0x4f1a08f64cae0c3d
var_308:8.d = 1
int128_t var_3c0 = var_308
int64_t rax_7 = 0
var_308.q = (*(rax_4 + 0x18)).q
int64_t var_380 = (-0x25b7402ea319f3f8 + var_308.q) ^ 0x4f1a08f64cae0c3d
int64_t* rcx_8 = var_2e8

if (rcx_8 != 0)
    int64_t rdx_3 = sx.q(*(rcx_8 + 0x10c))
    int32_t var_2e0
    int64_t* rdi_2 = *(var_2e0.q + 0x10)
    int64_t* rax_9 = rdi_2[3]
    
    if (rax_9[rdx_3] == 0)
        sub_1419ccf30(rdi_2, rdx_3.d)
        rax_9 = rdi_2[3]
    
    rax_7 = rax_9[rdx_3]

int64_t var_3e0 = rax_7
int64_t* r10 = &var_3e0
int32_t var_2e0_1 = 1
var_2e8 = &var_3e0
int64_t i = 0
int128_t var_3a0 = var_2e8.o

do
    void* rax_10 = *r10
    r10 = &r10[1]
    i += 1
    int32_t var_2d8_1 = *(rax_10 + 0x28)
    var_308.q = (*(rax_10 + 0x18)).q
    rbx_2 ^= var_308.q + (rbx_2 << 6) + (rbx_2 u>> 2) - -0x9e3779b9
while (i != 1)

int64_t var_370 = rbx_2
char var_3c4_1 = 0
void*** rax_15 = sub_141972650(arg2, &var_3c8)
void* rsi_2 = *(arg3 + 0x51e8)
int64_t* var_2c0
int64_t* rax_16 = sub_14081d830(0x20, var_2c0, 1, 0)
int64_t* rbx_3 = rax_16

if (rax_16 == 0)
    rbx_3 = nullptr
else
    __builtin_memset(rax_16, 0, 0x18)

__builtin_memset(rbx_3, 0, 0x20)
*rbx_3 = *(rsi_2 + 0x18)
sub_1405d16e0(&rbx_3[2], *(arg3 + 0x10))
int64_t* rax_19

if (*sub_14139d540(&data_143ec4c60) != 0)
    rax_19 = sub_14139d540(&data_143ec4c60)
else
    data_1439b6a99 = 0
    rax_19 = &data_1439b70c8

void*** rax_20 = sub_1410fccd0(&var_2c8, rax_19, u"External", 0)
var_308.q = rax_20
var_308:8.w = 0
void*** rax_21 = sub_14081d830(0x28, var_2c0, 1, 0)
int128_t zmm0_1

if (rax_21 == 0)
    rax_21 = nullptr
else
    zmm0_1 = var_308
    rax_21[1] = rax_20[1]
    *rax_21 = &data_142f285c0
    rax_21[2] = 0
    *(rax_21 + 0x18) = zmm0_1

rbx_3[1] = rax_21
zmm0_1 = *(arg3 + 0x1598)
int64_t* var_350 = rbx_3
int64_t* var_338 = &data_143ec4c60
void* var_330 = rsi_2
void*** rax_22
char rcx_16
rax_22, rcx_16 = sub_14081d830(0x80, var_2c0, 1, 0)
void*** rdi_4 = rax_22

if (rax_22 == 0)
    rdi_4 = nullptr
else
    var_2e8 = rbx_3
    int128_t zmm6_1 = sub_14139e600(rcx_16)
    var_2e0_1.q = &data_143ec72b0
    var_2e8.o = var_2e8.o
    void var_3e8
    sub_141992bd0(rdi_4, &var_3e8, &var_2e8, 2)
    *rdi_4 = &data_142f6e190
    *(rdi_4 + 0x38) = arg1.o
    *(rdi_4 + 0x48) = zmm6_1
    *(rdi_4 + 0x58) = var_338.o
    *(rdi_4 + 0x68) = rax_15.o
    rdi_4[0xf] = zmm0_1:8.q

sub_1419968d0(&var_2c8, rdi_4)
sub_14199ef00(&var_2c8)
int64_t result = sub_1410eb9e0(&var_2c8)
__security_check_cookie(rax_1 ^ &var_408)
return result
