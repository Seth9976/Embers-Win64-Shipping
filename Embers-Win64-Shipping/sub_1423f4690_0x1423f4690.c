// 函数: sub_1423f4690
// 地址: 0x1423f4690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    int64_t result
    result.b = 0
    return result

int16_t* var_28 = nullptr
int32_t var_20 = 0
sub_1405947f0(&var_28, 8)
int32_t rax = var_20 + 8
var_20 = rax

if (rax s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, u"UnitMax", 0x10)
char rax_2 = (*(*arg3 + 0x168))(arg3, &var_28)
int16_t* rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

if (rax_2 != 0)
    sub_1423dc1a0(arg1, arg2, arg3, u"UnitMax")
    var_28 = nullptr
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 5)
    int32_t rax_3 = var_20_1 + 5
    var_20_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_28)
    
    int16_t* rdi_1 = var_28
    UnDecorator::getReferenceType(rdi_1, u"Unit", 0xa)
    sub_1423efc20(arg1, arg2, arg3, &var_28, 1)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

var_28 = nullptr
int32_t var_20_2 = 0
sub_1405947f0(&var_28, 5)
int32_t rax_4 = var_20_2 + 5
var_20_2 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, u"Unit", 0xa)
char rax_6 = (*(*arg3 + 0x168))(arg3, &var_28)
int16_t* rcx_15 = var_28

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

var_28 = nullptr
int32_t var_20_3 = 0
sub_1405947f0(&var_28, 9)
int32_t rax_7 = var_20_3 + 9
var_20_3 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, u"Detailed", 0x12)
char rax_9 = (*(*arg3 + 0x168))(arg3, &var_28)
int16_t* rcx_20 = var_28

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

if (rax_6 == 0 && rax_9 != 0)
    sub_1423dc1a0(arg1, arg2, arg3, u"Detailed -Skip")

return 1
