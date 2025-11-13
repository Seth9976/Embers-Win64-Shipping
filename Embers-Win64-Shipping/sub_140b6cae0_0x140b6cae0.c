// 函数: sub_140b6cae0
// 地址: 0x140b6cae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

enum WIN32_ERROR dwMessageId = arg3
*arg1 = 0

if (arg3 == NO_ERROR)
    dwMessageId = GetLastError()

FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM, nullptr, dwMessageId, 0x400, arg1, arg2, nullptr)
wchar16* rax = wcschr(arg1, 0xd)

if (rax != 0)
    *rax = 0

wchar16* rax_1 = wcschr(arg1, 0xa)

if (rax_1 != 0)
    *rax_1 = 0

return arg1
