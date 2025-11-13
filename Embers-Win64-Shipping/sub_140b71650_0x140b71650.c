// 函数: sub_140b71650
// 地址: 0x140b71650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b28
int64_t rax_1 = __security_cookie ^ &var_b28
sub_140b6e120(GetCurrentProcess())
HANDLE hProcess = data_1439a9620
*(arg2 + 0xc10) = arg1
void Symbol
memset(&Symbol, 0, 0x420)
Symbol.d = 0x420
Symbol:0x18.d = 0x400

if (SymGetSymFromAddr64(hProcess, arg1, nullptr, &Symbol) == 0)
    GetLastError()
else
    int32_t rcx_3 = 0
    var_42c
    void* rax_4 = &var_42c
    
    while (*rax_4 s< 0x20)
        rcx_3 += 1
        rax_4 += 1
    
    strncpy(&arg2[0x400], &var_42c + sx.q(rcx_3), 0x400)
    int64_t rax_6 = -1
    arg2[0x7ff] = 0
    
    do
        rax_6 += 1
    while (arg2[0x400 + rax_6] != 0)
    
    void* _Destination = &arg2[0x400 + sx.q(rax_6.d)]
    
    if (0x400 - rax_6.d s> 0)
        int64_t _Count = sx.q(0x400 - rax_6.d)
        strncpy(_Destination, "()", _Count)
        *(_Count + _Destination - 1) = 0

struct IMAGEHLP_LINE64 Line64
Line64.SizeOfStruct.q = 0
Line64.SizeOfStruct = 0x28
__builtin_memset(&Line64.Key, 0, 0x20)

if (SymGetLineFromAddr64(hProcess, arg1, &arg2[0xc04], &Line64) == 0)
    GetLastError()
else
    strncpy(&arg2[0x800], Line64.FileName, 0x400)
    uint32_t LineNumber = Line64.LineNumber
    arg2[0xbff] = 0
    *(arg2 + 0xc00) = LineNumber

var_ad4
memset(&var_ad4, 0, 0x68c)
struct IMAGEHLP_MODULE64 ModuleInfo
ModuleInfo.SizeOfStruct = 0x690
char* result

if (SymGetModuleInfo64(hProcess, arg1, &ModuleInfo) == 0)
    result = GetLastError()
else
    var_a94
    result = strncpy(arg2, &var_a94, 0x400)
    arg2[0x3ff] = 0

__security_check_cookie(rax_1 ^ &var_b28)
return result
