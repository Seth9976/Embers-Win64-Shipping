// 函数: sub_142c7ece0
// 地址: 0x142c7ece0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if (*(rbx + 0x4e41) != 0)
    char* _String = *(rbx + 0x4e48)
    
    if (_String != 0)
        char* _EndPtr
        int64_t rax = strtoll(_String, &_EndPtr, 0)
        char* _String_1 = _EndPtr
        
        for (char i = *_String_1; i != 0; i = *_String_1)
            int32_t rax_1 = isspace(zx.d(i))
            _String_1 = _EndPtr
            
            if (rax_1 == 0 && *_String_1 != 0x2d)
                break
            
            _String_1 = &_String_1[1]
            _EndPtr = _String_1
        
        char* _EndPtr_1
        int64_t rax_2 = strtoll(_String_1, &_EndPtr_1, 0)
        
        if (_EndPtr == _EndPtr_1 || rax_2 == -1)
            if (rax s< 0)
                *(rbx + 0xe8) = neg.q(rax)
        else if (rax s< 0)
            *(rbx + 0xe8) = neg.q(rax)
        else
            *(rbx + 0xe8) = rax_2 - rax + 1
        
        *(rbx + 0x4e50) = rax
        arg1[0xe5].b = 1
        return 0

*(rbx + 0xe8) = -1
return 0
