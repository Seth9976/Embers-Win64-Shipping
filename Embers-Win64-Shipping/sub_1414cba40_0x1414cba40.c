// 函数: sub_1414cba40
// 地址: 0x1414cba40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_4 = sx.q(*(arg2 + 0x28))

if (rax_4.d s> 0)
    int64_t* rdx = *(arg2 + 0x20)
    int64_t rcx = 0
    
    do
        void* result = *rdx
        int32_t r8_1 = *(result + 0x570)
        
        if ((r8_1.b & 0x41) == 0x41 && not(test_bit(r8_1, 9)))
            return result
        
        rcx += 1
        rdx = &rdx[1]
    while (rcx s< rax_4)

return 0
