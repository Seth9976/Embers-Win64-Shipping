// 函数: sub_142c839b0
// 地址: 0x142c839b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
WSADATA wSAData
int32_t rax_2 = WSAStartup(2, &wSAData)
int64_t result
int512_t entry_zmm2

if (rax_2 == 0)
    int64_t r8_1 = WSACleanup()
    uint16_t wVersion = wSAData.wVersion
    
    if (wVersion.b != 2 || (wVersion u>> 8).b != 0)
        sub_142c64760(arg1, "insufficient winsock version to support telnet", r8_1, entry_zmm2)
        result = 2
    else
        result = 0
else
    sub_142c64760(arg1, "WSAStartup failed (%d)", zx.q(rax_2), entry_zmm2)
    result = 2
__security_check_cookie(rax_1 ^ &var_1d8)
return result
