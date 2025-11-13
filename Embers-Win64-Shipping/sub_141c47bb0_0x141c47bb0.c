// 函数: sub_141c47bb0
// 地址: 0x141c47bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143206010
arg1[1] = &data_143206150
arg1[2] = &data_143206160
__builtin_memset(&arg1[4], 0, 0x20)
arg1[0xa] = 0
arg1[0xb] = 0
sub_141c48cb0(&arg1[4])
arg1[3].d = 0
sub_141c48cb0(&arg1[4])
arg1[0xd].d = 0
arg1[0xe] = 0
arg1[0xf] = 2
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0x400
arg1[0x11].d = 1
arg1[0x12] = 0
arg1[0x13].d = 0xac44
*(arg1 + 0x9c) = 0
arg1[0x14].d = 0
__builtin_memset(&arg1[0x15], 0, 0x49)
arg1[0x1f] = 0
arg1[0x20] = 0
InitializeCriticalSection(&arg1[0x21])
SetCriticalSectionSpinCount(&arg1[0x21], 0xfa0)
arg1[0x26].d = 0
arg1[0x27] = 0
arg1[0x28].d = 0xffffffff
*(arg1 + 0x144) = 0xffffffff
__builtin_memset(&arg1[0x29], 0, 0x18)
arg1[0x2c].b = 1
__builtin_memset(&arg1[0x2d], 0, 0x20)
sub_1405947f0(&arg1[0x2f], 5)
int32_t rax = arg1[0x30].d + 5
arg1[0x30].d = rax

if (rax s> *(arg1 + 0x184))
    sub_140594770(&arg1[0x2f])

UnDecorator::getReferenceType(arg1[0x2f], u"None", 0xa)
__builtin_memset(&arg1[0x31], 0, 0x18)
arg1[0x35].d = 0
arg1[0x37] = 0
arg1[0x38].d = data_143f34a10
data_143f34a10 += 1
arg1[0x39].d = 1
__builtin_memset(arg1 + 0x1cc, 0, 0x1c)
__builtin_memset(&arg1[0x2a], 0, 0x11)
return arg1
