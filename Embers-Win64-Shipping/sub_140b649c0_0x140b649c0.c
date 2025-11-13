// 函数: sub_140b649c0
// 地址: 0x140b649c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e7ea38
HANDLE hObject = arg1[2]

if (hObject != 0)
    CloseHandle(hObject)

*arg1 = &data_142e5bfb0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
