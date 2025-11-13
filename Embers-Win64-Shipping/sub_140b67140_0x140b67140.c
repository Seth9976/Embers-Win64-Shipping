// 函数: sub_140b67140
// 地址: 0x140b67140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2040)
void var_2058
int64_t rax_1 = __security_cookie ^ &var_2058
int32_t rsi = 0
*arg1 = 0
arg1[1] = 0
HANDLE rax_2 = OpenProcess(PROCESS_QUERY_INFORMATION, 0, arg2)

if (rax_2 != 0)
    uint32_t lpdwSize[0x4]
    lpdwSize[0] = 0x1000
    wchar16 exeName[0x1000]
    
    if (QueryFullProcessImageNameW(rax_2, PROCESS_NAME_WIN32, &exeName, &lpdwSize) != 0
            && *arg1 != &exeName)
        int32_t rbx_2
        
        if (exeName[0] == 0)
            rbx_2 = 0
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (exeName[rbx_1] != 0)
            
            rbx_2 = rbx_1.d + 1
        
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != rbx_2)
            sub_1405947f0(arg1, rbx_2)
            rsi = arg1[1].d
        
        int32_t rax_4 = rsi + rbx_2
        arg1[1].d = rax_4
        
        if (rax_4 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        if (rbx_2 != 0)
            memcpy(*arg1, &exeName, rbx_2 * 2)
    
    CloseHandle(rax_2)

__security_check_cookie(rax_1 ^ &var_2058)
return arg1
