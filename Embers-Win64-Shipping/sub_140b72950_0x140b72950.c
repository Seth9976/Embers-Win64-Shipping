// 函数: sub_140b72950
// 地址: 0x140b72950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* lpFileName_1
sub_140b74300(arg1, &lpFileName_1, arg2, 1)
int16_t* const lpFileName = &data_142d40450
enum FILE_FLAGS_AND_ATTRIBUTES dwFileAttributes = FILE_ATTRIBUTE_NORMAL
int32_t var_10

if (var_10 != 0)
    lpFileName = lpFileName_1

if (arg3 != 0)
    dwFileAttributes = FILE_ATTRIBUTE_READONLY

BOOL rax = SetFileAttributesW(lpFileName, dwFileAttributes)
int16_t* lpFileName_2 = lpFileName_1

if (lpFileName_2 != 0)
    sub_140a74f90(lpFileName_2)

return zx.q(rax != 0)
