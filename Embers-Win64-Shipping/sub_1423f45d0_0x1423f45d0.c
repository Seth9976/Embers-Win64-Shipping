// 函数: sub_1423f45d0
// 地址: 0x1423f45d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax

if (arg3 != 0)
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_1405947f0(&var_18, 0xc)
    int32_t rax_1 = var_10_1 + 0xc
    var_10_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, u"NamedEvents", 0x18)
    char rax_3 = (*(*arg3 + 0x168))(arg3, &var_18)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int32_t rax_4 = data_143de5488
    
    if (rax_3 != 0)
        data_143de5488 = rax_4 + 1
        int32_t rax_5
        rax_5.b = 0
        return rax_5
    
    rax = rax_4 - 1
    
    if (rax s<= 0)
        rax = 0
    
    data_143de5488 = rax

rax.b = 0
return rax
