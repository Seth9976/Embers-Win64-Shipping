// 函数: sub_140834710
// 地址: 0x140834710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x20)
int32_t result

if (rdi s> 0)
    int16_t rax = *(arg1 + 0x12)
    
    if (rax == 0xffff)
        if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == 1)
            rax = 0
        else
            void* rax_1 = sub_140761a70(arg1 + 8)
            int16_t rcx_1 = *(rax_1 + 0x5c)
            rax = (*(rax_1 + 0x58) - 1 + rcx_1) & neg.w(rcx_1)
        
        *(arg1 + 0x12) = rax
    
    if (rdi == sx.d(rax))
        result.b = 1
        return result

result.b = 0
return result
