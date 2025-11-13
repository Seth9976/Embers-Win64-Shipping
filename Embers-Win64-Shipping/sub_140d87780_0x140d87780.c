// 函数: sub_140d87780
// 地址: 0x140d87780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0

if (data_143e2073c != 0)
label_140d877c4:
    
    if (arg2 == 0)
        *(arg1 + 0x1e4) = 0x7fffffff
        *(arg1 + 0x1e8) = 0x7fffffff
        *(arg1 + 0x1e0) = 0
    else
        *(arg1 + 0x91) = 1
        *(arg1 + 0x1e0) = 1
        POINT point
        GetCursorPos(&point)
        GetClipCursor(arg1 + 0x200)
        int32_t y = point.y
        int32_t y_1 = point.y
        *(arg1 + 0x1e4) = y
        *(arg1 + 0x1e8) = y_1
        *(arg1 + 0x1ec) = y
        *(arg1 + 0x1f0) = y_1
        *(arg1 + 0x1f4) = data_143dbb180.d
        *(arg1 + 0x1f8) = data_143dbb180:4.d
        *(arg1 + 0x1fc) = 0
else if (data_143e20740 != 0 && sub_140b6e870() != 0)
    goto label_140d877c4

*(arg1 + 0x91) = arg2
int32_t rbp = 1

if (arg2 != 0)
    int64_t* rcx_2 = *arg3
    rbp = 0
    
    if (rcx_2 != 0)
        rdi = (*(*rcx_2 + 0xc0))(rcx_2)

RAWINPUTDEVICE rawInputDevices
rawInputDevices.usUsagePage = 1
rawInputDevices.usUsage = 2
rawInputDevices.dwFlags = rbp
rawInputDevices.hwndTarget = rdi
return RegisterRawInputDevices(&rawInputDevices, 1, 0x10)
