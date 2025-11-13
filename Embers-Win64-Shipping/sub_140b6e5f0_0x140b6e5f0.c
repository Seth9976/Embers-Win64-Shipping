// 函数: sub_140b6e5f0
// 地址: 0x140b6e5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HANDLE result = OpenProcess(PROCESS_SYNCHRONIZE, 0, arg1)

if (result == 0)
    return result

char rbx = 1

if (WaitForSingleObject(result, 0) != WAIT_TIMEOUT)
    rbx = 0

CloseHandle(result)
return zx.q(rbx)
