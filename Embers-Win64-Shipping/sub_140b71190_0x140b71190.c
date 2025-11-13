// 函数: sub_140b71190
// 地址: 0x140b71190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* lpFileName_1
sub_140b74300(arg1, &lpFileName_1, arg2, 1)
int16_t* const lpFileName = &data_142d40450
int32_t var_10

if (var_10 != 0)
    lpFileName = lpFileName_1

HANDLE rax = CreateFileW(lpFileName, 0x80000000, (zx.d(arg3) * 2) | 1, nullptr, OPEN_EXISTING, 
    0x40000080, nullptr)
int16_t* lpFileName_2 = lpFileName_1

if (lpFileName_2 != 0)
    sub_140a74f90(lpFileName_2)

if (rax == -1)
    return 0

void*** rax_1 = j_sub_140a82f30(0x40)

if (rax_1 == 0)
    return nullptr

return sub_140b64230(rax_1, rax)
