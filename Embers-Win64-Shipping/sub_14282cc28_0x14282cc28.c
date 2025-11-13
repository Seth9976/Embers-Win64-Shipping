// 函数: sub_14282cc28
// 地址: 0x14282cc28
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* var_c8
int32_t exceptionObject
void* var_58

if (arg1[0x22] == 0)
    sub_14058a5c0(&var_58, "illegal flow end")
    sub_1428244f0(&exceptionObject, sub_1427bde30(arg1, &var_c8), &var_58)
    _CxxThrowException(&exceptionObject, &data_143946450)
    noreturn

int64_t rax_3 = arg1[0x22] + arg1[0x21]
var_c8 = &arg1[0x1e]
int64_t var_c0 = rax_3
char rax_7

if (*(*(arg1[0x1f] + (((arg1[0x20] - 1) & (rax_3 - 1) u>> 2) << 3))
        + ((zx.q((rax_3 - 1).d) & 3) << 2)) == 0)
    rax_7 = sub_14282b41c(arg1)

if (*(*(arg1[0x1f] + (((arg1[0x20] - 1) & (rax_3 - 1) u>> 2) << 3))
        + ((zx.q((rax_3 - 1).d) & 3) << 2)) != 0 || rax_7 == 0)
    int64_t rax_10 = arg1[0x22] + arg1[0x21]
    var_c8 = &arg1[0x1e]
    var_c0 = rax_10
    
    if (*(*(arg1[0x1f] + (((arg1[0x20] - 1) & (rax_10 - 1) u>> 2) << 3))
            + ((zx.q((rax_10 - 1).d) & 3) << 2)) == 1)
        sub_14282b358(arg1)
else
    exceptionObject = 0
    int32_t var_b4_1 = 0xf
    int64_t var_b0_1 = arg1[1]
    int32_t var_a8_1 = arg1[2].d
    int64_t var_90_1 = 0
    int64_t var_88_1 = 0xf
    char var_a0_1 = 0
    int64_t* var_80
    __builtin_memset(&var_80, 0, 0x1c)
    sub_142826d60(&arg1[0xb], &exceptionObject)
    int64_t* rcx_4 = var_80
    
    if (rcx_4 != 0)
        int128_t var_78
        sub_140688f70(rcx_4, var_78.q)
        int64_t* rcx_5 = var_80
        sub_14058ba50(rcx_5, (var_78:8.q - rcx_5) & 0xffffffffffffffe0)
        int64_t var_80_1
        __builtin_memset(&var_80_1, 0, 0x18)
    
    if (var_88_1 u>= 0x10)
        sub_14058ba50(var_a0_1.q, var_88_1 + 1)

*(arg1 + 0x82) = 0x100
uint128_t zmm6 = zx.o(arg1[1])
var_c8 = zmm6.q
int32_t rsi = arg1[2].d
var_c0.d = rsi
int32_t r9
r9.b = sub_14282aff8(arg1) == 0x5d
int64_t r10 = arg1[0x22]
int64_t rcx_12 = arg1[0x21] + r10
var_58 = &arg1[0x1e]
int64_t var_50 = rcx_12

if (*(*(arg1[0x1f] + (((arg1[0x20] - 1) & (rcx_12 - 1) u>> 2) << 3))
        + ((zx.q((rcx_12 - 1).d) & 3) << 2)) != r9)
    sub_14058a5c0(&var_58, "illegal flow end")
    sub_1428244f0(&exceptionObject, &var_c8, &var_58)
    _CxxThrowException(&exceptionObject, &data_143946450)
    noreturn

arg1[0x22] = r10 - 1

if (r10 == 1)
    arg1[0x21] = 0

exceptionObject = 0
int32_t var_b4_2 = (r9 ^ 1) + 0xa
uint64_t var_b0_2 = zmm6.q
int32_t var_a8_2 = rsi
int64_t var_90_2 = 0
int64_t var_88_2 = 0xf
char var_a0_2 = 0
int64_t* var_80_2
__builtin_memset(&var_80_2, 0, 0x1c)
int32_t* result = sub_142826d60(&arg1[0xb], &exceptionObject)
int64_t* rcx_16 = var_80_2

if (rcx_16 != 0)
    int128_t var_78_1
    sub_140688f70(rcx_16, var_78_1.q)
    int64_t* rcx_17 = var_80_2
    result = sub_14058ba50(rcx_17, (var_78_1:8.q - rcx_17) & 0xffffffffffffffe0)
    int64_t var_80_3
    __builtin_memset(&var_80_3, 0, 0x18)

if (var_88_2 u>= 0x10)
    result = sub_14058ba50(var_a0_2.q, var_88_2 + 1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
