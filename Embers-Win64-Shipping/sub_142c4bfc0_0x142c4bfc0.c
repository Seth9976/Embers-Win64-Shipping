// 函数: sub_142c4bfc0
// 地址: 0x142c4bfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SetLastError(NO_ERROR)
enum WIN32_ERROR dwErrCode

if (arg1 == 0)
    dwErrCode = ERROR_BAD_ARGUMENTS
else
    int16_t rax_1 = *arg1
    
    if (rax_1 == 0x5c || rax_1 == 0x2f)
    label_142c4c011:
        
        if (sub_142c4a910(arg1) != 0)
            return LoadLibraryExW(arg1, nullptr, arg2 & 0xffffe0f7) __tailcall
        
        dwErrCode = ERROR_BAD_PATHNAME
    else if (isalpha(zx.d(rax_1)) == 0 || arg1[1] != 0x3a)
        dwErrCode = ERROR_BAD_ARGUMENTS
    else
        int16_t rax_3 = arg1[2]
        
        if (rax_3 == 0x2f || rax_3 == 0x5c)
            goto label_142c4c011
        
        dwErrCode = ERROR_BAD_ARGUMENTS

SetLastError(dwErrCode)
return 0
