// 函数: sub_141b2c730
// 地址: 0x141b2c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** i = *(arg1 + 0x58)
int64_t result = sx.q(*(arg1 + 0x60))

for (void* rsi = &i[result]; i != rsi; i = &i[1])
    void* rdi_1 = *i
    
    if (rdi_1 != 0)
        void* rax = sub_141b36400()
        void* rcx = *(rdi_1 + 0x10)
        result = sx.q(*(rax + 0x38))
        
        if (result.d s<= *(rcx + 0x38))
            int64_t result_1 = result
            result = *(rcx + 0x30)
            
            if (*(result + (result_1 << 3)) == rax + 0x30)
                result = sub_141b35b70(rdi_1)

return result
