// 函数: sub_140b2f000
// 地址: 0x140b2f000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* var_30 = arg1
void** const var_38 = &data_142da2668
int16_t* rbp = arg2
int64_t (* var_58)() = sub_140b34680
arg2.b = 1
int64_t var_48 = 0
sub_140b0a490(arg1, arg2.b, &var_58)
*arg1 = 0
__builtin_memset(&arg1[8], 0, 0x20)

if (rbp != 0 && *rbp != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rbp[rbx_1] != 0)
    
    int32_t rdx = 0
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&arg1[0x18], rbx_1.d + 1)
        rdx = *(arg1 + 0x20)
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    *(arg1 + 0x20) = rax_1
    
    if (rax_1 s> *(arg1 + 0x24))
        sub_140594770(&arg1[0x18])
    
    UnDecorator::getReferenceType(*(arg1 + 0x18), rbp, (rbx_1.d + 1) * 2)

*(arg1 + 0x28) = 0
sub_140b3cf90()
EnterCriticalSection(&data_143de7a80)
char* arg_8 = arg1
sub_140b2c470(&data_143de7aa8, &arg1[0x18], &arg_8)
LeaveCriticalSection(&data_143de7a80)
return arg1
