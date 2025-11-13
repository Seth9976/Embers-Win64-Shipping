// 函数: sub_140a5b3c0
// 地址: 0x140a5b3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78

if (arg2 != 0)
    void* var_30_1 = arg1
    void** const var_38 = &data_142da2668
    void*** var_48_1 = nullptr
    int64_t (* var_58)(int64_t* arg1) = sub_140a57aa0
    sub_140a21020(0, 0, &var_58)
    
    if (var_58 != 0)
        void** const* rcx = &var_38
        
        if (var_48_1 != 0)
            rcx = var_48_1
        
        (*rcx)[2](rcx)

EnterCriticalSection(arg1 + 0x888)
int64_t result = sub_140a45d40(arg1 + 0x478, arg1 + 0x478, arg1 + 0x880, arg1 + 0x878)

if (arg1 != -0x888)
    result = LeaveCriticalSection(arg1 + 0x888)

__security_check_cookie(rax_1 ^ &var_78)
return result
