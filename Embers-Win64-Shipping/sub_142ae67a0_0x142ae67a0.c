// 函数: sub_142ae67a0
// 地址: 0x142ae67a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
wchar16 timeStr[0x40]
wchar16 (* lpTimeStr_1)[0x40] = &timeStr
void* rcx = *(arg1 + 0x298)
void* lpLocaleName = nullptr

if (rcx != 0)
    lpLocaleName = sub_142a4a210(rcx)

if (GetTimeFormatEx(lpLocaleName, *(&data_14365b398 + (sx.q(*(arg1 + 0x168)) << 2)), arg2, nullptr, 
        &timeStr, 0x40) == 0 && GetLastError() == ERROR_INSUFFICIENT_BUFFER)
    int64_t rbx_1 = sx.q(GetTimeFormatEx(lpLocaleName, 
        *(&data_14365b398 + (sx.q(*(arg1 + 0x168)) << 2)), arg2, nullptr, nullptr, 0))
    wchar16* lpTimeStr = sub_142a7dd00(rbx_1 * 2)
    lpTimeStr_1 = lpTimeStr
    GetTimeFormatEx(lpLocaleName, *(&data_14365b398 + (sx.q(*(arg1 + 0x168)) << 2)), arg2, nullptr, 
        lpTimeStr, rbx_1.d)

int64_t r9 = -1

do
    r9 += 1
while ((*lpTimeStr_1)[r9] != 0)

sub_142a48d70(arg3, lpTimeStr_1, 0, r9.d)
wchar16 (* result)[0x40] = &timeStr

if (lpTimeStr_1 != &timeStr)
    result = sub_142a7dcd0(lpTimeStr_1)

__security_check_cookie(rax_1 ^ &var_108)
return result
