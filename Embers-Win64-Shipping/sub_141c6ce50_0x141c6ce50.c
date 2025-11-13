// 函数: sub_141c6ce50
// 地址: 0x141c6ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8

if (arg2 == 0)
    arg1[0xb] = 0
    r8 = 0
else
    arg1[0xb] = arg2
    r8 = *(arg2 + 0xa90)

*arg1 = r8
arg1[0x12].w &= 0xffe0
*(arg1 + 0x74) = 0xbf800000
arg1[0xf].d = 0xbf800000
*(arg1 + 0x7c) = 0xbf800000
arg1[0x10].d = 0xbf800000
*(arg1 + 0x84) = 0xbf800000
arg1[0x11] = -0x40800000
arg1[0xe].d
arg1[0xe].d = 0
return sub_141c6cae0(&arg1[1]) __tailcall
