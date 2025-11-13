// 函数: sub_140b294d0
// 地址: 0x140b294d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_838
int64_t rax_1 = __security_cookie ^ &var_838
int16_t var_818[0x400]
char rax_3 = sub_140b297e0(arg2, &var_818, 0x400, arg3)
int32_t rdx_1 = 0
*arg1 = 0
arg1[1] = 0

if (rax_3 != 0 && var_818[0] != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (var_818[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg1, rbx_1.d + 1)
        rdx_1 = arg1[1].d
    
    int32_t rcx_2 = rdx_1 + rbx_1.d + 1
    arg1[1].d = rcx_2
    
    if (rcx_2 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, &var_818, (rbx_1.d + 1) * 2)

__security_check_cookie(rax_1 ^ &var_838)
return arg1
