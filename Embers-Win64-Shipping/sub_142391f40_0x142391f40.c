// 函数: sub_142391f40
// 地址: 0x142391f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xe0)
int64_t result = sx.q(*(rbx + 0x30))

if (result.d s> 0)
    void* rbx_1 = rbx + 0x10
    int64_t rcx = 0
    void* r8_1 = nullptr
    void* rax = *(rbx_1 + 0x18)
    
    if (rax != 0)
        rbx_1 = rax
    
    do
        void* r9_1 = r8_1 + rbx_1
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = mulu.dp.d(0xaaaaaaab, *(r9_1 + 4))
        uint32_t rdx_1 = temp0_1 u>> 1
        
        if (arg2 u>= rdx_1 && arg2 u< rdx_1 + *(r9_1 + 8))
            return zx.q(*(r9_1 + 0x15))
        
        rcx += 1
        r8_1 += 0x18
    while (rcx s< result)

result.b = 1
return result
