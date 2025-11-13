// 函数: sub_14263a330
// 地址: 0x14263a330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_4 = sx.q(*(arg1 + 0xd8))
int32_t r8 = 0

if (rax_4.d s> 0)
    int64_t r9_1 = *(arg1 + 0xd0)
    int64_t rax = 0
    
    do
        void* rcx = *(r9_1 + (rax << 3))
        
        if (rcx != 0 && *(rcx + 0x30) == arg2)
            return *(r9_1 + (sx.q(r8) << 3))
        
        r8 += 1
        rax += 1
    while (rax s< rax_4)

return 0
