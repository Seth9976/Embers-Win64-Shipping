// 函数: sub_140d23fd0
// 地址: 0x140d23fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 9)
int32_t r15 = var_30:4.d
int32_t rbp = var_30.d + 9
var_30.d = rbp

if (rbp s> r15)
    sub_140594770(&var_38)
    r15 = var_30:4.d
    rbp = var_30.d

int64_t rsi = var_38
UnDecorator::getReferenceType(rsi, u"Package ", 0x12)

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbp == 0 && rbx_1.d != 0)
        r14 = 1
    
    var_38 = rsi
    int32_t rdx_2 = r14 + rbp + rbx_1.d
    var_30.d = rbp
    var_30:4.d = r15
    
    if (rdx_2 s> r15)
        sub_1405947f0(&var_38, rdx_2)
    
    sub_140a20ba0(&var_38, arg2, rbx_1.d)
    rsi = var_38

int64_t var_40 = arg5
void* result = sub_140d24110(arg1, arg2, arg3, nullptr, arg4)

if (rsi == 0)
    return result

sub_140a74f90(rsi)
return result
