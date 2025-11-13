// 函数: sub_140b64940
// 地址: 0x140b64940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e7ca68
sub_140b74270(arg1)
HANDLE hObject = arg1[1]

if (hObject != 0)
    CloseHandle(hObject)
    arg1[1] = 0

sub_140a74f90(arg1[5])
sub_140a74f90(arg1[6])
*arg1 = &data_142e60450

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
