// 函数: sub_140692af0
// 地址: 0x140692af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    Concurrency::details::_ExceptionHolder::ReportUnhandledError(arg1)
    breakpoint

void* rcx = *(arg1 + 0x20)

if (rcx != 0)
    if (((*(arg1 + 0x30) - rcx) & 0xfffffffffffffff8) u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    j_sub_140a74f90(rcx)
    __builtin_memset(&arg1[8], 0, 0x18)

return __ExceptionPtrDestroy(&arg1[2]) __tailcall
