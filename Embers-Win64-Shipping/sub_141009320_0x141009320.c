// 函数: sub_141009320
// 地址: 0x141009320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
wchar32 rcx = (*U"1111")[3]
int64_t var_c0 = 0
int32_t var_b8 = 0
int64_t var_b0 = 0
int32_t var_a8 = 0
int64_t var_90 = 0
int64_t var_88 = 0
int32_t var_e8 = 0x18
int64_t* var_60
sub_1419a2ec0(std::_Get_future_error_what(rcx), &var_60, &data_143f0fe00, 0)
int64_t* rcx_2 = var_60
void* rax_3 = nullptr

if (rcx_2 != 0)
    int64_t rdx_1 = sx.q(*(rcx_2 + 0x10c))
    int32_t var_58
    int64_t* rbx_1 = *(var_58.q + 0x10)
    int64_t* rax_5 = rbx_1[3]
    
    if (rax_5[rdx_1] == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_5 = rbx_1[3]
    
    rax_3 = rax_5[rdx_1]

void* var_f8 = rax_3
int64_t zmm1 = (*(rax_3 + 0x18)).q
int32_t rax_6 = *(rax_3 + 0x28)
var_60 = &var_f8
int64_t rbx_2 = 0x4f1a08f64cae0c3d
void** var_78 = zmm1
int32_t var_58_1 = 1
int32_t var_50 = rax_6
int64_t var_a0 = &var_78[-0x4b6e805d4633e7f] ^ 0x4f1a08f64cae0c3d
int128_t var_e0 = var_60.o
void* rax_7 = sub_141001d70()
void* const var_f0 = rax_7
var_60 = &var_f0
int32_t var_58_2 = 1
int32_t var_50_1 = *(rax_7 + 0x28)
int128_t zmm0_1 = var_60.o
char var_e4 = 0
var_78 = (*(rax_7 + 0x18)).q
int64_t var_98 = &var_78[-0x4b6e805d4633e7f] ^ 0x4f1a08f64cae0c3d
int128_t var_d0 = zmm0_1
void*** rax_8 = j_sub_140a82f30(0x7a0)
void*** rax_9

if (rax_8 == 0)
    rax_9 = nullptr
else
    rax_9 = sub_14100b980(rax_8, arg2, &var_e8)

*arg1 = rax_9
wchar32 rcx_12 = (*U"1111")[3]
var_e8 = 0x18
int64_t var_b0_1 = 0
int32_t var_a8_1 = 0
int64_t var_88_1 = 0
sub_1419a2ec0(std::_Get_future_error_what(rcx_12), &var_78, &data_143f0ff10, 0)
void** rax_11 = var_78
void* const rcx_14 = nullptr

if (rax_11 != 0)
    int64_t rdx_4 = sx.q(*(rax_11 + 0x10c))
    void** r14_1 = rdx_4 << 3
    int32_t var_70
    int64_t* rsi_2 = *(var_70.q + 0x10)
    int64_t* rax_13 = rsi_2[3]
    
    if (*(rax_13 + r14_1) == 0)
        sub_1419ccf30(rsi_2, rdx_4.d)
        rax_13 = rsi_2[3]
    
    rcx_14 = *(r14_1 + rax_13)

var_f0 = rcx_14
int64_t zmm1_1 = (*(rcx_14 + 0x18)).q
var_78 = &var_f0
int32_t var_70_1 = 1
int128_t zmm0_2 = var_78.o
int32_t var_68 = *(rcx_14 + 0x28)
var_78 = zmm1_1
int64_t var_a0_1 = &var_78[-0x4b6e805d4633e7f] ^ 0x4f1a08f64cae0c3d
int128_t var_e0_1 = zmm0_2
int64_t* rax_15 = sub_141001d70()
var_60 = rax_15
var_78 = &var_60
int32_t var_70_2 = 1
int32_t var_68_1 = rax_15[5].d
int128_t var_d0_1 = var_78.o
var_78 = (*(rax_15 + 0x18)).q
int64_t var_98_1 = &var_78[-0x4b6e805d4633e7f] ^ 0x4f1a08f64cae0c3d
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[3]), &var_78, &data_143f10020, 0)
void** rcx_25 = var_78
void* rax_17 = nullptr

if (rcx_25 != 0)
    int64_t rdx_6 = sx.q(*(rcx_25 + 0x10c))
    int64_t* rsi_3 = *(var_70_2.q + 0x10)
    int64_t r14_2 = rdx_6 << 3
    int64_t rax_19 = rsi_3[3]
    
    if (*(r14_2 + rax_19) == 0)
        sub_1419ccf30(rsi_3, rdx_6.d)
        rax_19 = rsi_3[3]
    
    rax_17 = *(r14_2 + rax_19)

int64_t* r10 = &var_f8
int64_t i = 0
var_f8 = rax_17
int32_t var_70_3 = 1
var_78 = &var_f8
var_c0.o = var_78.o

do
    void* rax_20 = *r10
    r10 = &r10[1]
    i += 1
    var_78 = (*(rax_20 + 0x18)).q
    rbx_2 ^= &var_78[rbx_2 * 8] + (rbx_2 u>> 2) - -0x9e3779b9
while (i != 1)

int64_t var_90_1 = rbx_2
char var_e4_1 = 0
void*** rax_24 = j_sub_140a82f30(0x7a0)

if (rax_24 == 0)
    arg1[1] = 0
else
    arg1[1] = sub_14100b980(rax_24, arg2, &var_e8)

__security_check_cookie(rax_1 ^ &var_118)
return arg1
