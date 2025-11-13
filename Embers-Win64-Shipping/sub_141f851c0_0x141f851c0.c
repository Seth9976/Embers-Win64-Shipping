// 函数: sub_141f851c0
// 地址: 0x141f851c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_68
int32_t arg_8

if (arg1[0x4a] == 0)
    int64_t* rcx = arg1[0x45]
    
    if (rcx != 0)
        int64_t var_78_1 = arg5
        (*(*rcx + 0x620))(rcx)
    else
        var_68 = 0
        arg_8 = 0
        int32_t var_60_1 = 0
        sub_1405947f0(&var_68, (rcx + 0xf).d)
        int32_t rax = var_60_1 + 0xf
        var_60_1 = rax
        
        if (rax s> 0)
            sub_140594770(&var_68)
        
        UnDecorator::getReferenceType(var_68, u"NO PlayerState", 0x1e)
        sub_142409af0(arg2 + 0x98, &var_68, &arg_8)
        uint64_t rcx_5 = var_68
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    int64_t var_78_2 = arg5
    return sub_141dbfad0(arg1, arg2, arg3, arg4)

int64_t rax_2 = *(arg2 + 0x98)
int128_t var_38 = data_142d8c9b0
(*(rax_2 + 0x20))(arg2 + 0x98, &var_38)
void* rax_3 = arg1[0x4a]
arg_8 = 0
int64_t arg_10 = *(rax_3 + 0x18)
int16_t* var_48
sub_140b63b70(&arg_10, &var_48)
int16_t* const rdi_1 = &data_142d40450
var_68 = arg1[3]
int16_t* var_58
sub_140b63b70(&var_68, &var_58)
int32_t var_50

if (var_50 != 0)
    rdi_1 = var_58

sub_140a2e390(&var_38, u"CONTROLLER %s Pawn %s", rdi_1)
uint64_t result = sub_142409af0(arg2 + 0x98, &var_38, &arg_8)
int64_t rcx_13 = var_38.q

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int16_t* rcx_14 = var_58

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int16_t* rcx_15 = var_48

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
