// 函数: sub_1428852f0
// 地址: 0x1428852f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 != 0)
    int64_t i = 0
    void* const result = &data_1434e8180
    
    do
        char rax_1 = (*(result + 0x18)).b
        char r9_1 = (*arg1).b
        
        if (((rax_1 & 8) == 0 || (r9_1 & 8) != 0) && ((rax_1 & 4) == 0 || (r9_1 & 4) != 0)
                && ((rax_1 & 0x20) == 0 || (r9_1 & 0x20) != 0))
            if ((r9_1 & 1) != 0)
                char* rax_2 = *(result + 0x10)
                
                if (rax_2 != 0)
                    int64_t r8_2 = arg2 - rax_2
                    uint32_t j
                    uint32_t rdx
                    
                    do
                        rdx = zx.d(*rax_2)
                        j = zx.d(rax_2[r8_2])
                        
                        if (rdx != j)
                            break
                        
                        rax_2 = &rax_2[1]
                    while (j != 0)
                    
                    if (rdx - j == 0)
                        return result
            
            if ((r9_1 & 2) != 0)
                char* _Str1 = *(result + 8)
                
                if (_Str1 != 0 && _stricmp(_Str1, arg2) == 0)
                    return result
        
        i += 1
        result += 0x20
    while (i u< 0x30)

return nullptr
