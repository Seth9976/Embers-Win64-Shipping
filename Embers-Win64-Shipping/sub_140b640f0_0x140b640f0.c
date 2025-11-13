// 函数: sub_140b640f0
// 地址: 0x140b640f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t UserStreamParam = 0x80
int32_t ExceptionParam = 2
int32_t rsi
rsi.b = arg1 != GetCurrentProcess()
HANDLE result = CreateFileW(arg4, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 
    FILE_ATTRIBUTE_NORMAL, nullptr)

if (result != -1)
    int64_t var_24_1 = arg5
    int32_t rax_2 = *(arg3 + 0x54)
    int32_t var_28 = arg2
    bool cond:1_1 = *(arg3 + 0x50) == 0
    int32_t var_1c_1 = rsi
    int32_t var_38 = 0x10000
    int32_t var_34_1 = rax_2 * 2
    int16_t* const rax_4
    
    if (cond:1_1)
        rax_4 = &data_142d40450
    else
        rax_4 = *(arg3 + 0x48)
    
    int16_t* const var_30_1 = rax_4
    int32_t var_48 = 1
    int32_t* var_44_1 = &var_38
    enum MINIDUMP_TYPE DumpType = MiniDumpNormal
    
    if (sub_140a4a860(arg3) != 0)
        DumpType = 0x1826
    
    UserStreamParam.q = &var_48
    ExceptionParam.q = &var_28
    BOOL rax_7 = MiniDumpWriteDump(arg1, GetProcessId(arg1), result, DumpType, ExceptionParam, 
        UserStreamParam, nullptr)
    CloseHandle(result)
    result.b = rax_7 == 1
else
    result.b = 0

return result
