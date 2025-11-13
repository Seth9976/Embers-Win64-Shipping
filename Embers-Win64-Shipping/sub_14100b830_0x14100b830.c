// 函数: sub_14100b830
// 地址: 0x14100b830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

InitializeCriticalSection(arg1)
SetCriticalSectionSpinCount(arg1, 0xfa0)
arg1->__offset(0x28).q = 0
void* __offset(_RTL_CRITICAL_SECTION, 0x38) r8 = arg1 + 0x38
arg1->__offset(0x30).q = 0
(r8 - 0x38)->__offset(0x48).q = 0
(r8 - 0x38)->__offset(0x50).d = 0
(r8 - 0x38)->__offset(0x54).d = 0x80
void* rax = (r8 - 0x38)->__offset(0x48).q

if (rax != 0)
    r8 = rax

(r8 - 0x38)->__offset(0x38).q = 0
(r8 - 0x38)->__offset(0x40).q = 0
arg1->__offset(0x5c).d = 0
arg1->__offset(0x58).d = 0xffffffff
arg1->__offset(0x68).q = 0
arg1->__offset(0x70).d = 0
arg1->__offset(0x78).q = *(arg2 + 0x20)
arg1->__offset(0x80).q = 0
arg1->__offset(0xa2).w = 0
arg1->__offset(0xa4).d = 0
arg1->__offset(0xa8).b = 0
arg1->__offset(0xaa).w = 0
arg1->__offset(0xac).d = 0
arg1->__offset(0xb0).b = 0
arg1->__offset(0xb2).w = 0
arg1->__offset(0xb4).d = 0
arg1->__offset(0xb8).b = 0
arg1->__offset(0xba).w = 0
arg1->__offset(0xbc).d = 0
arg1->__offset(0xc0).b = 0
arg1->__offset(0xc2).w = 0
arg1->__offset(0xc4).d = 0
arg1->__offset(0xc8).b = 0
arg1->__offset(0xca).w = 0
arg1->__offset(0xcc).d = 0
arg1->__offset(0xd0).b = 0
arg1->__offset(0xd2).w = 0
arg1->__offset(0xd4).d = 0
arg1->__offset(0xd8).b = 0
arg1->__offset(0xda).w = 0
arg1->__offset(0xdc).d = 0
arg1->__offset(0xe0).b = 0
arg1->__offset(0xe2).w = 0
arg1->__offset(0xe4).d = 0
arg1->__offset(0xe8).b = 0
arg1->__offset(0xea).w = 0
arg1->__offset(0xec).d = 0
arg1->__offset(0xf0).b = 0
__builtin_memset(arg1 + 0xf8, 0, 0x29)
struct D3D12_VERSIONED_ROOT_SIGNATURE_DESC var_38
var_38.Anonymous.Desc_1_0.__offset(0x20).q = 0
var_38.Anonymous.Desc_1_0.__offset(0x20).d = 0x80
var_38.Version.q = 0
var_38.Anonymous.Desc_1_0.q = 0
var_38.Anonymous.Desc_1_0.__offset(0x8).q = 0
var_38.Anonymous.Desc_1_0.__offset(0x10).q = 0
var_38.Anonymous.Desc_1_0.__offset(0x18).q = 0
var_38.Version = 1
sub_14104cb70(&arg1[3], &var_38, 0)
return arg1
