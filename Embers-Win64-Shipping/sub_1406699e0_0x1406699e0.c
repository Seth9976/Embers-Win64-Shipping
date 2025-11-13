// 函数: sub_1406699e0
// 地址: 0x1406699e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_142d857d8
__builtin_memset(&arg1[5], 0, 0x30)
arg1[0xb] = 2
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 2
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x12] = 0
arg1[0x13] = 0
__builtin_memset(&arg1[0x17], 0, 0x20)
sub_1405947f0(&arg1[0x19], 0x19)
int32_t rax = arg1[0x1a].d + 0x19
arg1[0x1a].d = rax

if (rax s> *(arg1 + 0xd4))
    sub_140594770(&arg1[0x19])

UnDecorator::getReferenceType(arg1[0x19], u"application/octet-stream", 0x32)
arg1[0x1b] = 0
arg1[0x1c] = 0
__builtin_memset(&arg1[0x1f], 0, 0x2c)
*(arg1 + 0x124) = 0x80
arg1[0x25].d = 0xffffffff
*(arg1 + 0x12c) = 0
arg1[0x27] = 0
arg1[0x28].d = 0
__builtin_memset(&arg1[0x29], 0, 0x2c)
*(arg1 + 0x174) = 0x80
arg1[0x2f].d = 0xffffffff
*(arg1 + 0x17c) = 0
arg1[0x31] = 0
arg1[0x32].d = 0
arg1[0x34] = 0
arg1[0x35] = 0
int64_t* rax_1 = sub_141802500()
int64_t r8 = *rax_1
(*(r8 + 0x40))(rax_1, &arg1[0x36], r8)
void* rcx_4 = arg1[0x16]
arg1[0x15] = 0
arg1[0x1e].w = 0

if (rcx_4 == 0)
    arg1[0x16] = sub_140666d50(sub_140cde0b0())
else
    sub_140679620(rcx_4)

arg1[0x18].d = 0

if (*(arg1 + 0xc4) != 0)
    sub_1405c5510(&arg1[0x17], 0)

arg1[0x1c].d = 0

if (*(arg1 + 0xe4) != 0)
    sub_1405947f0(&arg1[0x1b], 0)

sub_1406797b0(arg1)
return arg1
