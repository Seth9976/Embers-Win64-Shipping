// 函数: sub_1425d9800
// 地址: 0x1425d9800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x20)

for (void* r15_1 = sx.q(*(arg1 + 0x28)) * 0x1f0 + i; i != r15_1; i += 0x1f0)
    int64_t* j = *(i + 0x130)
    
    for (void* rsi_3 = &j[sx.q(*(i + 0x138)) * 8]; j != rsi_3; j = &j[8])
        int64_t* rcx = *(arg1 + 0x18)
        (*(*rcx + 0x10))(rcx, j[1])
        int64_t* rdi_1 = *j
        
        if (physx::shdfnd::atomicDecrement(&rdi_1[1]) == 0 && rdi_1 != 0)
            (**rdi_1)(rdi_1, 1)
        
        int64_t* rcx_3 = j[1]
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        j[1] = 0
        *j = 0

return sub_1425d9c30(arg1 + 0x20, *(arg1 + 0x28)) __tailcall
