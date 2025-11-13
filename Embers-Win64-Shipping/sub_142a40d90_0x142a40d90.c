// 函数: sub_142a40d90
// 地址: 0x142a40d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _TEB* result
TEB* gsbase

if (data_143cc8258 != 0 && data_143cc8258 != gsbase->NtTib.Self)
    result.b = 0
    return result

result.b = 1
return result
