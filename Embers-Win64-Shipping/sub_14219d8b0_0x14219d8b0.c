// 函数: sub_14219d8b0
// 地址: 0x14219d8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = arg2 & *(arg1 + 0x88)
void* rax_1

if (data_143a2ef90 != 0)
    rax_1 = *(arg1 + 0x408)

int64_t rsi

if (data_143a2ef90 == 0 || rax_1 == 0 || (*(rax_1 + 0xb1) & 2) == 0 || *(arg1 + 0x48) s> 1
        || *(arg1 + 0xd8) != 0)
    rsi.b = 0
else
    rsi.b = 1

int32_t rcx = *(arg1 + 0x438)
int64_t rdi

if ((rcx & 0x3fffffff) == 0x3fffffff || rcx s< 0)
    rdi.b = 0
else
    rdi.b = 1

if (rsi.b != 0 || rdi.b != 0)
    void* rax_4 = sub_142193f60(arg1)
    
    if ((rsi.b != 0 || rdi.b != 0) && rax_4 != 0)
        if (rsi.b != 0)
            uint64_t result = sub_141ef54e0(arg1, 0)
            
            if (r14 != 0)
                return sub_1421f8e50(rax_4, arg1)
            
            if (rdi.b == 0)
                return result
            
            return sub_142202b80(rax_4, arg1)
        
        if (rdi.b != 0)
            sub_142202b80(rax_4, arg1)

return sub_141ef54e0(arg1, r14)
