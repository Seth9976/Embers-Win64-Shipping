// 函数: sub_140fc9290
// 地址: 0x140fc9290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t r11 = *(arg1 + 0x28)
int32_t var_238
int32_t* timeout_1 = &var_238
uint32_t r10 = zx.d(arg2)
int64_t var_220 = r11
int32_t var_228 = 1
var_238 = int.d(float.d(arg3) f* 9.9999999999999995e-08)
int32_t var_234 = (arg3 s% 0x989680 s/ 0xa).d

if (arg3 s< 0)
    timeout_1 = nullptr

uint32_t result
bool cond:1
int32_t* timeout
FD_SET* readfds
FD_SET* writefds
FD_SET* exceptfds

if (r10.b == 0)
    timeout = timeout_1
    readfds = &var_228
    exceptfds = nullptr
label_140fc936c:
    writefds = nullptr
label_140fc9373:
    result = select((r11 + 1).d, readfds, writefds, exceptfds, timeout)
    cond:1 = result != 0
    
    if (result s> 0)
        result.b = 0
        __security_check_cookie(rax_1 ^ &var_268)
        return result
else
    if (r10 == 1)
        timeout = timeout_1
        writefds = &var_228
        exceptfds = nullptr
        readfds = nullptr
        goto label_140fc9373
    
    if (r10 == 2)
        timeout = timeout_1
        readfds = nullptr
        exceptfds = &var_228
        goto label_140fc936c
    
    cond:1 = false
result.b = cond:1
result.b += 1
__security_check_cookie(rax_1 ^ &var_268)
return result
