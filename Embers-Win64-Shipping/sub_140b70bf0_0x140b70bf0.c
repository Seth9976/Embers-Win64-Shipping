// 函数: sub_140b70bf0
// 地址: 0x140b70bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* lpNewFileName_1
sub_140b74300(arg1, &lpNewFileName_1, arg2, 1)
int16_t* const lpExistingFileName = &data_142d40450
int16_t* const lpNewFileName = &data_142d40450
int32_t var_10

if (var_10 != 0)
    lpNewFileName = lpNewFileName_1

int16_t* lpExistingFileName_1
sub_140b74300(arg1, &lpExistingFileName_1, arg3, 1)
int32_t var_20

if (var_20 != 0)
    lpExistingFileName = lpExistingFileName_1

BOOL rax = MoveFileW(lpExistingFileName, lpNewFileName)
int16_t* lpExistingFileName_2 = lpExistingFileName_1
lpNewFileName.b = rax != 0

if (lpExistingFileName_2 != 0)
    sub_140a74f90(lpExistingFileName_2)

int16_t* lpNewFileName_2 = lpNewFileName_1

if (lpNewFileName_2 != 0)
    sub_140a74f90(lpNewFileName_2)

return zx.q(lpNewFileName.b)
