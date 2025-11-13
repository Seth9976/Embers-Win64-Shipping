// 函数: sub_1409682e0
// 地址: 0x1409682e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 0x10)
int32_t rax = var_10 + 0x10
var_10 = rax

if (rax s> 0)
    sub_140594770(&var_18)

char result = UnDecorator::getReferenceType(var_18, u"Not implemented", 0x20)

if (arg4[1].d != 0)
    int64_t* rcx_3 = *arg4
    
    if (rcx_3 != 0)
        result = (*(*rcx_3 + 0x28))(rcx_3)
        
        if (result != 0)
            if (arg4[1].d != 0)
                rdi = *arg4
            
            result = (*(*rdi + 0x50))(rdi, zx.q(arg3), 0, &var_18)

int64_t rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
