// 函数: png_convert_from_time_t
// 地址: 0x1403c1bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
__time64_t _Time = arg2
struct tm* result = _gmtime64(&_Time)
*arg1 = 0x76c + (result->tm_year).w
int16_t rcx_1
rcx_1.b = result->tm_mon.b
rcx_1.b += 1
arg1[1].b = rcx_1.b
rcx_1.b = result->tm_mday.b
*(arg1 + 3) = rcx_1.b
rcx_1.b = result->tm_hour.b
arg1[2].b = rcx_1.b
rcx_1.b = result->tm_min.b
*(arg1 + 5) = rcx_1.b
result.b = result->tm_sec.b
arg1[3].b = result.b
__security_check_cookie(rax_1 ^ &var_38)
return result
