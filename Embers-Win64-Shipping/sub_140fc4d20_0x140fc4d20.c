// 函数: sub_140fc4d20
// 地址: 0x140fc4d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ef1e40
SOCKET s = arg1[5]

if (s != -1)
    closesocket(s)
    arg1[5] = -1

*arg1 = &data_142ef1d20
int64_t rcx = arg1[2]

if (rcx != 0)
    sub_140a74f90(rcx)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
