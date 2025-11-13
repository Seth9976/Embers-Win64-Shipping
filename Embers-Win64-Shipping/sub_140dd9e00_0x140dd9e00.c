// 函数: sub_140dd9e00
// 地址: 0x140dd9e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
*arg1 = &data_142d8ad18
int32_t rsi = 0
int32_t arg_10 = 0
arg1[1] = *arg7
*(arg1 + 0x10) = *arg4
sub_140dd9fa0(&arg1[4], arg8)
arg1[0xa] = arg_18
arg1[9] = arg9
int64_t* zmm1 = data_143dbb1f0
arg1[0xc].d = zmm1.d
arg1[0xb].d = zmm1.d
arg1[0xd].b = 0
uint128_t zmm0 = zmm1:4.d
*(arg1 + 0x64) = zmm0.d
*(arg1 + 0x5c) = zmm0.d
*(arg1 + 0x6c) = arg2
*(arg1 + 0x6d) = arg5
*(arg1 + 0x6e) = 0
*(arg1 + 0x6f) = arg6
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10].b &= 0xfe
arg1[0x10].b |= arg10
int64_t var_28
int64_t var_18
char rax_4

if (arg9 != 0)
    rax_4 = 2
else
    var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 0xa)
    int32_t rax_5 = var_20_1 + 0xa
    var_20_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"texture:/", 0x14)
    rsi = 3
    rax_4 = sub_140a32a50(sub_140b63b70(&arg_18, &var_18), &var_28, 1)
    
    if (rax_4 != 0)
        rax_4 = 2

arg1[0x10].b &= 0xfd
arg1[0x10].b |= rax_4

if ((rsi.b & 2) != 0)
    int64_t rcx_7 = var_18
    rsi &= 0xfffffffd
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if ((rsi.b & 1) != 0)
    int64_t rcx_8 = var_28
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

return arg1
