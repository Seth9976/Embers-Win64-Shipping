// 函数: sub_140d880a0
// 地址: 0x140d880a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HWND rbx = *(arg1 + 0x28)
HWND result = GetFocus()

if (result == rbx)
    return result

return SetFocus(rbx) __tailcall
