// 函数: sub_14282bdf8
// 地址: 0x14282bdf8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t var_118 = 0
int64_t var_110 = 0xf
char var_128 = 0
sub_14282b1a8(arg1)
*(arg1 + 0x82) = 0
uint128_t zmm6 = zx.o(arg1[1])
int32_t rsi = arg1[2].d
int64_t rdi
rdi.b = sub_14282aff8(arg1) == 0x2a
int64_t var_138

while (sub_14282a90c(arg1) != 0)
    sub_14282b71c()
    var_138 = 0
    int64_t* var_130_1 = arg1
    
    if (sub_14282694c(&data_143f899b0, &var_138) s< 0)
        break
    
    char rax_4
    int64_t r8_1
    rax_4, r8_1 = sub_14282aff8(arg1)
    int64_t rdx_2 = var_118
    
    if (rdx_2 u>= var_110)
        r8_1.b = 0
        sub_14058b730(&var_128, 1, r8_1, rax_4)
    else
        var_118 = rdx_2 + 1
        char* rcx_3 = &var_128
        
        if (var_110 u>= 0x10)
            rcx_3 = var_128.q
        
        rcx_3[rdx_2] = rax_4
        rcx_3[rdx_2 + 1] = 0

void var_a8
struct std::exception::VTable* exceptionObject

if (var_118 == 0)
    char const* const rdx_18 = "anchor not found after &"
    
    if (rdi.b != 0)
        rdx_18 = "alias not found after *"
    
    sub_14058a5c0(&var_a8, rdx_18)
    sub_1428244f0(&exceptionObject, sub_1427bde30(arg1, &var_138), &var_a8)
    _CxxThrowException(&exceptionObject, &data_143946450)
    noreturn

char rax_6
int64_t r8_2
rax_6, r8_2 = sub_14282a90c(arg1)

if (rax_6 != 0)
    sub_14282b8a0()
    var_138 = 0
    int64_t* var_130_2 = arg1
    int32_t rax_7
    rax_7, r8_2 = sub_14282694c(&data_143f899d8, &var_138)
    
    if (rax_7 s< 0)
        char const* const rdx_15 = "illegal character found while scanning anchor"
        
        if (rdi.b != 0)
            rdx_15 = "illegal character found while scanning alias"
        
        sub_14058a5c0(&var_a8, rdx_15)
        sub_1428244f0(&exceptionObject, sub_1427bde30(arg1, &var_138), &var_a8)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn

int32_t var_108 = 0
int32_t var_104 = zx.d(rdi.b) + 0x10
uint64_t var_100 = zmm6.q
int32_t var_f8 = rsi
int64_t var_e0 = 0
int64_t var_d8 = 0xf
char var_f0[0x10]
var_f0[0] = 0
int64_t* var_d0
__builtin_memset(&var_d0, 0, 0x1c)
char* r9_2 = &var_128

if (var_110 u>= 0x10)
    r9_2 = var_128.q

char (* rcx_7)[0x10] = &var_f0

if (var_118 u> 0xf)
    r8_2.b = 0
    sub_14058b8a0(rcx_7, var_118, r8_2, r9_2)
else
    int64_t var_e0_1 = var_118
    memmove(rcx_7, r9_2, var_118.d)
    var_f0[var_118] = 0

int64_t result = sub_14282b618(&arg1[0xb], &var_108)
int64_t* rcx_9 = var_d0

if (rcx_9 != 0)
    int128_t var_c8
    sub_140688f70(rcx_9, var_c8.q)
    int64_t* rcx_10 = var_d0
    result = sub_14058ba50(rcx_10, (var_c8:8.q - rcx_10) & 0xffffffffffffffe0)
    int64_t var_d0_1
    __builtin_memset(&var_d0_1, 0, 0x18)

if (var_d8 u>= 0x10)
    result = sub_14058ba50(var_f0[0].q, var_d8 + 1)

int64_t var_e0_2 = 0
int64_t var_d8_1 = 0xf
var_f0[0] = 0

if (var_110 u>= 0x10)
    result = sub_14058ba50(var_128.q, var_110 + 1)

__security_check_cookie(rax_1 ^ &var_158)
return result
