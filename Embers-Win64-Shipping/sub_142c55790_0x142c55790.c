// 函数: sub_142c55790
// 地址: 0x142c55790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

enum WIN32_ERROR dwErrCode = GetLastError()
int32_t rbp = *_errno()
*(arg1 + 0x560) = 0
int32_t* rax_1

if (arg2 s>= 0)
    rax_1 = __sys_nerr()

if (arg2 s< 0 || arg2 s>= *rax_1)
    char** Arguments = CbStrToSz(arg2, arg1 + 0x560, 0xff)
    
    if (Arguments == 0 && FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, nullptr, arg2, 0, 
            arg1 + 0x560, 0xff, Arguments) == 0)
        char* var_28_1
        var_28_1.d = arg2
        sub_142c564b0(arg1 + 0x560, 0xff, "Unknown error %d (%#x)", zx.q(arg2), arg3)
else
    strncpy(arg1 + 0x560, strerror(zx.q(arg2)), 0xff)

*(arg1 + 0x65f) = 0
char* rax_4 = strrchr(arg1 + 0x560, 0xa)

if (rax_4 != 0 && rax_4 - (arg1 + 0x560) s>= 2)
    *rax_4 = 0

char* rax_5 = strrchr(arg1 + 0x560, 0xd)

if (rax_5 != 0 && rax_5 - (arg1 + 0x560) s>= 1)
    *rax_5 = 0

if (*_errno() != rbp)
    *_errno() = rbp

if (dwErrCode != GetLastError())
    SetLastError(dwErrCode)

return arg1 + 0x560
