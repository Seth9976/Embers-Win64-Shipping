// 函数: sub_1427de880
// 地址: 0x1427de880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = 0
int64_t var_10 = 0
int64_t var_18 = 0
char* _String_2 = nullptr

if (arg1[9].b != 0)
    void* rdx = *arg1
    char const* const rdx_1
    
    if (*(rdx + 0x10) == 0)
        rdx_1 = "bad__repx__name"
    else
        rdx_1 = *(*(rdx + 8) + zx.q(*(rdx + 0x10) - 1) * 0x18)
    
    int64_t* rcx_1 = arg1[5]
    result = (*(*rcx_1 + 0x10))(rcx_1, rdx_1, &_String_2)
    
    if (result != 0)
        char* _String = _String_2
        
        if (_String != 0 && *_String != 0)
            char* _String_1 = _String
            var_18.d = strtoul(_String, &_String_1, 0xa)
            var_18:4.d = strtoul(_String_1, &_String_1, 0xa)
            var_10.d = strtoul(_String_1, &_String_1, 0xa)
            var_10:4.d = strtoul(_String_1, nullptr, 0xa)
            var_18.o = var_18.o
            return (*(arg3 + 0x20))(arg1[6], &var_18)

return result
