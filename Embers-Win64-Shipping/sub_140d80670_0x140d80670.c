// 函数: sub_140d80670
// 地址: 0x140d80670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98

if (arg2 == 0)
    *(arg1 + 8) = 0
else
    HKL param0 = GetKeyboardLayout(0)
    int64_t* rcx = *(arg1 + 0x18)
    int64_t r9_1 = *rcx
    int32_t var_78
    
    if ((*(r9_1 + 0x50))(rcx, "c\t4", &var_78, r9_1) s< 0 || var_78 != 1)
        if (ImmGetIMEFileNameW(param0, nullptr, 0) == 0)
            *(arg1 + 8) = 0
        else
            *(arg1 + 8) = 1
            *(arg1 + 0x48) = ImmGetProperty(param0, 4)
    else
        *(arg1 + 8) = 2

int64_t result = sub_140d7f600(arg1)
__security_check_cookie(rax_1 ^ &var_98)
return result
