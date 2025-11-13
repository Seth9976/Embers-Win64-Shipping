// 函数: sub_140b71240
// 地址: 0x140b71240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t dwShareMode = zx.d(arg4)
uint64_t rbp = zx.q(arg3)
PWSTR lpFileName_1
sub_140b74300(arg1, &lpFileName_1, arg2, 1)
PWSTR lpFileName = &data_142d40450
int32_t var_10

if (var_10 != 0)
    lpFileName = lpFileName_1

void*** result = nullptr
HANDLE rax = CreateFileW(lpFileName, dwShareMode << 0x1f | 0x40000000, dwShareMode, nullptr, 
    ((rbp << 1) + 2).d, FILE_ATTRIBUTE_NORMAL, nullptr)
PWSTR lpFileName_2 = lpFileName_1

if (lpFileName_2 != 0)
    sub_140a74f90(lpFileName_2)

if (rax == -1)
    return nullptr

void*** rax_1 = j_sub_140a82f30(0x40)

if (rax_1 != 0)
    result = sub_140b64230(rax_1, rax)

if (rbp.b != 0)
    (*result)[3](result, 0)

return result
