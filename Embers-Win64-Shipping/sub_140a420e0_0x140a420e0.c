// 函数: sub_140a420e0
// 地址: 0x140a420e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_28 = &data_142e5d230
enum WIN32_ERROR dwErrCode = NO_ERROR
(*(*arg1 + 0x100))(arg1, arg3, &var_28)

if ((*(*arg1 + 0xe8))(arg1, arg2) == 0 && dwErrCode == NO_ERROR)
    dwErrCode = GetLastError()

char rax_5 = (*(*arg1 + 0xd8))(arg1, arg2)
int64_t* rbx
rbx.b = rax_5 == 0

if (rax_5 != 0)
    SetLastError(dwErrCode)

return zx.q(rbx.b)
