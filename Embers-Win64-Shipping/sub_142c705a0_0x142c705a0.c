// 函数: sub_142c705a0
// 地址: 0x142c705a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _Time = arg1
struct tm* rax = _gmtime64(&_Time)

if (rax == 0)
    return 0x2b

int128_t zmm0
zmm0.d = rax->tm_sec
zmm0:4.d = rax->tm_min
zmm0:8.d = rax->tm_hour
zmm0:0xc.d = rax->tm_mday
*arg2 = zmm0
int128_t zmm1
zmm1.d = rax->tm_mon
zmm1:4.d = rax->tm_year
zmm1:8.d = rax->tm_wday
zmm1:0xc.d = rax->tm_yday
arg2[1] = zmm1
arg2[2].d = rax->tm_isdst
return 0
