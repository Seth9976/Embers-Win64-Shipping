// 函数: sub_140b65d90
// 地址: 0x140b65d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* lpPathName_1
sub_140b74300(arg1, &lpPathName_1, arg2, 0)
int16_t* const lpPathName = &data_142d40450
int32_t var_10

if (var_10 != 0)
    lpPathName = lpPathName_1

BOOL rax = CreateDirectoryW(lpPathName, nullptr)
enum WIN32_ERROR rax_1

if (rax == 0)
    rax_1 = GetLastError()

int64_t rbx

if (rax != 0 || rax_1 == ERROR_ALREADY_EXISTS)
    rbx.b = 1
else
    rbx.b = 0

int16_t* lpPathName_2 = lpPathName_1

if (lpPathName_2 != 0)
    sub_140a74f90(lpPathName_2)

return zx.q(rbx.b)
