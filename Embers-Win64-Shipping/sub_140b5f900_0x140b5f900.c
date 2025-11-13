// 函数: sub_140b5f900
// 地址: 0x140b5f900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_758
int64_t rax_1 = __security_cookie ^ &var_758
void var_278
memset(&var_278, 0, 0x212)
wchar16 var_688[0x18]
memset(&var_688, 0, 0x200)
int64_t rbx = 0
int32_t pipeAttributes = 0x18
int64_t var_6e0 = 0
int32_t var_6d8 = 1
HANDLE var_6f0
HANDLE var_6d0
HANDLE var_6c8
HANDLE hReadPipe

if (CreatePipe(&hReadPipe, &var_6f0, &pipeAttributes, 0) != 0
        && SetHandleInformation(var_6f0, 1, 0) != 0 && sub_140b65f90(&var_6d0, &var_6c8) != 0)
    HANDLE hReadPipe_1 = hReadPipe
    *arg2 = var_6f0
    *arg3 = var_6d0
    sub_140b01a80(&var_688, u" -READ=%0u -WRITE=%0u", hReadPipe_1)
    wchar16 _Source[0x108]
    memset(&_Source, 0, 0x200)
    sub_140b01a80(&_Source, u" -MONITOR=%u", zx.q(GetCurrentProcessId()))
    int64_t rcx_8 = -1
    
    do
        rcx_8 += 1
    while (var_688[rcx_8] != 0)
    
    void* _Destination = &var_688[sx.q(rcx_8.d)]
    
    if (0x100 - rcx_8.d s> 0)
        int64_t rdi_1 = sx.q(0x100 - rcx_8.d)
        wcsncpy(_Destination, &_Source, rdi_1 - 1)
        *(_Destination + (rdi_1 << 1) - 2) = 0
    
    void* numArgs
    PWSTR* rax_11 = CommandLineToArgvW(GetCommandLineW(), &numArgs)
    PWSTR* r14_1 = rax_11
    
    if (rax_11 != 0)
        int32_t i = 0
        
        if (numArgs.d s> 0)
            do
                if (sub_140b2b020(*r14_1, u"abscrashreportclientlog=", &_Source, 0x104, 1) != 0)
                    int64_t rcx_12 = -1
                    
                    do
                        rcx_12 += 1
                    while (var_688[rcx_12] != 0)
                    
                    void* _Destination_1 = &var_688[sx.q(rcx_12.d)]
                    
                    if (0x100 - rcx_12.d s> 0)
                        int64_t rdi_2 = sx.q(0x100 - rcx_12.d)
                        wcsncpy(_Destination_1, u" -abslog=", rdi_2 - 1)
                        *(_Destination_1 + (rdi_2 << 1) - 2) = 0
                    
                    int64_t rcx_14 = -1
                    
                    do
                        rcx_14 += 1
                    while (var_688[rcx_14] != 0)
                    
                    void* _Destination_2 = &var_688[sx.q(rcx_14.d)]
                    
                    if (0x100 - rcx_14.d s> 0)
                        int64_t rdi_3 = sx.q(0x100 - rcx_14.d)
                        wcsncpy(_Destination_2, &_Source, rdi_3 - 1)
                        *(_Destination_2 + (rdi_3 << 1) - 2) = 0
                
                if (sub_140b21a10(*r14_1, u"nullrhi") != 0)
                    int64_t rax_18 = -1
                    
                    do
                        rax_18 += 1
                    while (var_688[rax_18] != 0)
                    
                    void* _Destination_3 = &var_688[sx.q(rax_18.d)]
                    
                    if (0x100 - rax_18.d s> 0)
                        int64_t rdi_4 = sx.q(0x100 - rax_18.d)
                        wcsncpy(_Destination_3, u" -nullrhi", rdi_4 - 1)
                        *(_Destination_3 + (rdi_4 << 1) - 2) = 0
                
                i += 1
                r14_1 = &r14_1[1]
            while (i s< numArgs.d)
    
    var_6e0.d = 0x109
    numArgs = &var_278
    int128_t var_6b8
    __builtin_memcpy(&var_6b8, u"CrashReportClien", 0x20)
    pipeAttributes.q = &numArgs
    uint64_t var_698_1 = 0x780065002e0074
    int32_t var_690_1 = 0x65
    
    if (sub_140b5bae0(&pipeAttributes, &var_6b8) != 0)
        PWSTR var_718
        __builtin_memset(&var_718, 0, 0x18)
        int64_t var_710
        int64_t var_708
        int64_t* rax_20 =
            sub_140b65ff0(&numArgs, &var_278, &var_688, 1, 0, 0, arg4, 0, var_718, var_710, var_708)
        
        if (&pipeAttributes != rax_20)
            rbx = *rax_20

*arg1 = rbx
__security_check_cookie(rax_1 ^ &var_758)
return arg1
