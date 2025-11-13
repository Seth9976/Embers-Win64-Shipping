// 函数: sub_140b66390
// 地址: 0x140b66390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* lpPathName_1
sub_140b74300(arg1, &lpPathName_1, arg2, 0)
int16_t* const lpPathName = &data_142d40450
int32_t var_10

if (var_10 != 0)
    lpPathName = lpPathName_1

RemoveDirectoryW(lpPathName)
int16_t* lpPathName_2 = lpPathName_1

if (lpPathName_2 != 0)
    sub_140a74f90(lpPathName_2)

enum WIN32_ERROR dwErrCode = GetLastError()
int64_t r8_1 = *arg1
char rax = (*(r8_1 + 0xd8))(arg1, arg2, r8_1)
int64_t* rbx
rbx.b = rax == 0

if (rax != 0)
    SetLastError(dwErrCode)

return zx.q(rbx.b)
