// 函数: sub_140b64b60
// 地址: 0x140b64b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e7ea68
HANDLE hHandle = arg1[9]

if (hHandle != 0)
    int64_t* rcx = arg1[3]
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)
        hHandle = arg1[9]
    
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[9])
    arg1[9] = 0

sub_140a63bd0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
