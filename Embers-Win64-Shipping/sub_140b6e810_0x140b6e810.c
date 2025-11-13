// 函数: sub_140b6e810
// 地址: 0x140b6e810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* lpFileName_1
sub_140b74300(arg1, &lpFileName_1, arg2, 1)
int16_t* const lpFileName = &data_142d40450
int32_t var_10

if (var_10 != 0)
    lpFileName = lpFileName_1

uint32_t result = GetFileAttributesW(lpFileName)
int16_t* lpFileName_2 = lpFileName_1

if (lpFileName_2 != 0)
    sub_140a74f90(lpFileName_2)

if (result == 0xffffffff)
    result.b = 0
    return result

uint32_t rbx
rbx.b = result.b & 1
return zx.q(rbx.b)
