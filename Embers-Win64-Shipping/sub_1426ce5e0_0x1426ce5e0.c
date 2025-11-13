// 函数: sub_1426ce5e0
// 地址: 0x1426ce5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1426ab050(arg1 + 0x38, arg2)

if (*(arg1 + 0x38) == 0)
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_1405947f0(&var_18, 9)
    int32_t rax = var_10_1 + 9
    var_10_1 = rax
    
    if (rax s> 0)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, u"unlocked", 0x12)
    result = (*(*(arg1 - 0xb0) + 0x418))(arg1 - 0xb0, &var_18)
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        return sub_140a74f90(rcx_5)

return result
