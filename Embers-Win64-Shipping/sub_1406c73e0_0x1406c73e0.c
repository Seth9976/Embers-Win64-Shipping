// 函数: sub_1406c73e0
// 地址: 0x1406c73e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct IDelegateInstance::VTable** result = sub_1406c6550(arg2, 0x28)

if (result == 0)
    int64_t var_10 = 0
else
    *result = &IDelegateInstance::`vftable'
    *result = &IBaseDelegateInstanceCommon<class IModuleInterface* __ptr64 __cdecl ()>::`vftable'{for `IDelegateInstance'}
    *result = &IBaseDelegateInstance<class IModuleInterface* __ptr64 __cdecl ()>::`vftable'{for `IBaseDelegateInstanceCommon<class IModuleInterface* __ptr64 __cdecl ()>'}
    *result = &data_142d8fab8
    result[1] = *(arg1 + 8)
    result[2] = *(arg1 + 0x10)
    result[4] = *(arg1 + 0x20)
    struct IDelegateInstance::VTable** result_1 = result

return result
