// 函数: sub_140d872f0
// 地址: 0x140d872f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t rax_2 = sub_140a54510(arg2, &data_142d40450)
enum CONSOLE_CHARACTER_ATTRIBUTES wAttributes

if (rax_2 != 0)
    int64_t _Destination
    __builtin_memset(&_Destination, 0, 0x12)
    int16_t r8_1 = wcsncpy(&_Destination, arg2, 8)
    int16_t i = _Destination.w
    int64_t* rcx_2 = &_Destination
    int16_t var_18_1 = 0
    
    if (i != 0)
        do
            *rcx_2 = i - 0x30
            rcx_2 += 2
            i = *rcx_2
        while (i != 0)
        
        i = _Destination.w
    
    int16_t rcx_4 = _Destination:2.w
    wAttributes.b = _Destination:4.w != 0
    int16_t temp1_1 = rcx_4
    rcx_4 = neg.w(rcx_4)
    rcx_4 = sbb.w(rcx_4, rcx_4, i != 0) & 4
    int64_t var_20
    wAttributes = (sbb.w(wAttributes, wAttributes, temp1_1 != 0) & FOREGROUND_GREEN)
        | (sbb.w(r8_1, r8_1, var_20:6.w != 0) & 0x80) | wAttributes | rcx_4
    rcx_4 = sbb.w(rcx_4, rcx_4, var_20.w != 0) & 0x40
    wAttributes |= rcx_4
    rcx_4 = sbb.w(rcx_4, rcx_4, _Destination:6.w != 0) & 8
    wAttributes |= rcx_4
    rcx_4 = sbb.w(rcx_4, rcx_4, var_20:2.w != 0) & 0x20
    wAttributes = wAttributes | rcx_4 | (sbb.w(rcx_4, rcx_4, var_20:4.w != 0) & 0x10)
else
    wAttributes = rax_2.w + 7

int64_t result = SetConsoleTextAttribute(*(arg1 + 0x20), wAttributes)
__security_check_cookie(rax_1 ^ &var_48)
return result
