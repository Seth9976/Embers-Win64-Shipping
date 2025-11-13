// 函数: __security_check_cookie
// 地址: 0x142c93890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == __security_cookie)
    int64_t rcx = rol.q(arg1, 0x10)
    
    if ((rcx.w & 0xffff) == 0)
        return 
    
    arg1 = ror.q(rcx, 0x10)

noreturn __report_gsfailure(arg1) __tailcall
