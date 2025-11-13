// 函数: sub_1406c5cd0
// 地址: 0x1406c5cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_20
var_20.q = 0
int32_t var_18 = 0
struct IDelegateInstance::VTable** rax_1 = sub_1406c6550(&var_20, 0x28)

if (rax_1 == 0)
    int64_t var_30_1 = 0
else
    *rax_1 = &IDelegateInstance::`vftable'
    *rax_1 = &IBaseDelegateInstanceCommon<class IModuleInterface* __ptr64 __cdecl ()>::`vftable'{for `IDelegateInstance'}
    *rax_1 = &IBaseDelegateInstance<class IModuleInterface* __ptr64 __cdecl ()>::`vftable'{for `IBaseDelegateInstanceCommon<class IModuleInterface* __ptr64 __cdecl ()>'}
    *rax_1 = &data_142d8fab8
    rax_1[1] = arg2
    rax_1[2] = arg3
    rax_1[4] = sub_140a387b0()
    struct IDelegateInstance::VTable** var_30 = rax_1

*arg1 = 0
arg1[1].d = 0
sub_1406c6360(arg1, &var_20)
sub_1405ec5c0(&var_20)
return arg1
