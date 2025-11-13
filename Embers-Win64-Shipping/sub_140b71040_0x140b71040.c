// 函数: sub_140b71040
// 地址: 0x140b71040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* lpFileName_1
sub_140b74300(arg1, &lpFileName_1, arg2, 1)
int16_t* const lpFileName = &data_142d40450
int32_t var_10

if (var_10 != 0)
    lpFileName = lpFileName_1

HANDLE hFile = CreateFileW(lpFileName, 0x80000000, (zx.d(arg3) * 2) | 1, nullptr, OPEN_EXISTING, 
    0x40000080, nullptr)
int16_t* lpFileName_2 = lpFileName_1

if (lpFileName_2 != 0)
    sub_140a74f90(lpFileName_2)

if (hFile == -1)
    return 0

void*** result = j_sub_140a82f30(0x78)

if (result == 0)
    return 0

result[1] = hFile
*result = &data_142e7ca68
result[3] = 0
result[4] = 0
result[7] = 0x10000
result[8] = 1
result[9].d = 0
result[0xe].w = 0
int64_t fileSize
GetFileSizeEx(hFile, &fileSize)
int64_t rcx_1 = sx.q(result[7].d)
result[2] = fileSize
result[5] = sub_140a82f30(rcx_1, 0)
result[6] = sub_140a82f30(sx.q(result[7].d), 0)
__builtin_memset(&result[0xa], 0, 0x20)
sub_140b73350(result, *(result + 0x3c))
return result
