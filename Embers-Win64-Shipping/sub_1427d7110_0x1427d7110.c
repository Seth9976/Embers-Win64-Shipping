// 函数: sub_1427d7110
// 地址: 0x1427d7110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *(arg2 + 0x10)
sub_1427e5d10(arg1, *arg2)
int32_t* rax = arg1[0xb]

if (rax != 0)
    *rax += 1

bool cond:0 = arg1[9].b == 0
char* _String_1 = nullptr

if (not(cond:0))
    void* rdx_1 = *arg1
    char const* const rdx_2
    
    if (*(rdx_1 + 0x10) == 0)
        rdx_2 = "bad__repx__name"
    else
        rdx_2 = *(*(rdx_1 + 8) + zx.q(*(rdx_1 + 0x10) - 1) * 0x18)
    
    int64_t* rcx_1 = arg1[5]
    
    if ((*(*rcx_1 + 0x10))(rcx_1, rdx_2, &_String_1) != 0)
        char* _String = _String_1
        
        if (_String != 0 && *_String != 0)
            char* _EndPtr = _String
            uint32_t rax_6 = strtoul(_String, &_EndPtr, 0xa)
            zmm1:8.q(arg1[6], zx.q(rax_6))

return sub_1427e5c70(arg1) __tailcall
