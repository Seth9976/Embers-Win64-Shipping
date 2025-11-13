// 函数: sub_140d01620
// 地址: 0x140d01620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0xf]

if (rax == 0)
    *arg2 = rax
    arg2[1] = rax
    sub_1405947f0(arg2, 0x18)
    int32_t rax_5 = arg2[1].d + 0x18
    arg2[1].d = rax_5
    
    if (rax_5 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"TSoftObjectPtr<UObject>", 0x30)
else
    int64_t arg_8 = *(rax + 0x18)
    int16_t* var_38
    sub_140b63b70(&arg_8, &var_38)
    int64_t* rcx_1 = arg1[0xf]
    int64_t var_28
    sub_140a2e390(&var_28, u"%s%s", (*(*rcx_1 + 0x2c0))(rcx_1))
    (*(*arg1 + 0x130))(arg1, arg2, arg3, zx.q(arg4), &var_28)
    int64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int16_t* rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

return arg2
