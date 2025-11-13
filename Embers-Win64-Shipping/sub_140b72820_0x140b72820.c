// 函数: sub_140b72820
// 地址: 0x140b72820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HDC hdc = CreateCompatibleDC(nullptr)
int64_t r8 = -1

do
    r8 += 1
while (arg2[r8] != 0)

SIZE psizl
GetTextExtentPoint32W(hdc, arg2, r8.d, &psizl)
DeleteDC(hdc)
psizl.cx += 0xe
psizl.cy += 8
HWND hWnd = GetDlgItem(arg1, arg3)

if (hWnd != 0)
    int32_t cx = psizl.cx
    *arg4 += 0xfffffffb - cx
    int32_t cy = psizl.cy
    SetWindowPos(hWnd, nullptr, *arg4, *arg5 - cy, cx, cy, 0)
    SetDlgItemTextW(arg1, arg3, arg2)
    hWnd.b = 1

return hWnd
