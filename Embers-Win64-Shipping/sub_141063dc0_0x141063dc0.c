// 函数: sub_141063dc0
// 地址: 0x141063dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
*(arg1 + 0x42) = arg3
__builtin_memset(&arg1[2], 0, 0x30)
*(arg1 + 0x41) = 0
sub_140597df0(arg1, arg2)
arg1[8].b = 1

if (*(arg1 + 0x42) != 0)
    WIN32_FIND_DATAW findFileData
    HANDLE hFindFile = FindFirstFileW(*arg1, &findFileData)
    
    if (hFindFile != -1)
        FindClose(hFindFile)
    else if (GetLastError() == ERROR_FILE_NOT_FOUND)
        arg1[8].b = 0
else
    arg1[8].w = 0x100

char rbx = arg1[8].b
HANDLE result = sub_141062d30(arg1, 0x10000, 1)

if (rbx != 0)
    result = arg1[2]

if (rbx == 0 || result == 0)
    *(arg1 + 0x44) = 9
    *(arg1 + 0x4c) = 0
else
    *(arg1 + 0x44) = *result
    result = zx.q(*(result + 8))
    *(arg1 + 0x4c) = result.d
    
    if (*(arg1 + 0x44) != 9)
        result = sub_14105eab0(arg1)

__security_check_cookie(rax_1 ^ &var_288)
return result
