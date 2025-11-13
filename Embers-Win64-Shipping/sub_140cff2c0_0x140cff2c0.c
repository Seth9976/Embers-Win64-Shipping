// 函数: sub_140cff2c0
// 地址: 0x140cff2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x78)

if (rax != 0)
    while (((*(rax + 0xcc) u>> 7).b & 1) == 0)
        rax = *(rax + 0x40)
        
        if (rax == 0)
            break

int64_t arg_8 = *(rax + 0x18)
int16_t* var_18
sub_140b63b70(&arg_8, &var_18)
int16_t* const r8 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    r8 = var_18

int64_t var_28
sub_140a2e390(&var_28, u"I%s", r8)

if (arg3 == &var_28)
    int64_t rcx_6 = var_28
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
else
    int64_t rcx_5 = *arg3
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *arg3 = var_28
    int32_t var_20
    arg3[1].d = var_20
    int32_t var_1c
    *(arg3 + 0xc) = var_1c
    var_20.q = 0
    var_28 = 0

int16_t* rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 0xb)
int32_t rax_4 = arg2[1].d + 0xb
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"TINTERFACE", 0x16)
return arg2
