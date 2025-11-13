// 函数: sub_140b65f90
// 地址: 0x140b65f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SECURITY_ATTRIBUTES pipeAttributes
pipeAttributes.nLength = 0x18
pipeAttributes.lpSecurityDescriptor = 0
pipeAttributes.bInheritHandle = 1
BOOL result

if (CreatePipe(arg1, arg2, &pipeAttributes, 0) != 0 && SetHandleInformation(*arg1, 1, 0) != 0)
    result.b = 1
    return result

result.b = 0
return result
