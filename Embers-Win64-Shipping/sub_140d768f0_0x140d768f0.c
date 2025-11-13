// 函数: sub_140d768f0
// 地址: 0x140d768f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)

if (*(rax + 0x25) == 0)
    return SetWindowPos(*(arg1 + 0x28), sbb.q(arg2, arg2, *(rax + 0x1a) != 0), 0, 0, 0, 0, 
        ((zx.d(arg2.b) ^ 1) << 4) + 0x203)

BOOL rax_1 = IsIconic(*(arg1 + 0x28))
HWND rcx_1 = *(arg1 + 0x28)

if (rax_1 == 0)
    return SetActiveWindow(rcx_1) __tailcall

return ShowWindow(rcx_1, SW_RESTORE) __tailcall
