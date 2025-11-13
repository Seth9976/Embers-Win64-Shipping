// 函数: sub_140d77020
// 地址: 0x140d77020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL result = OpenClipboard(GetActiveWindow())

if (result == 0)
    return result

EmptyClipboard()
int64_t var_50_1 = -1

do
    var_50_1 += 1
while (arg1[var_50_1] != 0)

HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, sx.q(var_50_1.d + 1) << 1)
int16_t* var_38_1 = arg1
int16_t* var_48_1 = GlobalLock(hMem)
int16_t* var_18_1 = var_48_1
int16_t i

do
    i = *var_38_1
    *var_48_1 = i
    var_38_1 = &var_38_1[1]
    var_48_1 = &var_48_1[1]
while (i != 0)
GlobalUnlock(hMem)

if (SetClipboardData(0xd, hMem) == 0)
    sub_140af98a0("Unknown", 0x178, SetClipboardData failed with error code %i", 
        zx.q(GetLastError()))
    sub_140afbb40()

return CloseClipboard()
