// 函数: sub_140ac66a0
// 地址: 0x140ac66a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0
sub_1405947f0(&var_38, 3)
int32_t rax = var_30 + 3
var_30 = rax

if (rax s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, &data_142d6acb4, 6)
void var_28
int64_t* rax_1 = sub_140a9fb70(&var_28, &var_38)

if (arg1[1].d != 1)
    sub_140a94970(arg2, rax_1, arg1)
else
    int64_t* rcx_4 = *arg1
    *arg2 = *rcx_4
    void* rax_3 = rcx_4[1]
    arg2[1] = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    arg2[2].d = rcx_4[2].d

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rsi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rsi_1))

int64_t rcx_8 = var_38

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg2
