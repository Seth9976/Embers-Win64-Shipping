// 函数: sub_140b66870
// 地址: 0x140b66870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SHELLEXECUTEINFOW execInfo
memset(&execInfo, 0, 0x70)
execInfo.cbSize = 0x70
execInfo.lpVerb = u"runas"
execInfo.fMask = 0x4040
execInfo.lpFile = arg1
execInfo.nShow = 5
execInfo.lpParameters = arg2
BOOL result

if (ShellExecuteExW(&execInfo) == 0)
    result.b = 0
else
    WaitForSingleObject(execInfo.hProcess, 0xffffffff)
    
    if (arg3 != 0)
        GetExitCodeProcess(execInfo.hProcess, arg3)
    
    CloseHandle(execInfo.hProcess)
    result.b = 1

return result
