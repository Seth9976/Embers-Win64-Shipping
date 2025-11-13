// 函数: sub_140b659c0
// 地址: 0x140b659c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_538
int64_t rax_1 = __security_cookie ^ &var_538
sub_140b6e100()
uint64_t result

if (arg2 == 0 || arg3 == 0)
    result = 0
else
    HANDLE rax_2 = OpenThread(0x1b, 0, arg1)
    
    if (rax_2 != 0)
        SuspendThread(rax_2)
        void var_508
        sub_140b64360(&var_508)
        CONTEXT context
        context.ContextFlags = 0x100001
        HANDLE var_28_1 = rax_2
        int32_t result_1 = 0
        
        if (GetThreadContext(rax_2, &context) != 0)
            sub_140b657b0(arg2, arg3, &var_508, &result_1)
        
        ResumeThread(rax_2)
        CloseHandle(rax_2)
        result = zx.q(result_1)
    else
        result = 0

__security_check_cookie(rax_1 ^ &var_538)
return result
