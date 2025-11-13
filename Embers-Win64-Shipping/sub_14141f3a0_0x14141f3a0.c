// 函数: sub_14141f3a0
// 地址: 0x14141f3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg1[0x2b5]

if (sub_142391cc0(arg1) != 0)
    int64_t* r10_1 = *arg1
    int64_t* r9_1 = *r10_1
    int64_t rcx = sx.q(r10_1[1].d)
    int64_t* r8_1 = r9_1
    void* rax_1 = &r9_1[rcx]
    
    if (r9_1 != rax_1)
        do
            if (*r8_1 == arg1)
                int32_t r8_3 = ((r8_1 - r9_1) s>> 3).d
                
                if (r8_3 s>= 0 && r8_3 s< rcx.d && rcx.d s> 0)
                    int64_t rdi_1 = *r9_1
                    
                    if (sub_142391c60(rdi_1) != 0)
                        return *(rdi_1 + 8)
                
                break
            
            r8_1 = &r8_1[1]
        while (r8_1 != rax_1)

return result
