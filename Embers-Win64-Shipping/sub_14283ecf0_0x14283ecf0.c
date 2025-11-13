// 函数: sub_14283ecf0
// 地址: 0x14283ecf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
memset(&arg1[1], 0, 0x1ed)
*arg1 = 0x1ef
__builtin_strncpy(&arg1[0xd5], "DirectXTex", 0xb)
*(arg1 + 0x1d3) = 0xbf
*(arg1 + 0x1d5) = 0x20

if ((arg2 & 0x40) != 0)
    *(arg1 + 0x1de) = 0x10001
else if ((arg2 & 0x20) != 0)
    *(arg1 + 0x1de) = 0xa0016
else
    switch (*(arg3 + 0x30) - 0x1d)
        case 0, 0x2b, 0x2e, 0x31, 0x3e, 0x40, 0x46
            *(arg1 + 0x1de) = 0xa0016

int32_t rcx_4 = *(arg3 + 0x2c) & 7

if (rcx_4 == 0)
    char rax_6
    char rcx_9
    rax_6, rcx_9 = sub_14284b2d0(*(arg3 + 0x30))
    arg1[0xf7].b = sbb.b(rcx_9, rcx_9, rax_6 != 0) & 2
else if (rcx_4 == 1)
    arg1[0xf7].b = 3
else if (rcx_4 == 2)
    arg1[0xf7].b = 4
else if (rcx_4 == 3)
    arg1[0xf7].b = 1
else if (rcx_4 == 4)
    arg1[0xf7].b = 2

__time64_t _Time = 0
_time64(&_Time)
struct tm _Tm
errno_t result = _gmtime64_s(&_Tm, &_Time)

if (result == 0)
    *(arg1 + 0x16f) = _Tm.tm_mon.w + 1
    *(arg1 + 0x171) = _Tm.tm_mday.w
    *(arg1 + 0x173) = _Tm.tm_year.w + 0x76c
    *(arg1 + 0x175) = _Tm.tm_hour.w
    *(arg1 + 0x177) = _Tm.tm_min.w
    result = zx.d(_Tm.tm_sec.w)
    *(arg1 + 0x179) = result.w

__security_check_cookie(rax_1 ^ &var_68)
return result
