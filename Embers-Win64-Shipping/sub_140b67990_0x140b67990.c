// 函数: sub_140b67990
// 地址: 0x140b67990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
rbx.b = 0
PWSTR lpDirectoryName_1
int64_t var_18
sub_140a300d0(sub_140b11c80(&var_18, arg1), &lpDirectoryName_1, &data_142d5a024, &(*{}[\nt")[3], 1)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t var_20
PWSTR lpDirectoryName

if (var_20 == 0 || var_20 - 1 s< 3)
    lpDirectoryName = lpDirectoryName_1
else
    lpDirectoryName = lpDirectoryName_1
    
    if (lpDirectoryName[1] == 0x3a && lpDirectoryName[2] == 0x5c)
        rbx.b = GetDiskFreeSpaceExW(lpDirectoryName, nullptr, arg2, arg3) != 0
        lpDirectoryName = lpDirectoryName_1

if (lpDirectoryName != 0)
    sub_140a74f90(lpDirectoryName)

return zx.q(rbx.b)
