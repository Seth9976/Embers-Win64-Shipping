// 函数: sub_140a42040
// 地址: 0x140a42040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
int64_t r9 = *rax
bool result

if (arg4 == 0)
    result = (*(r9 + 0xe8))(rax, arg2, arg5, r9)
else
    result = (*(r9 + 0x170))(rax, arg2, arg5, r9)

if (result != 0 || arg3 != 0)
    return result

enum WIN32_ERROR dwErrCode = GetLastError()
int64_t* rax_1 = __crt_deferred_errno_cache::get(&data_143db7b00)
int64_t r8 = *rax_1
char rax_2 = (*(r8 + 0xd8))(rax_1, arg2, r8)

if (rax_2 != 0)
    SetLastError(dwErrCode)

return rax_2 == 0
