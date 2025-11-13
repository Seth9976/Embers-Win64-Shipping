// 函数: sub_140a91460
// 地址: 0x140a91460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

InitializeCriticalSection(arg1)
SetCriticalSectionSpinCount(arg1, 0xfa0)
void* __offset(_RTL_CRITICAL_SECTION, 0x38) result_1 = arg1 + 0x38
arg1->__offset(0x28).q = 0
arg1->__offset(0x30).q = 0
(result_1 - 0x38)->__offset(0x48).q = 0
(result_1 - 0x38)->__offset(0x50).d = 0
(result_1 - 0x38)->__offset(0x54).d = 0x80
void* result = (result_1 - 0x38)->__offset(0x48).q

if (result != 0)
    result_1 = result

(result_1 - 0x38)->__offset(0x38).q = 0
(result_1 - 0x38)->__offset(0x40).q = 0
arg1->__offset(0x58).d = 0xffffffff
arg1->__offset(0x5c).d = 0
arg1->__offset(0x68).q = 0
arg1->__offset(0x70).d = 0
return result
