// 函数: sub_141346640
// 地址: 0x141346640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0
arg1[2] = 0
arg1[3].d = 0
arg1[4] = 1
__builtin_memset(&arg1[5], 0, 0x18)
arg1[8] = 1
arg1[9].w = 1
arg1[0xc] = u"UnknownTexture"
*(arg1 + 0x4c) = 0
*(arg1 + 0x54) = 0
arg1[0xb].w = 0
arg1[0xd].w = 1
*(arg1 + 0x6a) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
__builtin_memset(&arg1[0x10], 0, 0x38)
*arg1 = &data_142f62b58
int64_t* rcx = *arg2
arg1[0x17] = rcx

if (rcx != 0)
    (*(*rcx + 0x30))()

return arg1
