// 函数: sub_142c4c060
// 地址: 0x142c4c060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SetLastError(NO_ERROR)

if (arg1 != 0)
    int32_t r9_1 = 0
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (arg1[r8_1] != 0)
    
    if (r8_1 != 0)
        uint64_t rax_1 = 0
        
        do
            int16_t rcx = arg1[rax_1]
            
            if (rcx == 0x5c || rcx == 0x2f)
                SetLastError(ERROR_BAD_ARGUMENTS)
                return 0
            
            r9_1 += 1
            rax_1 = zx.q(r9_1)
        while (rax_1 u< r8_1)

int32_t rax_2 = sub_142c4aaf0(0x37e4)

if (rax_2 == 1 && not(test_bit(arg2, 0xb)) && _wcsnicmp(arg1, u"nv", zx.q(rax_2 + 1)) == 0)
    int16_t* hMem = sub_142c4b540(arg1)
    enum WIN32_ERROR rax_4 = GetLastError()
    
    if (hMem != 0)
        int64_t result = sub_142c4bfc0(hMem, arg2)
        LocalFree(hMem)
        return result
    
    if (rax_4 != ERROR_MOD_NOT_FOUND)
        return 0

return sub_142c4ad10(arg1, arg2) __tailcall
