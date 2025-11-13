// 函数: sub_142ab1710
// 地址: 0x142ab1710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* arg_20 = arg4
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
wchar16 var_d8[0x20]
var_d8[0] = 0
void _ArgList
__stdio_common_vswprintf(data_143cd5b30 | 1, &var_d8, 0x20, arg4, nullptr, &_ArgList)
int64_t rax_2 = 0

if (var_d8[0] == 0x2d)
    rax_2 = 2

void* rcx_2 = &var_d8 + rax_2

while (*rcx_2 != 0)
    if (*rcx_2 - 0x30 u> 9)
        *rcx_2 = 0x2e
        break
    
    rcx_2 += 2

int128_t* rax_4 = *(arg1 + 0x260)
wchar16 var_98[0x20]
wchar16 (* rdi)[0x20] = &var_98
void* rcx_3 = *(arg1 + 0x270)
void* lpLocaleName = nullptr
int128_t format = *rax_4
int128_t var_108 = rax_4[1]
int128_t zmm0 = rax_4[2]
var_98[0] = 0
int128_t var_f8 = zmm0

if (rcx_3 != 0)
    lpLocaleName = sub_142a4a210(rcx_3)

int32_t rax_6 = format.d
void* var_120

if (*(arg1 + 0x170) == 0)
    if (*(arg1 + 0x268) != 0)
        rax_6 = arg2
    
    format.d = rax_6
    char rax_11 = sub_141e40700(arg1)
    int32_t rcx_11 = format:8.d
    var_120.d = 0x20
    
    if (rax_11 == 0)
        rcx_11 = 0
    
    format:8.d = rcx_11
    
    if (GetNumberFormatEx(lpLocaleName, 0, &var_d8, &format, &var_98, var_120.d) == 0
            && GetLastError() == ERROR_INSUFFICIENT_BUFFER)
        var_120.d = 0
        int64_t rbx_2 =
            sx.q(GetNumberFormatEx(lpLocaleName, 0, &var_d8, &format, nullptr, var_120.d))
        wchar16* lpNumberStr = sub_142a7dd00(rbx_2 * 2)
        var_120.d = rbx_2.d
        *lpNumberStr = 0
        rdi = lpNumberStr
        GetNumberFormatEx(lpLocaleName, 0, &var_d8, &format, lpNumberStr, var_120.d)
else
    if (*(arg1 + 0x268) != 0)
        rax_6 = arg2
    
    format.d = rax_6
    char rax_7 = sub_141e40700(arg1)
    int32_t rcx_5 = format:8.d
    var_120.d = 0x20
    
    if (rax_7 == 0)
        rcx_5 = 0
    
    format:8.d = rcx_5
    
    if (GetCurrencyFormatEx(lpLocaleName, 0, &var_d8, &format, &var_98, var_120.d) == 0
            && GetLastError() == ERROR_INSUFFICIENT_BUFFER)
        var_120.d = 0
        int64_t rbx_1 =
            sx.q(GetCurrencyFormatEx(lpLocaleName, 0, &var_d8, &format, nullptr, var_120.d))
        wchar16* lpCurrencyStr = sub_142a7dd00(rbx_1 * 2)
        var_120.d = rbx_1.d
        *lpCurrencyStr = 0
        rdi = lpCurrencyStr
        GetCurrencyFormatEx(lpLocaleName, 0, &var_d8, &format, lpCurrencyStr, var_120.d)
int64_t r9_7 = -1

do
    r9_7 += 1
while ((*rdi)[r9_7] != 0)

sub_142a48d70(arg3, rdi, 0, r9_7.d)

if (rdi != &var_98)
    sub_142a7dcd0(rdi)

__security_check_cookie(rax_1 ^ &var_148)
return arg3
