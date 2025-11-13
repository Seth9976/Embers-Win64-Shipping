// 函数: sub_141e2a8b0
// 地址: 0x141e2a8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = arg1[0x10].w

if (rax != 0xffff && arg1[0xf] != -1)
    void* rcx = *arg2
    
    if (rax == *(rcx + 0x400))
        int16_t result = arg1[0x14].w
        
        if (result == 0xffff || arg1[0x13] == -1 || result == *(rcx + 0x420))
            return result
        
        result = _mm_extract_epi16(*(arg1 + 0x98), 4) + 1
        
        if (result == 0xffff)
            result = 0
        
        if (data_143de5458 != -1 && result == *(rcx + 0x420))
            return result

void* rcx_1 = *arg2
arg1[0x10].w = *(rcx_1 + 0x400)
arg1[0xf] = *(rcx_1 + 0x3f8)
*(arg1 + 0x82) = *(rcx_1 + 0x402)
(*(*arg1 + 0x90))(arg1)
return sub_141e29640(&arg1[2], arg2)
