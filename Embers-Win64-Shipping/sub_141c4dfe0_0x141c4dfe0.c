// 函数: sub_141c4dfe0
// 地址: 0x141c4dfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

InitializeCriticalSection(arg1)
SetCriticalSectionSpinCount(arg1, 0xfa0)
arg1->__offset(0x28).q = arg2
__builtin_memset(arg1 + 0x30, 0, 0x44)
InitializeCriticalSection(arg1 + 0x80)
SetCriticalSectionSpinCount(arg1 + 0x80, 0xfa0)
__builtin_memset(arg1 + 0xa8, 0, 0x50)
void* __offset(_RTL_CRITICAL_SECTION, 0xf8) rcx_3 = arg1 + 0xf8
(rcx_3 - 0xf8)->__offset(0x108).q = 0
(rcx_3 - 0xf8)->__offset(0x110).d = 0
(rcx_3 - 0xf8)->__offset(0x114).d = 0x80
void* rax = (rcx_3 - 0xf8)->__offset(0x108).q

if (rax != 0)
    rcx_3 = rax

(rcx_3 - 0xf8)->__offset(0xf8).q = 0
(rcx_3 - 0xf8)->__offset(0x100).q = 0
rcx_3.b = 1
arg1->__offset(0x118).d = 0xffffffff
arg1->__offset(0x11c).d = 0
arg1->__offset(0x128).q = 0
arg1->__offset(0x130).d = 0
__builtin_memset(arg1 + 0x138, 0, 0x80)
arg1->__offset(0x1b8).d = 4
arg1->__offset(0x1bc).d = 0
arg1->__offset(0x1c0).b &= 0xfc
arg1->__offset(0x1c4).d = 1
arg1->__offset(0x1c8).d = 0
void*** rax_1 = sub_140a491d0(rcx_3.b)
arg1->__offset(0x78).q = rax_1
void** rdx = *rax_1
rdx[2](rax_1, rdx)
return arg1
