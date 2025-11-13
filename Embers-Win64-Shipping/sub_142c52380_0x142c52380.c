// 函数: sub_142c52380
// 地址: 0x142c52380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
WSADATA wSAData

if (WSAStartup(0x202, &wSAData) == 0)
    uint16_t wVersion = wSAData.wVersion
    
    if (wVersion.b == 2 && (wVersion u>> 8).b == 2)
        __security_check_cookie(rax_1 ^ &var_1d8)
        return 0
    
    WSACleanup()

__security_check_cookie(rax_1 ^ &var_1d8)
return 2
