// 函数: sub_142c51540
// 地址: 0x142c51540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
HMODULE hModule = GetModuleHandleA(arg1)

if (hModule == 0)
    __security_check_cookie(rax_1 ^ &var_438)
    return hModule

uint8_t var_418[0x400]
GetModuleFileNameA(hModule, &var_418, 0x400)
HMODULE rax_2 = LoadLibraryA(&var_418)
__security_check_cookie(rax_1 ^ &var_438)
return rax_2
