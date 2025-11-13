// 函数: sub_140d840f0
// 地址: 0x140d840f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

MSG msg
BOOL i

for (i = PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE); i != 0; 
        i = PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE))
    TranslateMessage(&msg)
    DispatchMessageW(&msg)

return i
