// 函数: sub_141a4b440
// 地址: 0x141a4b440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0xd0)
void* r14 = &rdi[sx.q(*(arg1 + 0xd8))]

if (rdi == r14)
    return 0

do
    void* result = *rdi
    int64_t rbp_1 = *(result + 0x10)
    void* const rax_4
    
    if (arg2 == 0)
        rax_4 = nullptr
    else
        void* rax_1 = sub_141a7bc30()
        
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
    
    rdi = &rdi[1]
while (rdi != r14)

return nullptr
