// 函数: sub_140b74be0
// 地址: 0x140b74be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int512_t result
result.o = zx.o(0)
int64_t arg_8 = (zx.o(0)).q

if ((*(rax + 0x50))(result, &arg_8) == 0)
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_1405947f0(&var_18, 7)
    int32_t rax_2 = var_10_1 + 7
    var_10_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, u"Number", 0xe)
    
    if (var_18 != 0)
        sub_140a74f90(var_18)

result.o = zx.o(arg_8)
return result
