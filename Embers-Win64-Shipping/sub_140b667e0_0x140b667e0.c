// 函数: sub_140b667e0
// 地址: 0x140b667e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg1
int64_t rax = -1

do
    rax += 1
while (arg2[rax] != 0)

arg1.b = rax.d == 0

if (rax.d == 0)
    return zx.q(arg1.b)

int16_t* lpFileName_1
sub_140b74300(r10, &lpFileName_1, arg2, 0)
int16_t* const lpFileName = &data_142d40450
int32_t var_10

if (var_10 != 0)
    lpFileName = lpFileName_1

uint32_t result = GetFileAttributesW(lpFileName)
int16_t* lpFileName_2 = lpFileName_1

if (lpFileName_2 != 0)
    sub_140a74f90(lpFileName_2)

if (result != 0xffffffff && (result.b & 0x10) != 0)
    result.b = 1
    return result

result.b = 0
return result
