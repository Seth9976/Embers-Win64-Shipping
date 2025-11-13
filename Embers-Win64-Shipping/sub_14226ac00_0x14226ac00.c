// 函数: sub_14226ac00
// 地址: 0x14226ac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x2620)

for (void* r14 = &i[sx.q(*(arg1 + 0x2628))]; i != r14; i = &i[1])
    void* result = *i
    int64_t rbp_1 = *(result + 0x10)
    void* const rax_4
    
    if (arg2 == 0)
        rax_4 = nullptr
    else
        void* rax_1 = sub_142486410()
        
        if (rax_1 == 0)
            rax_4 = nullptr
        else
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                rax_4 = nullptr
            else
                rax_4 = arg2
    
    if (rbp_1 == rax_4)
        return result

return nullptr
