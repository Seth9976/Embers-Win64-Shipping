// 函数: sub_142391d50
// 地址: 0x142391d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx_1 = *(arg1 + 0xe0)
int64_t result = sx.q(*(rdx_1 + 0x30))

if (result.d s> 0)
    void* rcx = *(rdx_1 + 0x28)
    void* rdx = rdx_1 + 0x10
    int64_t result_1 = result
    result = 0
    
    if (rcx != 0)
        rdx = rcx
    
    int64_t rcx_1 = 0
    
    do
        if (*(rcx_1 + rdx + 0x15) == 0)
            result.b = 1
            return result
        
        result += 1
        rcx_1 += 0x18
    while (result s< result_1)

result.b = 0
return result
