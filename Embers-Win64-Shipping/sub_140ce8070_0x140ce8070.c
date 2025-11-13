// 函数: sub_140ce8070
// 地址: 0x140ce8070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = -1

do
    r8 += 1
while (*(arg2 + (r8 << 1)) != 0)

int64_t result = sub_140a20ba0(&arg1[2], arg2, r8.d)

if (*(arg1 + 9) != 0)
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_1405947f0(&var_18, 3)
    int32_t rax = var_10_1 + 3
    var_10_1 = rax
    
    if (rax s> 0)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, &data_142d6acb4, 6)
    result = (*(*arg1 + 0x48))(arg1, &var_18)
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        return sub_140a74f90(rcx_5)

return result
