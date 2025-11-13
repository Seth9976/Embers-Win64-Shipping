// 函数: sub_14286fc30
// 地址: 0x14286fc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_48
int64_t rax_1 = __security_cookie ^ &var_48
void* rax_2 = *(arg1 + 0xb0)
int64_t* result

if (*(rax_2 + 0x1f4) != 0 || *(rax_2 + 0x1f8) != 0)
    SYSTEMTIME systemTime
    GetSystemTime(&systemTime)
    FILETIME fileTime
    SystemTimeToFileTime(&systemTime, &fileTime)
    uint32_t r8_2 = ((-0x19db1ded53e8000 + fileTime) u/ 0x989680).d
    int32_t rdx_4 = ((-0x19db1ded53e8000 + fileTime).d - r8_2 * 0x989680) s/ 0xa
    void* rax_7 = *(arg1 + 0xb0)
    int32_t temp2_1 = *(rax_7 + 0x1f4)
    
    if (temp2_1 s< r8_2 || (temp2_1 == r8_2 && *(rax_7 + 0x1f8) s<= rdx_4))
        *arg2 = 0
    else
        int64_t rax_8 = *(rax_7 + 0x1f4)
        *arg2 = rax_8
        int32_t rax_9 = rax_8.d - r8_2
        int32_t temp3_1 = *(arg2 + 4)
        *(arg2 + 4) -= rdx_4
        int32_t rcx_4 = *(arg2 + 4)
        *arg2 = rax_9
        
        if (temp3_1 - rdx_4 s< 0)
            rax_9 -= 1
            rcx_4 += 0xf4240
            *arg2 = rax_9
            *(arg2 + 4) = rcx_4
        
        if (rax_9 == 0 && rcx_4 s< 0x3a98)
            *arg2 = 0
    
    result = arg2
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_48)
return result
