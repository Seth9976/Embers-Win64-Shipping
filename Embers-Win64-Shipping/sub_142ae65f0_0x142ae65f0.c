// 函数: sub_142ae65f0
// 地址: 0x142ae65f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
wchar16 dateStr[0x40]
wchar16 (* lpDateStr_1)[0x40] = &dateStr
void* rcx = *(arg1 + 0x298)
void* lpLocaleName = nullptr

if (rcx != 0)
    lpLocaleName = sub_142a4a210(rcx)

if (GetDateFormatEx(lpLocaleName, *(&data_14365b388 + (sx.q(*(arg1 + 0x16c) - 4) << 2)), arg2, 
        nullptr, &dateStr, 0x40, nullptr) == 0 && GetLastError() == ERROR_INSUFFICIENT_BUFFER)
    int64_t rbx_1 = sx.q(GetDateFormatEx(lpLocaleName, 
        *(&data_14365b388 + (sx.q(*(arg1 + 0x16c) - 4) << 2)), arg2, nullptr, nullptr, 0, nullptr))
    wchar16* lpDateStr = sub_142a7dd00(rbx_1 * 2)
    lpDateStr_1 = lpDateStr
    GetDateFormatEx(lpLocaleName, *(&data_14365b388 + (sx.q(*(arg1 + 0x16c) - 4) << 2)), arg2, 
        nullptr, lpDateStr, rbx_1.d, nullptr)

int64_t r9 = -1

do
    r9 += 1
while ((*lpDateStr_1)[r9] != 0)

sub_142a48d70(arg3, lpDateStr_1, 0, r9.d)
wchar16 (* result)[0x40] = &dateStr

if (lpDateStr_1 != &dateStr)
    result = sub_142a7dcd0(lpDateStr_1)

__security_check_cookie(rax_1 ^ &var_118)
return result
