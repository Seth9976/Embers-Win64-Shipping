// 函数: sub_14049f5f0
// 地址: 0x14049f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

InitializeCriticalSection(&data_1439b65a8)
SetCriticalSectionSpinCount(&data_1439b65a8, 0xfa0)
data_1439b6580 = &data_142f51810

if (sub_140a80f40() == 0)
    sub_141997e80(&data_1439b6580)
    return atexit(sub_142cdaa60) __tailcall

(*(data_1439b6580 + 0x28))(&data_1439b6580)
return atexit(sub_142cdaa60) __tailcall
