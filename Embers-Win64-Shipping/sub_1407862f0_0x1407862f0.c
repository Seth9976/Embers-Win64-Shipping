// 函数: sub_1407862f0
// 地址: 0x1407862f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419c7530(arg1, arg2, arg3, 0)
int32_t r15 = 0
int16_t* var_38 = nullptr
int64_t var_30 = 0
sub_1405947f0(&var_38, 3)
int32_t r14 = var_30:4.d
int32_t rbp = var_30.d + 3
var_30.d = rbp

if (rbp s> r14)
    sub_140594770(&var_38)
    r14 = var_30:4.d
    rbp = var_30.d

int16_t* rsi = var_38
UnDecorator::getReferenceType(rsi, &data_142da77e8, 6)

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbp == 0 && rbx_1.d != 0)
        r15 = 1
    
    var_38 = rsi
    int32_t rdx_2 = r15 + rbp + rbx_1.d
    var_30.d = rbp
    var_30:4.d = r14
    
    if (rdx_2 s> r14)
        sub_1405947f0(&var_38, rdx_2)
    
    sub_140a20ba0(&var_38, arg3, rbx_1.d)
    rbp = var_30.d
    rsi = var_38

int16_t* r8_1 = &data_142d40450

if (rbp != 0)
    r8_1 = rsi

int64_t result = sub_1419c7530(&arg1[2], arg2, r8_1, 0)

if (rsi == 0)
    return result

return sub_140a74f90(rsi) __tailcall
