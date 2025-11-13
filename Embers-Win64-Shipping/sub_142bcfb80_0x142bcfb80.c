// 函数: sub_142bcfb80
// 地址: 0x142bcfb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1, 0, 0x740)
int64_t rax = sub_142b99bf0(*(arg2 + 0x90), "postscript-cmaps", 1)

if (rax == 0)
    return 7

arg1[0xcb] = rax
sub_142bceba0(arg1, arg2, arg3, arg4, arg7)
arg1[0xcc].d = *(arg2 + 0x10)
arg1[0xcd] = arg5
arg1[0xde].d = arg8
arg1[0xdd] = arg6
arg1[0xdf] = arg9
__builtin_memcpy(&arg1[0xe0], 
    "\x80\xfb\xbc\x42\x01\x00\x00\x00\x60\xfc\xbc\x42\x01\x00\x00\x00\x60\xf8\xbc\x42\x01\x00\x00\x00\x"
"c0\xd1\xbc\x42\x01\x00\x00\x00", 
    0x20)
return 0
