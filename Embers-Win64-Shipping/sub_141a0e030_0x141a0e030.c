// 函数: sub_141a0e030
// 地址: 0x141a0e030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141a22c50()
int32_t r9 = 0
int64_t rax_1 = sx.q(*(arg1 + 0x80))

if (rax_1.d s> 0)
    int64_t* rbx_1 = *(arg1 + 0x78)
    int64_t rdx_1 = 0
    int64_t* r8_1 = rbx_1
    
    do
        void* rax_2 = *r8_1
        
        if (rax_2 != 0)
            void* rax_3 = *(rax_2 + 0x10)
            int64_t rcx = sx.q(*(rax + 0x38))
            
            if (rcx.d s<= *(rax_3 + 0x38) && *(*(rax_3 + 0x30) + (rcx << 3)) == rax + 0x30)
                return rbx_1[sx.q(r9)]
        
        r9 += 1
        rdx_1 += 1
        r8_1 = &r8_1[1]
    while (rdx_1 s< rax_1)

return 0
