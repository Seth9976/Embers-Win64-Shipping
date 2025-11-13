// 函数: sub_140d79230
// 地址: 0x140d79230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *arg2
FLASHWINFO pfwi
pfwi.cbSize.q = 0x20
pfwi.hwnd = *(arg1 + 0x28)
pfwi.dwFlags = 0
pfwi.uCount = 0
pfwi.dwTimeout = 0

if (rcx == 0)
    pfwi.dwFlags = 0xe
else if (rcx == 1)
    pfwi.dwFlags = 0

return FlashWindowEx(&pfwi)
