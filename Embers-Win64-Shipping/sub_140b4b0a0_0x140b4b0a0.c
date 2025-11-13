// 函数: sub_140b4b0a0
// 地址: 0x140b4b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int16_t* const r15 = &data_142d40450
int16_t* const r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

int16_t* var_100
sub_140a2e390(&var_100, u"[%s]", r8)
int16_t* const rsi = &data_142d40450
int32_t var_f8

if (var_f8 != 0)
    rsi = var_100

int16_t* rbp = nullptr
int16_t* var_110 = nullptr
int32_t rax_2 = 0
int32_t var_104 = 0
int32_t r14 = 0
int32_t var_108 = 0

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_110, rbx_1.d + 1)
        rax_2 = var_104
        r14 = var_108
        rbp = var_110
    
    r14 += rbx_1.d + 1
    
    if (r14 s> rax_2)
        sub_140594770(&var_110)
        rbp = var_110
    
    UnDecorator::getReferenceType(rbp, rsi, (rbx_1.d + 1) * 2)

char var_118

if (arg1[2].b == 0)
    var_118 = 0x2c
    sub_140b45b50(arg1, &var_118, 1)

arg1[2].b = 0

if (r14 != 0)
    r15 = rbp

void var_e8
sub_1408f2b40(&var_e8, r15)
int64_t var_60
int32_t var_58
sub_140b45b50(arg1, var_60, zx.q(var_58))
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

if (rbp != 0)
    sub_140a74f90(rbp)

int16_t* rcx_9 = var_100

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (arg1[2].b == 0)
    var_118 = 0x2c
    sub_140b45b50(arg1, &var_118, 1)

arg1[2].b = 0
int64_t result = sub_140b4b280(arg1, arg3)
__security_check_cookie(rax_1 ^ &var_138)
return result
