// 函数: sub_14226ca40
// 地址: 0x14226ca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint128_t zmm6 = zx.o(arg2)
TEB* gsbase

if (data_143f52808 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f52808)
    
    if (data_143f52808 == 0xffffffff)
        zmm6 = sub_140b58170(&data_143f52800, "ClickableTrace", 1)
        _Init_thread_footer(&data_143f52808)

void var_e8
void var_a8
sub_141eb54c0(&var_a8, data_143f52800, &var_e8, arg4, nullptr)
int64_t* rcx_3 = arg1[0x56]
uint64_t var_b0 = zmm6.q
void* rax_4

if (rcx_3 != 0)
    rax_4 = sub_142090e70(rcx_3, zmm6.q, 1)

float var_e0
float var_d0
char rax_5

if (rcx_3 == 0 || rax_4 == 0)
    rax_5 = sub_142022d00(arg1, &var_b0, &var_e0, &var_d0)

int64_t* rbx

if ((rcx_3 != 0 && rax_4 != 0) || rax_5 != 1)
    rbx.b = 0
else
    float zmm2_1 = *(arg1 + 0x454)
    int64_t rax_6 = *arg1
    float var_c0 = var_d0 * zmm2_1 + var_e0
    float var_dc
    float var_cc
    float var_bc_1 = var_cc * zmm2_1 + var_dc
    float var_d8
    float var_c8
    float var_b8_1 = var_c8 * zmm2_1 + var_d8
    void* const var_108
    var_108.d = arg3
    rbx = zx.q(sub_141ec6a20((*(rax_6 + 0x150))(arg1), arg5, &var_e0, &var_c0, var_108.b, &var_a8, 
        &data_143f3a660))

int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rbx.b)
