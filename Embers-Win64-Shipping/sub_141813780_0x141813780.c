// 函数: sub_141813780
// 地址: 0x141813780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b214e0(arg2)
Concurrency::details::UMSThreadProxy::InternalSwitchTo(arg2)
int32_t result = sub_141846240(arg1 + 0x40, arg2)
int64_t rcx_3 = *arg2

if (result != 1)
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    result.b = 0
    return result

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

result.b = 1
return result
