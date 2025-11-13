// 函数: sub_1409291e0
// 地址: 0x1409291e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
(*(*arg1 + 0xf0))(arg1, &var_18)
int64_t* rcx = var_18

if (rcx == 0)
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 9)
    int32_t rax_2 = arg2[1].d + 9
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"NullUser", 0x12)
else
    (*(*rcx + 0x30))(rcx, arg2)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
