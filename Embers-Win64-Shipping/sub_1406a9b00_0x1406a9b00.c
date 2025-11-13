// 函数: sub_1406a9b00
// 地址: 0x1406a9b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 8)
int32_t i = 0
int64_t rdi = 0
uint64_t result

do
    result = *(arg1 + 0x18)
    
    if (arg2 == 0xffff)
        int64_t rcx_1
        
        if (i.b != 0x5f)
            rcx_1 = *(*(result + 8) + 0x18)
        
        if (i.b == 0x5f || (*(rcx_1 + (zx.q(i.b) << 1)) & 0x107) != 0)
            result.b = 1
        else
            result.b = 0
    else
        result.b = (*(*(*(result + 8) + 0x18) + (zx.q(i.b) << 1)) & arg2) != 0
    
    if (result.b != arg3)
        int64_t rax_1 = *(rsi + 0x28)
        
        if (rax_1 == 0)
            rax_1 = j_sub_140a82f30(zx.q((rax_1 + 0x20).d))
            
            if (rax_1 != 0)
                __builtin_memset(rax_1, 0, 0x20)
            
            *(rsi + 0x28) = rax_1
        
        char* rdx_4 = (rdi u>> 3) + rax_1
        result = zx.q(i) & 7
        *rdx_4 |= (1 << (result.d u% 0x20)).b
    
    i += 1
    rdi += 1
while (i u< 0x100)

return result
